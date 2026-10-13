#!/usr/bin/env python3
import os, sys, re

def analyze_file(filepath):
    with open(filepath, 'r') as f:
        content = f.read()

    lines = content.split('\n')
    size = len(lines)
    strings = set(re.findall(r'"([^"]*)"', content))
    calls = set(re.findall(r'(SCUS_[a-zA-Z0-9_]+)\(', content))
    calls.update(re.findall(r'(FUN_[0-9a-fA-F]+)\(', content))
    hw_regs = set(re.findall(r'(0x1f80[0-9a-fA-F]+)', content.lower()))
    
    return {
        'name': os.path.basename(filepath),
        'size': size,
        'strings': list(strings)[:5], # limit to 5
        'calls': list(calls)[:5],
        'hw_regs': list(hw_regs)[:5],
        'signature': lines[3] if len(lines) > 3 else ''
    }

def main():
    if len(sys.argv) < 3:
        print("Usage: python scus_reviewer.py <directory> <start_index> <count>")
        sys.exit(1)
        
    scus_dir = sys.argv[1]
    start = int(sys.argv[2])
    count = int(sys.argv[3]) if len(sys.argv) > 3 else 30
    
    files = sorted([f for f in os.listdir(scus_dir) if f.startswith('FUN_') and f.endswith('.c')])
    batch = files[start:start+count]
    
    for f in batch:
        info = analyze_file(os.path.join(scus_dir, f))
        print(f"--- {info['name']} ---")
        print(f"Signature: {info['signature']}")
        print(f"Size: {info['size']} lines")
        if info['strings']: print(f"Strings: {', '.join(info['strings'])}")
        if info['calls']: print(f"Calls: {', '.join(info['calls'])}")
        if info['hw_regs']: print(f"HW Regs: {', '.join(info['hw_regs'])}")
        print()

if __name__ == "__main__":
    main()
