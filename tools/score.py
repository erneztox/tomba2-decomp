import subprocess
import re
import os

# Auto-generate funcs dict from symbol_addrs.txt (same directory)
from symbol_addrs import parse_symbols

# Build {symbol_name: source_file} mapping from symbol_addrs.txt
name_to_addr, addr_to_name = parse_symbols()

# Map each function to its source file based on naming conventions
funcs = {}
for name, addr in name_to_addr.items():
    if name.startswith("EntityLoop_"):
        funcs[name] = name  # file matches function name
    elif name.startswith("Entity_Alloc") or name.startswith("Entity_Activate") or \
         name.startswith("Entity_Dealloc") or name.startswith("Entity_Init") or \
         name.startswith("Entity_Clear") or name.startswith("Entity_UpdateAll"):
        funcs[name] = "Entity_Allocator"
    elif name.startswith("Entity_Draw") or name.startswith("Entity_Submit"):
        funcs[name] = "Entity_Actions"
    elif name.startswith("Entity_UpdateMovement"):
        funcs[name] = "Entity_UpdateMovement"
    elif name.startswith("EntityFX_Update") or name.startswith("Entity_UpdateAnimation"):
        funcs[name] = "EntityFX_Update"
    elif name.startswith("Engine_"):
        funcs[name] = name
    elif name.startswith("GPU_"):
        if "ProcessRenderQueue" in name:
            funcs[name] = "GPU_ProcessRenderQueue"
        elif "Render3DSprite" in name or "ModulateOT" in name:
            funcs[name] = "gpu_sprite"

output = "# Decompilation Progress\n\n"
output += "| Function | Status | Diff Score |\n"
output += "|----------|--------|------------|\n"

for func, c_file in funcs.items():
    try:
        # rebuild the object first
        subprocess.run(["make", f"build/src/main/{c_file}.o", "-B"], capture_output=True)
        # run diff
        result = subprocess.run(
            ["make", "diff", "DIR=main", f"FUNC={c_file}", f"SYM={func}"],
            capture_output=True, text=True
        )
        match = re.search(r'CURRENT \((\d+)\)', result.stdout)
        if match:
            score = int(match.group(1))
            status = "Matched 100%" if score == 0 else "Decompiled"
            output += f"| {func} | {status} | {score} |\n"
            print(f"[{func}] Score: {score}")
        else:
            output += f"| {func} | Error | N/A |\n"
            print(f"[{func}] Error reading score")
    except Exception as e:
        output += f"| {func} | Error | {e} |\n"
        print(f"[{func}] Exception: {e}")

with open("src/main/progress.md", "w") as f:
    f.write(output)

print("Saved to src/main/progress.md")
