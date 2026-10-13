#!/usr/bin/env python3
"""Import A00.BIN into Ghidra with base 0x80100000 and dump overlay functions."""
import socket, json, os, time, sys

SOCK = '/run/user/1000/ghidra-mcp/ghidra-398224.sock'
BIN = 'rom/extracted/BIN/A00.BIN'
OUT = 'src/overlays/A00/ghidra_dumps'

def request(method, endpoint, body=None):
    s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
    s.settimeout(120)
    s.connect(SOCK)
    if body:
        payload = json.dumps(body).encode()
        req = f'{method} {endpoint} HTTP/1.0\r\nHost: localhost\r\nContent-Type: application/json\r\nContent-Length: {len(payload)}\r\n\r\n'.encode() + payload
    else:
        req = f'{method} {endpoint} HTTP/1.0\r\nHost: localhost\r\n\r\n'.encode()
    s.sendall(req)
    resp = b''
    while True:
        try:
            chunk = s.recv(65536)
            if not chunk: break
            resp += chunk
        except: break
    s.close()
    body_text = resp.split(b'\r\n\r\n', 1)[-1].decode()
    try: return json.loads(body_text)
    except: return body_text

# Step 1: Close current program
print("Closing current program...")
request('GET', '/close_program')
time.sleep(1)

# Step 2: Create project directory if needed
print("Importing A00.BIN...")
result = request('POST', '/import_file', {
    'file_path': os.path.abspath(BIN),
    'project_folder': '/',
    'base_address': '0x80100000',
    'language': 'MIPS:LE:32:default',
})
print(f"Import result: {result}")

# Step 3: Wait for auto-analysis
print("Waiting for auto-analysis...")
for i in range(60):
    time.sleep(5)
    info = request('GET', '/get_current_program_info')
    print(f"  ...{i*5}s")
    if info and 'auto_analysis' not in str(info).lower():
        break

# Step 4: Get function list
print("Getting functions...")
funcs = request('GET', '/functions')
if isinstance(funcs, str):
    print(f"Error: {funcs[:200]}")
    sys.exit(1)

print(f"Found {len(funcs)} functions")

# Step 5: Dump each function
os.makedirs(OUT, exist_ok=True)
count = 0
for f in funcs:
    addr = f.get('address') or f.get('entry_point') or f.get('name', 'unknown')
    if isinstance(addr, str) and addr.startswith('FUN_'):
        addr_hex = addr.replace('FUN_', '')
    elif isinstance(addr, str):
        addr_hex = addr
    else:
        addr_hex = f"{addr:08x}" if isinstance(addr, int) else 'unknown'

    decomp = request('GET', f'/decompile/{addr_hex}')
    if isinstance(decomp, dict):
        code = decomp.get('decompiled_code', decomp.get('code', str(decomp)))
    else:
        code = str(decomp)

    fname = f"FUN_{addr_hex}.c"
    path = os.path.join(OUT, fname)
    with open(path, 'w') as f:
        f.write(f"// FUN_{addr_hex}\n\n{code}\n")
    count += 1

print(f"Dumped {count} functions to {OUT}")
