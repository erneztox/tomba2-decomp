#!/usr/bin/env python3
"""Dump A01 only"""
import socket, json, os, time

SOCK = '/run/user/1000/ghidra-mcp/ghidra-398224.sock'

def req(method, endpoint, body=None):
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

# Close current
info = req('GET', '/get_current_program_info')
print(f"Closing {info.get('name', '?')}...")
req('POST', '/close_program', {'program': info.get('name', '')})
time.sleep(2)

# Import A01
print("Importing A01.BIN...")
req('POST', '/import_file', {
    'file_path': '/home/ernesto/Desktop/codes/revert-tomba2/rom/extracted/BIN/A01.BIN',
    'project_folder': '/',
    'language': 'MIPS:LE:32:default',
    'compiler_spec': 'default',
})

# Wait for analysis
print("Waiting for analysis...")
for i in range(60):
    time.sleep(2)
    info = req('GET', '/get_current_program_info')
    fn = info.get('function_count', 0)
    if fn > 0:
        print(f"Done: {fn} functions")
        break
    if i % 5 == 0:
        print(f"  {i*2}s...")

# Dump
out_dir = 'src/overlays/A01/ghidra_dumps'
os.makedirs(out_dir, exist_ok=True)

funcs_text = req('GET', '/list_functions?program=A01.BIN&limit=2000')
func_names = [l.split()[0] for l in funcs_text.split('\n') if l.strip() and 'FUN_' in l]
print(f"Dumping {len(func_names)} functions...")

count = 0
for i in range(0, len(func_names), 20):
    batch = func_names[i:i+20]
    csv = ','.join(batch)
    result = req('GET', f'/batch_decompile?functions={csv}')
    if isinstance(result, dict):
        for fn, code in result.items():
            if isinstance(code, str) and len(code) > 50:
                with open(os.path.join(out_dir, f'{fn}.c'), 'w') as f:
                    f.write(f'// {fn}\n{code}')
                count += 1
    if i % 100 == 0 and i > 0:
        print(f"  {count}/{len(func_names)}...")

print(f"Dumped {count}")
