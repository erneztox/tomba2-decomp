#!/usr/bin/env python3
import os, re, shutil
P = '/home/ernesto/Desktop/codes/revert-tomba2'; GB = 0x08010000; RB = 0x80100000
def quick_map(name, mappings):
    gd = os.path.join(P, "src", "overlays", name, "ghidra_dumps")
    md = os.path.join(P, "src", "overlays", name, "mapped")
    od = os.path.join(P, "src", "overlays", name)
    sf = os.path.join(P, "symbol_addrs.txt")
    with open(sf) as f: sc = f.read()
    os.makedirs(md, exist_ok=True)
    n = []
    for off, fn, cm in mappings:
        gn = f"FUN_{GB+off:08x}"; gp = os.path.join(gd, f"{gn}.c")
        if not os.path.exists(gp): continue
        with open(gp) as f: c = f.read()
        c = c.replace(f"// {gn}", f"// {fn} - {cm}")
        c = re.sub(rf'\b{gn}\b(?!\.)', fn, c)
        with open(os.path.join(md, f"{fn}.c"), 'w') as f: f.write(c)
        shutil.copy2(os.path.join(md, f"{fn}.c"), os.path.join(od, f"{fn}.c"))
        ah = f"0x{RB+off:08X}"
        if ah not in sc and fn not in sc: n.append(f"{fn} = {ah};\n")
    if n:
        with open(sf, 'a') as f: f.write(f"\n# -- {name}.BIN --\n"); f.writelines(n)
    print(f"{name}: {len(mappings)} mapped, {len(n)} new symbols")
    for d in [gd, md]:
        if os.path.exists(d):
            for f in os.listdir(d): os.remove(os.path.join(d, f)); os.rmdir(d)

quick_map("A0G", [
    (0x03DC, "A0G_BgEntityLoop", "Background entity list iterator (DAT_1f800154)"),
    (0x0600, "A0G_GameStateDispatch", "Game state: dispatches entity kind 0xC/0x1F to handlers"),
    (0x0904, "A0G_StateSwitch", "Player state switch (8 cases on DAT_800e7e80)"),
    (0x0D2C, "A0G_GroundClamp", "Ground clamp: Y position to DAT_800bf812"),
    (0x0D8C, "A0G_GroundClampConditional", "Ground clamp with DAT_800bf816 flag guard"),
    (0x0DFC, "A0G_Stub", "Dead stub (halt_baddata)"),
    (0x0ED4, "A0G_ActiveEntityLoop", "Active entity list iterator (DAT_1f80013c)"),
    (0x0F98, "A0G_BgEntityLoop2", "Background entity iterator variant (DAT_1f800148)"),
    (0x11D0, "A0G_EntityBehaviorInit", "Entity behavior init: state, animation, timers, collision"),
    (0x1234, "A0G_SpawnWithGTE", "Spawn entity with GTE position: sets DAT_1f8000d2/da/ee"),
    (0x1318, "A0G_LevelInit", "Level init: reset player, set swim anim 0x24, clear flags"),
    (0x1378, "A0G_LevelCleanup", "Level cleanup: clear DAT_800bf816, reset player state"),
    (0x13D0, "A0G_TimerStateHandler", "Timer state handler: countdown timer1, transition on expire"),
    (0x1558, "A0G_TimerStateHandler2", "Timer state handler variant 2"),
    (0x16E0, "A0G_PlayerStateDispatch", "Player state dispatch: 5 states via action_state"),
    (0x184C, "A0G_EntityDispatch6", "Entity dispatch: 6 states via field_0x5e"),
    (0x1C64, "A0G_EntityStateHandler", "Entity state machine: action dispatch, health check"),
    (0x1E28, "A0G_EntityStateHandler2", "Entity state machine: animation-driven, transforms"),
    (0x20F0, "A0G_EntityMoveState", "Entity movement state: checks movement flags"),
    (0x22B0, "A0G_EntityStateMachine", "Entity state machine: health, sub_action dispatch"),
    (0x2980, "A0G_TimerSpawnHelper", "Timer-based spawn helper (0x5a countdown, pool3 type)"),
    (0x2A44, "A0G_DialogHandler", "Dialog/text script handler: reads string table"),
    (0x2BBC, "A0G_CollisionStateHandler", "Collision state: anim check, score, Item_Get"),
    (0x2CA4, "A0G_GTE_TriangleProc", "GTE triangle processor: 3-point transform, bounds check"),
    (0x2F8C, "A0G_GTE_QuadProc", "GTE quad processor: 4-point transform, depth test"),
    (0x3308, "A0G_MaterialProcessor", "Material/color processor: GTE cop2, entity color list"),
    (0x3408, "A0G_GTE_Transform", "GTE matrix transform: entity 3D position computation"),
    (0x36C8, "A0G_GTE_Projection", "GTE projection: screen-space coordinate calculation"),
    (0x3A18, "A0G_MaterialColorHelper", "Material color helper: applies color/alpha to entity"),
    (0x3A60, "A0G_ScreenTransform", "Screen-space coordinate transform with sin/cos"),
    (0x3D40, "A0G_TriangleRasterizer", "Triangle rasterizer: scanline fill, screen bounds"),
    (0x42AC, "A0G_OverlayLoader", "Overlay loader: calls Sys_LoadOverlay for next level"),
])
