#!/usr/bin/env python3
"""
Generic refactor for any overlay: types, entity fields, FUN_/func_0x renames, includes, globals.
Usage: python3 tools/refactor_overlay.py GAME OPN DEMO CRD A0A A0C A0D A0E A0F
"""
import os, re, sys

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# Ghidra -> PsyQ types
TYPES = {
    'undefined1': 'u8', 'undefined2': 's16', 'undefined4': 's32',
    'undefined': 'void', 'ushort': 'u16', 'byte': 'u8', 'bool': 's32',
}

# Known globals (add more as discovered)
GLOBALS = {
    '_DAT_1f800138': 'g_OverlayEntity',
    '_DAT_800bf544': 'g_OrderingTable',
    '_DAT_800ed8c8': 'g_OrderingTableEnd',
    'DAT_800bf870': 'g_GameState',
    'DAT_800bf9b4': 'g_GameSubState',
    'DAT_800bf80d': 'g_GameMode',
    'DAT_800bf80e': 'g_SeqComplete',
    'DAT_800bf80f': 'g_SeqComplete2',
    'DAT_800bf808': 'g_MenuSelection',
    'DAT_800bf819': 'g_NextState',
    'DAT_800bf89c': 'g_PlayerState',
    'DAT_800bf9ed': 'g_FrameCounter',
    'DAT_1f800136': 'g_PauseFlag',
    'DAT_1f80017c': 'g_InputPressed',
    'DAT_1f800184': 'g_InputHeld',
    'DAT_1f80019b': 'g_LoadComplete',
    'DAT_1f8001ff': 'g_ScreenBrightness',
    'DAT_1f800206': 'g_LevelId',
    'DAT_1f800232': 'g_MenuExitFlag',
    'DAT_1f800234': 'g_LoadingFlag',
    'DAT_1f800236': 'g_GameMode2',
    'DAT_800e7e68': 'g_PlayerFlags',
    'DAT_800e7e80': 'g_PlayerEntity',
    'DAT_800e7e84': 'g_PlayerAction',
    'DAT_800e8008': 'g_EntityPool0',
    'DAT_800e806c': 'g_LoadSubState',
    'DAT_800e8078': 'g_CameraZoom',
    'DAT_800e7eae': 'g_CameraPosX',
    'DAT_800e7eb2': 'g_CameraPosY',
    'DAT_800e7eb6': 'g_CameraPosZ',
    'DAT_800ecf68': 'g_SavedPosition',
    'DAT_800ecf80': 'g_AnimDataPtr',
    'DAT_800ed098': 'g_CollectibleCount',
    'DAT_1f8000d0': 'g_GTE_Matrix00',
    'DAT_1f8000d2': 'g_GTE_Matrix01',
    'DAT_1f8000d4': 'g_GTE_Matrix02',
    'DAT_1f8000d6': 'g_GTE_Matrix10',
    'DAT_1f8000d8': 'g_GTE_Matrix11',
    'DAT_1f8000da': 'g_GTE_Matrix12',
    'DAT_1f8000c0': 'g_GTE_Vector0',
    'DAT_1f8000c2': 'g_GTE_Vector1',
    'DAT_1f8000c4': 'g_GTE_Vector2',
    'DAT_1f8000de': 'g_GTE_ResultX',
    'DAT_1f8000e2': 'g_GTE_ResultY',
    'DAT_1f8000e6': 'g_GTE_ResultZ',
    'DAT_1f8000f0': 'g_GTE_RotX',
    'DAT_1f8000f2': 'g_GTE_RotY',
    'DAT_1f8000f4': 'g_GTE_RotZ',
    'DAT_1f8000ea': 'g_GTE_TransX',
    'DAT_1f8000ec': 'g_GTE_TransY',
    'DAT_1f8000ee': 'g_GTE_TransZ',
}

# Increase recursion limit for deep regex
sys.setrecursionlimit(10000)


def parse_entity_fields():
    """Parse Entity struct from tomba.h"""
    fields = []
    tomba_h = os.path.join(PROJECT_ROOT, "include", "tomba.h")
    if not os.path.exists(tomba_h):
        return fields
    with open(tomba_h) as f:
        h = f.read()
    start = h.find('typedef struct Entity {')
    end = h.find('} Entity;', start)
    if start < 0 or end < 0:
        return fields
    body = h[start:end]
    for line in body.split('\n'):
        m = re.search(r'/\*\s*(0x[0-9a-fA-F]+)\s*\*/', line)
        if not m: continue
        off = int(m.group(1), 16)
        nm = re.search(r'(\w+)\s*;', line)
        nm2 = re.search(r'(\w+)\s*\[', line)
        name = nm.group(1) if nm else (nm2.group(1) if nm2 else None)
        if not name or name.startswith('_pad'): continue
        if 's32' in line or 'void*' in line or 'Entity*' in line or 'u8*' in line: t = 'w'
        elif 's16' in line or 'u16' in line: t = 'h'
        elif 'u8' in line or 's8' in line: t = 'b'
        else: continue
        fields.append((off, name, t))
    return fields


def load_symbol_map():
    """Load symbol_addrs.txt: address -> name"""
    sym = {}
    with open(os.path.join(PROJECT_ROOT, "symbol_addrs.txt")) as f:
        for line in f:
            m = re.match(r'(\w+)\s*=\s*(0x[0-9a-fA-F]+)', line)
            if m:
                sym[int(m.group(2), 16)] = m.group(1)
    return sym


def refactor_overlay(overlay_name):
    overlay_dir = os.path.join(PROJECT_ROOT, "src", "overlays", overlay_name)
    if not os.path.isdir(overlay_dir):
        print(f"  SKIP: {overlay_dir} not found")
        return 0

    entity_fields = parse_entity_fields()
    sym_map = load_symbol_map()

    modified = 0
    for root, dirs, files in os.walk(overlay_dir):
        # Skip ghidra_dumps and mapped
        if 'ghidra_dumps' in root or 'mapped' in root:
            continue
        for fname in sorted(files):
            if not fname.endswith('.c'):
                continue
            path = os.path.join(root, fname)
            with open(path) as f:
                content = f.read()
            orig = content

            # Types
            for old, new in sorted(TYPES.items(), key=lambda x: -len(x[0])):
                content = re.sub(r'\b' + re.escape(old) + r'\b', new, content)

            # Entity field offsets -> field names
            for off, name, t in sorted(entity_fields, key=lambda x: -x[0]):
                for hs in [f'0x{off:x}', f'0x{off:X}']:
                    if t == 'h':
                        content = re.sub(
                            rf'\(\s*(?:s16|u16|short|ushort|undefined2)\s*\*\s*\)\s*\(\s*(\w+(?:_\w+)?)\s*\+\s*{hs}\s*\)',
                            rf'\1->{name}', content)
                    elif t == 'w':
                        content = re.sub(
                            rf'\(\s*(?:s32|u32|int|uint|undefined4|code)\s*\*?\s*\*\s*\)\s*\(\s*(\w+(?:_\w+)?)\s*\+\s*{hs}\s*\)',
                            rf'\1->{name}', content)
                    elif t == 'b':
                        content = re.sub(
                            rf'\(\s*(?:u8|s8|byte|char|undefined1)\s*\*\s*\)\s*\(\s*(\w+(?:_\w+)?)\s*\+\s*{hs}\s*\)',
                            rf'\1->{name}', content)
                        content = re.sub(rf'(\w+(?:_\w+)?)\s*\[\s*{hs}\s*\]', rf'\1->{name}', content)
                if off < 16 and t == 'b':
                    content = re.sub(
                        rf'\(\s*(?:u8|s8|byte|char|undefined1)\s*\*\s*\)\s*\(\s*(\w+(?:_\w+)?)\s*\+\s*{off}\s*\)',
                        rf'\1->{name}', content)
                    content = re.sub(rf'(\w+(?:_\w+)?)\s*\[\s*{off}\s*\]', rf'\1->{name}', content)
            content = re.sub(r'\*\s*(\w+->\w+)', r'\1', content)

            # FUN_XXXXXX -> descriptive name
            for m in re.finditer(r'FUN_([0-9a-fA-F]{6,8})', content):
                addr = int(m.group(1), 16)
                if addr in sym_map:
                    content = content.replace(m.group(0), sym_map[addr])

            # func_0xXXXX -> descriptive name
            for m in re.finditer(r'func_0x([0-9a-fA-F]+)', content):
                addr = int(m.group(1), 16)
                if addr in sym_map:
                    content = content.replace(m.group(0), sym_map[addr])
                elif (addr + 0x80000000) in sym_map:
                    content = content.replace(m.group(0), sym_map[addr + 0x80000000])
                elif addr >= 0x80100000:
                    content = content.replace(m.group(0), f'Overlay_{addr:08X}')

            # Global variables
            for old, new in sorted(GLOBALS.items(), key=lambda x: -len(x[0])):
                content = content.replace(old, new)

            if content != orig:
                with open(path, 'w') as f:
                    f.write(content)
                modified += 1

    # Add #include "tomba.h" where needed
    for root, dirs, files in os.walk(overlay_dir):
        if 'ghidra_dumps' in root or 'mapped' in root:
            continue
        for fname in sorted(files):
            if not fname.endswith('.c'):
                continue
            path = os.path.join(root, fname)
            with open(path) as f:
                content = f.read()
            if '#include' in content and 'tomba.h' in content:
                continue
            if '->' not in content:
                continue
            lines = content.split('\n')
            insert_at = 0
            for i, line in enumerate(lines):
                if line.strip() == '*/':
                    insert_at = i + 1
                elif insert_at > 0 and line.strip() and not line.strip().startswith('//'):
                    break
            if insert_at > 0:
                lines.insert(insert_at, '#include "tomba.h"')
                with open(path, 'w') as f:
                    f.write('\n'.join(lines))
                modified += 1

    print(f"  {overlay_name}: {modified} files modified")
    return modified


if __name__ == "__main__":
    overlays = sys.argv[1:] if len(sys.argv) > 1 else ["GAME", "OPN", "DEMO", "CRD"]
    total = 0
    for ovl in overlays:
        total += refactor_overlay(ovl)
    print(f"\nTotal: {total} files modified")
