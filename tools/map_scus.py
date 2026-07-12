#!/usr/bin/env python3
"""Map SCUS: classify by body content, reviewed by batch preview."""
import os, re, shutil

P = '/home/ernesto/Desktop/codes/revert-tomba2'
GD = os.path.join(P, 'src', 'scus', 'ghidra_dumps')
MD = os.path.join(P, 'src', 'scus', 'mapped')
OD = os.path.join(P, 'src', 'scus')
SF = os.path.join(P, 'symbol_addrs.txt')

os.makedirs(MD, exist_ok=True)

with open(SF) as f: sym_content = f.read()

new_entries = []
skipped = 0

for fname in sorted(os.listdir(GD)):
    if not fname.endswith('.c'): continue
    ghidra_name = fname.replace('.c', '')
    try: addr = int(ghidra_name.replace('FUN_', ''), 16)
    except: skipped += 1; continue

    path = os.path.join(GD, fname)
    with open(path) as f: content = f.read()

    # Classify
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

    # Write
    c = content.replace(f'// {ghidra_name}', f'// {name} - {comment}')
    c = re.sub(rf'\b{ghidra_name}\b(?!\.)', name, c)

    with open(os.path.join(MD, f'{name}.c'), 'w') as f: f.write(c)
    shutil.copy2(os.path.join(MD, f'{name}.c'), os.path.join(OD, f'{name}.c'))

    ah = f'0x{addr:08X}'
    if ah not in sym_content and name not in sym_content:
        new_entries.append(f'{name} = {ah};\n')

if new_entries:
    with open(SF, 'a') as f:
        f.write('\n# -- SCUS (bootloader / Sony SDK library) --\n')
        f.writelines(new_entries)

print(f'SCUS: {len(new_entries)} new symbols, {len(os.listdir(MD))} mapped, {skipped} skipped')
