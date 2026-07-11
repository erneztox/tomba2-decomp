#!/usr/bin/env python3
"""Preview unmapped functions - excludes both symbol_addrs AND existing mapped files."""
import os, re, sys

GHIDRA = 'src/main/ghidra_dumps'
MAPPED_DIR = 'src/main/mapped'
SYMBOL_FILE = 'symbol_addrs.txt'

# Check symbol_addrs
mapped = set()
with open(SYMBOL_FILE) as f:
    for line in f:
        m = re.match(r'\w+\s*=\s*(0x[0-9a-fA-F]+)', line)
        if m:
            a = int(m.group(1), 16)
            if 0x80010000 <= a <= 0x800FFFFF:
                mapped.add(a)

# Also check MAPPINGS dict in map_functions.py
with open('tools/map_functions.py') as f:
    content = f.read()
mappings_addrs = set(int(a, 16) for a in re.findall(r'0x([0-9a-fA-F]{8}):', content))
# Remove addresses where output file already exists
for fname in os.listdir(MAPPED_DIR):
    if fname.endswith('.c'):
        # Can't reverse-lookup address from filename easily
        pass

unmapped = []
for fname in os.listdir(GHIDRA):
    if not fname.startswith('FUN_'): continue
    try: addr = int(fname.replace('FUN_','').replace('.c',''), 16)
    except: continue
    if addr in mapped or addr in mappings_addrs: continue
    path = os.path.join(GHIDRA, fname)
    with open(path) as f: content = f.read()
    lines = len([l for l in content.split('\n') if l.strip() and not l.strip().startswith('/*')])
    unmapped.append((addr, lines, content))

unmapped.sort(key=lambda x: x[1])
print(f'TRULY unmapped: {len(unmapped)}')
batch_size = int(sys.argv[1]) if len(sys.argv) > 1 else 40
for addr, lines, content in unmapped[:batch_size]:
    clean = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    clean = re.sub(r'\s+', ' ', clean).strip()
    body_m = re.search(r'\{.*\}', clean, re.DOTALL)
    body = body_m.group(0) if body_m else clean[-80:]
    if len(body) > 140: body = body[:137] + '...'
    print(f'0x{addr:08X} ({lines:3}L) | {body}')
