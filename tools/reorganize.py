#!/usr/bin/env python3
"""
Reorganize mapped functions into categorical folder structure.
Run: python3 tools/reorganize.py
"""
import os, re, shutil, json

PROJECT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MAPPED = os.path.join(PROJECT, "src", "main", "mapped")
SRC = os.path.join(PROJECT, "src", "main")
DUMP = os.path.join(PROJECT, "src", "main", "ghidra_dumps")
SYMBOLS = os.path.join(PROJECT, "symbol_addrs.txt")

# Load address -> name
addr_to_name = {}
name_to_addr = {}
with open(SYMBOLS) as f:
    for line in f:
        m = re.match(r'(\w+)\s*=\s*(0x[0-9a-fA-F]+)', line)
        if m:
            name = m.group(1)
            addr = int(m.group(2), 16)
            if 0x80010000 <= addr <= 0x800FFFFF:
                addr_to_name[addr] = name
                name_to_addr[name] = addr

# Folder routing rules - first match wins
ROUTES = [
    # Entity subcategories
    (r"^Entity_Behavior_", "entity/behavior"),
    (r"^Entity_State_", "entity/state"),
    (r"^EntityLoop_", "entity/loop"),
    (r"^Entity_Draw", "entity/draw"),
    (r"^Entity_Spawn", "entity/spawn"),
    (r"^Entity_Alloc|^Entity_Clear|^Entity_Init", "entity/alloc"),
    (r"^Entity_Anim|^Entity_AdvanceAnim|^Entity_LoadAnim", "entity/anim"),
    (r"^Entity_Calc|^Entity_Check|^Entity_Move|^Entity_Physics", "entity/physics"),
    (r"^Entity_", "entity"),
    # GPU / GTE
    (r"^GPU_|^GPU_OT|^OT_", "gpu"),
    (r"^GTE_", "gte"),
    # CD
    (r"^CD_", "cd"),
    # Audio / SPU
    (r"^Audio_|^SPU_", "audio"),
    # MDEC
    (r"^MDEC_", "mdec"),
    # Camera
    (r"^Camera_", "camera"),
    # UI / Menu
    (r"^UI_|^Menu_", "ui"),
    # Collision
    (r"^Collision_", "collision"),
    # Event
    (r"^Event_", "event"),
    # Engine
    (r"^Engine_", "engine"),
    # System / BIOS
    (r"^Sys_|^System_|^BIOS_|^IRQ_", "system"),
    # Math
    (r"^Math_", "math"),
    # String
    (r"^String_", "string"),
    # Memory
    (r"^Mem_", "memory"),
    # Input / Pad
    (r"^Pad_|^Input_", "input"),
    # Save
    (r"^Save_", "save"),
    # Screen / Render
    (r"^Screen_|^Render_", "screen"),
    # Texture
    (r"^Texture_", "texture"),
    # Debug
    (r"^Debug_", "debug"),
    # Overlay
    (r"^Overlay_", "overlay"),
    # Game
    (r"^Game_", "game"),
    # Inventory
    (r"^Inventory_", "inventory"),
    # Dialog
    (r"^Dialog_", "dialog"),
    # EntityFX
    (r"^EntityFX_", "entityfx"),
    # Timer / VSync
    (r"^Timer_|^VSync", "system"),
    # Nop / stubs
    (r"^Func_Nop", "misc"),
    # Fallback
    (r".", "misc"),
]

def route(name):
    for pattern, folder in ROUTES:
        if re.match(pattern, name):
            return folder
    return "misc"

# Build file map
structure = {}
copied = 0
errors = []

for fname in sorted(os.listdir(MAPPED)):
    if not fname.endswith('.c'): continue
    name = fname.replace('.c', '')

    folder = route(name)
    dest_dir = os.path.join(SRC, folder)
    os.makedirs(dest_dir, exist_ok=True)

    src_path = os.path.join(MAPPED, fname)
    dst_path = os.path.join(dest_dir, fname)

    shutil.copy2(src_path, dst_path)

    addr = name_to_addr.get(name)
    structure.setdefault(folder, []).append({
        "name": name,
        "address": f"0x{addr:08X}" if addr else None,
        "file": f"{folder}/{fname}"
    })
    copied += 1

print(f"Copied {copied} files to {len(structure)} folders")

# Save structure map as JSON
map_path = os.path.join(PROJECT, "STRUCTURE.json")
with open(map_path, 'w') as f:
    json.dump(structure, f, indent=2, sort_keys=True)
print(f"Structure map: {map_path}")

# Save structure map as Markdown
md = []
md.append("# Tomba 2 - MAIN.EXE Function Map\n")
md.append(f"**{copied} functions** in **{len(structure)} categories**\n")

for folder in sorted(structure.keys()):
    funcs = structure[folder]
    md.append(f"\n## {folder}/ ({len(funcs)} functions)\n")
    for func in funcs:
        addr = func['address'] or '?'
        md.append(f"- `{func['name']}` @ {addr}")

md_path = os.path.join(PROJECT, "STRUCTURE.md")
with open(md_path, 'w') as f:
    f.write('\n'.join(md))
print(f"Structure doc: {md_path}")

# Verify against dumps
print("\n=== Verification ===")
missing = 0
for fname in sorted(os.listdir(DUMP)):
    if not fname.startswith('FUN_'): continue
    addr_str = fname.replace('FUN_', '').replace('.c', '')
    try: addr = int(addr_str, 16)
    except: continue
    if addr not in addr_to_name:
        print(f"  MISSING: {fname} not in symbol_addrs.txt")
        missing += 1

if missing == 0:
    print("  ALL good - every dump has a symbol entry")
else:
    print(f"  {missing} dumps missing symbol entries")
