#!/usr/bin/env python3
import os, sys, json, re

def update_file_contents(filepath, old_name, new_name):
    if not os.path.exists(filepath): return
    with open(filepath, 'r') as f:
        content = f.read()
        
    updated = re.sub(rf'\b{old_name}\b', new_name, content)
    
    if updated != content:
        with open(filepath, 'w') as f:
            f.write(updated)
            
def rename_file_and_update(scus_dir, old_name, new_name):
    old_file = os.path.join(scus_dir, f"{old_name}.c")
    new_file = os.path.join(scus_dir, f"{new_name}.c")
    
    if not os.path.exists(old_file):
        print(f"Skipping {old_name}: file not found")
        return False
        
    update_file_contents(old_file, old_name, new_name)
    os.rename(old_file, new_file)
    return True
    
def update_callers(scus_dir, old_name, new_name):
    for fname in os.listdir(scus_dir):
        if not fname.endswith('.c'): continue
        if fname == f"{new_name}.c": continue
        filepath = os.path.join(scus_dir, fname)
        update_file_contents(filepath, old_name, new_name)

def update_symbol_addrs(symbol_file, old_name, new_name):
    with open(symbol_file, 'r') as f:
        lines = f.readlines()
        
    updated = False
    for i, line in enumerate(lines):
        if line.startswith(f"{old_name} ="):
            lines[i] = line.replace(f"{old_name} =", f"{new_name} =")
            updated = True
            
    if updated:
        with open(symbol_file, 'w') as f:
            f.writelines(lines)
            
def main():
    if len(sys.argv) < 3:
        print("Usage: python apply_scus_rename.py <scus_dir> <mapping_json>")
        sys.exit(1)
        
    scus_dir = sys.argv[1]
    mapping_file = sys.argv[2]
    symbol_file = os.path.join(os.path.dirname(os.path.dirname(scus_dir)), 'symbol_addrs.txt')
    
    with open(mapping_file, 'r') as f:
        mappings = json.load(f)
        
    for old_name, new_name in mappings.items():
        if old_name == new_name: continue
            
        print(f"Renaming {old_name} -> {new_name}")
        if rename_file_and_update(scus_dir, old_name, new_name):
            update_callers(scus_dir, old_name, new_name)
            update_symbol_addrs(symbol_file, old_name, new_name)
            
    print("Done!")

if __name__ == "__main__":
    main()
