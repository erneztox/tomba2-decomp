#!/usr/bin/env python3
import os
import sys
import json
import urllib.request
from urllib.error import HTTPError

DECOMP_ME_API = "https://decomp.me/api/scratch"
PRESET_ID = 244  # Tomba! 2 (US)

def main():
    if len(sys.argv) < 2:
        print("Usage: python3 upload_scratch.py <path_to_asm_file> [path_to_c_file]")
        sys.exit(1)

    asm_file = sys.argv[1]
    c_file = sys.argv[2] if len(sys.argv) > 2 else ""

    if not os.path.exists(asm_file):
        print(f"Error: {asm_file} not found.")
        sys.exit(1)

    with open(asm_file, "r") as f:
        target_asm = f.read()

    # decomp.me does not have our local macro.inc, so we must remove it from the uploaded asm
    target_asm = target_asm.replace('.include "macro.inc"', '')

    func_name = os.path.basename(asm_file).split('.')[0]
    
    source_code = ""
    if c_file and os.path.exists(c_file):
        with open(c_file, "r") as f:
            source_code = f.read()
    else:
        # Default starting template
        source_code = f"void {func_name}(void) {{\n    // TODO: implement\n}}\n"

    # Minimal context, usually you'd include common headers here
    context = ""
    context_file = "src/common.h"
    if os.path.exists(context_file):
        with open(context_file, "r") as f:
            context = f.read()

    payload = {
        "diff_label": func_name,
        "preset": PRESET_ID,
        "target_asm": target_asm,
        "source_code": source_code,
        "context": context
    }

    headers = {'Content-Type': 'application/json'}
    
    # Try to load user session cookie to upload scratch under their account
    cookie_file = os.path.join(os.path.dirname(__file__), "..", ".decompme_cookie")
    if os.path.exists(cookie_file):
        with open(cookie_file, "r") as f:
            cookie = f.read().strip()
            if cookie:
                headers['Cookie'] = cookie

    req = urllib.request.Request(DECOMP_ME_API, data=data, headers=headers)

    print(f"Uploading {asm_file} to decomp.me...")
    try:
        with urllib.request.urlopen(req) as response:
            res_data = json.loads(response.read().decode('utf-8'))
            slug = res_data.get('slug')
            claim_token = res_data.get('claim_token')
            
            scratch_url = f"https://decomp.me/scratch/{slug}"
            print("\nSuccess! Scratch created:")
            print(f"URL: {scratch_url}")
            print(f"Claim Token: {claim_token}")
            print("(Save the claim token if you want to claim ownership of the scratch later!)")
    except HTTPError as e:
        print(f"Failed to create scratch: {e.code} {e.reason}")
        print(e.read().decode('utf-8'))
        sys.exit(1)

if __name__ == "__main__":
    main()
