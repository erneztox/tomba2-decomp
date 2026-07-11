#!/usr/bin/env python3
"""Force correct dump of A0E with base 0x80100000"""
import socket, json, os, time

SOCK = '/run/user/1000/ghidra-mcp/ghidra-461397.sock'

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

# Step 1: Close
info = req('GET', '/get_current_program_info')
print(f"Closing {info.get('name','?')} (base={info.get('image_base','?')})")
req('POST', '/close_program', {'program': info.get('name', '')})
time.sleep(2)

# Step 2: Import
print("Importing A0E.BIN...")
req('POST', '/import_file', {
    'file_path': '/home/ernesto/Desktop/codes/revert-tomba2/rom/extracted/BIN/A0E.BIN',
    'project_folder': '/',
    'language': 'MIPS:LE:32:default',
})
time.sleep(3)

# Step 3: Set base (triggers re-analysis)
print("set_image_base 0x80100000...")
r = req('POST', '/set_image_base', {'program': 'A0E.BIN', 'address': '0x80100000'})
print(f"  {r}")

# Step 4: Wait
print("Waiting for analysis...")
for i in range(180):
    time.sleep(2)
    info = req('GET', '/get_current_program_info')
    fn = info.get('function_count', 0)
    base = info.get('image_base', '?')
    if fn > 0:
        print(f"  Done: {fn} funcs, base={base}")
        break
    if i % 15 == 0:
        print(f"  ...{i*2}s (base={base})")

# Step 5: Check names
names_text = req('GET', '/list_functions?program=A0E.BIN&limit=5')
print(f"First functions: {str(names_text)[:200]}")

# Step 6: Clean and dump
out = 'src/overlays/A0E/ghidra_dumps'
os.makedirs(out, exist_ok=True)
for f in os.listdir(out):
    os.remove(os.path.join(out, f))

funcs_text = req('GET', '/list_functions?program=A0E.BIN&limit=2000')
names = [l.split()[0] for l in str(funcs_text).split('\n') if l.strip() and l.split()[0].startswith('FUN_')]
print(f"Dumping {len(names)}...")

count = 0
for i in range(0, len(names), 20):
    batch = names[i:i+20]
    csv = ','.join(batch)
    result = req('GET', f'/batch_decompile?program=A0E.BIN&functions={csv}')
    if isinstance(result, dict):
        for fn, code in result.items():
            if isinstance(code, str) and len(code) > 50:
                with open(os.path.join(out, f'{fn}.c'), 'w') as f:
                    f.write(f'// {fn}\n{code}')
                count += 1

print(f"Dumped {count}")
