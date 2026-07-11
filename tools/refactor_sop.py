#!/usr/bin/env python3
"""Apply REFACTOR.md steps to SOP overlay files: types, entity fields, FUN_ renames, func_0x renames."""
import os, re

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SOP_DIR = os.path.join(PROJECT_ROOT, "src", "overlays", "SOP")

# Step 1: Type replacement (Ghidra -> PsyQ)
TYPES = {
    'undefined1': 'u8', 'undefined2': 's16', 'undefined4': 's32',
    'undefined': 'void', 'ushort': 'u16', 'byte': 'u8', 'bool': 's32',
}

# Step 2: Entity field names from tomba.h
# Parse Entity struct fields
tomba_h = os.path.join(PROJECT_ROOT, "include", "tomba.h")
entity_fields = []
if os.path.exists(tomba_h):
    with open(tomba_h) as f:
        h_content = f.read()
    start = h_content.find('typedef struct Entity {')
    end = h_content.find('} Entity;', start)
    body = h_content[start:end]
    for line in body.split('\n'):
        m = re.search(r'/\*\s*(0x[0-9a-fA-F]+)\s*\*/', line)
        if not m: continue
        off = int(m.group(1), 16)
        nm = re.search(r'(\w+)\s*;', line)
        nm2 = re.search(r'(\w+)\s*\[', line)
        name = nm.group(1) if nm else (nm2.group(1) if nm2 else None)
        if not name or name.startswith('_pad'): continue
        if 's32' in line or 'void*' in line or 'Entity*' in line or 'u8*' in line: t = 'w'
        elif 's16' in line or 'u16' in line: t = 'h'
        elif 'u8' in line or 's8' in line: t = 'b'
        else: continue
        entity_fields.append((off, name, t))

# Step 3: Load symbol_addrs for FUN_ -> descriptive name
sym_addr_to_name = {}
with open(os.path.join(PROJECT_ROOT, "symbol_addrs.txt")) as f:
    for line in f:
        m = re.match(r'(\w+)\s*=\s*(0x[0-9a-fA-F]+)', line)
        if m:
            sym_addr_to_name[int(m.group(2), 16)] = m.group(1)

files_modified = 0
for root, dirs, files in os.walk(SOP_DIR):
    if 'ghidra_dumps' in root or 'mapped' in root: continue
    for fname in files:
        if not fname.endswith('.c'): continue
        path = os.path.join(root, fname)
        with open(path) as f: content = f.read()
        orig = content

        # Step 1: Types
        for old, new in sorted(TYPES.items(), key=lambda x: -len(x[0])):
            content = re.sub(r'\b' + re.escape(old) + r'\b', new, content)

        # Step 2: Entity field offsets -> field names
        for off, name, t in sorted(entity_fields, key=lambda x: -x[0]):
            for hs in [f'0x{off:x}', f'0x{off:X}']:
                if t == 'h':
                    content = re.sub(
                        rf'\(\s*(?:s16|u16|short|ushort|undefined2)\s*\*\s*\)\s*\(\s*(\w+(?:_\w+)?)\s*\+\s*{hs}\s*\)',
                        rf'\1->{name}', content)
                elif t == 'w':
                    content = re.sub(
                        rf'\(\s*(?:s32|u32|int|uint|undefined4|code)\s*\*?\s*\*\s*\)\s*\(\s*(\w+(?:_\w+)?)\s*\+\s*{hs}\s*\)',
                        rf'\1->{name}', content)
                elif t == 'b':
                    content = re.sub(
                        rf'\(\s*(?:u8|s8|byte|char|undefined1)\s*\*\s*\)\s*\(\s*(\w+(?:_\w+)?)\s*\+\s*{hs}\s*\)',
                        rf'\1->{name}', content)
                    content = re.sub(rf'(\w+(?:_\w+)?)\s*\[\s*{hs}\s*\]', rf'\1->{name}', content)
            if off < 16 and t == 'b':
                content = re.sub(
                    rf'\(\s*(?:u8|s8|byte|char|undefined1)\s*\*\s*\)\s*\(\s*(\w+(?:_\w+)?)\s*\+\s*{off}\s*\)',
                    rf'\1->{name}', content)
                content = re.sub(rf'(\w+(?:_\w+)?)\s*\[\s*{off}\s*\]', rf'\1->{name}', content)

        # Clean redundant dereferences
        content = re.sub(r'\*\s*(\w+->\w+)', r'\1', content)

        # Step 3: FUN_XXXXXX -> descriptive name
        for m in re.finditer(r'FUN_([0-9a-fA-F]{6,8})', content):
            addr = int(m.group(1), 16)
            if addr in sym_addr_to_name:
                content = content.replace(m.group(0), sym_addr_to_name[addr])

        # Step 4: func_0x000XXXXX -> descriptive name or Overlay_XXX
        # SOP uses relative addresses: func_0x000XXXXX = main addr 0x800XXXXX
        for m in re.finditer(r'func_0x([0-9a-fA-F]+)', content):
            addr = int(m.group(1), 16)
            # Try exact match first
            if addr in sym_addr_to_name:
                content = content.replace(m.group(0), sym_addr_to_name[addr])
            elif (addr + 0x80000000) in sym_addr_to_name:
                content = content.replace(m.group(0), sym_addr_to_name[addr + 0x80000000])
            elif addr >= 0x80100000:
                content = content.replace(m.group(0), f'Overlay_{addr:08X}')

        if content != orig:
            with open(path, 'w') as f: f.write(content)
            files_modified += 1

# Step 5: Add #include "tomba.h" to files using entity fields
for root, dirs, files in os.walk(SOP_DIR):
    if 'ghidra_dumps' in root or 'mapped' in root: continue
    for fname in files:
        if not fname.endswith('.c'): continue
        path = os.path.join(root, fname)
        with open(path) as f: content = f.read()
        if '#include' in content and 'tomba.h' in content: continue
        if '->' not in content: continue
        lines = content.split('\n')
        insert_at = 0
        for i, line in enumerate(lines):
            if line.strip() == '*/':
                insert_at = i + 1
            elif insert_at > 0 and line.strip() and not line.strip().startswith('//'):
                break
        if insert_at > 0:
            lines.insert(insert_at, '#include "tomba.h"')
            with open(path, 'w') as f: f.write('\n'.join(lines))
            files_modified += 1

# Step 6: Rename known global variables
GLOBALS = {
    '_DAT_800bf544': 'g_OrderingTable',
    '_DAT_800ed8c8': 'g_OrderingTableEnd',
    'DAT_800bf9b4': 'g_GameSubState',
    'DAT_800bf80f': 'g_SOP_Complete',
    'DAT_1f800234': 'g_SOP_LoadingFlag',
    '_DAT_1f800138': 'g_SOP_Entity',
}
for root, dirs, files in os.walk(SOP_DIR):
    if 'ghidra_dumps' in root or 'mapped' in root: continue
    for fname in files:
        if not fname.endswith('.c'): continue
        path = os.path.join(root, fname)
        with open(path) as f: content = f.read()
        orig = content
        for old, new in sorted(GLOBALS.items(), key=lambda x: -len(x[0])):
            content = content.replace(old, new)
        if content != orig:
            with open(path, 'w') as f: f.write(content)
            files_modified += 1

print(f"Modified {files_modified} files in {SOP_DIR}")
