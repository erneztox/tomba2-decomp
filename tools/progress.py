import os
import re

def generate_progress_report():
    src_dir = "src/main"
    report_lines = ["# Tomba 2 Main Progress Report\n"]
    report_lines.append("| File | Function | Status | Percentage |")
    report_lines.append("|---|---|---|---|")
    
    total_funcs = 0
    total_decompiled = 0
    
    func_regex = re.compile(r'^[a-zA-Z_][a-zA-Z0-9_*\s]+ ([a-zA-Z_][a-zA-Z0-9_]*)\([^)]*\)\s*{', re.MULTILINE)
    include_asm_regex = re.compile(r'INCLUDE_ASM\([^,]+,\s*([^)]+)\);')
    
    for filename in sorted(os.listdir(src_dir)):
        if not filename.endswith(".c"):
            continue
            
        filepath = os.path.join(src_dir, filename)
        with open(filepath, "r") as f:
            content = f.read()
            
        content_no_comments = re.sub(r'//\s*INCLUDE_ASM.*', '', content)
        content_no_comments = re.sub(r'/\*.*?\*/', '', content_no_comments, flags=re.DOTALL)
        
        c_funcs = func_regex.findall(content_no_comments)
        asm_funcs = include_asm_regex.findall(content_no_comments)
        
        # Make lists unique just in case
        c_funcs = list(dict.fromkeys(c_funcs))
        asm_funcs = list(dict.fromkeys(asm_funcs))
        
        for func in c_funcs:
            report_lines.append(f"| {filename} | `{func}` | ✅ Done | 100.0% |")
            total_decompiled += 1
            total_funcs += 1
            
        for func in asm_funcs:
            report_lines.append(f"| {filename} | `{func}` | ⏳ Pending | 0.0% |")
            total_funcs += 1
            
    report_lines.append("\n## Overall Progress")
    if total_funcs > 0:
        overall_perc = (total_decompiled / total_funcs) * 100
        report_lines.append(f"**Main Executable**: {total_decompiled} / {total_funcs} functions decompiled ({overall_perc:.2f}%)")
        
    with open("src/main/progress.md", "w") as f:
        f.write("\n".join(report_lines) + "\n")

if __name__ == "__main__":
    generate_progress_report()
