#!/usr/bin/env python3
"""
Read ALL small unmapped functions (≤30 lines) and print them with analysis
for fast manual classification.
"""
import os, re

GHIDRA = "src/main/ghidra_dumps"
SYMBOL_FILE = "symbol_addrs.txt"

addr_to_name = {}
with open(SYMBOL_FILE) as f:
    for line in f:
        m = re.match(r'(\w+)\s*=\s*(0x[0-9a-fA-F]+)', line)
        if m:
            a = int(m.group(2), 16)
            if 0x80010000 <= a <= 0x800FFFFF:
                addr_to_name[a] = m.group(1)
mapped = set(addr_to_name.keys())

def resolve_calls(content, self_addr):
    calls = set()
    for m in re.finditer(r'FUN_([0-9a-fA-F]{6,8})', content):
        try:
            ca = int(m.group(1), 16)
            if ca != self_addr and ca in addr_to_name:
                calls.add(addr_to_name[ca])
        except: pass
    return calls

def extract_sigs(content):
    """Extract key signature patterns."""
    pats = []
    if 'setCopControlWord' in content: pats.append('GTE_COP2')
    if 'SUB_000000' in content:
        m = re.search(r'SUB_([0-9a-fA-F]+)', content)
        if m: pats.append(f'BIOS_{m.group(1)}')
    if 'LAB_000000' in content:
        m = re.search(r'LAB_([0-9a-fA-F]+)', content)
        if m: pats.append(f'STUB_{m.group(1)}')
    if 'DAT_1f80' in content: pats.append('SCRATCHPAD')
    if 'DAT_800bf8' in content: pats.append('GAME_STATE')
    if 'DAT_800a5' in content: pats.append('GPU_QUEUE')
    if 'DAT_800be' in content: pats.append('AUDIO_CD')
    if 'DAT_800abe' in content: pats.append('MDEC_BUF')
    if 'DAT_800ac' in content: pats.append('SYSTEM_VAR')
    if 'PTR_DAT' in content: pats.append('FPTR_TABLE')
    if 'trap(' in content: pats.append('TRAP')
    return pats

results = []
for fname in sorted(os.listdir(GHIDRA)):
    if not fname.startswith('FUN_'):
        continue
    addr_str = fname.replace('FUN_', '').replace('.c', '')
    try: addr = int(addr_str, 16)
    except: continue
    if addr in mapped: continue

    path = os.path.join(GHIDRA, fname)
    with open(path) as fh: content = fh.read()
    lines = [l.strip() for l in content.split('\n') if l.strip() and not l.strip().startswith('/*')]
    size = len(lines)

    if size > 30: continue

    calls = resolve_calls(content, addr)
    sigs = extract_sigs(content)

    results.append((addr, size, calls, sigs, content[:500]))

# Group by call pattern
groups = {}
for addr, size, calls, sigs, content in results:
    key = '+'.join(sorted(calls)) if calls else 'NONE'
    if not key: key = 'EMPTY'
    groups.setdefault(key, []).append((addr, size, sigs, content))

for key, items in sorted(groups.items(), key=lambda x: -len(x[1])):
    print(f"\n=== GROUP: {key} ({len(items)} functions) ===")
    for addr, size, sigs, content in items[:5]:
        print(f"  0x{addr:08X} ({size:2}L) sigs={sigs}")
    if len(items) > 5:
        print(f"  ... and {len(items)-5} more")
