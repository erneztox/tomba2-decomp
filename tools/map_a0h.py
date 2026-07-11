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

# A0H (29) - same template as A0I
quick_map("A0H", [
    (0x0338, "A0H_BgEntityLoop", "Background entity iterator DAT_1f800154"),
    (0x055C, "A0H_GameStateDispatch", "Game state: dispatches entity kinds 0xC/0x1F"),
    (0x0900, "A0H_StateSwitch", "Player state switch (8 cases)"),
    (0x0D28, "A0H_GroundClamp", "Clamp Y to ground DAT_800bf812"),
    (0x0D88, "A0H_GroundClampConditional", "Ground clamp with DAT_800bf816 flag"),
    (0x0DF8, "A0H_DamageHandler", "Damage/collision: calls Entity_InitFull, sets knockback"),
    (0x0E74, "A0H_Stub", "Dead stub"),
    (0x0F4C, "A0H_ActiveEntityLoop", "Active entity iterator DAT_1f80013c"),
    (0x1010, "A0H_BgEntityLoop2", "Background entity iterator DAT_1f800148"),
    (0x1248, "A0H_EntityBehaviorInit", "Entity behavior init: state, animation, timers"),
    (0x12AC, "A0H_SpawnWithGTE", "Spawn entity with GTE position"),
    (0x13A0, "A0H_LevelInit", "Level init: reset player, set swim anim"),
    (0x1400, "A0H_LevelCleanup", "Level cleanup: clear flags, reset state"),
    (0x1458, "A0H_EntityDispatch6", "Entity state dispatch: 6 sub-states"),
    (0x15D8, "A0H_EntityStateHandler", "Entity state machine: action dispatch"),
    (0x18B8, "A0H_TimerSpawnHelper", "Timer spawn helper (0x5a countdown)"),
    (0x197C, "A0H_EntityStateHandler2", "Entity state machine variant"),
    (0x1C4C, "A0H_GridSpawner", "Grid entity spawner: nested loops"),
    (0x1D5C, "A0H_DialogHandler", "Dialog/text script handler"),
    (0x1ED4, "A0H_CollisionStateHandler", "Collision state: anim check, score events"),
    (0x1FBC, "A0H_GTE_TriangleProc", "GTE triangle processor"),
    (0x22A4, "A0H_GTE_QuadProc", "GTE quad processor"),
    (0x2620, "A0H_MaterialProcessor", "Material/color processor"),
    (0x2720, "A0H_GTE_Transform", "GTE matrix transform"),
    (0x29C4, "A0H_GTE_Projection", "GTE projection"),
    (0x2CF8, "A0H_MaterialHelper", "Material color helper"),
    (0x2D40, "A0H_ScreenTransform", "Screen-space transform"),
    (0x3020, "A0H_TriangleRasterizer", "Triangle rasterizer"),
    (0x358C, "A0H_OverlayLoader", "Overlay loader: Sys_LoadOverlay"),
])
