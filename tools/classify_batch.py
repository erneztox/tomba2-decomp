#!/usr/bin/env python3
"""
Batch classifier: reads ALL unmapped functions, categorizes simple ones,
and outputs MAPPINGS entries ready to paste into map_functions.py.
"""
import os
import re

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GHIDRA_DUMPS = os.path.join(PROJECT_ROOT, "src", "main", "ghidra_dumps")
SYMBOL_FILE = os.path.join(PROJECT_ROOT, "symbol_addrs.txt")

# Load symbol map
addr_to_name = {}
with open(SYMBOL_FILE) as f:
    for line in f:
        m = re.match(r'(\w+)\s*=\s*(0x[0-9a-fA-F]+)', line)
        if m:
            name = m.group(1)
            addr = int(m.group(2), 16)
            if 0x80010000 <= addr <= 0x800FFFFF:
                addr_to_name[addr] = name

mapped_addrs = set(addr_to_name.keys())

def find_dump(addr):
    for fmt in [f"FUN_{addr:08x}.c", f"FUN_{addr:08X}.c"]:
        path = os.path.join(GHIDRA_DUMPS, fmt)
        if os.path.exists(path):
            return path
    return None

# Find all unmapped
unmapped = []
for fname in os.listdir(GHIDRA_DUMPS):
    if fname.startswith("FUN_"):
        addr_str = fname.replace("FUN_", "").replace(".c", "")
        try:
            addr = int(addr_str, 16)
        except:
            continue
        if addr not in mapped_addrs:
            path = os.path.join(GHIDRA_DUMPS, fname)
            with open(path) as fh:
                content = fh.read()
            lines = content.split('\n')
            unmapped.append((addr, len(lines), content))

def get_called_addrs(content):
    """Get addresses of called functions."""
    addrs = set()
    for m in re.finditer(r'FUN_([0-9a-fA-F]{6,8})', content):
        try:
            a = int(m.group(1), 16)
            if a != 0:  # ignore self-references (same as current function)
                addrs.add(a)
        except:
            pass
    return addrs

def get_globals(content):
    """Get global variable names used."""
    globs = set()
    for m in re.finditer(r'(DAT_[0-9a-fA-F]{6,8})', content):
        globs.add(m.group(1))
    return globs

def get_syscalls(content):
    """Detect BIOS/syscall references."""
    patterns = [
        r'(SUB_[0-9a-fA-F]{6,8})',
        r'(LAB_[0-9a-fA-F]{6,8})',
        r'\b(setCop[A-Z]\w+)',
        r'\b(SetCop[A-Z]\w+)',
    ]
    found = set()
    for pat in patterns:
        for m in re.finditer(pat, content):
            found.add(m.group(1))
    return found

def classify(addr, content):
    """Try to classify a function."""
    calls = get_called_addrs(content)
    globs = get_globals(content)
    syscalls = get_syscalls(content)

    # Resolve calls to names
    resolved = {}
    for ca in calls:
        if ca in addr_to_name:
            resolved[ca] = addr_to_name[ca]

    # Filter out self-references
    resolved = {k: v for k, v in resolved.items() if k != addr}

    if not resolved and not globs and not syscalls:
        return None, "empty function?"

    # Pattern 1: Single resolved call, no branches -> Wrapper
    if len(resolved) == 1 and len(syscalls) == 0:
        callee_name = list(resolved.values())[0]
        # Check if it's just a call + return
        lines = [l.strip() for l in content.split('\n') if l.strip() and not l.strip().startswith('/*')]
        clean_lines = [l for l in lines if not l.startswith('{') and not l.startswith('}') and l != 'return;']
        if len(clean_lines) <= 2:
            # Single call wrapper
            return f"{callee_name}_W", f"Wrapper for {callee_name}"

    # Pattern 2: BIOS syscall stubs
    if len(syscalls) > 0 and len(resolved) == 0:
        if 'setCopControlWord' in syscalls or 'SetCopControlWord' in syscalls:
            return f"GTE_Stub_{addr:04X}", "GTE coprocessor register write stub"
        for s in syscalls:
            if s.startswith('SUB_'):
                n = s.replace('SUB_', '').replace('000000', '0x')
                return f"BIOS_Syscall_{n}", f"BIOS syscall stub ({s})"
            if s.startswith('LAB_'):
                n = s.replace('LAB_', '').replace('000000', '0x')
                return f"BIOS_Stub_{n}", f"BIOS stub ({s})"

    # Pattern 3: Single global read -> Getter
    if len(globs) == 1 and len(resolved) == 0 and len(syscalls) == 0:
        g = list(globs)[0]
        vname = g.replace('DAT_', 'G_')
        return f"Game_Get_{vname}", f"Getter: returns {g}"

    # Pattern 4: Single global read + return != 1 -> Flag check
    if '!= 1' in content or '== 1' in content or '!= 0' in content or '== 0' in content:
        if len(globs) == 1 and len(resolved) == 0:
            g = list(globs)[0]
            vname = g.replace('DAT_', 'G_')
            return f"Game_CheckFlag_{vname}", f"Flag check on {g}"

    # Pattern 5: Calls Mem_Copy (0x8009a3e0) with struct init pattern
    if any('FUN_8009a3e0' in content or (a in resolved and 'Mem_Copy' in resolved[a]) for a in resolved):
        return f"UI_InitStruct_{addr:08X}", "Initializes a struct via Mem_Copy"

    return None, ""

# Classify all unmapped
mappings = []
unknown = []

for addr, size, content in sorted(unmapped, key=lambda x: x[1]):
    name, comment = classify(addr, content)
    if name:
        mappings.append((addr, name, comment))
    else:
        unknown.append((addr, size))

print(f"=== AUTO-CLASSIFIED: {len(mappings)} functions ===")
print()
for addr, name, comment in mappings:
    print(f"    0x{addr:08X}: (\"{name}\", \"{comment}\"),")

print()
print(f"=== UNCLASSIFIED: {len(unknown)} functions ===")
# Print first 50 unknown by size
for addr, size in unknown[:50]:
    print(f"    0x{addr:08X} ({size:4} lines)")
