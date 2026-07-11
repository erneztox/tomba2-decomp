#!/usr/bin/env python3
import os, re, shutil
P = '/home/ernesto/Desktop/codes/revert-tomba2'
GB = 0x08010000; RB = 0x80100000

def quick_map(name, mappings):
    gd = os.path.join(P, "src", "overlays", name, "ghidra_dumps")
    md = os.path.join(P, "src", "overlays", name, "mapped")
    od = os.path.join(P, "src", "overlays", name)
    sf = os.path.join(P, "symbol_addrs.txt")
    with open(sf) as f: sc = f.read()
    os.makedirs(md, exist_ok=True)
    new = []
    for off, fn, cm in mappings:
        gn = f"FUN_{GB+off:08x}"; gp = os.path.join(gd, f"{gn}.c")
        if not os.path.exists(gp): continue
        with open(gp) as f: c = f.read()
        c = c.replace(f"// {gn}", f"// {fn} - {cm}")
        c = re.sub(rf'\b{gn}\b(?!\.)', fn, c)
        with open(os.path.join(md, f"{fn}.c"), 'w') as f: f.write(c)
        shutil.copy2(os.path.join(md, f"{fn}.c"), os.path.join(od, f"{fn}.c"))
        ah = f"0x{RB+off:08X}"
        if ah not in sc and fn not in sc: new.append(f"{fn} = {ah};\n")
    if new:
        with open(sf, 'a') as f: f.write(f"\n# -- {name}.BIN --\n"); f.writelines(new)
    print(f"{name}: {len(mappings)} mapped, {len(new)} new symbols")
    for d in [gd, md]:
        if os.path.exists(d):
            for f in os.listdir(d): os.remove(os.path.join(d, f))
            os.rmdir(d)

# A0I - Water/swim level
quick_map("A0I", [
    (0x0500, "A0I_BgEntityLoop", "Background entity list iterator from DAT_1f800154"),
    (0x0724, "A0I_GameStateDispatch", "Game state dispatcher: switch on player state (8 cases)"),
    (0x0B3C, "A0I_GroundClamp", "Clamp entity Y to ground height DAT_800bf812"),
    (0x0B9C, "A0I_GroundClampConditional", "Ground clamp with DAT_800bf816 flag guard"),
    (0x0C0C, "A0I_ActiveEntityLoop", "Active entity list iterator from DAT_1f80013c"),
    (0x0CD0, "A0I_BgEntityLoop2", "Background entity list iterator variant (DAT_1f800148)"),
    (0x0ED0, "A0I_Stub", "Dead function (halt_baddata)"),
    (0x0FE0, "A0I_EntityDispatch5", "Entity state dispatcher: 5 sub-states via color_mode"),
    (0x15B8, "A0I_EntityBehaviorInit", "Entity behavior init: sets state, animation, timers, collision"),
    (0x161C, "A0I_SpawnWithGTE", "Spawn entity with GTE position from DAT_1f8000d2/ee"),
    (0x17EC, "A0I_LevelInit_Swim", "Level init: reset player, set swim anim 0x24, flags"),
    (0x184C, "A0I_LevelCleanup", "Level cleanup: clear DAT_800bf816, reset player state"),
    (0x18A4, "A0I_EntityDispatch6", "Entity state dispatcher: 6 sub-states via action_state"),
    (0x1A24, "A0I_EntityStateHandler", "Entity state machine: action dispatch, health check"),
    (0x1D04, "A0I_TimerSpawnHelper", "Timer-based entity spawn helper (0x5a countdown, pool3)"),
    (0x1DC8, "A0I_EntityStateHandler2", "Entity state machine variant: animation-driven states"),
    (0x20D0, "A0I_GridSpawner", "Grid entity spawner: nested loops, spawns pool 1 type 4"),
    (0x21E0, "A0I_DialogHandler", "Dialog/text script handler: reads pointer table, iterates strings"),
    (0x2358, "A0I_CollisionStateHandler", "Entity state: collision check, anim frame, score events"),
    (0x2440, "A0I_GTE_TriangleProc", "GTE triangle processor: 3-point transform, bounds check"),
    (0x2728, "A0I_GTE_QuadProc", "GTE quad processor: 4-point transform, depth test"),
    (0x2AA4, "A0I_MaterialProcessor", "Material/color processor: iterates entity color list"),
    (0x2BA4, "A0I_GTE_Transform", "GTE matrix transform: entity 3D position computation"),
    (0x2E48, "A0I_GTE_Projection", "GTE projection: screen-space coordinate calculation"),
    (0x317C, "A0I_MaterialHelper", "Material color helper: applies color/alpha to entity"),
    (0x31C4, "A0I_ScreenTransform", "Screen-space coordinate transform with sin/cos"),
    (0x34A4, "A0I_TriangleRasterizer", "Triangle rasterizer: scanline fill with screen bounds"),
    (0x3A10, "A0I_OverlayLoader", "Overlay loader: calls Sys_LoadOverlay for next level"),
])
