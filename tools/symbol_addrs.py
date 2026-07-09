#!/usr/bin/env python3
"""
symbol_addrs.py - Single source of truth for all Tomba 2 symbol addresses.

Usage:
  # Lookup name -> address
  python3 tools/symbol_addrs.py Entity_AllocByPoolId
  # → 0x8007A980

  # Lookup address -> name
  python3 tools/symbol_addrs.py 0x8007A980
  # → Entity_AllocByPoolId

  # List all symbols as make variables
  python3 tools/symbol_addrs.py --make-vars
  # → Entity_AllocByPoolId = 0x8007A980

  # List all function symbols
  python3 tools/symbol_addrs.py --functions

  # Check if address has a known name
  python3 tools/symbol_addrs.py --check-addr 0x8007A980
  # → Entity_AllocByPoolId
"""
import sys
import os
import re

SYMBOLS_FILE = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "symbol_addrs.txt")


def parse_symbols(filepath=None):
    """Parse symbol_addrs.txt and return {name: address, ...} plus {address: name, ...}."""
    if filepath is None:
        filepath = SYMBOLS_FILE

    name_to_addr = {}
    addr_to_name = {}

    if not os.path.exists(filepath):
        print(f"Warning: {filepath} not found", file=sys.stderr)
        return name_to_addr, addr_to_name

    with open(filepath, "r") as f:
        for line in f:
            line = line.strip()
            # Skip comments and empty lines
            if not line or line.startswith("#") or line.startswith("//"):
                continue
            # Parse "name = 0xADDRESS;"
            match = re.match(r"(\w+)\s*=\s*(0x[0-9A-Fa-f]+)\s*;?", line)
            if match:
                name = match.group(1)
                addr = int(match.group(2), 16)
                name_to_addr[name] = addr
                addr_to_name[addr] = name

    return name_to_addr, addr_to_name


def get_function_map():
    """Return {name: address} for function symbols only (not data globals)."""
    name_to_addr, _ = parse_symbols()
    # Functions start with uppercase letter (Entity_, Engine_, GPU_)
    # or are still unnamed (func_)
    funcs = {}
    for name, addr in name_to_addr.items():
        if name[0].isupper() or name.startswith("func_"):
            funcs[name] = addr
    return funcs


def main():
    name_to_addr, addr_to_name = parse_symbols()

    if len(sys.argv) < 2:
        print("Usage: symbol_addrs.py <name|address|--make-vars|--functions|--check-addr>")
        sys.exit(1)

    arg = sys.argv[1]

    if arg == "--make-vars":
        for name, addr in sorted(name_to_addr.items()):
            print(f"{name} = 0x{addr:X};")
    elif arg == "--functions":
        funcs = get_function_map()
        for name, addr in sorted(funcs.items()):
            print(f"{name} = 0x{addr:X};")
    elif arg == "--json":
        import json
        print(json.dumps({name: f"0x{addr:X}" for name, addr in sorted(name_to_addr.items())}, indent=2))
    elif arg.startswith("--check-addr"):
        addr = int(sys.argv[2] if len(sys.argv) > 2 else arg.split("=")[-1], 0)
        name = addr_to_name.get(addr)
        if name:
            print(name)
        else:
            sys.exit(1)
    elif arg.startswith("--check-name"):
        name = sys.argv[2] if len(sys.argv) > 2 else arg.split("=")[-1]
        addr = name_to_addr.get(name)
        if addr:
            print(f"0x{addr:X}")
        else:
            sys.exit(1)
    else:
        # Try as name first
        if arg in name_to_addr:
            print(f"0x{name_to_addr[arg]:X}")
        else:
            # Try as address
            try:
                addr = int(arg, 0)
                name = addr_to_name.get(addr)
                if name:
                    print(name)
                else:
                    print(f"func_{addr:08X}")
            except ValueError:
                print(f"Unknown symbol: {arg}")
                sys.exit(1)


if __name__ == "__main__":
    main()
