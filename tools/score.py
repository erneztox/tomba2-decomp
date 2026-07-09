#!/usr/bin/env python3
"""
score.py - Auto-scores all decompiled functions by running asm-differ.

Reads every .c file in src/main/, finds all function definitions,
looks up each function's address in symbol_addrs.txt, rebuilds the
corresponding .o, and runs asm-differ to get the diff score.

No manual mapping needed. Just keep symbol_addrs.txt updated.
"""

import subprocess
import re
import os
import sys

PROJECT_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
SRC_DIR = os.path.join(PROJECT_ROOT, "src", "main")
BUILD_DIR = os.path.join(PROJECT_ROOT, "build", "src", "main")

# Import symbol address lookup
sys.path.insert(0, os.path.join(os.path.dirname(__file__)))
from symbol_addrs import parse_symbols

name_to_addr, addr_to_name = parse_symbols()


def find_functions_in_file(filepath):
    """Find all C function definitions and INCLUDE_ASM stubs in a .c file.
    Returns list of (function_name, is_decompiled)."""
    funcs = []
    with open(filepath, "r") as f:
        content = f.read()

    # Match C function definitions:  return_type  func_name  ( params )  {
    c_func_re = re.compile(
        r'^\w[\w\s*]+?\s+(\w+)\s*\([^)]*\)\s*\{',
        re.MULTILINE
    )
    for match in c_func_re.finditer(content):
        name = match.group(1)
        # Skip extern declarations (line above starts with 'extern')
        line_start = content.rfind('\n', 0, match.start()) + 1
        prev_line = content[line_start:match.start()].strip()
        if not prev_line.startswith('extern'):
            funcs.append((name, True))

    # Match INCLUDE_ASM stubs: INCLUDE_ASM("folder", func_name);
    asm_re = re.compile(
        r'INCLUDE_ASM\s*\(\s*"[^"]+"\s*,\s*(\w+)\s*\)\s*;'
    )
    for match in asm_re.finditer(content):
        name = match.group(1)
        funcs.append((name, False))

    return funcs


def get_address(func_name):
    """Get address for a function name.
    If name starts with func_, parse address from name.
    Otherwise, look up in symbol_addrs.txt."""
    if func_name.startswith("func_"):
        try:
            return int(func_name[5:], 16)
        except ValueError:
            return None
    return name_to_addr.get(func_name)


def main():
    results = []
    files = sorted(f for f in os.listdir(SRC_DIR) if f.endswith(".c"))

    for filename in files:
        filepath = os.path.join(SRC_DIR, filename)
        base = filename[:-2]  # strip .c
        funcs = find_functions_in_file(filepath)
        if not funcs:
            continue

        print(f"\n{'='*60}")
        print(f"  {filename}")
        print(f"{'='*60}")

        for func_name, is_decompiled in funcs:
            if not is_decompiled:
                print(f"  {func_name:40s}  ⏳ PENDING")
                continue

            addr = get_address(func_name)
            if addr is None:
                print(f"  {func_name:40s}  ⚠️  not in symbol_addrs.txt")
                continue

            # Rebuild the .o (force rebuild with -B)
            # But only the specific .c file's .o
            obj_path = os.path.join(BUILD_DIR, f"{base}.o")
            subprocess.run(
                ["make", obj_path, "-B"],
                capture_output=True, cwd=PROJECT_ROOT
            )

            # Run asm-differ
            result = subprocess.run(
                [
                    "python3", "tools/asm-differ/diff.py",
                    "--no-pager", "-mo",
                    "-f", obj_path,
                    func_name
                ],
                capture_output=True, text=True, cwd=PROJECT_ROOT
            )

            match = re.search(r'CURRENT \((\d+)\)', result.stdout)
            if match:
                score = int(match.group(1))
                results.append((filename, func_name, score))
                if score == 0:
                    print(f"  {func_name:40s}  ✅ MATCH")
                else:
                    pct = max(0, 100 - score / 100) if score < 50000 else 0
                    bar = "█" * int(pct / 5) + "░" * (20 - int(pct / 5))
                    print(f"  {func_name:40s}  {bar} {pct:.1f}%")
            else:
                print(f"  {func_name:40s}  ❌ error (diff failed)")

    # Summary
    if results:
        matched = sum(1 for _, _, s in results if s == 0)
        total = len(results)
        print(f"\n{'='*60}")
        print(f"  Summary: {matched}/{total} functions matching (100% byte-perfect)")
        print(f"{'='*60}")


if __name__ == "__main__":
    main()
