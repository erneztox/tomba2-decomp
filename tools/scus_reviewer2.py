#!/usr/bin/env python3
import os, sys, re

def classify_function(addr_str, content):
    ghidra_name = f"FUN_{addr_str}"
    try: addr = int(addr_str, 16)
    except: return None, None
    
    name = None; comment = ''

    if 'halt_baddata' in content and content.count('{') == 1:
        name = f'SCUS_Stub_{addr:08X}'; comment = 'Dead stub (halt_baddata)'
    elif 'return;' in content and content.count('\n') < 10:
        name = f'SCUS_NullStub_{addr:08X}'; comment = 'Empty/return stub'
    elif 'FUN_800132b0(&DAT_80010' in content:
        m = re.search(r'DAT_80010(\w+)', content)
        tid = m.group(1) if m else 'XX'
        name = f'SCUS_EventInit_{tid}'; comment = f'Event/device init: table DAT_80010{tid}'
    elif 'DAT_8002550c' in content or 'DAT_80025510' in content:
        name = f'SCUS_SysCallback_{addr:08X}'; comment = 'System callback dispatcher (call table)'
    elif 'DAT_80026774' in content:
        name = f'SCUS_DevTable_{addr:08X}'; comment = 'Device table access (DAT_80026774)'
    elif 'FUN_80018e7c' in content or '0xf0000003' in content:
        name = f'SCUS_GPUOp_{addr:08X}'; comment = 'GPU/display register operation'
    elif 'FUN_8001e44c' in content:
        m = re.search(r'FUN_8001e44c\(.*?,.*?,(0x\w+)\)', content)
        sz = m.group(1) if m else '?'
        name = f'SCUS_MemInit_{addr:08X}'; comment = f'Memory init/setup ({sz} bytes)'
    elif 'FUN_8001e5ec' in content:
        name = f'SCUS_MemClear_{addr:08X}'; comment = 'Memory clear/zero operation'
    elif 'FUN_80017e4c' in content:
        name = f'SCUS_EventSignal_{addr:08X}'; comment = 'Event signal helper'
    elif 'FUN_800180cc' in content:
        name = f'SCUS_CallbackReg_{addr:08X}'; comment = 'Callback registration'
    elif 'FUN_80015' in content or 'FUN_80016' in content or 'FUN_80017' in content:
        name = f'SCUS_SystemCall_{addr:08X}'; comment = 'System/bios call wrapper'
    elif content.count('{') <= 2 and content.count('\n') < 20:
        name = f'SCUS_Simple_{addr:08X}'; comment = 'Simple accessor/getter'
    else:
        name = f'SCUS_SDKFunc_{addr:08X}'; comment = 'SDK library function'
        
    return name, comment

def main():
    scus_dir = "src/scus/ghidra_dumps"
    start = int(sys.argv[1]) if len(sys.argv) > 1 else 0
    count = int(sys.argv[2]) if len(sys.argv) > 2 else 30
    
    files = sorted([f for f in os.listdir(scus_dir) if f.startswith('FUN_') and f.endswith('.c')])
    batch = files[start:start+count]
    
    out = [f"# SCUS Mapeo Lote (Archivos {start} a {start+count-1})", ""]
    out.append("| Función Original | Nombre Propuesto (map_scus) | Comentario / Motivo |")
    out.append("|---|---|---|")
    
    for f in batch:
        path = os.path.join(scus_dir, f)
        with open(path) as fd: content = fd.read()
        addr_str = f.replace("FUN_", "").replace(".c", "")
        name, comment = classify_function(addr_str, content)
        if not name: name = "ERROR"; comment = "ERROR"
        
        # Determine if it's a "good" name or not
        # Let's say generic names like SCUS_SystemCall_ are ok-ish but can be improved
        out.append(f"| `{f}` | `{name}` | {comment} |")
        
    print("\n".join(out))

if __name__ == "__main__":
    main()
