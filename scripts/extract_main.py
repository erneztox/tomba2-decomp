import os
import requests

GHIDRA_URL = "http://127.0.0.1:8089"
OUT_DIR = "src/main"

def main():
    os.makedirs(OUT_DIR, exist_ok=True)
    
    print("Fetching function list...")
    try:
        res = requests.get(f"{GHIDRA_URL}/list_functions")
        lines = res.text.strip().split('\n')
    except Exception as e:
        print(f"Failed to fetch initial function list: {e}")
        return

    all_functions = []
    for line in lines:
        if " at " in line:
            name, _, addr = line.partition(" at ")
            all_functions.append({"name": name.strip(), "address": addr.strip()})

    print(f"\nStarting decompilation of {len(all_functions)} functions...")
    successful = 0
    failed = 0

    for i, func in enumerate(all_functions):
        addr = func['address']
        name = func['name']
        print(f"[{i+1}/{len(all_functions)}] Decompiling {name} at {addr}...", end='', flush=True)
        
        try:
            res = requests.get(f"{GHIDRA_URL}/decompile_function?address={addr}", timeout=15)
            if res.status_code == 200:
                out_path = os.path.join(OUT_DIR, f"{name}.c")
                with open(out_path, "w") as f:
                    f.write(res.text)
                print(" OK")
                successful += 1
            else:
                print(f" FAILED (Status: {res.status_code})")
                failed += 1
        except Exception as e:
            print(f" FAILED ({e})")
            failed += 1
            
    print(f"\nExtraction complete! Successfully extracted {successful} functions. Failed: {failed}")

if __name__ == '__main__':
    main()
