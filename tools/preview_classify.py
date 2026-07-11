#!/usr/bin/env python3
"""Preview classifier: shows categories without applying anything."""
import os, re

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GHIDRA = os.path.join(PROJECT_ROOT, "src", "main", "ghidra_dumps")
SYMBOL_FILE = os.path.join(PROJECT_ROOT, "symbol_addrs.txt")

addr_to_name = {}
with open(SYMBOL_FILE) as f:
    for line in f:
        m = re.match(r'(\w+)\s*=\s*(0x[0-9a-fA-F]+)', line)
        if m:
            a = int(m.group(2), 16)
            if 0x80010000 <= a <= 0x800FFFFF:
                addr_to_name[a] = m.group(1)
mapped = set(addr_to_name.keys())

def read_dump(addr):
    for fmt in [f"FUN_{addr:08x}.c", f"FUN_{addr:08X}.c"]:
        p = os.path.join(GHIDRA, fmt)
        if os.path.exists(p):
            with open(p) as f: return f.read()
    return None

unmapped = []
for fname in os.listdir(GHIDRA):
    if not fname.startswith('FUN_'): continue
    try: addr = int(fname.replace('FUN_','').replace('.c',''), 16)
    except: continue
    if addr in mapped: continue
    unmapped.append(addr)

categories = {}

for addr in sorted(unmapped):
    content = read_dump(addr)
    if not content: continue

    norm = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    norm = re.sub(r'\s+', ' ', norm).strip()

    called = re.findall(r'FUN_([0-9a-fA-F]{6,8})', content)
    called = [int(c,16) for c in called if int(c,16) != addr]
    known_calls = [addr_to_name[c] for c in called if c in addr_to_name]

    globs = re.findall(r'DAT_[0-9a-fA-F]{6,8}', content)
    syscalls = re.findall(r'(SUB_[0-9a-fA-F]+|LAB_[0-9a-fA-F]+)', content)
    cop = re.findall(r'setCopControlWord', content)

    body = re.sub(r'[{};]', ' ', norm).strip()
    body_lines = [l for l in body.split() if l]

    # Categorize
    cat = "OTHER"
    detail = ""

    if len(body_lines) == 0:
        cat = "NOP"
    elif 'SUB_000000b0' in content and len(called) == 0:
        cat = "BIOS_B0"
    elif 'LAB_000000a0' in content and len(called) == 0:
        cat = "BIOS_A0"
    elif 'LAB_000000c0' in content and len(called) == 0:
        cat = "BIOS_C0"
    elif cop and len(called) == 1:
        cat = "GTE_STUB"
    elif len(called) == 1 and len(globs) <= 2 and len(body_lines) <= 8:
        if known_calls:
            cat = f"WRAP_{known_calls[0]}"
        else:
            cat = f"WRAP_FUN_{called[0]:08X}"
        detail = f"globs={globs[:2]}" if globs else ""
    elif len(called) == 0 and len(globs) == 1 and 'return' in content and len(body_lines) <= 5:
        cat = "GETTER"
        detail = globs[0]
    elif len(called) == 0 and len(globs) == 1 and 'return' not in content and len(body_lines) <= 5:
        cat = "SETTER"
        detail = globs[0]
    elif 'FUN_8009a3e0' in content and len(globs) >= 1 and len(body_lines) <= 8:
        cat = "MEMCPY_INIT"
        detail = globs[0] if globs else ""
    elif len(called) == 2 and len(body_lines) <= 8:
        if known_calls:
            cat = f"SEQ_{'+'.join(known_calls)}"
        else:
            cat = "SEQ_2CALLS"

    categories.setdefault(cat, []).append((addr, detail))

# Print summary by category
for cat in sorted(categories.keys(), key=lambda c: -len(categories[c])):
    items = categories[cat]
    print(f"\n{'='*60}")
    print(f"  {cat}: {len(items)} functions")
    print(f"{'='*60}")
    for addr, detail in items[:8]:
        d = f" // {detail}" if detail else ""
        print(f"  0x{addr:08X}{d}")
    if len(items) > 8:
        print(f"  ... and {len(items)-8} more")

print(f"\n{'='*60}")
print(f"TOTAL unmapped: {len(unmapped)}")
print(f"TOTAL classified into categories: {sum(len(v) for v in categories.values())}")
