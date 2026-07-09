import subprocess
import re
import os

funcs = {
    "EntityLoop_Active": "EntityLoop_Active",
    "EntityLoop_Background": "EntityLoop_Background",
    "Entity_UpdateMovement": "Entity_UpdateMovement",
    "EntityFX_Update": "EntityFX_Update",
    "Entity_UpdateAnimation": "EntityFX_Update",
    "Entity_AllocByPoolId": "Entity_Allocator",
    "Entity_AllocPool0": "Entity_Allocator",
    "Entity_AllocPool1": "Entity_Allocator",
    "Entity_AllocPool2": "Entity_Allocator",
    "Entity_AllocPool3": "Entity_Allocator",
    "Entity_AllocPool4": "Entity_Allocator",
}

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
