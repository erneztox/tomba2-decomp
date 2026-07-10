#!/usr/bin/env python3
"""
Batch import and dump all Tomba 2 overlays via Ghidra MCP bridge.

Usage:
  python3 tools/batch_dump_overlays.py

Requires: Ghidra running with MCP bridge at /run/user/1000/ghidra-mcp/
"""

import socket
import json
import os
import time
import sys

SOCK = '/run/user/1000/ghidra-mcp/ghidra-53675.sock'
BIN_DIR = 'rom/extracted/BIN'
OUT_BASE = 'src/overlays'
PROJECT_DIR = '/'  # Ghidra project root folder


def request(method, endpoint, body=None):
    """Send HTTP request via Unix socket."""
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
        chunk = s.recv(65536)
        if not chunk:
            break
        resp += chunk
    s.close()

    body_text = resp.split(b'\r\n\r\n', 1)[-1].decode()
    try:
        return json.loads(body_text)
    except:
        return body_text


def get_active_program():
    """Get name of currently open program."""
    info = request('GET', '/get_current_program_info')
    if isinstance(info, dict) and 'name' in info:
        return info['name']
    return None


def close_program(name):
    """Close a program in Ghidra."""
    if name:
        request('POST', '/close_program', {'program': name})


# Get list of BIN files
bin_files = sorted([f for f in os.listdir(BIN_DIR) if f.endswith('.BIN')])
print(f"Found {len(bin_files)} overlay files: {', '.join(bin_files)}")
print()

for bin_file in bin_files:
    name = bin_file[:-4]  # strip .BIN
    filepath = os.path.abspath(os.path.join(BIN_DIR, bin_file))
    out_dir = os.path.join(OUT_BASE, name, 'ghidra_dumps')

    print(f"\n{'='*60}")
    print(f"  {name} ({bin_file})")
    print(f"{'='*60}")

    # Step 1: Close current program if any
    current = get_active_program()
    if current:
        print(f"  Closing {current}...")
        close_program(current)
        time.sleep(2)

    # Step 2: Import
    print(f"  Importing {filepath}...")
    result = request('POST', '/import_file', {
        'file_path': filepath,
        'project_folder': PROJECT_DIR,
        'language': 'MIPS:LE:32:default',
        'compiler_spec': 'default',
    })

    if isinstance(result, dict) and 'error' in result:
        print(f"  ERROR: {result['error']}")
        continue

    # Wait for analysis
    print(f"  Waiting for auto-analysis...")
    for attempt in range(60):  # up to 2 minutes
        time.sleep(2)
        info = request('GET', '/get_current_program_info')
        if isinstance(info, dict):
            fn_count = info.get('function_count', 0)
            if fn_count > 0:
                print(f"  Analysis done: {fn_count} functions found")
                break
        if attempt % 5 == 0:
            print(f"    still waiting... ({attempt*2}s)")

    # Step 3: Set image base to 0x80100000
    # (Skipping for now - partial analysis is OK)

    # Step 4: Dump functions
    funcs_text = request('GET', f'/list_functions?program={name}&limit=2000')
    if isinstance(funcs_text, dict) and 'error' in funcs_text:
        print(f"  ERROR listing functions: {funcs_text}")
        continue

    if isinstance(funcs_text, str):
        funcs_text = funcs_text.strip()
    else:
        funcs_text = str(funcs_text)

    func_names = [l.split()[0] for l in funcs_text.split('\n') if l.strip() and 'FUN_' in l]
    print(f"  Dumping {len(func_names)} functions...")

    os.makedirs(out_dir, exist_ok=True)
    count = 0

    for i in range(0, len(func_names), 20):
        batch = func_names[i:i+20]
        csv = ','.join(batch)
        result = request('GET', f'/batch_decompile?functions={csv}')

        if isinstance(result, dict):
            for fn, code in result.items():
                if isinstance(code, str) and len(code) > 50:
                    path = os.path.join(out_dir, f'{fn}.c')
                    with open(path, 'w') as f:
                        f.write(f'// {fn}\n{code}')
                    count += 1

        if i % 200 == 0 and i > 0:
            print(f"    {count}/{len(func_names)}...")

    print(f"  Done: {count} functions dumped to {out_dir}")

print(f"\n{'='*60}")
print("All overlays processed!")
