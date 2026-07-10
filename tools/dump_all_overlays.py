#!/usr/bin/env python3
"""
Dump all functions from all imported overlays via Ghidra MCP.
Assumes overlays are already imported and analyzed in Ghidra.

Usage: python3 tools/dump_all_overlays.py
"""
import socket, json, os, sys

SOCK = '/run/user/1000/ghidra-mcp/ghidra-53675.sock'
OUT_BASE = 'src/overlays'

def get(endpoint):
    s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
    s.settimeout(60)
    s.connect(SOCK)
    s.sendall(f'GET {endpoint} HTTP/1.0\r\nHost: localhost\r\n\r\n'.encode())
    r = b''
    while True:
        c = s.recv(65536)
        if not c: break
        r += c
    s.close()
    return r.split(b'\r\n\r\n',1)[1].decode()

def post(endpoint, body):
    s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
    s.settimeout(60)
    s.connect(SOCK)
    payload = json.dumps(body).encode()
    req = f'POST {endpoint} HTTP/1.0\r\nHost: localhost\r\nContent-Type: application/json\r\nContent-Length: {len(payload)}\r\n\r\n'.encode() + payload
    s.sendall(req)
    r = b''
    while True:
        c = s.recv(65536)
        if not c: break
        r += c
    s.close()
    return r.split(b'\r\n\r\n',1)[1].decode()

# List all BIN files from rom/extracted/BIN/
bin_dir = 'rom/extracted/BIN'
overlays = sorted([f for f in os.listdir(bin_dir) if f.endswith('.BIN')])

print(f"Found {len(overlays)} overlays")
print()

total = 0
for bin_file in overlays:
    basename = bin_file.replace('.BIN', '')
    out_dir = os.path.join(OUT_BASE, basename, 'ghidra_dumps')

    # Skip if already dumped
    if os.path.exists(out_dir) and len(os.listdir(out_dir)) > 10:
        print(f"  {basename}: already dumped, skipping")
        continue

    os.makedirs(out_dir, exist_ok=True)
    print(f"  {basename}...", end=' ', flush=True)

    # Open program
    filepath = os.path.abspath(os.path.join(bin_dir, bin_file))
    post('/open_program', {'path': filepath})

    funcs_text = get(f'/list_functions?program={basename}&limit=2000')
    func_names = [l.split()[0] for l in funcs_text.strip().split('\n') if l.strip() and 'FUN_' in l]

    count = 0
    for i in range(0, len(func_names), 20):
        batch = func_names[i:i+20]
        csv = ','.join(batch)
        result = get(f'/batch_decompile?functions={csv}')
        try:
            data = json.loads(result)
            for fn, code in data.items():
                if isinstance(code, str) and len(code) > 50:
                    with open(os.path.join(out_dir, f'{fn}.c'), 'w') as f:
                        f.write(f'// {fn}\n{code}')
                    count += 1
        except:
            pass

    total += count
    print(f"{count} functions")

print(f"\nTotal: {total} functions")
PYEOF
