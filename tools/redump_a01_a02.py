#!/usr/bin/env python3
"""Import with base 0x80100000, auto-analyze, dump."""
import socket, json, os, time, sys

SOCK = '/run/user/1000/ghidra-mcp/ghidra-398224.sock'
OVERLAYS = [
    ('rom/extracted/BIN/A01.BIN', 'src/overlays/A01/ghidra_dumps'),
    ('rom/extracted/BIN/A02.BIN', 'src/overlays/A02/ghidra_dumps'),
]

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

for bin_path, out_dir in OVERLAYS:
    name = os.path.basename(bin_path).replace('.BIN', '')
    print(f"\n=== {name} ===")

    # Close current
    print("Closing...")
    request('POST', '/close_program')
    time.sleep(2)

    # Import with explicit auto_analyze
    print(f"Importing {bin_path}...")
    result = request('POST', '/import_file', {
        'file_path': os.path.abspath(bin_path),
        'project_folder': '/',
        'language': 'MIPS:LE:32:default',
        'auto_analyze': True,
    })
    print(f"  Import: {'OK' if not isinstance(result, dict) or 'error' not in result else result}")

    # Wait for auto-analysis
    print("Waiting for auto-analysis...")
    fn_count = 0
    for i in range(120):
        time.sleep(3)
        info = request('GET', '/get_current_program_info')
        fn_count = info.get('function_count', 0) if isinstance(info, dict) else 0
        if fn_count > 0:
            print(f"  Done: {fn_count} functions")
            break
        if i % 10 == 0:
            print(f"  ...{i*3}s")

    if fn_count == 0:
        print("  FAILED: no functions found")
        continue

    # Dump via batch_decompile
    os.makedirs(out_dir, exist_ok=True)
    funcs_text = request('GET', f'/list_functions?program={name}.BIN&limit=2000')
    func_names = [l.split()[0] for l in str(funcs_text).split('\n') if l.strip() and l.split()[0].startswith('FUN_')]
    print(f"  Dumping {len(func_names)} functions...")

    count = 0
    for i in range(0, len(func_names), 20):
        batch = func_names[i:i+20]
        csv = ','.join(batch)
        result = request('GET', f'/batch_decompile?functions={csv}')
        if isinstance(result, dict):
            for fn, code in result.items():
                if isinstance(code, str) and len(code) > 50:
                    with open(os.path.join(out_dir, f'{fn}.c'), 'w') as f:
                        f.write(f'// {fn}\n{code}')
                    count += 1
        if i % 100 == 0 and i > 0:
            print(f"    {count}/{len(func_names)}...")

    print(f"  Done: {count} dumped")

print("\nAll done!")
