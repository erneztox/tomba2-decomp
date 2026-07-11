#!/usr/bin/env python3
"""Preview functions from an overlay: first 25 lines of each, 20 at a time."""
import sys, os

PROJECT = '/home/ernesto/Desktop/codes/revert-tomba2'

def preview_overlay(name, batch_size=20, lines=25):
    dumps_dir = os.path.join(PROJECT, 'src', 'overlays', name, 'ghidra_dumps')
    if not os.path.isdir(dumps_dir):
        print(f"Not found: {dumps_dir}")
        return

    files = sorted(os.listdir(dumps_dir))
    files = [f for f in files if f.endswith('.c')]
    total = len(files)

    for i in range(0, total, batch_size):
        batch = files[i:i+batch_size]
        print(f"\n{'='*60}")
        print(f"  {name} [{i+1}-{min(i+batch_size, total)} of {total}]")
        print(f"{'='*60}")

        for fname in batch:
            path = os.path.join(dumps_dir, fname)
            offset = fname.replace('FUN_', '').replace('0801', '').replace('.c', '')
            try:
                offset_int = int(offset, 16)
            except:
                offset_int = 0

            with open(path) as f:
                content = f.readlines()

            # Show function signature + first few body lines
            header_len = min(lines, len(content))
            body = ''.join(content[:header_len]).rstrip()

            print(f"\n--- 0x{offset_int:04X} ({fname}) ---")
            print(body[:600])  # limit output

        if i + batch_size < total:
            input(f"\n>>> Press Enter for next {batch_size} (or Ctrl+C to stop) <<<")
        else:
            print(f"\n=== END {name} ===")

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("Usage: python3 tools/preview_overlay.py OVERLAY_NAME [batch_size] [lines]")
        sys.exit(1)

    name = sys.argv[1]
    bs = int(sys.argv[2]) if len(sys.argv) > 2 else 20
    ln = int(sys.argv[3]) if len(sys.argv) > 3 else 25
    preview_overlay(name, bs, ln)
