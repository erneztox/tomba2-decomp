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

quick_map("A09", [
    (0x03FC, "A09_BgEntityLoop", "Background entity list iterator"),
    (0x076C, "A09_StateSwitch", "Player state switch (8 cases, checks _DAT_800e7fd8)"),
    (0x082C, "A09_EntityDispatch10", "Entity dispatch: 10 states via color_mode"),
    (0x0D04, "A09_EntityBehaviorInit", "Entity behavior init: state, anim, timers"),
    (0x0D68, "A09_SpawnWithGTE", "Spawn entity with GTE position setup"),
    (0x0E58, "A09_LevelInit", "Level init: reset player, swim anim 0x24"),
    (0x0EB8, "A09_LevelCleanup", "Level cleanup: clear flags, reset player"),
    (0x0F10, "A09_DialogHandler", "Dialog/text script handler: reads string table"),
    (0x10C4, "A09_EntitySpawnSequence", "Entity spawn sequence: tile/animation setup"),
    (0x11EC, "A09_EntityState_Boss", "Boss entity state machine: action dispatch"),
    (0x128C, "A09_EntityStateHandler", "Entity state handler: position, anim, parent"),
    (0x1450, "A09_PlayerStateDispatch", "Player state dispatch: 7 states"),
    (0x163C, "A09_EntityState_Damage", "Entity damage state: health, knockback"),
    (0x1884, "A09_BossBehaviorHelper", "Boss behavior helper: target tracking, movement"),
    (0x1A5C, "A09_EntityState_Boss2", "Boss entity state: phase transition"),
    (0x1BB8, "A09_EntityDispatch5", "Entity dispatch: 5 states"),
    (0x1E00, "A09_EntityState_Rise", "Entity rise/jump state: Y velocity, camera pos"),
    (0x2018, "A09_EntityDispatch5b", "Entity dispatch variant: 5 states"),
    (0x240C, "A09_EntitySpawnSequence2", "Entity spawn sequence variant: background tiles"),
    (0x252C, "A09_SequenceCheck", "Sequence completion check: DAT_800bf80f flag"),
    (0x26C8, "A09_EntityDispatch5c", "Entity dispatch: 5 states via entity state"),
    (0x2918, "A09_CameraZoomIn", "Camera zoom in: sets DAT_800e8076=0x80, e8078=0x400"),
    (0x29D8, "A09_CameraSetup1", "Camera setup mode 1: DAT_800e806c=2, sets zoom params"),
    (0x2A30, "A09_CameraSetup2", "Camera setup mode 2: DAT_800e806c=1, zoom x7"),
    (0x2A88, "A09_EntityState_CameraTrack", "Entity state: tracks DAT_800bf860, camera follow"),
    (0x2B84, "A09_EntitySpawn_Cutscene", "Cutscene entity spawn: Audio_Play, camera target"),
    (0x2C60, "A09_EntityState_CameraTrack2", "Camera track state: checks entity Y pos vs target"),
    (0x2D00, "A09_CameraZoomControl", "Camera zoom control: adjusts fov via entity field_0xc4"),
    (0x2D64, "A09_DialogChoice", "Dialog choice handler: reads choice table, sets anim"),
    (0x2E84, "A09_SpawnWithGTE2", "Spawn entity: GTE position with rotation"),
    (0x3080, "A09_SpawnWithGTE3", "Spawn entity: GTE position variant 3"),
    (0x3344, "A09_EntityState_Dealloc", "Entity state: Entity_Dealloc on state 3"),
    (0x35EC, "A09_EventFlagCheck", "Event flag check: DAT_800bfa41, spawns on condition"),
    (0x371C, "A09_EntityDispatch5d", "Entity dispatch: 5 states"),
    (0x3C14, "A09_EntityState_Anim", "Entity state: plays animation, sets behavior pointer"),
    (0x3D3C, "A09_EntityState_Anim2", "Entity state: animation with completion check"),
    (0x3DCC, "A09_ScrollPanEntity", "Scroll/pan entity: slide timer with wrap-around"),
    (0x3F28, "A09_GTE_ScreenTransform", "GTE screen-space transform for entities"),
    (0x4114, "A09_GTE_ProjectionHelper", "GTE projection helper: screen bounds calculation"),
    (0x4370, "A09_GTE_CoordTransform", "GTE coordinate transform: 3D to 2D"),
    (0x463C, "A09_EntityState_WaterCheck", "Entity state: water/surface collision check"),
    (0x4974, "A09_BossStateMachine", "Boss state machine: full boss battle logic"),
    (0x4E90, "A09_EntityState_Cleanup", "Entity state: cleanup and dealloc"),
    (0x4F44, "A09_EntityMainLoop", "Entity main update loop"),
    (0x4FCC, "A09_OverlayEntry", "Overlay top-level entry point"),
])
