#!/usr/bin/env python3
"""Dump functions from all open programs EXCEPT A01 and A02 (they need re-analysis)."""
import socket, json, os

SOCK = '/run/user/1000/ghidra-mcp/ghidra-398224.sock'
OUT_BASE = 'src/overlays'

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

data = req('/list_open_programs')
programs = data.get('programs', [])

for prog in programs:
    name = prog['name'].replace('.BIN', '')
    fn_count = prog['function_count']

    if name in ('A01', 'A02'):
        print(f"{name}: SKIP (needs re-analysis in Ghidra, base 80100000)")
        continue

    if fn_count == 0:
        print(f"{name}: SKIP (no functions)")
        continue

    out_dir = os.path.join(OUT_BASE, name, 'ghidra_dumps')
    os.makedirs(out_dir, exist_ok=True)

    funcs_text = req(f'/list_functions?program={prog["name"]}&limit=2000')
    func_names = [l.split()[0] for l in funcs_text.split('\n') if l.strip() and 'FUN_' in l]

    if not func_names:
        print(f"{name}: WARN - no functions listed")
        continue

    print(f"{name}: dumping {len(func_names)} funcs...", end=' ', flush=True)
    count = 0

    for i in range(0, len(func_names), 20):
        batch = func_names[i:i+20]
        csv = ','.join(batch)
        result = req(f'/batch_decompile?functions={csv}')
        if isinstance(result, dict):
            for fn, code in result.items():
                if isinstance(code, str) and len(code) > 50:
                    path = os.path.join(out_dir, f'{fn}.c')
                    with open(path, 'w') as f:
                        f.write(f'// {fn}\n{code}')
                    count += 1

    print(f"{count} files")

print("Done!")
