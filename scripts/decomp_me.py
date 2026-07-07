import sys
import json
import urllib.request
import os

PROJECT_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
DECOMP_ME_API = "https://decomp.me/api/scratch"

# PS1 PsyQ Compiler ID on decomp.me
COMPILER = "psyq4.0" # Example compiler, may need adjustment
PLATFORM = "ps1"

def create_scratch(func_name, asm_code, c_code=""):
    payload = {
        "compiler": COMPILER,
        "platform": PLATFORM,
        "compiler_flags": "-O2 -G0",
        "diff_label": func_name,
        "source_code": c_code,
        "target_asm": asm_code,
        "context": '#include "common.h"\n', # Read from include/ctx.c ideally
        "project": "tomba2"
    }

    data = json.dumps(payload).encode('utf-8')
    req = urllib.request.Request(DECOMP_ME_API, data=data, headers={'Content-Type': 'application/json'})
    
    try:
        with urllib.request.urlopen(req) as response:
            result = json.loads(response.read().decode('utf-8'))
            print(f"Scratch created successfully!")
            print(f"URL: https://decomp.me/scratch/{result['slug']}")
            print(f"Claim Token: {result['claim_token']}")
    except Exception as e:
        print(f"Error creating scratch: {e}")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python decomp_me.py <path_to_asm_file>")
        sys.exit(1)
        
    asm_file = sys.argv[1]
    if not os.path.exists(asm_file):
        print(f"File {asm_file} not found.")
        sys.exit(1)
        
    with open(asm_file, 'r') as f:
        asm_content = f.read()
        
    func_name = os.path.basename(asm_file).replace(".s", "")
    print(f"Uploading {func_name} to decomp.me...")
    create_scratch(func_name, asm_content)
