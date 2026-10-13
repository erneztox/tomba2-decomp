#!/usr/bin/env python3
"""Quick-map any overlay: reads ghidra dumps, assigns names, maps + refactors in one pass."""
import os, re, shutil, sys

PROJECT_ROOT = '/home/ernesto/Desktop/codes/revert-tomba2'
GHIDRA_BASE = 0x08010000
RUNTIME_BASE = 0x80100000

def map_overlay(name, mappings):
    """mappings: list of (offset, func_name, comment)"""
    ghidra_dir = os.path.join(PROJECT_ROOT, "src", "overlays", name, "ghidra_dumps")
    mapped_dir = os.path.join(PROJECT_ROOT, "src", "overlays", name, "mapped")
    out_dir = os.path.join(PROJECT_ROOT, "src", "overlays", name)
    sym_file = os.path.join(PROJECT_ROOT, "symbol_addrs.txt")

    with open(sym_file) as f:
        sym_content = f.read()

    os.makedirs(mapped_dir, exist_ok=True)
    new_entries = []
    count = 0

    for offset, fname, comment in mappings:
        ghidra_addr = GHIDRA_BASE + offset
        ghidra_name = f"FUN_{ghidra_addr:08x}"
        ghidra_path = os.path.join(ghidra_dir, f"{ghidra_name}.c")

        if not os.path.exists(ghidra_path):
            continue

        with open(ghidra_path) as f:
            content = f.read()

        content = content.replace(f"// {ghidra_name}", f"// {fname} ({ghidra_name}) - {comment}")
        content = re.sub(rf'\b{ghidra_name}\b(?!\.)', fname, content)

        with open(os.path.join(mapped_dir, f"{fname}.c"), 'w') as f:
            f.write(content)
        shutil.copy2(os.path.join(mapped_dir, f"{fname}.c"), os.path.join(out_dir, f"{fname}.c"))

        addr_hex = f"0x{RUNTIME_BASE + offset:08X}"
        if addr_hex not in sym_content and fname not in sym_content:
            new_entries.append(f"{fname} = {addr_hex};\n")
        count += 1

    if new_entries:
        with open(sym_file, 'a') as f:
            f.write(f"\n# -- {name}.BIN overlay --\n")
            f.writelines(new_entries)

    print(f"  {name}: {count} mapped, {len(new_entries)} new symbols")

    # Clean up
    for d in [ghidra_dir, mapped_dir]:
        if os.path.exists(d):
            for f in os.listdir(d):
                os.remove(os.path.join(d, f))
            os.rmdir(d)

    return count

# ============================================================
# MAPPINGS
# ============================================================

if __name__ == "__main__":
    # A0H - 29 functions
    map_overlay("A0H", [
        (0x0338, "A0H_EntityListProcessor", "Entity list processor"),
        (0x055C, "A0H_GameStateDispatch", "Game state dispatcher"),
        (0x0900, "A0H_EntityDispatch5", "Entity dispatcher: 5 states"),
        (0x0D28, "A0H_EntityStateHandler", "Entity state machine"),
        (0x0D88, "A0H_EntityBehavior1", "Entity behavior handler 1"),
        (0x0DF8, "A0H_EntityBehavior2", "Entity behavior handler 2"),
        (0x0E74, "A0H_EntityStateMachine", "Entity state machine variant"),
        (0x0F4C, "A0H_CollisionHandler", "Collision response handler"),
        (0x1058, "A0H_EntityInit", "Entity initialization"),
        (0x1170, "A0H_EntitySpawner", "Entity spawner with position"),
        (0x1340, "A0H_StateDispatch", "State dispatcher"),
        (0x14A0, "A0H_AnimChecker", "Animation completion checker"),
        (0x15F8, "A0H_DialogHandler", "Dialog/text handler"),
        (0x1718, "A0H_EntityUpdate", "Entity update loop"),
        (0x187C, "A0H_SwimHandler", "Swim/water state handler"),
        (0x19E4, "A0H_LandHandler", "Land state handler"),
        (0x1B48, "A0H_CameraControl", "Camera control handler"),
        (0x1CCC, "A0H_PhysicsStep", "Physics/collision step"),
        (0x1E14, "A0H_GTE_Transform", "GTE transform calculator"),
        (0x1FCC, "A0H_EntityState2", "Entity state machine 2"),
        (0x2158, "A0H_EntityState3", "Entity state machine 3"),
        (0x22DC, "A0H_EntityState4", "Entity state machine 4"),
        (0x23FC, "A0H_LoopProcessor", "Loop/array processor"),
        (0x2538, "A0H_TextureHelper", "Texture/VRAM helper"),
        (0x2698, "A0H_EntityState5", "Entity state machine 5"),
        (0x27CC, "A0H_EntityState6", "Entity state machine 6"),
        (0x2900, "A0H_EntityDispatch", "Entity dispatch entry"),
        (0x2A38, "A0H_CleanupHandler", "Cleanup/reset handler"),
        (0x2B94, "A0H_EntityMain", "Top-level entity main"),
    ])

    print("\nDone!")
