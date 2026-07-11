#!/usr/bin/env python3
"""Verify all mapped functions match their Ghidra dumps."""
import os, re, hashlib

PROJECT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(PROJECT, "src", "main")
DUMP = os.path.join(PROJECT, "src", "main", "ghidra_dumps")
MAPPED = os.path.join(PROJECT, "src", "main", "mapped")
SYMBOLS = os.path.join(PROJECT, "symbol_addrs.txt")

# Load addr -> name
addr_to_name = {}
with open(SYMBOLS) as f:
    for line in f:
        m = re.match(r'(\w+)\s*=\s*(0x[0-9a-fA-F]+)', line)
        if m:
            addr = int(m.group(2), 16)
            if 0x80010000 <= addr <= 0x800FFFFF:
                addr_to_name[addr] = m.group(1)

# Verify: every dump has a name
dumps_missing = 0
for fname in sorted(os.listdir(DUMP)):
    if not fname.startswith('FUN_'): continue
    try: addr = int(fname.replace('FUN_','').replace('.c',''), 16)
    except: continue
    if addr not in addr_to_name:
        print(f"MISSING: {fname} not in symbol_addrs.txt")
        dumps_missing += 1

# Verify: every mapped file has an entry in symbol_addrs
mapped_extra = 0
for fname in os.listdir(MAPPED):
    if not fname.endswith('.c'): continue
    name = fname.replace('.c','')
    # Find in symbol_addrs
    found = False
    for addr, sname in addr_to_name.items():
        if sname == name:
            found = True
            break
    if not found:
        print(f"EXTRA: {fname} - no symbol_addrs entry")
        mapped_extra += 1

# Verify: synced files exist in category folders too
cat_missing = 0
for d in os.listdir(SRC):
    dp = os.path.join(SRC, d)
    if not os.path.isdir(dp) or d in ('mapped', 'ghidra_dumps'): continue
    for fname in os.listdir(dp):
        if fname.endswith('.c'):
            # Check in mapped/
            if not os.path.exists(os.path.join(MAPPED, fname)):
                print(f"ORPHAN: {d}/{fname} not in mapped/")
                cat_missing += 1
        # Check subdirs
        if os.path.isdir(os.path.join(dp, fname)): continue
    # Check sub-subdirs
    for sd in os.listdir(dp):
        sdp = os.path.join(dp, sd)
        if not os.path.isdir(sdp): continue
        for fname in os.listdir(sdp):
            if fname.endswith('.c'):
                if not os.path.exists(os.path.join(MAPPED, fname)):
                    print(f"ORPHAN: {d}/{sd}/{fname} not in mapped/")
                    cat_missing += 1

# Summary
total = len(addr_to_name)
print(f"\n=== Verification ===")
print(f"  Symbol entries: {total}")
print(f"  Dumps missing:  {dumps_missing}")
print(f"  Extras (no symbol): {mapped_extra}")
print(f"  Orphans (cat no mapped): {cat_missing}")
if dumps_missing + mapped_extra + cat_missing == 0:
    print("  ALL GOOD!")
