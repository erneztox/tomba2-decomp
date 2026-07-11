#!/usr/bin/env python3
"""
Analyze small unmapped functions to extract patterns for batch classification.
"""
import os
import re

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GHIDRA_DUMPS = os.path.join(PROJECT_ROOT, "src", "main", "ghidra_dumps")
SYMBOL_FILE = os.path.join(PROJECT_ROOT, "symbol_addrs.txt")

# Load symbol map (name -> addr, addr -> name)
addr_to_name = {}
with open(SYMBOL_FILE) as f:
    for line in f:
        m = re.match(r'(\w+)\s*=\s*(0x[0-9a-fA-F]+)', line)
        if m:
            name = m.group(1)
            addr = int(m.group(2), 16)
            if 0x80010000 <= addr <= 0x800FFFFF:
                addr_to_name[addr] = name

mapped_addrs = set(addr_to_name.keys())

def find_dump(addr):
    f1 = os.path.join(GHIDRA_DUMPS, f"FUN_{addr:08x}.c")
    if os.path.exists(f1):
        return f1
    f2 = os.path.join(GHIDRA_DUMPS, f"FUN_{addr:08X}.c")
    if os.path.exists(f2):
        return f2
    return None

# Find all unmapped dumps
unmapped = []
for fname in os.listdir(GHIDRA_DUMPS):
    if fname.startswith("FUN_"):
        addr_str = fname.replace("FUN_", "").replace(".c", "")
        try:
            addr = int(addr_str, 16)
        except:
            continue
        if addr not in mapped_addrs:
            path = os.path.join(GHIDRA_DUMPS, fname)
            with open(path) as fh:
                content = fh.read()
                lines = content.split('\n')
            unmapped.append((addr, len(lines), content))

# Sort by size
unmapped.sort(key=lambda x: x[1])

# Show small functions with patterns
print(f"Total unmapped: {len(unmapped)}")
print()

def extract_calls(content):
    """Extract function names called."""
    calls = re.findall(r'\b(FUN_[0-9a-fA-F]{6,8})\b', content)
    return calls

def extract_globals(content):
    """Extract global variable references."""
    globs = re.findall(r'\b(DAT_[0-9a-fA-F]{6,8})\b', content)
    globs += re.findall(r'\b(PTR_DAT_[0-9a-fA-F]{6,8})\b', content)
    return globs

def extract_syscalls(content):
    """Extract BIOS/syscall references."""
    syscalls = re.findall(r'(SUB_[0-9a-fA-F]{6,8})|(LAB_[0-9a-fA-F]{6,8})|(setCop[A-Z]\w+)', content)
    return [s for group in syscalls for s in group if s]

# Categorize small functions
for addr, size, content in unmapped[:150]:
    if size > 20:
        break

    calls = extract_calls(content)
    globs = extract_globals(content)
    syscalls = extract_syscalls(content)

    # Resolve call addresses to names
    resolved_calls = []
    for c in calls:
        try:
            c_addr = int(c.replace('FUN_', ''), 16)
            if c_addr in addr_to_name:
                resolved_calls.append(addr_to_name[c_addr])
            else:
                resolved_calls.append(c)
        except:
            resolved_calls.append(c)

    # Build pattern description
    patterns = []
    if resolved_calls:
        patterns.append(f"calls: {', '.join(resolved_calls[:3])}")
    if globs:
        patterns.append(f"globs: {', '.join(globs[:3])}")
    if syscalls:
        patterns.append(f"sys: {', '.join(syscalls[:2])}")

    # Detect simple patterns
    hint = ""
    if len(calls) == 1 and len(globs) == 1 and len(lines_clean := [l for l in content.split('\n') if l.strip()]) <= 10:
        # Simple wrapper: calls one function with a global
        hint = " [WRAPPER]"
    elif len(calls) == 0 and len(globs) == 1 and size <= 10:
        # Simple getter/setter of a global
        hint = " [GETTER/SETTER]"
    elif any('setCop' in s for s in syscalls):
        hint = " [GTE/COP]"
    elif any('SUB_' in s or 'LAB_' in s for s in syscalls):
        hint = " [BIOS/SYSCALL]"

    print(f"0x{addr:08X} ({size:3} lines): {' | '.join(patterns)}{hint}")
