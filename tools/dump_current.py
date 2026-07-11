#!/usr/bin/env python3
"""Dump whatever overlay is currently active in Ghidra."""
import socket, json, os

SOCK = '/run/user/1000/ghidra-mcp/ghidra-398224.sock'

def req_get(endpoint):
    s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
    s.settimeout(60)
    s.connect(SOCK)
    s.sendall(f'GET {endpoint} HTTP/1.0\r\nHost: l\r\n\r\n'.encode())
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

info = req_get('/get_current_program_info')
prog = info['name']
name = prog.replace('.BIN', '')
fn_count = info['function_count']
print(f"Active: {prog} ({fn_count} funcs, base={info['image_base']})")

out = f'src/overlays/{name}/ghidra_dumps'
os.makedirs(out, exist_ok=True)

funcs = req_get(f'/list_functions?program={prog}&limit=2000')
names = [l.split()[0] for l in str(funcs).split('\n') if l.strip() and l.split()[0].startswith('FUN_')]
print(f"Dumping {len(names)}...")

count = 0
for i in range(0, len(names), 20):
    batch = names[i:i+20]
    csv = ','.join(batch)
    result = req_get(f'/batch_decompile?program={prog}&functions={csv}')
    if isinstance(result, dict):
        for fn, code in result.items():
            if isinstance(code, str) and len(code) > 50:
                with open(os.path.join(out, f'{fn}.c'), 'w') as f:
                    f.write(f'// {fn}\n{code}')
                count += 1
    if i % 100 == 0 and i > 0:
        print(f"  {count}/{len(names)}...")
print(f"Done: {count}")
