#!/usr/bin/env python3
"""Map A00.BIN overlay functions."""
import os, re

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GHIDRA_DIR = os.path.join(PROJECT_ROOT, "src", "overlays", "A00", "ghidra_dumps")
MAPPED_DIR = os.path.join(PROJECT_ROOT, "src", "overlays", "A00", "mapped")
SYMBOL_FILE = os.path.join(PROJECT_ROOT, "symbol_addrs.txt")

# A00 functions use FULL 8-digit addresses from MAIN.EXE (not relative offsets)
MAPPINGS = {
    0x80044F58: ("Texture_Process", "Main texture loader: CD sectors -> decompress -> store 42 metadata entries"),
}

def main():
    with open(SYMBOL_FILE) as f:
        sym_content = f.read()

    new_entries = []
    for addr, (name, comment) in sorted(MAPPINGS.items()):
        ghidra_name = f"FUN_{addr:08x}"
        ghidra_path = os.path.join(GHIDRA_DIR, f"{ghidra_name}.c")

        if not os.path.exists(ghidra_path):
            print(f"  SKIP: {ghidra_path}")
            continue

        with open(ghidra_path) as f:
            content = f.read()

        content = content.replace(f"// {ghidra_name}", f"// {name} ({ghidra_name}) - {comment}")
        content = re.sub(rf'\b{ghidra_name}\b(?!\.)', name, content)

        mapped_path = os.path.join(MAPPED_DIR, f"{name}.c")
        os.makedirs(MAPPED_DIR, exist_ok=True)
        with open(mapped_path, 'w') as f:
            f.write(content)

        addr_hex = f"0x{addr:08X}"
        if addr_hex not in sym_content and name not in sym_content:
            new_entries.append(f"{name} = {addr_hex};\n")

        print(f"  OK: {name} -> {mapped_path}")

    if new_entries:
        with open(SYMBOL_FILE, 'a') as f:
            f.write("\n# -- A00.BIN overlay --\n")
            for e in new_entries:
                f.write(e)

    print(f"Done: {len(MAPPINGS) - len([a for a in MAPPINGS if not os.path.exists(os.path.join(GHIDRA_DIR, f'FUN_{a:08x}.c'))])}/{len(MAPPINGS)} mapped")


if __name__ == "__main__":
    main()
