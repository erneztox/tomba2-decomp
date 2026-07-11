#!/usr/bin/env python3
"""
Massive auto-classifier: reads ALL unmapped Ghidra dumps, detects patterns,
and generates MAPPINGS entries. Review before running map_functions.py.
"""
import os, re, sys

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GHIDRA = os.path.join(PROJECT_ROOT, "src", "main", "ghidra_dumps")
SYMBOL_FILE = os.path.join(PROJECT_ROOT, "symbol_addrs.txt")

# Load symbol map
addr_to_name = {}
with open(SYMBOL_FILE) as f:
    for line in f:
        m = re.match(r'(\w+)\s*=\s*(0x[0-9a-fA-F]+)', line)
        if m:
            a = int(m.group(2), 16)
            if 0x80010000 <= a <= 0x800FFFFF:
                addr_to_name[m.group(1)] = a
                addr_to_name[a] = m.group(1)

mapped = {a for a in addr_to_name if isinstance(a, int)}

def read_dump(addr):
    for fmt in [f"FUN_{addr:08x}.c", f"FUN_{addr:08X}.c"]:
        p = os.path.join(GHIDRA, fmt)
        if os.path.exists(p):
            with open(p) as f:
                return f.read()
    return None

def get_called(content, self_addr):
    called = set()
    for m in re.finditer(r'FUN_([0-9a-fA-F]{6,8})', content):
        try:
            a = int(m.group(1), 16)
            if a != self_addr:
                called.add(a)
        except: pass
    return called

def get_globals(content):
    return set(re.findall(r'DAT_[0-9a-fA-F]{6,8}', content))

# Collect all unmapped
unmapped = []
for fname in os.listdir(GHIDRA):
    if not fname.startswith('FUN_'): continue
    addr_str = fname.replace('FUN_', '').replace('.c', '')
    try: addr = int(addr_str, 16)
    except: continue
    if addr in mapped: continue
    unmapped.append(addr)

print(f"Unmapped: {len(unmapped)}")

# Map known function address back to name
known = {a: n for a, n in addr_to_name.items() if isinstance(a, int)}

MAPPINGS = []

for addr in sorted(unmapped):
    content = read_dump(addr)
    if not content: continue

    called = get_called(content, addr)
    resolved = {a: known[a] for a in called if a in known}
    globs = get_globals(content)
    lines = len([l for l in content.split('\n') if l.strip() and not l.strip().startswith('/*')])

    # Normalize
    norm = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    norm = re.sub(r'\s+', ' ', norm).strip()

    name = None
    comment = ""

    # --- Pattern detection ---

    # 1. Empty / NOP
    if norm in ['{ return; }', '{}', '{return;}'] or lines <= 1:
        name = f"Func_Nop_{addr:08X}"
        comment = "Empty stub - no operation"

    # 2. BIOS syscall stubs
    elif 'SUB_000000b0' in content and len(called) == 0:
        name = f"BIOS_Syscall_B0_{addr:08X}"
        comment = "BIOS syscall 0xB0 stub"
    elif 'LAB_000000a0' in content and len(called) == 0:
        name = f"BIOS_Syscall_A0_{addr:08X}"
        comment = "BIOS syscall 0xA0 stub"
    elif 'LAB_000000c0' in content and len(called) == 0:
        name = f"BIOS_Syscall_C0_{addr:08X}"
        comment = "BIOS syscall 0xC0 stub"

    # 3. GTE coprocessor stubs
    elif 'setCopControlWord' in content and len(resolved) == 0:
        m = re.search(r'setCopControlWord\s*\(\s*2\s*,\s*(0x[0-9a-fA-F]+)', content)
        reg = m.group(1) if m else '?'
        name = f"GTE_Stub_{reg}_{addr:08X}"
        comment = f"GTE coprocessor register {reg} write stub"

    # 4. Single known call -> wrapper
    elif len(resolved) == 1:
        callee = list(resolved.values())[0]
        # Verify it's really just a wrapper (no extra logic)
        call_count = len(re.findall(r'\b' + re.escape(list(resolved.keys())[0].to_bytes(4,'big').hex()) + r'\b', content.replace('FUN_','').lower()))
        if lines <= 15:
            name = f"{callee}_W_{addr:08X}"
            comment = f"Wrapper: calls {callee}"

    # 5. Single global return -> getter
    elif len(resolved) == 0 and len(globs) == 1 and 'return' in content and lines <= 12:
        g = list(globs)[0]
        name = f"Get_{g}_{addr:08X}"
        comment = f"Getter: returns {g}"

    # 6. Single global set -> setter
    elif len(resolved) == 0 and len(globs) == 1 and 'return' not in content and lines <= 12:
        g = list(globs)[0]
        name = f"Set_{g}_{addr:08X}"
        comment = f"Setter: writes to {g}"

    # 7. Mem_Copy (memcpy) call -> struct init
    elif any('Mem_Copy' in resolved.get(a, '') for a in resolved) or 'FUN_8009a3e0' in content:
        if len(globs) >= 1 and lines <= 15:
            name = f"Mem_InitStruct_{addr:08X}"
            comment = "Struct initializer via Mem_Copy"

    # 8. Multiple known calls -> sequence
    elif len(resolved) >= 2 and lines <= 20:
        names = list(resolved.values())[:3]
        name = f"Seq_{'_'.join(names)}_{addr:08X}"
        comment = f"Sequence: calls {', '.join(names)}"

    if name:
        MAPPINGS.append((addr, name, comment))

print(f"Auto-classified: {len(MAPPINGS)}")
print(f"Remaining manual: {len(unmapped) - len(MAPPINGS)}")
print()

# Output as Python code ready to paste
print("# === AUTO-GENERATED MAPPINGS ===")
print("# Copy into MAPPINGS dict in map_functions.py")
print()
for addr, name, comment in sorted(MAPPINGS, key=lambda x: x[0]):
    comment_escaped = comment.replace('"', '\\"')
    print(f'    0x{addr:08X}: ("{name}", "{comment_escaped}"),')
