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

quick_map("A03", [
    (0x0088, "A03_EntityMain", "Main entity state machine: swim, collectibles, score system"),
    (0x08D4, "A03_CopyGTE_Matrix", "Copies GTE matrix (0x98-0xa6) from parent entity"),
    (0x0C2C, "A03_EventBitChecker", "Counts bits in entity bitfield, triggers UI sound, updates DAT_800bf9f8"),
    (0x0CAC, "A03_AnimLoader", "Animation loader: sets sprite data with optional extra param"),
    (0x0D44, "A03_PlayerStateMask", "Modifies player state flags (DAT_800e7e8d & 0xd0)"),
    (0x0F50, "A03_MainRenderUpdate", "Main render/update: ordering table, entity at DAT_1f800208"),
    (0x238C, "A03_RenderDispatch", "Render chain: UI_DrawOverlay -> Entity_DrawList -> EntityLoop_Active"),
    (0x23E0, "A03_EntitySpawnState", "Entity spawn state machine (4 states): spawn, animate, dealloc"),
    (0x279C, "A03_LevelInit_SpawnEntities", "Level init: spawns entities from DAT_8011ba48 table, DAT_800bf9f8 bitfield"),
    (0x2974, "A03_GTE_StateDispatch", "GTE state dispatcher with sin/cos matrix ops"),
    (0x2C1C, "A03_CollisionMath", "Collision math: reads DAT_8011bb00/bafe, abs + division"),
    (0x2E50, "A03_EntityGroupSetup", "Entity group setup: fields 0x08-0x0d from DAT_800ecfa0"),
    (0x36DC, "A03_GTE_SpawnEntity", "Spawns entity with GTE position via Entity_Spawn"),
    (0x39AC, "A03_EntityMovementState", "Entity movement: GTE + Entity_AnimFrame + velocity"),
    (0x4258, "A03_BossState_Phase1", "Boss state machine: large GTE operations, phase 1"),
    (0x49EC, "A03_BossState_Phase2", "Boss state machine: large GTE operations, phase 2"),
    (0x51C4, "A03_EntitySpeedControl", "Entity speed/timer control: checks field_0x60 pointer bounds"),
    (0x5498, "A03_EntityCameraState", "Entity state: camera flags (_DAT_1f80020c), Y pos check"),
    (0x55F4, "A03_EntityState_Dealloc", "Entity state machine (4 states): Entity_Dealloc on state 3"),
    (0x5898, "A03_EntityCollisionState", "Entity state: checks DAT_800bf80d, collision flags, field_0x6e"),
    (0x59C8, "A03_ScreenSpaceTransform", "Screen-space transform: sets GTE scale 16000, projection"),
    (0x5C98, "A03_TriangleRasterizer", "Triangle rasterizer: sorts vertices, scanline fill"),
    (0x6204, "A03_GPUPrimBuilder", "GPU primitive builder: creates sprite/triangle primitives"),
    (0x72F4, "A03_GTE_PrimitiveProcessor", "GTE primitive processor: transforms primitives through cop2"),
    (0x7A38, "A03_MaterialProcessor", "Material/color processor: GTE cop2, entity color list"),
    (0x7B64, "A03_ScreenTransform2", "Screen-space coordinate transform variant"),
    (0x7FC4, "A03_EntityBehaviorState", "Entity behavior state machine (4 states)"),
    (0x81BC, "A03_EntityParentState", "Entity state with parent tracking and velocity"),
    (0x8418, "A03_SpriteDataUpload", "Sprite data upload: calls GPU func with entity sprite ptr"),
    (0x8440, "A03_EntityStateHandler", "Entity state handler (4 states)"),
    (0x88C0, "A03_TopLevelDispatch", "Top-level dispatch: checks entity field_0x50 from DAT_1f800138"),
])
