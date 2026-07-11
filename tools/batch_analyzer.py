#!/usr/bin/env python3
import os
import re
import sys

def analyze_dump(filepath):
    if not os.path.exists(filepath):
        return f"File {filepath} not found."
    
    with open(filepath, 'r') as f:
        content = f.read()
    
    lines = content.split('\n')
    
    # Extract called functions
    calls = set(re.findall(r'([A-Za-z_][A-Za-z0-9_]*)\s*\(', content))
    # Filter out keywords
    keywords = {'if', 'while', 'for', 'switch', 'return', 'sizeof'}
    calls = calls - keywords
    
    # Extract global variables / data references
    globals_refs = set(re.findall(r'(DAT_[0-9a-fA-F]+|_DAT_[0-9a-fA-F]+|PTR_[A-Za-z0-9_]+|s_[A-Za-z0-9_]+)', content))
    
    # Simple complexity metric
    complexity = len(lines)
    
    summary = []
    summary.append(f"### File: {os.path.basename(filepath)} ({complexity} lines)")
    
    unmapped_calls = [c for c in calls if c.startswith('FUN_') or c.startswith('func_')]
    mapped_calls = [c for c in calls if not (c.startswith('FUN_') or c.startswith('func_') or c.startswith('LAB_') or c == 'void')]
    
    if unmapped_calls:
        summary.append(f"- **Unmapped Calls**: {', '.join(sorted(unmapped_calls))}")
    if mapped_calls:
        summary.append(f"- **Mapped Calls**: {', '.join(sorted(mapped_calls))}")
    if globals_refs:
        summary.append(f"- **Globals/Data Refs**: {', '.join(sorted(globals_refs))}")
        
    # Extract some logic lines as preview (first 5 lines inside the function block)
    in_func = False
    preview = []
    for line in lines:
        stripped = line.strip()
        if stripped == '{' and not in_func:
            in_func = True
            continue
        if in_func and stripped and not stripped.startswith('/*') and not stripped.startswith('byte ') and not stripped.startswith('int ') and not stripped.startswith('undefined') and not stripped.startswith('short ') and not stripped.startswith('char '):
            preview.append(stripped)
            if len(preview) >= 6:
                break
                
    if preview:
        summary.append(f"- **Preview**:\n  ```c\n  " + "\n  ".join(preview) + "\n  ```")
        
    return "\n".join(summary)

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python3 batch_analyzer.py <file1> <file2> ...")
        sys.exit(1)
        
    for f in sys.argv[1:]:
        print(analyze_dump(f))
        print()
