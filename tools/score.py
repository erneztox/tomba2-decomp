import subprocess
import re

funcs = [
    "func_80079C3C",
    "func_80079DDC",
    "func_80079F90",
    "func_8007A12C",
    "func_8007A2C8"
]

print("# Entity Allocator Progress")
print("| Function | Status | Diff Score |")
print("|----------|--------|------------|")

for func in funcs:
    try:
        result = subprocess.run(
            ["make", "diff", "DIR=main", "FUNC=Entity_Allocator", f"SYM={func}"],
            capture_output=True, text=True
        )
        match = re.search(r'CURRENT \((\d+)\)', result.stdout)
        if match:
            score = int(match.group(1))
            status = "Matched 100%" if score == 0 else "Decompiled"
            print(f"| {func} | {status} | {score} |")
        else:
            print(f"| {func} | Error | N/A |")
    except Exception as e:
        print(f"| {func} | Error | {e} |")
