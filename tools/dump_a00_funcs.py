#!/usr/bin/env python3
"""Dump A00 overlay functions from Ghidra via Unix socket."""
import socket, json, os, time

SOCK = '/run/user/1000/ghidra-mcp/ghidra-398224.sock'
OUT = 'src/overlays/A00/ghidra_dumps'

def req(endpoint, method='GET', body=None):
    s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
    s.settimeout(60)
    s.connect(SOCK)
    payload = json.dumps(body).encode() if body else b''
    r = f'{method} {endpoint} HTTP/1.0\r\nHost: l\r\nContent-Type: application/json\r\nContent-Length: {len(payload)}\r\n\r\n'.encode() + payload
    s.sendall(r)
    resp = b''
    while True:
        try:
            c = s.recv(65536)
            if not c: break
            resp += c
        except: break
    s.close()
    txt = resp.split(b'\r\n\r\n', 1)[-1].decode()
    try: return json.loads(txt)
    except: return txt

# Get function list
funcs_text = req('/list_functions?program=A00.BIN&limit=2000')
func_names = [l.split()[0] for l in funcs_text.split('\n') if l.strip() and 'FUN_' in l]
print(f"Found {len(func_names)} functions")

os.makedirs(OUT, exist_ok=True)
count = 0

for i in range(0, len(func_names), 20):
    batch = func_names[i:i+20]
    csv = ','.join(batch)
    result = req(f'/batch_decompile?functions={csv}')

    if isinstance(result, dict):
        for fn, code in result.items():
            if isinstance(code, str) and len(code) > 50:
                path = os.path.join(OUT, f'{fn}.c')
                with open(path, 'w') as f:
                    f.write(f'// {fn}\n{code}')
                count += 1

    if i % 200 == 0 and i > 0:
        print(f"  {count}/{len(func_names)}...")

print(f"Dumped {count} functions to {OUT}")
