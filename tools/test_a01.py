#!/usr/bin/env python3
"""Dump A01 only - quick test"""
import socket, json, os

SOCK = '/run/user/1000/ghidra-mcp/ghidra-398224.sock'

def req(endpoint):
    s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
    s.settimeout(60)
    s.connect(SOCK)
    r = f'GET {endpoint} HTTP/1.0\r\nHost: l\r\n\r\n'.encode()
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

info = req('/get_current_program_info')
print(f"Active: {info['name']} ({info['function_count']} funcs, base={info['image_base']})")

if info['function_count'] == 0:
    print("No functions!")
    exit()

out_dir = 'src/overlays/A01/ghidra_dumps'
os.makedirs(out_dir, exist_ok=True)

funcs_text = req(f'/list_functions?program={info["name"]}&limit=2000')
func_names = [l.split()[0] for l in funcs_text.split('\n') if l.strip() and 'FUN_' in l]
print(f"Listed {len(func_names)}")

# Test first 5
batch = func_names[:5]
csv = ','.join(batch)
print(f"Testing: {csv}")
result = req(f'/batch_decompile?functions={csv}')
print(f"Result type: {type(result).__name__}")
if isinstance(result, dict):
    for k, v in list(result.items())[:3]:
        print(f"  {k}: {str(v)[:80]}")
elif isinstance(result, str):
    print(result[:200])
