#!/usr/bin/env python3
"""
Step 2: Replace entity offset patterns with field names.
Reads include/tomba.h for struct definitions, then patches all .c files.
"""
import os, re

PROJECT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(PROJECT, "src", "main")
HEADER = os.path.join(PROJECT, "include", "tomba.h")

# Parse Entity struct from header
def parse_struct(content, struct_name):
    """Extract field name -> offset mapping from struct definition."""
    fields = {}  # offset -> (name, type)
    # Find struct body between 'typedef struct Name {' and '} Name;'
    start = content.find(f'typedef struct {struct_name} {{')
    if start == -1:
        return fields
    end = content.find(f'}} {struct_name};', start)
    if end == -1:
        return fields
    body = content[start:end]
    for line in body.split('\n'):
        line = line.strip()
        # Skip comments and empty
        if not line or line.startswith('/*') or line.startswith('//'):
            continue
        # Match field definitions: type name; // 0xOFF
        # Also handle arrays: type name[N];
        m = re.search(r'/\*\s*(0x[0-9a-fA-F]+)\s*\*/', line)
        if not m:
            continue
        offset = int(m.group(1), 16)
        # Extract name
        name_m = re.search(r'(\w+)\s*;', line)
        name_m2 = re.search(r'(\w+)\s*\[', line)
        name = name_m.group(1) if name_m else (name_m2.group(1) if name_m2 else None)
        if not name or name.startswith('_pad'):
            continue
        # Determine type
        if 's32' in line or 'void*' in line or 'u8*' in line or 'Entity*' in line or 'EntityFunc' in line:
            typ = 's32'
        elif 's16' in line or 'u16' in line:
            typ = 's16'
        elif 'u8' in line or 's8' in line:
            typ = 'u8'
        else:
            typ = '?'
        fields[offset] = (name, typ)
    return fields

with open(HEADER) as f:
    header_content = f.read()

entity_fields = parse_struct(header_content, 'Entity')
print(f"Entity fields parsed: {len(entity_fields)}")

# Replacement rules for offset patterns
# Pattern: *(type *)(VAR + OFFSET) -> VAR->field
# Pattern: VAR[OFFSET] -> VAR->field (for u8 fields)

def replace_offsets(content, fields, var_name):
    """Replace offset accesses with field names for given variable."""

    # Sort fields by offset descending to avoid partial replacements
    for offset, (field, typ) in sorted(fields.items(), key=lambda x: -x[0]):
        # Pattern 1: *(type *)(VAR + 0xOFF)
        # s16: *(short *)(VAR + 0xXX) or *(ushort *)(VAR + 0xXX) or *(undefined2 *)(VAR + 0xXX)
        # s32: *(int *)(VAR + 0xXX) or *(uint *)(VAR + 0xXX) or *(undefined4 *)(VAR + 0xXX)
        # u8:  *(byte *)(VAR + 0xXX) or *(char *)(VAR + 0xXX) or *(undefined1 *)(VAR + 0xXX)

        if typ == 's16':
            cast_pat = r'\(\s*(?:short|ushort|undefined2)\s*\*\s*\)\s*\(\s*'
        elif typ == 's32':
            cast_pat = r'\(\s*(?:int|uint|undefined4|code)\s*\*?\s*\*\s*\)\s*\(\s*'
        elif typ == 'u8':
            cast_pat = r'\(\s*(?:byte|char|undefined1)\s*\*\s*\)\s*\(\s*'
        else:
            continue

        # Build patterns for both hex and decimal offsets
        off_strs = [f'0x{offset:x}', f'0x{offset:X}']
        if offset < 16:
            off_strs.append(str(offset))  # decimal for low offsets
        for off_str in off_strs:
            pattern = cast_pat + re.escape(var_name) + r'\s*\+\s*' + off_str + r'\s*\)'
            replacement = f'{var_name}->{field}'
            content = re.sub(pattern, replacement, content)

        # Pattern 2: VAR[0xOFF] for u8 fields
        if typ == 'u8':
            for off_str in [f'0x{offset:x}', f'0x{offset:X}']:
                pattern = re.escape(var_name) + r'\s*\[\s*' + off_str + r'\s*\]'
                replacement = f'{var_name}->{field}'
                content = re.sub(pattern, replacement, content)

    return content

# Process files
processed = 0
for root, dirs, files in os.walk(SRC):
    # Skip ghidra_dumps and mapped
    if 'ghidra_dumps' in root or 'mapped' in root:
        continue
    for fname in files:
        if not fname.endswith('.c'):
            continue
        path = os.path.join(root, fname)
        with open(path) as f:
            content = f.read()

        original = content

        # Try multiple variable names for the entity
        for var in ['entity', 'param_1', 'param1']:
            if var in content:
                content = replace_offsets(content, entity_fields, var)

        # Also handle double-pointer patterns: **(short **)(VAR + off)
        for offset, (field, typ) in sorted(entity_fields.items(), key=lambda x: -x[0]):
            if typ == 's32':
                for off_str in [f'0x{offset:x}', f'0x{offset:X}']:
                    content = re.sub(
                        r'\*\*\s*\(\s*(?:int|uint|undefined4)\s*\*\s*\*\s*\)\s*\(\s*(\w+)\s*\+\s*' + off_str + r'\s*\)',
                        r'*(\1->' + field + ')', content
                    )

        if content != original:
            with open(path, 'w') as f:
                f.write(content)
            processed += 1

print(f"Files modified: {processed}")
