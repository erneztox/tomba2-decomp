import yaml
import sys

def calculate_progress():
    with open("config/main.yaml", "r") as f:
        config = yaml.safe_load(f)
        
    main_segment = None
    for seg in config['segments']:
        if seg['name'] == 'main':
            main_segment = seg
            break
            
    if not main_segment or 'subsegments' not in main_segment:
        print("Could not find main segment")
        return
        
    subsegments = main_segment['subsegments']
    total_size = 0
    c_size = 0
    asm_size = 0
    
    # We need to know the end of the last segment to calculate its size.
    # We will assume the end of the segment is the end of the main section.
    # Actually, we can just use the start addresses to calculate sizes of all but the last.
    
    for i in range(len(subsegments) - 1):
        start = subsegments[i][0]
        end = subsegments[i+1][0]
        size = end - start
        
        seg_type = subsegments[i][1]
        
        if seg_type == 'c':
            c_size += size
        elif seg_type == 'asm':
            asm_size += size
            
    total_size = c_size + asm_size
    if total_size == 0:
        return
        
    perc = (c_size / total_size) * 100
    
    print(f"# Progreso Real (Basado en config/main.yaml)")
    print(f"- **Total de código analizado**: {total_size} bytes")
    print(f"- **Decompilado (C)**: {c_size} bytes ({perc:.2f}%)")
    print(f"- **Por decompilar (ASM)**: {asm_size} bytes ({100-perc:.2f}%)")
    print("\n## Archivos C Detectados por el Linker:")
    for sub in subsegments:
        if sub[1] == 'c':
            print(f"- `{sub[2]}.c`")

if __name__ == "__main__":
    calculate_progress()
