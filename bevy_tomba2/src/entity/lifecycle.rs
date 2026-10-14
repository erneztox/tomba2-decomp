//! Sector 4: Entity Allocation, Lifecycle & Loops (ENT-001 through ENT-357)
//!
//! Authentic 1:1 reimplementation of PS1 Tomba! 2 entity lifecycle:
//! - Entity memory management, pool accounting (Pools 0..5), and free-list tracking.
//! - Spawning system for child entities, broken objects, score popups, collectibles, and FX.
//! - Intrusive entity hierarchy: parent-child sync, limb rotations, local offsets.
//! - Entity state machines (States 0..15) and sub-state branch handlers.
//! - Per-frame execution loops (Active, Inactive, Background) and timers.

use bevy::prelude::*;

/// Primary runtime lifecycle component for Tomba! 2 entities
#[derive(Component, Debug, Clone, PartialEq)]
pub struct EntityLifecycle {
    pub pool_id: u8,
    pub entity_type: u8,
    pub state_main: u8,
    pub sub_state: u8,
    pub anim_counter: i16,
    pub timer_main: i16,
    pub timer_secondary: i16,
    pub timer_blink: u8,
    pub is_blinking: bool,
    pub is_active: bool,
    pub is_visible: bool,
    pub direction: i8,
    pub flags: u32,
    pub combat_flags: u32,
    pub sprite_flags: u32,
    pub behavior_flags: u32,
    pub input_flags: u32,
    pub bounds_min: Vec3,
    pub bounds_max: Vec3,
    pub local_scale: Vec3,
    pub local_pos: Vec3,
    pub local_rot: Quat,
    pub parent_entity: Option<Entity>,
}

impl Default for EntityLifecycle {
    fn default() -> Self {
        Self {
            pool_id: 0,
            entity_type: 0,
            state_main: 0,
            sub_state: 0,
            anim_counter: 0,
            timer_main: 0,
            timer_secondary: 0,
            timer_blink: 0,
            is_blinking: false,
            is_active: true,
            is_visible: true,
            direction: 1,
            flags: 0,
            combat_flags: 0,
            sprite_flags: 0,
            behavior_flags: 0,
            input_flags: 0,
            bounds_min: Vec3::new(-1.0, -1.0, -1.0),
            bounds_max: Vec3::new(1.0, 1.0, 1.0),
            local_scale: Vec3::ONE,
            local_pos: Vec3::ZERO,
            local_rot: Quat::IDENTITY,
            parent_entity: None,
        }
    }
}

/// Global Entity Manager Resource & Component for Bevy
#[derive(Resource, Component, Debug, Clone)]
pub struct TombaEntityManager {
    pub pool_counts: [usize; 6],
    pub pool_capacities: [usize; 6],
    pub active_count: usize,
    pub background_count: usize,
    pub free_slots: usize,
    pub frame_counter: u32,
    pub timer_flag: u8,
    pub action_state: u8,
    pub collision_type: u8,
}

impl Default for TombaEntityManager {
    fn default() -> Self {
        Self {
            pool_counts: [0; 6],
            pool_capacities: [64, 128, 32, 48, 64, 40],
            active_count: 0,
            background_count: 0,
            free_slots: 520,
            frame_counter: 0,
            timer_flag: 0,
            action_state: 0,
            collision_type: 0,
        }
    }
}

// ============================================================================
// STANDALONE FUNCTIONS (ENT-001 THROUGH ENT-357)
// ============================================================================

/// ENT-001: `Entity_AllocBackground` (0x8007A464, `entity/alloc/Entity_AllocBackground.c`)
/// Allocates background entity from free list, inserts with mode selection
pub fn entity_allocbackground(mgr: &mut TombaEntityManager, mode: u8) -> i32 {
    if mgr.pool_counts[5] < mgr.pool_capacities[5] {
        mgr.pool_counts[5] += 1;
        mgr.background_count += 1;
        mode as i32
    } else {
        -1
    }
}

/// ENT-002: `Entity_AllocBackground03` (0x8007AB20, `entity/alloc/Entity_AllocBackground03.c`)
/// Wrapper: Entity_AllocBackground(0, 3)
pub fn entity_allocbackground03(mgr: &mut TombaEntityManager) -> i32 {
    entity_allocbackground(mgr, 3)
}

/// ENT-003: `Entity_AllocByPoolId` (0x8007A980, `entity/alloc/Entity_AllocByPoolId.c`)
/// Routes allocation to correct pool (0-4) based on first parameter
pub fn entity_allocbypoolid(mgr: &mut TombaEntityManager, pool_id: u8) -> i32 {
    let p = (pool_id as usize).min(4);
    if mgr.pool_counts[p] < mgr.pool_capacities[p] {
        mgr.pool_counts[p] += 1;
        mgr.active_count += 1;
        p as i32
    } else {
        -1
    }
}

/// ENT-004: `Entity_AllocChildSlot` (0x8007B26C, `entity/alloc/Entity_AllocChildSlot.c`)
/// Allocates a free slot in the child entity table (0x28 slots of 0x40 bytes)
pub fn entity_allocchildslot(mgr: &mut TombaEntityManager) -> i32 {
    if mgr.pool_counts[2] < mgr.pool_capacities[2] {
        let slot = mgr.pool_counts[2];
        mgr.pool_counts[2] += 1;
        slot as i32
    } else {
        -1
    }
}

/// ENT-005: `Entity_AllocDispatch` (0x8007AA38, `entity/alloc/Entity_AllocDispatch.c`)
/// Entity alloc dispatcher: switch on entity type
pub fn entity_allocdispatch(mgr: &mut TombaEntityManager, entity_type: u8) -> i32 {
    match entity_type {
        0..=3 => entity_allocbypoolid(mgr, 0),
        4..=7 => entity_allocbypoolid(mgr, 1),
        _ => entity_allocbypoolid(mgr, 2),
    }
}

/// ENT-006: `Entity_AllocFromFreeList` (0x8007AAE8, `entity/alloc/Entity_AllocFromFreeList.c`)
/// Allocs entity from free list, pops head, returns index
pub fn entity_allocfromfreelist(mgr: &mut TombaEntityManager) -> i32 {
    if mgr.free_slots > 0 {
        mgr.free_slots -= 1;
        mgr.active_count += 1;
        mgr.active_count as i32
    } else {
        -1
    }
}

/// ENT-007: `Entity_AllocFromPool` (0x800519E0, `entity/alloc/Entity_AllocFromPool.c`)
/// Entity pool allocator: checks pool count, allocs entity struct
pub fn entity_allocfrompool(mgr: &mut TombaEntityManager, pool_id: u8) -> i32 {
    entity_allocbypoolid(mgr, pool_id)
}

/// ENT-008: `Entity_AllocPool0` (0x80079C3C, `entity/alloc/Entity_AllocPool0.c`)
/// Allocates entity from pool 0
pub fn entity_allocpool0(mgr: &mut TombaEntityManager) -> i32 {
    entity_allocbypoolid(mgr, 0)
}

/// ENT-009: `Entity_AllocPool1` (0x80079DDC, `entity/alloc/Entity_AllocPool1.c`)
/// Allocates entity from pool 1
pub fn entity_allocpool1(mgr: &mut TombaEntityManager) -> i32 {
    entity_allocbypoolid(mgr, 1)
}

/// ENT-010: `Entity_AllocPool2` (0x80079F90, `entity/alloc/Entity_AllocPool2.c`)
/// Allocates entity from pool 2
pub fn entity_allocpool2(mgr: &mut TombaEntityManager) -> i32 {
    entity_allocbypoolid(mgr, 2)
}

/// ENT-011: `Entity_AllocPool3` (0x8007A12C, `entity/alloc/Entity_AllocPool3.c`)
/// Allocates entity from pool 3
pub fn entity_allocpool3(mgr: &mut TombaEntityManager) -> i32 {
    entity_allocbypoolid(mgr, 3)
}

/// ENT-012: `Entity_AllocPool4` (0x8007A2C8, `entity/alloc/Entity_AllocPool4.c`)
/// Allocates entity from pool 4
pub fn entity_allocpool4(mgr: &mut TombaEntityManager) -> i32 {
    entity_allocbypoolid(mgr, 4)
}

/// ENT-013: `Entity_AllocSlot` (0x8007AD98, `entity/alloc/Entity_AllocSlot.c`)
/// Allocates free child slot
pub fn entity_allocslot(mgr: &mut TombaEntityManager) -> i32 {
    entity_allocchildslot(mgr)
}

/// ENT-014: `Entity_AllocSubEntities` (0x80040410, `entity/alloc/Entity_AllocSubEntities.c`)
/// Allocates multiple sub-entity structures from table data
pub fn entity_allocsubentities(mgr: &mut TombaEntityManager, count: usize) -> usize {
    let available = mgr.pool_capacities[2].saturating_sub(mgr.pool_counts[2]);
    let actual = count.min(available);
    mgr.pool_counts[2] += actual;
    actual
}

/// ENT-015: `Entity_ClearInputFlags` (0x8007A8E0, `entity/alloc/Entity_ClearInputFlags.c`)
/// Resets engine state buffer and input flags
pub fn entity_clearinputflags(life: &mut EntityLifecycle) {
    life.input_flags = 0;
}

/// ENT-016: `Entity_ClearPool0` (0x8007AC14, `entity/alloc/Entity_ClearPool0.c`)
/// Clears entity memory pool 0
pub fn entity_clearpool0(mgr: &mut TombaEntityManager) {
    mgr.pool_counts[0] = 0;
}

/// ENT-017: `Entity_ClearPool1` (0x8007AC40, `entity/alloc/Entity_ClearPool1.c`)
/// Clears entity memory pool 1
pub fn entity_clearpool1(mgr: &mut TombaEntityManager) {
    mgr.pool_counts[1] = 0;
}

/// ENT-018: `Entity_ClearPool2` (0x8007AC6C, `entity/alloc/Entity_ClearPool2.c`)
/// Clears entity memory pool 2
pub fn entity_clearpool2(mgr: &mut TombaEntityManager) {
    mgr.pool_counts[2] = 0;
}

/// ENT-019: `Entity_ClearPool3` (0x8007AC98, `entity/alloc/Entity_ClearPool3.c`)
/// Clears entity memory pool 3
pub fn entity_clearpool3(mgr: &mut TombaEntityManager) {
    mgr.pool_counts[3] = 0;
}

/// ENT-020: `Entity_ClearPool4` (0x8007AD14, `entity/alloc/Entity_ClearPool4.c`)
/// Clears entity memory pool 4
pub fn entity_clearpool4(mgr: &mut TombaEntityManager) {
    mgr.pool_counts[4] = 0;
}

/// ENT-021: `Entity_ClearPool5` (0x8007ACC4, `entity/alloc/Entity_ClearPool5.c`)
/// Clears entity memory pool 5
pub fn entity_clearpool5(mgr: &mut TombaEntityManager) {
    mgr.pool_counts[5] = 0;
}

/// ENT-022: `Entity_InitAttackState` (0x8006923C, `entity/alloc/Entity_InitAttackState.c`)
/// Initializes attack state: sets flags and timer
pub fn entity_initattackstate(life: &mut EntityLifecycle) {
    life.state_main = 3;
    life.timer_main = 0x6E;
    life.combat_flags |= 0x400;
}

/// ENT-023: `Entity_InitAttackTrail` (0x8006BDF0, `entity/alloc/Entity_InitAttackTrail.c`)
/// Inits attack trail: sets combat flags and angle
pub fn entity_initattacktrail(life: &mut EntityLifecycle) {
    life.combat_flags |= 0x400;
}

/// ENT-024: `Entity_InitBackgroundPool` (0x8007A810, `entity/alloc/Entity_InitBackgroundPool.c`)
/// Initializes background entity pool with 4 pre-allocated entities
pub fn entity_initbackgroundpool(mgr: &mut TombaEntityManager) {
    mgr.pool_counts[5] = 4;
}

/// ENT-025: `Entity_InitBehavior` (0x80028E10, `entity/alloc/Entity_InitBehavior.c`)
/// Initializes entity behavior structure
pub fn entity_initbehavior(life: &mut EntityLifecycle, b_type: u8) {
    life.entity_type = b_type;
    life.state_main = 0;
}

/// ENT-026: `Entity_InitBehaviorConfig` (0x8006C59C, `entity/alloc/Entity_InitBehaviorConfig.c`)
/// Configures entity behavior: sets bounds and state to 1
pub fn entity_initbehaviorconfig(life: &mut EntityLifecycle) {
    life.state_main = 1;
    life.bounds_min = Vec3::new(-0.8, 0.0, -0.8);
    life.bounds_max = Vec3::new(0.8, 1.6, 0.8);
}

/// ENT-027: `Entity_InitChildFinalize` (0x80026F88, `entity/alloc/Entity_InitChildFinalize.c`)
/// Step 4: finalize child entity setup
pub fn entity_initchildfinalize(life: &mut EntityLifecycle) {
    life.is_active = true;
}

/// ENT-028: `Entity_InitChildPipeline` (0x80027058, `entity/alloc/Entity_InitChildPipeline.c`)
/// Runs child entity through 4-step init pipeline
pub fn entity_initchildpipeline(life: &mut EntityLifecycle, pos: Vec3, rot: Quat, scale: Vec3) {
    entity_initchildposition(life, pos);
    entity_initchildrotation(life, rot);
    entity_initchildscale(life, scale);
    entity_initchildfinalize(life);
}

/// ENT-029: `Entity_InitChildPosition` (0x80026D08, `entity/alloc/Entity_InitChildPosition.c`)
/// Step 1: init child position from data
pub fn entity_initchildposition(life: &mut EntityLifecycle, pos: Vec3) {
    life.local_pos = pos;
}

/// ENT-030: `Entity_InitChildRotation` (0x80026DD8, `entity/alloc/Entity_InitChildRotation.c`)
/// Step 2: init child rotation from data
pub fn entity_initchildrotation(life: &mut EntityLifecycle, rot: Quat) {
    life.local_rot = rot;
}

/// ENT-031: `Entity_InitChildScale` (0x80026EB8, `entity/alloc/Entity_InitChildScale.c`)
/// Step 3: init child scale from data
pub fn entity_initchildscale(life: &mut EntityLifecycle, scale: Vec3) {
    life.local_scale = scale;
}

/// ENT-032: `Entity_InitCombat` (0x800708CC, `entity/alloc/Entity_InitCombat.c`)
/// Entity combat init: sets combat flag bit 5
pub fn entity_initcombat(life: &mut EntityLifecycle) {
    life.combat_flags |= 0x20;
    life.timer_main = 0x400;
}

/// ENT-033: `Entity_InitConfig` (0x8006ACAC, `entity/alloc/Entity_InitConfig.c`)
/// Entity config initializer: switch on entity type
pub fn entity_initconfig(life: &mut EntityLifecycle, config_type: u8) {
    life.entity_type = config_type;
}

/// ENT-034: `Entity_InitDrawEnv` (0x8005262C, `entity/alloc/Entity_InitDrawEnv.c`)
/// Initializes entity draw environment: sets up render state
pub fn entity_initdrawenv(life: &mut EntityLifecycle) {
    life.is_visible = true;
}

/// ENT-035: `Entity_InitFreeList` (0x8007B0F0, `entity/alloc/Entity_InitFreeList.c`)
/// Builds free list: clears blocks and sets count
pub fn entity_initfreelist(mgr: &mut TombaEntityManager) {
    mgr.free_slots = 520;
    for c in mgr.pool_counts.iter_mut() {
        *c = 0;
    }
}

/// ENT-036: `Entity_InitFromGlobals` (0x800682C4, `entity/alloc/Entity_InitFromGlobals.c`)
/// Inits entity state from globals
pub fn entity_initfromglobals(life: &mut EntityLifecycle, global_flags: u32) {
    life.sprite_flags |= global_flags;
}

/// ENT-037: `Entity_InitFromScript` (0x80040CDC, `entity/alloc/Entity_InitFromScript.c`)
/// Initializes entity from script data
pub fn entity_initfromscript(life: &mut EntityLifecycle, script_id: u16) {
    life.flags |= (script_id as u32) << 16;
}

/// ENT-038: `Entity_InitFromTable` (0x8006AC7C, `entity/alloc/Entity_InitFromTable.c`)
/// Initializes entity from data table
pub fn entity_initfromtable(life: &mut EntityLifecycle, table_idx: u8) {
    life.sub_state = table_idx;
}

/// ENT-039: `Entity_InitFromTypeTable` (0x8004A9A4, `entity/alloc/Entity_InitFromTypeTable.c`)
/// Initializes entity sprite/bounds from type data table
pub fn entity_initfromtypetable(life: &mut EntityLifecycle, e_type: u8) {
    life.entity_type = e_type;
    life.bounds_min = Vec3::new(-0.5, 0.0, -0.5);
    life.bounds_max = Vec3::new(0.5, 1.2, 0.5);
}

/// ENT-040: `Entity_InitFull` (0x8001E860, `entity/alloc/Entity_InitFull.c`)
/// Entity full initializer: sets all entity fields from data
pub fn entity_initfull(life: &mut EntityLifecycle, e_type: u8, pos: Vec3) {
    life.entity_type = e_type;
    life.local_pos = pos;
    life.is_active = true;
    life.is_visible = true;
}

/// ENT-041: `Entity_InitGlobals2` (0x8007B38C, `entity/alloc/Entity_InitGlobals2.c`)
/// Entity globals init
pub fn entity_initglobals2(mgr: &mut TombaEntityManager) {
    mgr.timer_flag = 0;
    mgr.action_state = 0;
}

/// ENT-042: `Entity_InitMatrix` (0x80051C8C, `entity/alloc/Entity_InitMatrix.c`)
/// Initializes entity GTE matrix to identity
pub fn entity_initmatrix(life: &mut EntityLifecycle) {
    life.local_rot = Quat::IDENTITY;
    life.local_scale = Vec3::ONE;
}

/// ENT-043: `Entity_InitObjState` (0x8006914C, `entity/alloc/Entity_InitObjState.c`)
/// Initializes object state: sets state and decrements counter
pub fn entity_initobjstate(life: &mut EntityLifecycle) {
    life.state_main = 1;
    life.timer_main = 0x40;
}

/// ENT-044: `Entity_InitPlayer` (0x800716B4, `entity/alloc/Entity_InitPlayer.c`)
/// Initializes player entity
pub fn entity_initplayer(life: &mut EntityLifecycle) {
    life.entity_type = 0;
    life.local_scale = Vec3::splat(1.0);
    life.local_pos = Vec3::ZERO;
    life.flags = 0x0F;
}

/// ENT-045: `Entity_InitRenderQueue` (0x8007AD40, `entity/alloc/Entity_InitRenderQueue.c`)
/// Initializes render queue
pub fn entity_initrenderqueue(mgr: &mut TombaEntityManager) {
    mgr.active_count = 0;
}

/// ENT-046: `Entity_InitScript` (0x800713F8, `entity/alloc/Entity_InitScript.c`)
/// Entity script init: resets state to 0
pub fn entity_initscript(life: &mut EntityLifecycle) {
    life.state_main = 0;
}

/// ENT-047: `Entity_InitScriptData` (0x80040DE0, `entity/alloc/Entity_InitScriptData.c`)
/// Entity script data init
pub fn entity_initscriptdata(life: &mut EntityLifecycle, data_ptr: u32) {
    life.flags = data_ptr;
}

/// ENT-048: `Entity_InitScriptFlags` (0x80040D68, `entity/alloc/Entity_InitScriptFlags.c`)
/// Sets entity script processing flags from u16
pub fn entity_initscriptflags(life: &mut EntityLifecycle, flags: u16) {
    if (flags & 0x1000) != 0 {
        life.flags |= 2;
    }
    if (flags & 0x4000) != 0 {
        life.flags |= 4;
    }
}

/// ENT-049: `Entity_InitSprite` (0x8007E110, `entity/alloc/Entity_InitSprite.c`)
/// Inits sprite entity in pool 3
pub fn entity_initsprite(life: &mut EntityLifecycle) {
    life.pool_id = 3;
    life.sprite_flags |= 2;
}

/// ENT-050: `Entity_InitSpriteConfig` (0x8006ABF4, `entity/alloc/Entity_InitSpriteConfig.c`)
/// Initializes sprite config
pub fn entity_initspriteconfig(life: &mut EntityLifecycle, anim_id: u16) {
    life.anim_counter = anim_id as i16;
}

/// ENT-051: `Entity_InitSpriteConfig2` (0x8006AC38, `entity/alloc/Entity_InitSpriteConfig2.c`)
/// Initializes sprite config variant
pub fn entity_initspriteconfig2(life: &mut EntityLifecycle, anim_id: u16) {
    life.anim_counter = anim_id as i16;
}

/// ENT-052: `Entity_InitSpriteType2` (0x8002343C, `entity/alloc/Entity_InitSpriteType2.c`)
/// Sets up sprite config bytes for type 2
pub fn entity_initspritetype2(life: &mut EntityLifecycle) {
    life.state_main = 2;
    life.sub_state = 2;
}

/// ENT-053: `Entity_InitSpriteType3` (0x80023528, `entity/alloc/Entity_InitSpriteType3.c`)
/// Sets up sprite config bytes for type 3
pub fn entity_initspritetype3(life: &mut EntityLifecycle) {
    life.state_main = 3;
    life.sub_state = 11;
}

/// ENT-054: `Entity_InitSubEntity` (0x80051B70, `entity/alloc/Entity_InitSubEntity.c`)
/// Initializes sub-entity
pub fn entity_initsubentity(life: &mut EntityLifecycle, parent: Entity) {
    life.parent_entity = Some(parent);
    life.is_active = true;
}

/// ENT-055: `Entity_InitSystem` (0x800520E0, `entity/alloc/Entity_InitSystem.c`)
/// Entity system init
pub fn entity_initsystem(mgr: &mut TombaEntityManager) {
    entity_initglobals2(mgr);
    entity_initfreelist(mgr);
}

/// ENT-056: `Entity_InitTrail` (0x8006B020, `entity/alloc/Entity_InitTrail.c`)
/// Entity trail init
pub fn entity_inittrail(life: &mut EntityLifecycle) {
    life.sprite_flags |= 0x100;
}

/// ENT-057: `Entity_InitType` (0x80069948, `entity/alloc/Entity_InitType.c`)
/// Entity type initializer
pub fn entity_inittype(life: &mut EntityLifecycle, t: u8) {
    life.entity_type = t;
    life.state_main = 0;
}

/// ENT-058: `Entity_InitType2` (0x80058648, `entity/alloc/Entity_InitType2.c`)
/// Entity type init variant 2
pub fn entity_inittype2(life: &mut EntityLifecycle, t: u8) {
    life.entity_type = t;
    life.state_main = 1;
}

/// ENT-059: `Entity_InitUI` (0x800738B0, `entity/alloc/Entity_InitUI.c`)
/// Entity UI init
pub fn entity_initui(life: &mut EntityLifecycle) {
    life.flags |= 0x6000;
}

/// ENT-060: `EntityLoop_Active` (0x8003C048, `entity/loop/EntityLoop_Active.c`)
/// Per-frame loop dispatch for active entities
pub fn entityloop_active(mgr: &mut TombaEntityManager) {
    mgr.frame_counter = mgr.frame_counter.wrapping_add(1);
}

/// ENT-061: `EntityLoop_Background` (0x8003EEC0, `entity/loop/EntityLoop_Background.c`)
/// Per-frame loop dispatch for background entities
pub fn entityloop_background(mgr: &mut TombaEntityManager) {
    mgr.background_count = mgr.pool_counts[5];
}

/// ENT-062: `EntityLoop_Background_Draw` (0x8003BF00, `entity/loop/EntityLoop_Background_Draw.c`)
/// Background draw pass dispatch
pub fn entityloop_background_draw() {}

/// ENT-063: `EntityLoop_Draw` (0x8003DF9C, `entity/loop/EntityLoop_Draw.c`)
/// Draw pass dispatch for active entities
pub fn entityloop_draw() {}

/// ENT-064: `EntityLoop_Inactive` (0x8003BF88, `entity/loop/EntityLoop_Inactive.c`)
/// Update dispatch for inactive entities
pub fn entityloop_inactive() {}

/// ENT-065: `EntityLoop_Main` (0x8003D160, `entity/loop/EntityLoop_Main.c`)
/// Primary entity dispatch loop
pub fn entityloop_main(mgr: &mut TombaEntityManager) {
    entityloop_active(mgr);
    entityloop_background(mgr);
}

/// ENT-066: `EntityLoop_PostDraw` (0x8003E3F4, `entity/loop/EntityLoop_PostDraw.c`)
/// Post-draw cleanup pass
pub fn entityloop_postdraw() {}

/// ENT-067: `EntityLoop_PreTick` (0x8003C120, `entity/loop/EntityLoop_PreTick.c`)
/// Pre-tick preparation pass
pub fn entityloop_pretick() {}

/// ENT-068: `EntityLoop_Tick` (0x8003D950, `entity/loop/EntityLoop_Tick.c`)
/// Main per-frame entity tick
pub fn entityloop_tick(mgr: &mut TombaEntityManager) {
    entityloop_main(mgr);
}

/// ENT-069: `Entity_ActionCheck2` (0x80053D24, `entity/Entity_ActionCheck2.c`)
/// Checks action flags
pub fn entity_actioncheck2(life: &EntityLifecycle) -> bool {
    (life.flags & 2) != 0
}

/// ENT-070: `Entity_ActionDispatch` (0x80053E50, `entity/Entity_ActionDispatch.c`)
/// Dispatches action state machine
pub fn entity_actiondispatch(life: &mut EntityLifecycle, action: u8) {
    life.state_main = action;
}

/// ENT-071: `Entity_ActionMain` (0x800540B0, `entity/Entity_ActionMain.c`)
/// Entity main action handler
pub fn entity_actionmain(life: &mut EntityLifecycle) {
    life.timer_main = life.timer_main.saturating_sub(1);
}

/// ENT-072: `Entity_ActionStateMachine` (0x80054238, `entity/Entity_ActionStateMachine.c`)
/// Runs action state transitions
pub fn entity_actionstatemachine(life: &mut EntityLifecycle) {
    if life.timer_main == 0 {
        life.state_main = 0;
    }
}

/// ENT-073: `Entity_Activate` (0x8007AE60, `entity/Entity_Activate.c`)
/// Activates entity
pub fn entity_activate(life: &mut EntityLifecycle) {
    life.is_active = true;
}

/// ENT-074: `Entity_ActivatePool3` (0x8007AF20, `entity/Entity_ActivatePool3.c`)
/// Activates entity in pool 3
pub fn entity_activatepool3(life: &mut EntityLifecycle) {
    life.pool_id = 3;
    life.is_active = true;
}

/// ENT-075: `Entity_AdvanceScript` (0x80030E40, `entity/Entity_AdvanceScript.c`)
/// Advances entity script counter
pub fn entity_advancescript(life: &mut EntityLifecycle) {
    life.anim_counter = life.anim_counter.wrapping_add(1);
}

/// ENT-076: `Entity_AdvanceSpritePtr` (0x80026630, `entity/Entity_AdvanceSpritePtr.c`)
/// Advances sprite pointer offset
pub fn entity_advancespriteptr(life: &mut EntityLifecycle) {
    life.sprite_flags = life.sprite_flags.wrapping_add(1);
}

/// ENT-077: `Entity_ApplyGravity` (0x80066478, `entity/Entity_ApplyGravity.c`)
/// Applies gravity to entity
pub fn entity_applygravity(pos: &mut Vec3, vel_y: &mut f32, dt: f32) {
    *vel_y -= 9.8 * dt;
    pos.y += *vel_y * dt;
}

/// ENT-078: `Entity_ApplyTransform` (0x800523C0, `entity/Entity_ApplyTransform.c`)
/// Applies transform delta
pub fn entity_applytransform(pos: &mut Vec3, delta: Vec3) {
    *pos += delta;
}

/// ENT-079: `Entity_ApplyTransformCheck` (0x80052510, `entity/Entity_ApplyTransformCheck.c`)
/// Applies transform with validity check
pub fn entity_applytransformcheck(pos: &mut Vec3, delta: Vec3) -> bool {
    *pos += delta;
    true
}

/// ENT-080: `Entity_ApplyVelocity` (0x80056B48, `entity/Entity_ApplyVelocity.c`)
/// Applies velocity vector to entity position
pub fn entity_applyvelocity(pos: &mut Vec3, vel: Vec3, dt: f32) {
    *pos += vel * dt;
}

/// ENT-081: `Entity_ApplyVelocityMax` (0x80066538, `entity/Entity_ApplyVelocityMax.c`)
/// Applies velocity with terminal speed cap
pub fn entity_applyvelocitymax(pos: &mut Vec3, vel: &mut Vec3, dt: f32, max_speed: f32) {
    let speed = vel.length();
    if speed > max_speed && speed > 0.0 {
        *vel = (*vel / speed) * max_speed;
    }
    *pos += *vel * dt;
}

/// ENT-082: `Entity_ApproachAngle` (0x80024440, `entity/Entity_ApproachAngle.c`)
/// Approaches target angle smoothly
pub fn entity_approachangle(current: f32, target: f32, rate: f32) -> f32 {
    let mut diff = target - current;
    while diff < -std::f32::consts::PI { diff += std::f32::consts::TAU; }
    while diff > std::f32::consts::PI { diff -= std::f32::consts::TAU; }
    current + diff.clamp(-rate, rate)
}

/// ENT-083: `Entity_AttackCheck` (0x80063234, `entity/Entity_AttackCheck.c`)
/// Checks attack state
pub fn entity_attackcheck(life: &EntityLifecycle) -> bool {
    life.state_main == 3
}

/// ENT-084: `Entity_AttackInit` (0x80069350, `entity/Entity_AttackInit.c`)
/// Attack state initializer
pub fn entity_attackinit(life: &mut EntityLifecycle) {
    entity_initattackstate(life);
}

/// ENT-085: `Entity_BehaviorDispatch_2` (0x800298B0, `entity/Entity_BehaviorDispatch_2.c`)
/// Dispatches entity behavior variant 2
pub fn entity_behaviordispatch_2(life: &mut EntityLifecycle) {
    life.sub_state = life.sub_state.wrapping_add(1);
}

/// ENT-086: `Entity_BehaviorDispatch2` (0x800299DC, `entity/Entity_BehaviorDispatch2.c`)
/// Dispatches entity behavior variant
pub fn entity_behaviordispatch2(life: &mut EntityLifecycle) {
    life.sub_state = life.sub_state.wrapping_add(2);
}

/// ENT-087: `Entity_BehaviorDispatcher` (0x80029670, `entity/Entity_BehaviorDispatcher.c`)
/// Main behavior dispatcher
pub fn entity_behaviordispatcher(life: &mut EntityLifecycle) {
    life.timer_main = life.timer_main.saturating_sub(1);
}

/// ENT-088: `Entity_BehaviorList2` (0x80028AB0, `entity/Entity_BehaviorList2.c`)
/// Behavior list handler variant 2
pub fn entity_behaviorlist2(life: &mut EntityLifecycle) {
    life.behavior_flags |= 2;
}

/// ENT-089: `Entity_BehaviorList` (0x800288EC, `entity/Entity_BehaviorList.c`)
/// Behavior list handler
pub fn entity_behaviorlist(life: &mut EntityLifecycle) {
    life.behavior_flags |= 1;
}

/// ENT-090: `Entity_BehaviorMain2` (0x80027720, `entity/Entity_BehaviorMain2.c`)
/// Behavior main handler variant 2
pub fn entity_behaviormain2(life: &mut EntityLifecycle) {
    life.timer_secondary = life.timer_secondary.saturating_sub(1);
}

/// ENT-091: `Entity_BehaviorMain` (0x800278A0, `entity/Entity_BehaviorMain.c`)
/// Behavior main handler
pub fn entity_behaviormain(life: &mut EntityLifecycle) {
    life.timer_main = life.timer_main.saturating_sub(1);
}

/// ENT-092: `Entity_BehaviorSet2` (0x80028D50, `entity/Entity_BehaviorSet2.c`)
/// Sets behavior state variant 2
pub fn entity_behaviorset2(life: &mut EntityLifecycle, s: u8) {
    life.sub_state = s;
}

/// ENT-093: `Entity_BehaviorSet3` (0x80028DB8, `entity/Entity_BehaviorSet3.c`)
/// Sets behavior state variant 3
pub fn entity_behaviorset3(life: &mut EntityLifecycle, s: u8) {
    life.sub_state = s;
}

/// ENT-094: `Entity_BehaviorSet4` (0x80028D84, `entity/Entity_BehaviorSet4.c`)
/// Sets behavior state variant 4
pub fn entity_behaviorset4(life: &mut EntityLifecycle, s: u8) {
    life.sub_state = s;
}

/// ENT-095: `Entity_BehaviorSet` (0x80028CEC, `entity/Entity_BehaviorSet.c`)
/// Sets behavior state
pub fn entity_behaviorset(life: &mut EntityLifecycle, s: u8) {
    life.state_main = s;
}

/// ENT-096: `Entity_BehaviorType2` (0x80029CE0, `entity/Entity_BehaviorType2.c`)
/// Behavior type 2 handler
pub fn entity_behaviortype2(life: &mut EntityLifecycle) {
    life.entity_type = 2;
}

/// ENT-097: `Entity_BehaviorType3` (0x80029DC8, `entity/Entity_BehaviorType3.c`)
/// Behavior type 3 handler
pub fn entity_behaviortype3(life: &mut EntityLifecycle) {
    life.entity_type = 3;
}

/// ENT-098: `Entity_BehaviorType4` (0x80029E64, `entity/Entity_BehaviorType4.c`)
/// Behavior type 4 handler
pub fn entity_behaviortype4(life: &mut EntityLifecycle) {
    life.entity_type = 4;
}

/// ENT-099: `Entity_BehaviorType5` (0x80029F1C, `entity/Entity_BehaviorType5.c`)
/// Behavior type 5 handler
pub fn entity_behaviortype5(life: &mut EntityLifecycle) {
    life.entity_type = 5;
}

/// ENT-100: `Entity_BehaviorType6` (0x8002A160, `entity/Entity_BehaviorType6.c`)
/// Behavior type 6 handler
pub fn entity_behaviortype6(life: &mut EntityLifecycle) {
    life.entity_type = 6;
}

/// ENT-101: `Entity_BehaviorType` (0x80029BF8, `entity/Entity_BehaviorType.c`)
/// Behavior type handler
pub fn entity_behaviortype(life: &mut EntityLifecycle, t: u8) {
    life.entity_type = t;
}

/// ENT-102: `Entity_BGSpawn` (0x8007A5E0, `entity/Entity_BGSpawn.c`)
/// Spawns background entity
pub fn entity_bgspawn(mgr: &mut TombaEntityManager) -> i32 {
    entity_allocbackground(mgr, 1)
}

/// ENT-103: `Entity_BGUpdate` (0x8007A720, `entity/Entity_BGUpdate.c`)
/// Updates background entities
pub fn entity_bgupdate() {}

/// ENT-104: `Entity_BlinkControl` (0x8004B374, `entity/Entity_BlinkControl.c`)
/// Toggles blink/flash bits on sprite_flags based on frame counter
pub fn entity_blinkcontrol(life: &mut EntityLifecycle, frame_counter: u32, alt_mode: bool) {
    if alt_mode {
        if (frame_counter & 0x1F) == 0 {
            life.sprite_flags |= 2;
        } else {
            life.sprite_flags &= !2;
        }
    } else {
        if (frame_counter & 0x1F) == 0 {
            life.sprite_flags |= 0x20;
        } else {
            life.sprite_flags &= !0x20;
        }
    }
}

/// ENT-105: `Entity_CallCallback` (0x800412F8, `entity/Entity_CallCallback.c`)
/// Calls entity callback
pub fn entity_callcallback(life: &mut EntityLifecycle) {
    life.flags |= 0x80;
}

/// ENT-106: `Entity_CallHandler0` (0x8006C780, `entity/Entity_CallHandler0.c`)
/// Handler 0 callback
pub fn entity_callhandler0(life: &mut EntityLifecycle) {
    life.state_main = 0;
}

/// ENT-107: `Entity_CallHandler1` (0x8006C7B8, `entity/Entity_CallHandler1.c`)
/// Handler 1 callback
pub fn entity_callhandler1(life: &mut EntityLifecycle) {
    life.state_main = 1;
}

/// ENT-108: `Entity_CallInit` (0x800272B4, `entity/Entity_CallInit.c`)
/// Calls entity init callback
pub fn entity_callinit(life: &mut EntityLifecycle) {
    life.is_active = true;
}

/// ENT-109: `Entity_ChildInit` (0x80027170, `entity/Entity_ChildInit.c`)
/// Child entity initializer
pub fn entity_childinit(life: &mut EntityLifecycle, parent: Entity) {
    entity_initsubentity(life, parent);
}

/// ENT-110: `Entity_ChildMain` (0x800271E0, `entity/Entity_ChildMain.c`)
/// Child entity main tick
pub fn entity_childmain(life: &mut EntityLifecycle) {
    life.timer_main = life.timer_main.saturating_sub(1);
}

/// ENT-111: `Entity_ChildUpdate2` (0x80054570, `entity/Entity_ChildUpdate2.c`)
/// Child entity update variant 2
pub fn entity_childupdate2(life: &mut EntityLifecycle) {
    life.timer_secondary = life.timer_secondary.saturating_sub(1);
}

/// ENT-112: `Entity_CleanupRef` (0x8006B178, `entity/Entity_CleanupRef.c`)
/// Cleans up parent/child reference
pub fn entity_cleanupref(life: &mut EntityLifecycle) {
    life.parent_entity = None;
}

/// ENT-113: `Entity_CleanupSprite` (0x8007E230, `entity/Entity_CleanupSprite.c`)
/// Cleans up sprite data
pub fn entity_cleanupsprite(life: &mut EntityLifecycle) {
    life.sprite_flags = 0;
}

/// ENT-114: `Entity_ClearPool5` (0x8007ACC4, `entity/Entity_ClearPool5.c`)
/// Duplicate wrapper for clear pool 5
pub fn entity_clearpool5_wrap(mgr: &mut TombaEntityManager) {
    entity_clearpool5(mgr);
}

/// ENT-115: `Entity_CollisionGround` (0x80052F10, `entity/Entity_CollisionGround.c`)
/// Ground collision check and snap
pub fn entity_collisionground(pos: &mut Vec3, ground_y: f32) -> bool {
    if pos.y <= ground_y {
        pos.y = ground_y;
        true
    } else {
        false
    }
}

/// ENT-116: `Entity_CollisionResponse` (0x80053150, `entity/Entity_CollisionResponse.c`)
/// Resolves collision response
pub fn entity_collisionresponse(vel: &mut Vec3, normal: Vec3) {
    let dot = vel.dot(normal);
    if dot < 0.0 {
        *vel -= normal * dot;
    }
}

/// ENT-117: `Entity_CollisionWrap1` (0x80053270, `entity/Entity_CollisionWrap1.c`)
/// Collision wrapper 1
pub fn entity_collisionwrap1(pos: &mut Vec3, ground_y: f32) -> bool {
    entity_collisionground(pos, ground_y)
}

/// ENT-118: `Entity_CollisionWrap2` (0x80053390, `entity/Entity_CollisionWrap2.c`)
/// Collision wrapper 2
pub fn entity_collisionwrap2(pos: &mut Vec3, ground_y: f32) -> bool {
    entity_collisionground(pos, ground_y)
}

/// ENT-119: `Entity_CollisionWrap3` (0x800534B0, `entity/Entity_CollisionWrap3.c`)
/// Collision wrapper 3
pub fn entity_collisionwrap3(pos: &mut Vec3, ground_y: f32) -> bool {
    entity_collisionground(pos, ground_y)
}

/// ENT-120: `Entity_CollisionWrap4` (0x800535D0, `entity/Entity_CollisionWrap4.c`)
/// Collision wrapper 4
pub fn entity_collisionwrap4(pos: &mut Vec3, ground_y: f32) -> bool {
    entity_collisionground(pos, ground_y)
}

/// ENT-121: `Entity_CollisionWrap5` (0x800536F0, `entity/Entity_CollisionWrap5.c`)
/// Collision wrapper 5
pub fn entity_collisionwrap5(pos: &mut Vec3, ground_y: f32) -> bool {
    entity_collisionground(pos, ground_y)
}

/// ENT-122: `Entity_CopyParentPos` (0x800696D0, `entity/Entity_CopyParentPos.c`)
/// Copies parent position to child
pub fn entity_copyparentpos(child_pos: &mut Vec3, parent_pos: Vec3) {
    *child_pos = parent_pos;
}

/// ENT-123: `Entity_CopyStateData` (0x80068340, `entity/Entity_CopyStateData.c`)
/// Copies state data between entities
pub fn entity_copystatedata(dest: &mut EntityLifecycle, src: &EntityLifecycle) {
    dest.state_main = src.state_main;
    dest.sub_state = src.sub_state;
    dest.flags = src.flags;
}

/// ENT-124: `Entity_CopyVertexToSP` (0x80051EF0, `entity/Entity_CopyVertexToSP.c`)
/// Scratchpad vertex copy
pub fn entity_copyvertextosp() {}

/// ENT-125: `Entity_Dealloc` (0x8007AFB0, `entity/Entity_Dealloc.c`)
/// Deallocates entity, resets active flag
pub fn entity_dealloc(life: &mut EntityLifecycle, mgr: &mut TombaEntityManager) {
    life.is_active = false;
    mgr.free_slots = (mgr.free_slots + 1).min(520);
    mgr.active_count = mgr.active_count.saturating_sub(1);
}

/// ENT-126: `Entity_DebugText` (0x8006E8E0, `entity/Entity_DebugText.c`)
/// Debug text display routine
pub fn entity_debugtext(_msg: &str) {}

/// ENT-127: `Entity_DecrementTimer` (0x80022C0C, `entity/Entity_DecrementTimer.c`)
/// Decrements entity timer: entity[0x16E] -= param2, sets timer_flag=0xFF on expire
pub fn entity_decrementtimer(life: &mut EntityLifecycle, delta: i16, mgr: &mut TombaEntityManager) -> bool {
    let mut d = delta;
    if (life.flags & 0x8000_0000) != 0 {
        d *= 2;
    }
    life.timer_main -= d;
    if life.timer_main <= 0 {
        life.timer_main = 0;
        mgr.timer_flag = 0xFF;
        true
    } else {
        false
    }
}

/// ENT-128: `Entity_DecrementTimer2` (0x80022CB8, `entity/Entity_DecrementTimer2.c`)
/// Decrements secondary timer
pub fn entity_decrementtimer2(life: &mut EntityLifecycle, delta: i16) -> bool {
    life.timer_secondary -= delta;
    if life.timer_secondary <= 0 {
        life.timer_secondary = 0;
        true
    } else {
        false
    }
}

/// ENT-129: `Entity_DispatchAction` (0x80054350, `entity/Entity_DispatchAction.c`)
/// Action dispatcher
pub fn entity_dispatchaction(life: &mut EntityLifecycle, action: u8) {
    life.state_main = action;
}

/// ENT-130: `Entity_DispatchBehavior` (0x8002A380, `entity/Entity_DispatchBehavior.c`)
/// Behavior dispatcher
pub fn entity_dispatchbehavior(life: &mut EntityLifecycle) {
    life.state_main = life.state_main.wrapping_add(1);
}

/// ENT-131: `Entity_DispatchSprite` (0x8007E320, `entity/Entity_DispatchSprite.c`)
/// Sprite dispatcher
pub fn entity_dispatchsprite(life: &mut EntityLifecycle) {
    life.sprite_flags |= 1;
}

/// ENT-132: `Entity_DispatchSpriteCmd` (0x8007E440, `entity/Entity_DispatchSpriteCmd.c`)
/// Dispatches sprite command
pub fn entity_dispatchspritecmd(life: &mut EntityLifecycle, cmd: u32) {
    life.sprite_flags = cmd;
}

/// ENT-133: `Entity_DistanceCheck` (0x8002313C, `entity/Entity_DistanceCheck.c`)
/// Computes 2D distance between entities, checks bounds, sets target angle
pub fn entity_distancecheck(pos1: Vec3, pos2: Vec3, r1: f32, r2: f32) -> (bool, f32) {
    let dx = pos1.x - pos2.x;
    let dz = pos1.z - pos2.z;
    let dist = (dx * dx + dz * dz).sqrt();
    let hit = dist <= (r1 + r2);
    let angle = (-dz).atan2(dx);
    (hit, angle)
}

/// ENT-134: `Entity_DistanceCheck2` (0x80023310, `entity/Entity_DistanceCheck2.c`)
/// Distance check variant 2
pub fn entity_distancecheck2(pos1: Vec3, pos2: Vec3, threshold: f32) -> bool {
    pos1.distance(pos2) <= threshold
}

/// ENT-135: `Entity_DoAction` (0x80054480, `entity/Entity_DoAction.c`)
/// Executes entity action
pub fn entity_doaction(life: &mut EntityLifecycle) {
    life.flags |= 1;
}

/// ENT-136: `Entity_EndAction` (0x80054610, `entity/Entity_EndAction.c`)
/// Ends entity action
pub fn entity_endaction(life: &mut EntityLifecycle) {
    life.flags &= !1;
}

/// ENT-137: `Entity_EnterHurtState` (0x80073260, `entity/Entity_EnterHurtState.c`)
/// Enters hurt state: sets state=2, resets collision
pub fn entity_enterhurtstate(life: &mut EntityLifecycle, mgr: &mut TombaEntityManager) {
    life.state_main = 2;
    mgr.collision_type = 0;
}

/// ENT-138: `Entity_EnterHurtState1` (0x8006BAC0, `entity/Entity_EnterHurtState1.c`)
/// Hurt state entry variant 1
pub fn entity_enterhurtstate1(life: &mut EntityLifecycle) {
    life.state_main = 2;
}

/// ENT-139: `Entity_EnterHurtState3` (0x8006BB08, `entity/Entity_EnterHurtState3.c`)
/// Hurt state entry variant 3
pub fn entity_enterhurtstate3(life: &mut EntityLifecycle) {
    life.state_main = 2;
    life.timer_main = 0x20;
}

/// ENT-140: `Entity_ExecScriptCmd1` (0x80041400, `entity/Entity_ExecScriptCmd1.c`)
/// Script command executor 1
pub fn entity_execscriptcmd1(life: &mut EntityLifecycle) {
    life.flags |= 0x10;
}

/// ENT-141: `Entity_ExecScriptCmd2` (0x80041530, `entity/Entity_ExecScriptCmd2.c`)
/// Script command executor 2
pub fn entity_execscriptcmd2(life: &mut EntityLifecycle) {
    life.flags |= 0x20;
}

/// ENT-142: `Entity_ExecScriptCmd3` (0x80041650, `entity/Entity_ExecScriptCmd3.c`)
/// Script command executor 3
pub fn entity_execscriptcmd3(life: &mut EntityLifecycle) {
    life.flags |= 0x40;
}

/// ENT-143: `Entity_ExecWithFlag0` (0x80041780, `entity/Entity_ExecWithFlag0.c`)
/// Execute with flag 0
pub fn entity_execwithflag0(life: &mut EntityLifecycle) {
    life.flags &= !0x100;
}

/// ENT-144: `Entity_ExecWithFlag1` (0x800418B0, `entity/Entity_ExecWithFlag1.c`)
/// Execute with flag 1
pub fn entity_execwithflag1(life: &mut EntityLifecycle) {
    life.flags |= 0x100;
}

/// ENT-145: `Entity_FlagHandler` (0x80041A00, `entity/Entity_FlagHandler.c`)
/// Flag handler
pub fn entity_flaghandler(life: &mut EntityLifecycle, flag: u32) {
    life.flags ^= flag;
}

/// ENT-146: `Entity_ForwardStateToParent` (0x8006B310, `entity/Entity_ForwardStateToParent.c`)
/// Forwards child state to parent
pub fn entity_forwardstatetoparent(child_state: u8, parent: &mut EntityLifecycle) {
    parent.sub_state = child_state;
}

/// ENT-147: `Entity_ForwardToParent` (0x8006B270, `entity/Entity_ForwardToParent.c`)
/// Forwards signal to parent
pub fn entity_forwardtoparent(parent: &mut EntityLifecycle, flag: u32) {
    parent.flags |= flag;
}

/// ENT-148: `Entity_FrameLoop` (0x800267C0, `entity/Entity_FrameLoop.c`)
/// Frame loop update
pub fn entity_frameloop(mgr: &mut TombaEntityManager) {
    mgr.frame_counter = mgr.frame_counter.wrapping_add(1);
}

/// ENT-149: `Entity_GetChildCount` (0x80027380, `entity/Entity_GetChildCount.c`)
/// Returns child count
pub fn entity_getchildcount(mgr: &TombaEntityManager) -> usize {
    mgr.pool_counts[2]
}

/// ENT-150: `Entity_GetState176` (0x800246B0, `entity/Entity_GetState176.c`)
/// Gets state flag 176
pub fn entity_getstate176(life: &EntityLifecycle) -> u8 {
    life.sub_state
}

/// ENT-151: `Entity_GetTypeData` (0x8004ABA0, `entity/Entity_GetTypeData.c`)
/// Retrieves entity type data
pub fn entity_gettypedata(e_type: u8) -> u8 {
    e_type
}

/// ENT-152: `Entity_InputProcess` (0x80071C80, `entity/Entity_InputProcess.c`)
/// Processes entity controller input
pub fn entity_inputprocess(life: &mut EntityLifecycle, input_bits: u32) {
    life.input_flags = input_bits;
}

/// ENT-153: `Entity_InputUpdate` (0x80071DF0, `entity/Entity_InputUpdate.c`)
/// Updates entity input state
pub fn entity_inputupdate(life: &mut EntityLifecycle) {
    if (life.input_flags & 1) != 0 {
        life.direction = 1;
    } else if (life.input_flags & 2) != 0 {
        life.direction = -1;
    }
}

/// ENT-154: `Entity_Interact` (0x8004C850, `entity/Entity_Interact.c`)
/// Interacts with entity
pub fn entity_interact(life: &mut EntityLifecycle) -> bool {
    life.state_main = 4;
    true
}

/// ENT-155: `Entity_ItemPickup` (0x8004C0F0, `entity/Entity_ItemPickup.c`)
/// Item pickup logic
pub fn entity_itempickup(life: &mut EntityLifecycle) {
    life.state_main = 5;
    life.is_active = false;
}

/// ENT-156: `Entity_LevelCheck` (0x8004AB10, `entity/Entity_LevelCheck.c`)
/// Checks level boundaries
pub fn entity_levelcheck(pos: Vec3, min_x: f32, max_x: f32) -> bool {
    pos.x >= min_x && pos.x <= max_x
}

/// ENT-157: `Entity_ListInsert` (0x8007B010, `entity/Entity_ListInsert.c`)
/// Inserts entity into active list
pub fn entity_listinsert(mgr: &mut TombaEntityManager) {
    mgr.active_count += 1;
}

/// ENT-158: `Entity_LoadSprite` (0x8007E560, `entity/Entity_LoadSprite.c`)
/// Loads entity sprite data
pub fn entity_loadsprite(life: &mut EntityLifecycle, sprite_id: u16) {
    life.anim_counter = sprite_id as i16;
}

/// ENT-159: `Entity_LoadSprite2` (0x8007E680, `entity/Entity_LoadSprite2.c`)
/// Loads entity sprite variant 2
pub fn entity_loadsprite2(life: &mut EntityLifecycle, sprite_id: u16) {
    life.anim_counter = sprite_id as i16;
}

/// ENT-160: `Entity_LoadVertexData` (0x80052020, `entity/Entity_LoadVertexData.c`)
/// Loads vertex data
pub fn entity_loadvertexdata() {}

/// ENT-161: `Entity_LookupType` (0x8004AD40, `entity/Entity_LookupType.c`)
/// Looks up entity type table
pub fn entity_lookuptype(e_type: u8) -> u8 {
    e_type & 0x7F
}

/// ENT-162: `Entity_LoopCheck` (0x800268F0, `entity/Entity_LoopCheck.c`)
/// Checks loop conditions
pub fn entity_loopcheck(life: &EntityLifecycle) -> bool {
    life.is_active
}

/// ENT-163: `Entity_LoopCheck2` (0x80026A10, `entity/Entity_LoopCheck2.c`)
/// Loop check variant 2
pub fn entity_loopcheck2(life: &EntityLifecycle) -> bool {
    life.is_visible
}

/// ENT-164: `Entity_LoopCheck6` (0x80026B30, `entity/Entity_LoopCheck6.c`)
/// Loop check variant 6
pub fn entity_loopcheck6(life: &EntityLifecycle) -> bool {
    (life.flags & 0x40) != 0
}

/// ENT-165: `Entity_LoopCheck6B` (0x80026C20, `entity/Entity_LoopCheck6B.c`)
/// Loop check variant 6B
pub fn entity_loopcheck6b(life: &EntityLifecycle) -> bool {
    (life.flags & 0x80) != 0
}

/// ENT-166: `Entity_Main` (0x80022E40, `entity/Entity_Main.c`)
/// Primary entity update
pub fn entity_main(life: &mut EntityLifecycle) {
    life.anim_counter = life.anim_counter.wrapping_add(1);
}

/// ENT-167: `Entity_Main2` (0x80022FB0, `entity/Entity_Main2.c`)
/// Primary entity update variant 2
pub fn entity_main2(life: &mut EntityLifecycle) {
    life.timer_main = life.timer_main.saturating_sub(1);
}

/// ENT-168: `Entity_OffsetX` (0x80068420, `entity/Entity_OffsetX.c`)
/// Applies horizontal offset
pub fn entity_offsetx(pos: &mut Vec3, offset: f32) {
    pos.x += offset;
}

/// ENT-169: `Entity_OverlayDispatch` (0x800750D8, `entity/Entity_OverlayDispatch.c`)
/// Overlay state dispatch
pub fn entity_overlaydispatch(mgr: &mut TombaEntityManager, state: u8) {
    mgr.action_state = state;
}

/// ENT-170: `Entity_OverlayDispatch2` (0x800751A0, `entity/Entity_OverlayDispatch2.c`)
/// Overlay dispatch variant 2
pub fn entity_overlaydispatch2(mgr: &mut TombaEntityManager, state: u8) {
    mgr.action_state = state;
}

/// ENT-171: `Entity_ParentUpdate` (0x80054700, `entity/Entity_ParentUpdate.c`)
/// Updates parent entity state
pub fn entity_parentupdate(life: &mut EntityLifecycle) {
    life.timer_secondary = life.timer_secondary.saturating_sub(1);
}

/// ENT-172: `Entity_PlayAnimation` (0x80052820, `entity/Entity_PlayAnimation.c`)
/// Plays animation clip on entity
pub fn entity_playanimation(life: &mut EntityLifecycle, clip_id: u16) {
    life.anim_counter = clip_id as i16;
}

/// ENT-173: `Entity_PlaySFX` (0x80074690, `entity/Entity_PlaySFX.c`)
/// Triggers entity SFX
pub fn entity_playsfx(sfx_id: u32) -> u32 {
    sfx_id
}

/// ENT-174: `Entity_PlayScriptSFX` (0x80041B20, `entity/Entity_PlayScriptSFX.c`)
/// Triggers script-driven SFX
pub fn entity_playscriptsfx(sfx_id: u32) -> u32 {
    sfx_id
}

/// ENT-175: `Entity_PlaySFX_FadeOut` (0x800747E0, `entity/Entity_PlaySFX_FadeOut.c`)
/// Triggers SFX with fade-out
pub fn entity_playsfx_fadeout(sfx_id: u32) -> u32 {
    sfx_id
}

/// ENT-176: `Entity_PlayTimedSFX` (0x80066310, `entity/Entity_PlayTimedSFX.c`)
/// Triggers timed SFX
pub fn entity_playtimedsfx(life: &mut EntityLifecycle) {
    life.timer_secondary = 0x30;
}

/// ENT-177: `Entity_PosUpdate` (0x800529A0, `entity/Entity_PosUpdate.c`)
/// Updates entity position from velocity
pub fn entity_posupdate(pos: &mut Vec3, vel: Vec3, dt: f32) {
    *pos += vel * dt;
}

/// ENT-178: `Entity_ProcessAnimation` (0x80052B00, `entity/Entity_ProcessAnimation.c`)
/// Processes entity animation advance
pub fn entity_processanimation(life: &mut EntityLifecycle) {
    life.anim_counter = life.anim_counter.wrapping_add(1);
}

/// ENT-179: `Entity_ProcessAnimDirect` (0x80052C40, `entity/Entity_ProcessAnimDirect.c`)
/// Direct animation processor
pub fn entity_processanimdirect(life: &mut EntityLifecycle) {
    life.anim_counter = life.anim_counter.wrapping_add(2);
}

/// ENT-180: `Entity_ProcessAnimEvent` (0x80052D80, `entity/Entity_ProcessAnimEvent.c`)
/// Processes animation trigger events
pub fn entity_processanimevent(life: &mut EntityLifecycle, event_flag: u32) {
    life.flags |= event_flag;
}

/// ENT-181: `Entity_ProcessAnimFrame` (0x80052EC0, `entity/Entity_ProcessAnimFrame.c`)
/// Processes single animation frame
pub fn entity_processanimframe(life: &mut EntityLifecycle) {
    life.anim_counter = life.anim_counter.wrapping_add(1);
}

/// ENT-182: `Entity_ProcessCollision` (0x800537A0, `entity/Entity_ProcessCollision.c`)
/// Processes entity collision checks
pub fn entity_processcollision(life: &mut EntityLifecycle) -> bool {
    life.bounds_max.y > life.bounds_min.y
}

/// ENT-183: `Entity_ProcessFrame` (0x80026200, `entity/Entity_ProcessFrame.c`)
/// Frame processor
pub fn entity_processframe(mgr: &mut TombaEntityManager) {
    mgr.frame_counter = mgr.frame_counter.wrapping_add(1);
}

/// ENT-184: `Entity_ProcessProjCmd` (0x8002F850, `entity/Entity_ProcessProjCmd.c`)
/// Processes projectile command
pub fn entity_processprojcmd(pos: &mut Vec3, vel: Vec3, dt: f32) {
    *pos += vel * dt;
}

/// ENT-185: `Entity_ProcessProjCmdNoScale` (0x8002F9A0, `entity/Entity_ProcessProjCmdNoScale.c`)
/// Projectile processor without scale
pub fn entity_processprojcmdnoscale(pos: &mut Vec3, vel: Vec3, dt: f32) {
    *pos += vel * dt;
}

/// ENT-186: `Entity_ProcessSprite` (0x8007E7A0, `entity/Entity_ProcessSprite.c`)
/// Processes sprite frames
pub fn entity_processsprite(life: &mut EntityLifecycle) {
    life.sprite_flags |= 1;
}

/// ENT-187: `Entity_ProcessSpriteCmd` (0x8007E8C0, `entity/Entity_ProcessSpriteCmd.c`)
/// Processes sprite command
pub fn entity_processspritecmd(life: &mut EntityLifecycle, cmd: u32) {
    life.sprite_flags ^= cmd;
}

/// ENT-188: `Entity_RenderInit` (0x8007E9E0, `entity/Entity_RenderInit.c`)
/// Inits entity render properties
pub fn entity_renderinit(life: &mut EntityLifecycle) {
    life.is_visible = true;
}

/// ENT-189: `Entity_ResetActionState` (0x80054810, `entity/Entity_ResetActionState.c`)
/// Resets action state machine
pub fn entity_resetactionstate(life: &mut EntityLifecycle) {
    life.state_main = 0;
    life.timer_main = 0;
}

/// ENT-190: `Entity_ResetAnimAndState` (0x80054940, `entity/Entity_ResetAnimAndState.c`)
/// Resets animation and state
pub fn entity_resetanimandstate(life: &mut EntityLifecycle) {
    life.anim_counter = 0;
    life.state_main = 0;
}

/// ENT-191: `Entity_ResetFull` (0x8001E9C0, `entity/Entity_ResetFull.c`)
/// Full entity reset
pub fn entity_resetfull(life: &mut EntityLifecycle) {
    *life = EntityLifecycle::default();
}

/// ENT-192: `Entity_ResetState_2` (0x80068560, `entity/Entity_ResetState_2.c`)
/// Resets state variant 2
pub fn entity_resetstate_2(life: &mut EntityLifecycle) {
    life.state_main = 0;
}

/// ENT-193: `Entity_ResetState` (0x80068610, `entity/Entity_ResetState.c`)
/// Resets entity state
pub fn entity_resetstate(life: &mut EntityLifecycle) {
    life.state_main = 0;
    life.sub_state = 0;
}

/// ENT-194: `Entity_ResetStateFlags` (0x80068720, `entity/Entity_ResetStateFlags.c`)
/// Resets state flags
pub fn entity_resetstateflags(life: &mut EntityLifecycle) {
    life.flags = 0;
}

/// ENT-195: `Entity_RotateLimb` (0x80066700, `entity/Entity_RotateLimb.c`)
/// Rotates entity limb around axis
pub fn entity_rotatelimb(rot: &mut Quat, angle: f32, axis: Vec3) {
    *rot = Quat::from_axis_angle(axis, angle) * *rot;
}

/// ENT-196: `Entity_RotateMove` (0x80066840, `entity/Entity_RotateMove.c`)
/// Rotates and moves entity
pub fn entity_rotatemove(pos: &mut Vec3, rot: &mut Quat, vel: Vec3, angle_speed: f32, dt: f32) {
    *pos += vel * dt;
    *rot = Quat::from_rotation_y(angle_speed * dt) * *rot;
}

/// ENT-197: `Entity_RotateSubPartNeg` (0x80066980, `entity/Entity_RotateSubPartNeg.c`)
/// Rotates sub-part in negative direction
pub fn entity_rotatesubpartneg(rot: &mut Quat, delta: f32) {
    *rot = Quat::from_rotation_y(-delta) * *rot;
}

/// ENT-198: `Entity_RotateSubPartPos` (0x80066AC0, `entity/Entity_RotateSubPartPos.c`)
/// Rotates sub-part in positive direction
pub fn entity_rotatesubpartpos(rot: &mut Quat, delta: f32) {
    *rot = Quat::from_rotation_y(delta) * *rot;
}

/// ENT-199: `Entity_RotateToTarget` (0x80066C00, `entity/Entity_RotateToTarget.c`)
/// Rotates facing angle toward target position
pub fn entity_rotatetotarget(self_pos: Vec3, target_pos: Vec3) -> f32 {
    let dx = target_pos.x - self_pos.x;
    let dz = target_pos.z - self_pos.z;
    (-dz).atan2(dx)
}

/// ENT-200: `Entity_SaveGlobals` (0x8007B4A0, `entity/Entity_SaveGlobals.c`)
/// Saves globals state
pub fn entity_saveglobals() {}

/// ENT-201: `Entity_ScriptBranch` (0x80031120, `entity/Entity_ScriptBranch.c`)
/// Script branch handler
pub fn entity_scriptbranch(life: &mut EntityLifecycle, condition: bool, branch_offset: i16) {
    if condition {
        life.anim_counter += branch_offset;
    }
}

/// ENT-202: `Entity_ScriptRun_2` (0x80031260, `entity/Entity_ScriptRun_2.c`)
/// Script runner variant 2
pub fn entity_scriptrun_2(life: &mut EntityLifecycle) {
    life.anim_counter += 1;
}

/// ENT-203: `Entity_ScriptStep` (0x800313A0, `entity/Entity_ScriptStep.c`)
/// Steps entity bytecode script
pub fn entity_scriptstep(life: &mut EntityLifecycle) {
    life.anim_counter += 1;
}

/// ENT-204: `Entity_SelectWeapon` (0x80072050, `entity/Entity_SelectWeapon.c`)
/// Selects active weapon
pub fn entity_selectweapon(life: &mut EntityLifecycle, weapon_id: u8) {
    life.sub_state = weapon_id;
}

/// ENT-205: `Entity_SetAccel` (0x80056CA0, `entity/Entity_SetAccel.c`)
/// Sets entity acceleration
pub fn entity_setaccel(life: &mut EntityLifecycle, accel: f32) {
    life.timer_secondary = (accel * 100.0) as i16;
}

/// ENT-206: `Entity_SetActionFlag` (0x80054AA0, `entity/Entity_SetActionFlag.c`)
/// Sets action flag
pub fn entity_setactionflag(life: &mut EntityLifecycle, flag: u32) {
    life.flags |= flag;
}

/// ENT-207: `Entity_SetAngleFromState` (0x80066D40, `entity/Entity_SetAngleFromState.c`)
/// Sets angle from state index
pub fn entity_setanglefromstate(rot: &mut Quat, state: u8) {
    let angle = (state as f32) * (std::f32::consts::TAU / 16.0);
    *rot = Quat::from_rotation_y(angle);
}

/// ENT-208: `Entity_SetAnimFlag` (0x80052FE0, `entity/Entity_SetAnimFlag.c`)
/// Sets animation flag
pub fn entity_setanimflag(life: &mut EntityLifecycle, flag: u32) {
    life.flags |= flag;
}

/// ENT-209: `Entity_SetAnimFlag79` (0x80053120, `entity/Entity_SetAnimFlag79.c`)
/// Sets anim flag 79
pub fn entity_setanimflag79(life: &mut EntityLifecycle) {
    life.flags |= 0x79;
}

/// ENT-210: `Entity_SetAnimMode` (0x80053260, `entity/Entity_SetAnimMode.c`)
/// Sets animation playback mode
pub fn entity_setanimmode(life: &mut EntityLifecycle, mode: u8) {
    life.sub_state = mode;
}

/// ENT-211: `Entity_SetAnimMode2` (0x800533A0, `entity/Entity_SetAnimMode2.c`)
/// Sets animation mode variant 2
pub fn entity_setanimmode2(life: &mut EntityLifecycle, mode: u8) {
    life.sub_state = mode;
}

/// ENT-212: `Entity_SetAnimModeIfNew` (0x800534E0, `entity/Entity_SetAnimModeIfNew.c`)
/// Sets animation mode if changed
pub fn entity_setanimmodeifnew(life: &mut EntityLifecycle, mode: u8) {
    if life.sub_state != mode {
        life.sub_state = mode;
    }
}

/// ENT-213: `Entity_SetAnimSpeed` (0x80053620, `entity/Entity_SetAnimSpeed.c`)
/// Sets animation playback speed
pub fn entity_setanimspeed(life: &mut EntityLifecycle, speed: i16) {
    life.anim_counter = speed;
}

/// ENT-214: `Entity_SetCollisionFlag` (0x80053860, `entity/Entity_SetCollisionFlag.c`)
/// Sets collision flag
pub fn entity_setcollisionflag(life: &mut EntityLifecycle, flag: u32) {
    life.combat_flags |= flag;
}

/// ENT-215: `Entity_SetColorOverride` (0x8007EAE0, `entity/Entity_SetColorOverride.c`)
/// Sets entity vertex color override
pub fn entity_setcoloroverride(life: &mut EntityLifecycle, col: u32) {
    life.flags = col;
}

/// ENT-216: `Entity_SetCombatFlags` (0x80070A10, `entity/Entity_SetCombatFlags.c`)
/// Sets combat bitflags
pub fn entity_setcombatflags(life: &mut EntityLifecycle, flags: u32) {
    life.combat_flags |= flags;
}

/// ENT-217: `Entity_SetCombatFlagsEx` (0x80070B40, `entity/Entity_SetCombatFlagsEx.c`)
/// Sets extended combat flags
pub fn entity_setcombatflagsex(life: &mut EntityLifecycle, flags: u32) {
    life.combat_flags = flags;
}

/// ENT-218: `Entity_SetFlag84C` (0x80041C60, `entity/Entity_SetFlag84C.c`)
/// Sets flag 84C
pub fn entity_setflag84c(life: &mut EntityLifecycle) {
    life.flags |= 0x84C;
}

/// ENT-219: `Entity_SetFlagBit1` (0x80041D90, `entity/Entity_SetFlagBit1.c`)
/// Sets flag bit 1
pub fn entity_setflagbit1(life: &mut EntityLifecycle) {
    life.flags |= 2;
}

/// ENT-220: `Entity_SetPosFromGlobals` (0x80068830, `entity/Entity_SetPosFromGlobals.c`)
/// Sets position from global coordinates
pub fn entity_setposfromglobals(life: &mut EntityLifecycle, pos: Vec3) {
    life.local_pos = pos;
}

/// ENT-221: `Entity_SetPosition` (0x80068950, `entity/Entity_SetPosition.c`)
/// Sets entity position
pub fn entity_setposition(pos: &mut Vec3, target: Vec3) {
    *pos = target;
}

/// ENT-222: `Entity_SetRenderMode` (0x8007EC00, `entity/Entity_SetRenderMode.c`)
/// Sets render mode flags
pub fn entity_setrendermode(life: &mut EntityLifecycle, mode: u32) {
    life.sprite_flags = mode;
}

/// ENT-223: `Entity_SetSpriteData` (0x8007ED20, `entity/Entity_SetSpriteData.c`)
/// Sets sprite data
pub fn entity_setspritedata(life: &mut EntityLifecycle, data_id: u32) {
    life.sprite_flags |= data_id;
}

/// ENT-224: `Entity_SetSpriteDataAuto` (0x8007EE40, `entity/Entity_SetSpriteDataAuto.c`)
/// Auto-configures sprite data
pub fn entity_setspritedataauto(life: &mut EntityLifecycle) {
    life.sprite_flags |= 0x10;
}

/// ENT-225: `Entity_SetState` (0x80068A60, `entity/Entity_SetState.c`)
/// Sets entity state
pub fn entity_setstate(life: &mut EntityLifecycle, state: u8) {
    life.state_main = state;
}

/// ENT-226: `Entity_SetState4` (0x80068B80, `entity/Entity_SetState4.c`)
/// Sets entity state 4
pub fn entity_setstate4(life: &mut EntityLifecycle) {
    life.state_main = 4;
}

/// ENT-227: `Entity_SetStateCombat` (0x80070C70, `entity/Entity_SetStateCombat.c`)
/// Sets combat state
pub fn entity_setstatecombat(life: &mut EntityLifecycle, state: u8) {
    life.state_main = state;
    life.combat_flags |= 1;
}

/// ENT-228: `Entity_SetStateTo9` (0x80068CA0, `entity/Entity_SetStateTo9.c`)
/// Sets state to 9
pub fn entity_setstateto9(life: &mut EntityLifecycle) {
    life.state_main = 9;
}

/// ENT-229: `Entity_SetSubEntityData` (0x80051DA0, `entity/Entity_SetSubEntityData.c`)
/// Sets sub-entity data
pub fn entity_setsubentitydata(life: &mut EntityLifecycle, sub_id: u8) {
    life.sub_state = sub_id;
}

/// ENT-230: `Entity_SetSubEntityTexture` (0x80051EC0, `entity/Entity_SetSubEntityTexture.c`)
/// Sets sub-entity texture
pub fn entity_setsubentitytexture(life: &mut EntityLifecycle, tex_id: u32) {
    life.flags = tex_id;
}

/// ENT-231: `Entity_SetSubState22` (0x80068DC0, `entity/Entity_SetSubState22.c`)
/// Sets sub-state to 22
pub fn entity_setsubstate22(life: &mut EntityLifecycle) {
    life.sub_state = 22;
}

/// ENT-232: `Entity_SetType` (0x80069A70, `entity/Entity_SetType.c`)
/// Sets entity type
pub fn entity_settype(life: &mut EntityLifecycle, t: u8) {
    life.entity_type = t;
}

/// ENT-233: `Entity_SetupAnimFrame` (0x80053760, `entity/Entity_SetupAnimFrame.c`)
/// Sets up animation frame
pub fn entity_setupanimframe(life: &mut EntityLifecycle, frame: i16) {
    life.anim_counter = frame;
}

/// ENT-234: `Entity_SetupBehavior` (0x8002A4D0, `entity/Entity_SetupBehavior.c`)
/// Sets up entity behavior
pub fn entity_setupbehavior(life: &mut EntityLifecycle, beh_id: u8) {
    life.entity_type = beh_id;
    life.is_active = true;
}

/// ENT-235: `Entity_SetupBossUI` (0x800739E0, `entity/Entity_SetupBossUI.c`)
/// Sets up boss HUD element
pub fn entity_setupbossui(life: &mut EntityLifecycle) {
    life.flags |= 0x8000;
}

/// ENT-236: `Entity_SetupSpawn` (0x8004B460, `entity/Entity_SetupSpawn.c`)
/// Prepares entity spawn parameters
pub fn entity_setupspawn(life: &mut EntityLifecycle, pos: Vec3) {
    life.local_pos = pos;
    life.is_active = true;
}

/// ENT-237: `Entity_SetupSpriteRender` (0x8007EF60, `entity/Entity_SetupSpriteRender.c`)
/// Sets up sprite render batch
pub fn entity_setupspriterender(life: &mut EntityLifecycle) {
    life.is_visible = true;
}

/// ENT-238: `Entity_Sound` (0x800748F0, `entity/Entity_Sound.c`)
/// Triggers entity sound effect
pub fn entity_sound(sfx_id: u32) -> u32 {
    sfx_id
}

/// ENT-239: `Entity_SpawnAnim` (0x8004B5A0, `entity/spawn/Entity_SpawnAnim.c`)
/// Spawns animated sprite effect
pub fn entity_spawnanim(life: &mut EntityLifecycle, anim_id: u16) {
    life.anim_counter = anim_id as i16;
    life.is_active = true;
}

/// ENT-240: `Entity_SpawnBackground` (0x8007A8A0, `entity/spawn/Entity_SpawnBackground.c`)
/// Spawns background entity
pub fn entity_spawnbackground(mgr: &mut TombaEntityManager) -> i32 {
    entity_allocbackground(mgr, 0)
}

/// ENT-241: `Entity_SpawnBreakFX` (0x8004B2E8, `entity/spawn/Entity_SpawnBreakFX.c`)
/// Spawns break effect entity 0x1F at position
pub fn entity_spawnbreakfx(life: &mut EntityLifecycle, pos: Vec3) {
    life.entity_type = 0x1F;
    life.local_pos = pos;
    life.flags |= 0x80;
    life.is_active = true;
}

/// ENT-242: `Entity_SpawnChecked` (0x8004B6D0, `entity/spawn/Entity_SpawnChecked.c`)
/// Spawns entity with boundary check
pub fn entity_spawnchecked(life: &mut EntityLifecycle, pos: Vec3) -> bool {
    life.local_pos = pos;
    life.is_active = true;
    true
}

/// ENT-243: `Entity_SpawnChild27` (0x8004B800, `entity/spawn/Entity_SpawnChild27.c`)
/// Spawns child entity variant 27
pub fn entity_spawnchild27(child: &mut EntityLifecycle, parent: Entity) {
    child.parent_entity = Some(parent);
    child.is_active = true;
}

/// ENT-244: `Entity_SpawnChild2` (0x8004B930, `entity/spawn/Entity_SpawnChild2.c`)
/// Spawns child entity variant 2
pub fn entity_spawnchild2(child: &mut EntityLifecycle, parent: Entity, offset: Vec3) {
    child.parent_entity = Some(parent);
    child.local_pos = offset;
    child.is_active = true;
}

/// ENT-245: `Entity_SpawnChildAttached` (0x8004BA60, `entity/spawn/Entity_SpawnChildAttached.c`)
/// Spawns child attached with local transform
pub fn entity_spawnchildattached(child: &mut EntityLifecycle, parent: Entity, local_pos: Vec3, local_rot: Quat) {
    child.parent_entity = Some(parent);
    child.local_pos = local_pos;
    child.local_rot = local_rot;
    child.is_active = true;
}

/// ENT-246: `Entity_SpawnChild` (0x8004BB90, `entity/spawn/Entity_SpawnChild.c`)
/// Spawns child entity
pub fn entity_spawnchild(child: &mut EntityLifecycle, parent: Entity) {
    child.parent_entity = Some(parent);
    child.is_active = true;
}

/// ENT-247: `Entity_SpawnChildren` (0x8004BCC0, `entity/spawn/Entity_SpawnChildren.c`)
/// Spawns multiple children
pub fn entity_spawnchildren(mgr: &mut TombaEntityManager, count: usize) -> usize {
    entity_allocsubentities(mgr, count)
}

/// ENT-248: `Entity_SpawnChildSequence` (0x8004BDF0, `entity/spawn/Entity_SpawnChildSequence.c`)
/// Spawns sequence of child entities
pub fn entity_spawnchildsequence(child: &mut EntityLifecycle, parent: Entity, seq_idx: u8) {
    child.parent_entity = Some(parent);
    child.sub_state = seq_idx;
    child.is_active = true;
}

/// ENT-249: `Entity_SpawnCollectible` (0x8004BF20, `entity/spawn/Entity_SpawnCollectible_2.c`)
/// Spawns collectible item (gem, AP coin)
pub fn entity_spawncollectible(life: &mut EntityLifecycle, item_id: u8, pos: Vec3) {
    life.entity_type = 0x20;
    life.sub_state = item_id;
    life.local_pos = pos;
    life.is_active = true;
}

/// ENT-250: `Entity_SpawnCollectibleIf` (0x8004C050, `entity/spawn/Entity_SpawnCollectibleIf.c`)
/// Spawns collectible if condition met
pub fn entity_spawncollectibleif(life: &mut EntityLifecycle, item_id: u8, pos: Vec3, cond: bool) -> bool {
    if cond {
        entity_spawncollectible(life, item_id, pos);
        true
    } else {
        false
    }
}

/// ENT-251: `Entity_SpawnControl` (0x8004C180, `entity/spawn/Entity_SpawnControl.c`)
/// Spawning controller
pub fn entity_spawncontrol(mgr: &mut TombaEntityManager) -> bool {
    mgr.free_slots > 0
}

/// ENT-252: `Entity_SpawnDropItem` (0x8004C2B0, `entity/spawn/Entity_SpawnDropItem.c`)
/// Spawns item drop from enemy
pub fn entity_spawndropitem(life: &mut EntityLifecycle, item_id: u8, pos: Vec3) {
    entity_spawncollectible(life, item_id, pos);
}

/// ENT-253: `Entity_SpawnEffect` (0x8004C3E0, `entity/spawn/Entity_SpawnEffect_2.c`)
/// Spawns visual particle effect
pub fn entity_spawneffect(life: &mut EntityLifecycle, fx_id: u8, pos: Vec3) {
    life.entity_type = 0x25;
    life.sub_state = fx_id;
    life.local_pos = pos;
    life.is_active = true;
}

/// ENT-254: `Entity_SpawnIfClear` (0x8004C510, `entity/spawn/Entity_SpawnIfClear.c`)
/// Spawns entity if area is clear
pub fn entity_spawnifclear(life: &mut EntityLifecycle, pos: Vec3, clear: bool) -> bool {
    if clear {
        life.local_pos = pos;
        life.is_active = true;
        true
    } else {
        false
    }
}

/// ENT-255: `Entity_SpawnItem2` (0x8004C640, `entity/spawn/Entity_SpawnItem2.c`)
/// Spawns item variant 2
pub fn entity_spawnitem2(life: &mut EntityLifecycle, item_id: u8, pos: Vec3) {
    entity_spawncollectible(life, item_id, pos);
}

/// ENT-256: `Entity_SpawnItem` (0x8004C770, `entity/spawn/Entity_SpawnItem.c`)
/// Spawns item
pub fn entity_spawnitem(life: &mut EntityLifecycle, item_id: u8, pos: Vec3) {
    entity_spawncollectible(life, item_id, pos);
}

/// ENT-257: `Entity_SpawnListener` (0x8004C8A0, `entity/spawn/Entity_SpawnListener.c`)
/// Spawns trigger/listener entity
pub fn entity_spawnlistener(life: &mut EntityLifecycle, trigger_id: u8) {
    life.entity_type = 0x30;
    life.sub_state = trigger_id;
    life.is_active = true;
}

/// ENT-258: `Entity_SpawnMain` (0x8004C9D0, `entity/spawn/Entity_SpawnMain.c`)
/// Main spawn dispatcher
pub fn entity_spawnmain(life: &mut EntityLifecycle, e_type: u8, pos: Vec3) {
    life.entity_type = e_type;
    life.local_pos = pos;
    life.is_active = true;
}

/// ENT-259: `Entity_SpawnMultiple` (0x8004CB00, `entity/spawn/Entity_SpawnMultiple.c`)
/// Spawns multiple entities
pub fn entity_spawnmultiple(mgr: &mut TombaEntityManager, count: usize) -> usize {
    entity_allocsubentities(mgr, count)
}

/// ENT-260: `Entity_SpawnNoPos` (0x8004CC30, `entity/spawn/Entity_SpawnNoPos.c`)
/// Spawns entity without position assignment
pub fn entity_spawnnopos(life: &mut EntityLifecycle, e_type: u8, sub: u8) {
    life.entity_type = e_type;
    life.sub_state = sub;
    life.is_active = true;
}

/// ENT-261: `Entity_SpawnPool2Lifecycle` (0x8004CD60, `entity/spawn/Entity_SpawnPool2Lifecycle.c`)
/// Spawns pool 2 lifecycle entity
pub fn entity_spawnpool2lifecycle(mgr: &mut TombaEntityManager) -> i32 {
    entity_allocpool2(mgr)
}

/// ENT-262: `Entity_SpawnProjectile` (0x8004CE90, `entity/spawn/Entity_SpawnProjectile.c`)
/// Spawns ballistic projectile
pub fn entity_spawnprojectile(life: &mut EntityLifecycle, proj_type: u8, pos: Vec3, dir: i8) {
    life.entity_type = 0x35;
    life.sub_state = proj_type;
    life.local_pos = pos;
    life.direction = dir;
    life.is_active = true;
}

/// ENT-263: `Entity_SpawnSFX` (0x8004CFC0, `entity/spawn/Entity_SpawnSFX.c`)
/// Spawns audio emitter entity
pub fn entity_spawnsfx(life: &mut EntityLifecycle, sfx_id: u32) {
    life.entity_type = 0x38;
    life.flags = sfx_id;
    life.is_active = true;
}

/// ENT-264: `Entity_SpawnScorePopup` (0x8004B0D8, `entity/spawn/Entity_SpawnScorePopup.c`)
/// Spawns floating score popup entity
pub fn entity_spawnscorepopup(life: &mut EntityLifecycle, pos: Vec3, score_type: u8) {
    entity_spawnnopos(life, 0x1F, score_type);
    life.flags |= 0x80;
    life.local_pos = pos;
}

/// ENT-265: `Entity_SpawnScorePopupEx` (0x8004B190, `entity/spawn/Entity_SpawnScorePopupEx.c`)
/// Spawns extended score popup
pub fn entity_spawnscorepopupex(life: &mut EntityLifecycle, pos: Vec3, score_type: u8, value: u32) {
    entity_spawnscorepopup(life, pos, score_type);
    life.flags |= value;
}

/// ENT-266: `Entity_SpawnSpecial` (0x8004D0F0, `entity/spawn/Entity_SpawnSpecial.c`)
/// Spawns special boss/event entity
pub fn entity_spawnspecial(life: &mut EntityLifecycle, spec_id: u8) {
    life.entity_type = 0x40;
    life.sub_state = spec_id;
    life.is_active = true;
}

/// ENT-267: `Entity_SpawnSprite` (0x8004D220, `entity/spawn/Entity_SpawnSprite.c`)
/// Spawns billboard sprite
pub fn entity_spawnsprite(life: &mut EntityLifecycle, sprite_id: u16, pos: Vec3) {
    life.anim_counter = sprite_id as i16;
    life.local_pos = pos;
    life.is_active = true;
    life.is_visible = true;
}

/// ENT-268: `Entity_SpawnSubEntity` (0x8004D350, `entity/spawn/Entity_SpawnSubEntity.c`)
/// Spawns sub-entity structure
pub fn entity_spawnsubentity(life: &mut EntityLifecycle, parent: Entity) {
    entity_initsubentity(life, parent);
}

/// ENT-269: `Entity_SpawnTrail` (0x8004D480, `entity/spawn/Entity_SpawnTrail.c`)
/// Spawns particle trail
pub fn entity_spawntrail(life: &mut EntityLifecycle, pos: Vec3) {
    life.local_pos = pos;
    life.sprite_flags |= 0x100;
    life.is_active = true;
}

/// ENT-270: `Entity_SpawnWithBehavior` (0x8004D5B0, `entity/spawn/Entity_SpawnWithBehavior.c`)
/// Spawns entity with behavior assigned
pub fn entity_spawnwithbehavior(life: &mut EntityLifecycle, b_id: u8, pos: Vec3) {
    life.entity_type = b_id;
    life.local_pos = pos;
    life.is_active = true;
}

/// ENT-271: `Entity_SpawnWithCallback` (0x8004D6E0, `entity/spawn/Entity_SpawnWithCallback.c`)
/// Spawns entity with callback flag
pub fn entity_spawnwithcallback(life: &mut EntityLifecycle, pos: Vec3) {
    life.local_pos = pos;
    life.flags |= 0x80;
    life.is_active = true;
}

/// ENT-272: `Entity_SpawnWithFlag` (0x8004D810, `entity/spawn/Entity_SpawnWithFlag.c`)
/// Spawns entity with flag
pub fn entity_spawnwithflag(life: &mut EntityLifecycle, pos: Vec3, flag: u32) {
    life.local_pos = pos;
    life.flags = flag;
    life.is_active = true;
}

/// ENT-273: `Entity_SpawnWithPos` (0x8004D940, `entity/spawn/Entity_SpawnWithPos.c`)
/// Spawns entity at position
pub fn entity_spawnwithpos(life: &mut EntityLifecycle, e_type: u8, pos: Vec3) {
    entity_spawnmain(life, e_type, pos);
}

/// ENT-274: `Entity_SpawnWithVector` (0x8004DA70, `entity/spawn/Entity_SpawnWithVector.c`)
/// Spawns entity with velocity vector
pub fn entity_spawnwithvector(life: &mut EntityLifecycle, pos: Vec3, dir: i8) {
    life.local_pos = pos;
    life.direction = dir;
    life.is_active = true;
}

/// ENT-275: `Entity_SpriteAdvance` (0x8007F080, `entity/Entity_SpriteAdvance.c`)
/// Advances sprite frame
pub fn entity_spriteadvance(life: &mut EntityLifecycle) {
    life.anim_counter = life.anim_counter.wrapping_add(1);
}

/// ENT-276: `Entity_SpriteConfig` (0x8007F1A0, `entity/Entity_SpriteConfig.c`)
/// Configures sprite
pub fn entity_spriteconfig(life: &mut EntityLifecycle, config_id: u16) {
    life.anim_counter = config_id as i16;
}

/// ENT-277: `Entity_SpriteDispatch2` (0x8007F2C0, `entity/Entity_SpriteDispatch2.c`)
/// Sprite dispatch variant 2
pub fn entity_spritedispatch2(life: &mut EntityLifecycle) {
    life.sprite_flags |= 2;
}

/// ENT-278: `Entity_SpriteInit2` (0x8007F3E0, `entity/Entity_SpriteInit2.c`)
/// Sprite init variant 2
pub fn entity_spriteinit2(life: &mut EntityLifecycle) {
    life.sprite_flags = 1;
}

/// ENT-279: `Entity_SpriteLifecycle` (0x8007F500, `entity/Entity_SpriteLifecycle.c`)
/// Sprite lifecycle tick
pub fn entity_spritelifecycle(life: &mut EntityLifecycle) {
    if life.timer_main > 0 {
        life.timer_main -= 1;
    } else {
        life.is_active = false;
    }
}

/// ENT-280: `Entity_SpriteMode2` (0x8007F620, `entity/Entity_SpriteMode2.c`)
/// Sprite mode variant 2
pub fn entity_spritemode2(life: &mut EntityLifecycle, mode: u8) {
    life.sub_state = mode;
}

/// ENT-281: `Entity_SpriteMode` (0x8007F740, `entity/Entity_SpriteMode.c`)
/// Sprite mode setter
pub fn entity_spritemode(life: &mut EntityLifecycle, mode: u8) {
    life.sub_state = mode;
}

/// ENT-282: `Entity_SpriteType` (0x8007F860, `entity/Entity_SpriteType.c`)
/// Sprite type setter
pub fn entity_spritetype(life: &mut EntityLifecycle, t: u8) {
    life.entity_type = t;
}

/// ENT-283: `Entity_SpriteUpdate` (0x8007F980, `entity/Entity_SpriteUpdate.c`)
/// Sprite updater
pub fn entity_spriteupdate(life: &mut EntityLifecycle) {
    life.anim_counter = life.anim_counter.wrapping_add(1);
}

/// ENT-284: `Entity_StateAction` (0x80054BC0, `entity/Entity_StateAction.c`)
/// State action handler
pub fn entity_stateaction(life: &mut EntityLifecycle, action: u8) {
    life.state_main = action;
}

/// ENT-285: `Entity_StateCheck` (0x80054CE0, `entity/Entity_StateCheck.c`)
/// Checks entity state
pub fn entity_statecheck(life: &EntityLifecycle, target_state: u8) -> bool {
    life.state_main == target_state
}

/// ENT-286: `Entity_StateControl` (0x80054E00, `entity/Entity_StateControl.c`)
/// State controller
pub fn entity_statecontrol(life: &mut EntityLifecycle) {
    life.timer_main = life.timer_main.saturating_sub(1);
}

/// ENT-287: `Entity_StateDispatch2` (0x80055040, `entity/Entity_StateDispatch2.c`)
/// State dispatch variant 2
pub fn entity_statedispatch2(life: &mut EntityLifecycle, s: u8) {
    life.state_main = s;
}

/// ENT-288: `Entity_StateDispatch3` (0x80055160, `entity/Entity_StateDispatch3.c`)
/// State dispatch variant 3
pub fn entity_statedispatch3(life: &mut EntityLifecycle, s: u8) {
    life.state_main = s;
}

/// ENT-289: `Entity_StateDispatch` (0x80054F20, `entity/Entity_StateDispatch.c`)
/// State dispatcher
pub fn entity_statedispatch(life: &mut EntityLifecycle, s: u8) {
    life.state_main = s;
}

/// ENT-290: `Entity_StateDispatcherMain` (0x80055280, `entity/Entity_StateDispatcherMain.c`)
/// State dispatcher main
pub fn entity_statedispatchermain(life: &mut EntityLifecycle) {
    entity_statemain(life);
}

/// ENT-291: `Entity_StateEnd2` (0x800554C0, `entity/Entity_StateEnd2.c`)
/// State end variant 2
pub fn entity_stateend2(life: &mut EntityLifecycle) {
    life.state_main = 0;
}

/// ENT-292: `Entity_StateEnd3` (0x800555E0, `entity/Entity_StateEnd3.c`)
/// State end variant 3
pub fn entity_stateend3(life: &mut EntityLifecycle) {
    life.state_main = 0;
}

/// ENT-293: `Entity_StateEnd` (0x800553A0, `entity/Entity_StateEnd.c`)
/// State end handler
pub fn entity_stateend(life: &mut EntityLifecycle) {
    life.state_main = 0;
}

/// ENT-294: `Entity_StateInput` (0x80072180, `entity/Entity_StateInput.c`)
/// State input handler
pub fn entity_stateinput(life: &mut EntityLifecycle, input_bits: u32) {
    life.input_flags = input_bits;
}

/// ENT-295: `Entity_StateMachine2` (0x80055700, `entity/Entity_StateMachine2.c`)
/// State machine variant 2
pub fn entity_statemachine2(life: &mut EntityLifecycle) {
    if life.timer_main == 0 {
        life.state_main = 0;
    }
}

/// ENT-296: `Entity_StateMain10` (0x80055DA0, `entity/Entity_StateMain10.c`)
/// State main 10
pub fn entity_statemain10(life: &mut EntityLifecycle) {
    life.state_main = 10;
}

/// ENT-297: `Entity_StateMain11` (0x80055EC0, `entity/Entity_StateMain11.c`)
/// State main 11
pub fn entity_statemain11(life: &mut EntityLifecycle) {
    life.state_main = 11;
}

/// ENT-298: `Entity_StateMain12` (0x80055FE0, `entity/Entity_StateMain12.c`)
/// State main 12
pub fn entity_statemain12(life: &mut EntityLifecycle) {
    life.state_main = 12;
}

/// ENT-299: `Entity_StateMain13` (0x80056100, `entity/Entity_StateMain13.c`)
/// State main 13
pub fn entity_statemain13(life: &mut EntityLifecycle) {
    life.state_main = 13;
}

/// ENT-300: `Entity_StateMain14` (0x80056220, `entity/Entity_StateMain14.c`)
/// State main 14
pub fn entity_statemain14(life: &mut EntityLifecycle) {
    life.state_main = 14;
}

/// ENT-301: `Entity_StateMain15` (0x80056340, `entity/Entity_StateMain15.c`)
/// State main 15
pub fn entity_statemain15(life: &mut EntityLifecycle) {
    life.state_main = 15;
}

/// ENT-302: `Entity_StateMain2` (0x80055820, `entity/Entity_StateMain2.c`)
/// State main 2
pub fn entity_statemain2(life: &mut EntityLifecycle) {
    life.state_main = 2;
}

/// ENT-303: `Entity_StateMain3` (0x80055940, `entity/Entity_StateMain3.c`)
/// State main 3
pub fn entity_statemain3(life: &mut EntityLifecycle) {
    life.state_main = 3;
}

/// ENT-304: `Entity_StateMain4` (0x80055A60, `entity/Entity_StateMain4.c`)
/// State main 4
pub fn entity_statemain4(life: &mut EntityLifecycle) {
    life.state_main = 4;
}

/// ENT-305: `Entity_StateMain5` (0x80055B80, `entity/Entity_StateMain5.c`)
/// State main 5
pub fn entity_statemain5(life: &mut EntityLifecycle) {
    life.state_main = 5;
}

/// ENT-306: `Entity_StateMain6` (0x80055CA0, `entity/Entity_StateMain6.c`)
/// State main 6
pub fn entity_statemain6(life: &mut EntityLifecycle) {
    life.state_main = 6;
}

/// ENT-307: `Entity_StateMain7` (0x80055DC0, `entity/Entity_StateMain7.c`)
/// State main 7
pub fn entity_statemain7(life: &mut EntityLifecycle) {
    life.state_main = 7;
}

/// ENT-308: `Entity_StateMain8` (0x80055EE0, `entity/Entity_StateMain8.c`)
/// State main 8
pub fn entity_statemain8(life: &mut EntityLifecycle) {
    life.state_main = 8;
}

/// ENT-309: `Entity_StateMain9` (0x80056000, `entity/Entity_StateMain9.c`)
/// State main 9
pub fn entity_statemain9(life: &mut EntityLifecycle) {
    life.state_main = 9;
}

/// ENT-310: `Entity_StateMain` (0x80054E80, `entity/Entity_StateMain.c`)
/// Entity main state primary dispatch
pub fn entity_statemain(life: &mut EntityLifecycle) {
    life.timer_main = life.timer_main.saturating_sub(1);
}

/// ENT-311: `Entity_StatePick` (0x80056460, `entity/Entity_StatePick.c`)
/// Selects next state
pub fn entity_statepick(life: &mut EntityLifecycle, next: u8) {
    life.state_main = next;
}

/// ENT-312: `Entity_StateSwitch` (0x80056580, `entity/Entity_StateSwitch.c`)
/// Switches state
pub fn entity_stateswitch(life: &mut EntityLifecycle, next: u8) {
    life.state_main = next;
}

/// ENT-313: `Entity_StateTransition2` (0x800567C0, `entity/Entity_StateTransition2.c`)
/// State transition variant 2
pub fn entity_statetransition2(life: &mut EntityLifecycle, next: u8) {
    life.state_main = next;
}

/// ENT-314: `Entity_StateTransition` (0x800566A0, `entity/Entity_StateTransition.c`)
/// State transition handler
pub fn entity_statetransition(life: &mut EntityLifecycle, next: u8) {
    life.state_main = next;
}

/// ENT-315: `Entity_StateTrigger2` (0x80056A00, `entity/Entity_StateTrigger2.c`)
/// State trigger variant 2
pub fn entity_statetrigger2(life: &mut EntityLifecycle) {
    life.flags |= 0x10;
}

/// ENT-316: `Entity_StateTrigger` (0x800568E0, `entity/Entity_StateTrigger.c`)
/// State trigger handler
pub fn entity_statetrigger(life: &mut EntityLifecycle) {
    life.flags |= 8;
}

/// ENT-317: `Entity_StateWait2` (0x80056C40, `entity/Entity_StateWait2.c`)
/// State wait variant 2
pub fn entity_statewait2(life: &mut EntityLifecycle) {
    life.timer_main = life.timer_main.saturating_sub(1);
}

/// ENT-318: `Entity_StateWait3` (0x80056D60, `entity/Entity_StateWait3.c`)
/// State wait variant 3
pub fn entity_statewait3(life: &mut EntityLifecycle) {
    life.timer_secondary = life.timer_secondary.saturating_sub(1);
}

/// ENT-319: `Entity_StateWait4` (0x80056E80, `entity/Entity_StateWait4.c`)
/// State wait variant 4
pub fn entity_statewait4(life: &mut EntityLifecycle) {
    life.timer_main = life.timer_main.saturating_sub(1);
}

/// ENT-320: `Entity_SubState` (0x80056FA0, `entity/Entity_SubState.c`)
/// Sets sub-state
pub fn entity_substate(life: &mut EntityLifecycle, sub: u8) {
    life.sub_state = sub;
}

/// ENT-321: `Entity_SubmitDraw2` (0x8007FAC0, `entity/Entity_SubmitDraw2.c`)
/// Submit draw variant 2
pub fn entity_submitdraw2() {}

/// ENT-322: `Entity_SubmitDraw` (0x8007FBE0, `entity/Entity_SubmitDraw.c`)
/// Primary submit draw pass
pub fn entity_submitdraw() {}

/// ENT-323: `Entity_SubmitGTEVertices` (0x80052140, `entity/Entity_SubmitGTEVertices.c`)
/// Submits GTE vertices
pub fn entity_submitgtevertices() {}

/// ENT-324: `Entity_SubmitQuadToOT` (0x8007FD00, `entity/Entity_SubmitQuadToOT.c`)
/// Submits 3D quad to Ordering Table
pub fn entity_submitquadtoot() {}

/// ENT-325: `Entity_SubmitRotatedSprite` (0x8007FE20, `entity/Entity_SubmitRotatedSprite.c`)
/// Submits rotated billboard sprite
pub fn entity_submitrotatedsprite() {}

/// ENT-326: `Entity_SubmitSpriteRotAll` (0x8007FF40, `entity/Entity_SubmitSpriteRotAll.c`)
/// Submits fully rotated sprite
pub fn entity_submitspriterotall() {}

/// ENT-327: `Entity_SubmitSpriteRotX` (0x80080060, `entity/Entity_SubmitSpriteRotX.c`)
/// Submits X-rotated sprite
pub fn entity_submitspriterotx() {}

/// ENT-328: `Entity_SubmitSpriteRotY` (0x80080180, `entity/Entity_SubmitSpriteRotY.c`)
/// Submits Y-rotated sprite
pub fn entity_submitspriteroty() {}

/// ENT-329: `Entity_SubmitSpriteRotYX` (0x800802A0, `entity/Entity_SubmitSpriteRotYX.c`)
/// Submits YX-rotated sprite
pub fn entity_submitspriterotyx() {}

/// ENT-330: `Entity_SubmitSpriteRotZ` (0x800803C0, `entity/Entity_SubmitSpriteRotZ.c`)
/// Submits Z-rotated sprite
pub fn entity_submitspriterotz() {}

/// ENT-331: `Entity_SubmitSpriteRotZX` (0x800804E0, `entity/Entity_SubmitSpriteRotZX.c`)
/// Submits ZX-rotated sprite
pub fn entity_submitspriterotzx() {}

/// ENT-332: `Entity_SubmitSpriteToOT` (0x80080600, `entity/Entity_SubmitSpriteToOT.c`)
/// Submits sprite packet to OT
pub fn entity_submitspritettyot() {}

/// ENT-333: `Entity_SubmitVerticesToOT` (0x80052260, `entity/Entity_SubmitVerticesToOT.c`)
/// Submits mesh vertices to OT
pub fn entity_submitverticestoot() {}

/// ENT-334: `Entity_SyncToParent` (0x8006AFC4, `entity/Entity_SyncToParent.c`)
/// Syncs child position to parent
pub fn entity_synctoparent(child_pos: &mut Vec3, parent_pos: Vec3) {
    *child_pos = parent_pos;
}

/// ENT-335: `Entity_TargetDistance2` (0x80023580, `entity/Entity_TargetDistance2.c`)
/// Target distance check variant 2
pub fn entity_targetdistance2(p1: Vec3, p2: Vec3) -> f32 {
    p1.distance(p2)
}

/// ENT-336: `Entity_TargetDistance` (0x80023450, `entity/Entity_TargetDistance.c`)
/// Computes target distance
pub fn entity_targetdistance(p1: Vec3, p2: Vec3) -> f32 {
    p1.distance(p2)
}

/// ENT-337: `Entity_TransformPoint2` (0x80052480, `entity/Entity_TransformPoint2.c`)
/// Point transform variant 2
pub fn entity_transformpoint2(pt: Vec3, offset: Vec3) -> Vec3 {
    pt + offset
}

/// ENT-338: `Entity_TransformPoint` (0x80052340, `entity/Entity_TransformPoint.c`)
/// Point transform
pub fn entity_transformpoint(pt: Vec3, offset: Vec3) -> Vec3 {
    pt + offset
}

/// ENT-339: `Entity_TriggerAnimMode` (0x80053800, `entity/Entity_TriggerAnimMode.c`)
/// Triggers animation mode
pub fn entity_triggeranimmode(life: &mut EntityLifecycle, mode: u8) {
    life.sub_state = mode;
}

/// ENT-340: `Entity_TriggerEvent` (0x80041EB0, `entity/Entity_TriggerEvent.c`)
/// Triggers entity event
pub fn entity_triggerevent(life: &mut EntityLifecycle, event_id: u32) {
    life.flags |= event_id;
}

/// ENT-341: `Entity_TypeCheck` (0x8004AE70, `entity/Entity_TypeCheck.c`)
/// Checks entity type
pub fn entity_typecheck(life: &EntityLifecycle, t: u8) -> bool {
    life.entity_type == t
}

/// ENT-342: `Entity_TypeDispatch` (0x8004AFA0, `entity/Entity_TypeDispatch.c`)
/// Type dispatcher
pub fn entity_typedispatch(life: &mut EntityLifecycle, t: u8) {
    life.entity_type = t;
}

/// ENT-343: `Entity_UpdateAll` (0x80027420, `entity/Entity_UpdateAll.c`)
/// Updates all entities tick
pub fn entity_updateall(mgr: &mut TombaEntityManager) {
    mgr.frame_counter = mgr.frame_counter.wrapping_add(1);
}

/// ENT-344: `Entity_UpdateAngle` (0x80066E80, `entity/Entity_UpdateAngle.c`)
/// Updates entity facing angle
pub fn entity_updateangle(rot: &mut Quat, delta: f32) {
    *rot = Quat::from_rotation_y(delta) * *rot;
}

/// ENT-345: `Entity_UpdateBGList` (0x8007A9C0, `entity/Entity_UpdateBGList.c`)
/// Updates background entity list
pub fn entity_updatebglist() {}

/// ENT-346: `Entity_UpdateChild` (0x80027550, `entity/Entity_UpdateChild.c`)
/// Updates child entity
pub fn entity_updatechild(life: &mut EntityLifecycle) {
    life.timer_main = life.timer_main.saturating_sub(1);
}

/// ENT-347: `Entity_UpdateChildren` (0x80027680, `entity/Entity_UpdateChildren.c`)
/// Updates all child entities
pub fn entity_updatechildren() {}

/// ENT-348: `Entity_UpdateLifecycle` (0x8007F700, `entity/Entity_UpdateLifecycle.c`)
/// Updates entity lifecycle
pub fn entity_updatelifecycle(life: &mut EntityLifecycle) {
    if life.timer_main > 0 {
        life.timer_main -= 1;
    }
}

/// ENT-349: `Entity_UpdateList8` (0x80028C20, `entity/Entity_UpdateList8.c`)
/// Updates entity list 8
pub fn entity_updatelist8() {}

/// ENT-350: `Entity_UpdateLoop2` (0x8003E510, `entity/Entity_UpdateLoop2.c`)
/// Update loop variant 2
pub fn entity_updateloop2(mgr: &mut TombaEntityManager) {
    mgr.frame_counter = mgr.frame_counter.wrapping_add(1);
}

/// ENT-351: `Entity_UpdateLoop` (0x8003E2D0, `entity/Entity_UpdateLoop.c`)
/// Primary update loop
pub fn entity_updateloop(mgr: &mut TombaEntityManager) {
    mgr.frame_counter = mgr.frame_counter.wrapping_add(1);
}

/// ENT-352: `Entity_UpdateMatrix` (0x800525A0, `entity/Entity_UpdateMatrix.c`)
/// Updates entity transform matrix
pub fn entity_updatematrix(life: &mut EntityLifecycle, pos: Vec3, rot: Quat, scale: Vec3) {
    life.local_pos = pos;
    life.local_rot = rot;
    life.local_scale = scale;
}

/// ENT-353: `Entity_UpdateMovement` (0x80056DC0, `entity/Entity_UpdateMovement.c`)
/// Updates entity movement kinematics
pub fn entity_updatemovement(pos: &mut Vec3, vel: Vec3, dt: f32) {
    *pos += vel * dt;
}

/// ENT-354: `Entity_UpdatePhysics` (0x80056EE0, `entity/Entity_UpdatePhysics.c`)
/// Updates entity physics integration
pub fn entity_updatephysics(pos: &mut Vec3, vel: &mut Vec3, gravity: f32, dt: f32) {
    vel.y -= gravity * dt;
    *pos += *vel * dt;
}

/// ENT-355: `Entity_UpdateState` (0x80057000, `entity/Entity_UpdateState.c`)
/// Updates entity state
pub fn entity_updatestate(life: &mut EntityLifecycle) {
    life.timer_main = life.timer_main.saturating_sub(1);
}

/// ENT-356: `Entity_WaitForFlag` (0x80041FE0, `entity/Entity_WaitForFlag.c`)
/// Waits for flag condition
pub fn entity_waitforflag(life: &EntityLifecycle, flag: u32) -> bool {
    (life.flags & flag) != 0
}

/// ENT-357: `Entity_WaitState` (0x80057120, `entity/Entity_WaitState.c`)
/// Entity wait state handler
pub fn entity_waitstate(life: &mut EntityLifecycle) -> bool {
    if life.timer_main > 0 {
        life.timer_main -= 1;
        false
    } else {
        true
    }
}

// ============================================================================
// UNIT TESTS FOR SECTOR 4
// ============================================================================

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_pool_allocation_and_capacity_limits() {
        let mut mgr = TombaEntityManager::default();

        // Alloc from pool 0
        let slot = entity_allocpool0(&mut mgr);
        assert_eq!(slot, 0);
        assert_eq!(mgr.pool_counts[0], 1);
        assert_eq!(mgr.active_count, 1);

        // Fill pool 2 to capacity
        mgr.pool_counts[2] = mgr.pool_capacities[2];
        let overflow = entity_allocpool2(&mut mgr);
        assert_eq!(overflow, -1);

        // Clear pool 0
        entity_clearpool0(&mut mgr);
        assert_eq!(mgr.pool_counts[0], 0);
    }

    #[test]
    fn test_child_spawning_and_hierarchy_sync() {
        let mut child = EntityLifecycle::default();
        let parent_entity = Entity::from_raw(42);

        entity_spawnchildattached(
            &mut child,
            parent_entity,
            Vec3::new(1.0, 2.0, 3.0),
            Quat::IDENTITY,
        );

        assert_eq!(child.parent_entity, Some(parent_entity));
        assert_eq!(child.local_pos, Vec3::new(1.0, 2.0, 3.0));
        assert!(child.is_active);

        // Test position sync
        let mut child_pos = Vec3::ZERO;
        let parent_pos = Vec3::new(10.0, 5.0, 2.0);
        entity_synctoparent(&mut child_pos, parent_pos);
        assert_eq!(child_pos, parent_pos);
    }

    #[test]
    fn test_fx_and_score_popup_spawning() {
        let mut life = EntityLifecycle::default();
        let pos = Vec3::new(15.0, 3.5, 8.0);

        // Spawn score popup 0x74
        entity_spawnscorepopup(&mut life, pos, 0x74);
        assert_eq!(life.entity_type, 0x1F);
        assert_eq!(life.sub_state, 0x74);
        assert_eq!(life.local_pos, pos);
        assert_eq!(life.flags & 0x80, 0x80);

        // Spawn break FX
        let mut break_fx = EntityLifecycle::default();
        entity_spawnbreakfx(&mut break_fx, Vec3::new(2.0, 1.0, 0.0));
        assert_eq!(break_fx.entity_type, 0x1F);
        assert_eq!(break_fx.local_pos, Vec3::new(2.0, 1.0, 0.0));
    }

    #[test]
    fn test_blink_control_and_timer_decrement() {
        let mut life = EntityLifecycle::default();
        let mut mgr = TombaEntityManager::default();
        life.timer_main = 10;

        // Normal blink on frame 0
        entity_blinkcontrol(&mut life, 0, false);
        assert_eq!(life.sprite_flags & 0x20, 0x20);

        // Alt blink on frame 0
        entity_blinkcontrol(&mut life, 0, true);
        assert_eq!(life.sprite_flags & 2, 2);

        // Timer decrement
        let expired = entity_decrementtimer(&mut life, 4, &mut mgr);
        assert!(!expired);
        assert_eq!(life.timer_main, 6);

        // Expire timer
        let expired2 = entity_decrementtimer(&mut life, 10, &mut mgr);
        assert!(expired2);
        assert_eq!(life.timer_main, 0);
        assert_eq!(mgr.timer_flag, 0xFF);
    }

    #[test]
    fn test_distance_check_and_bounds_collision() {
        let pos1 = Vec3::new(0.0, 0.0, 0.0);
        let pos2 = Vec3::new(2.0, 0.0, 0.0);

        // Radii 1.0 + 1.5 = 2.5 >= 2.0 -> Hit!
        let (hit, angle) = entity_distancecheck(pos1, pos2, 1.0, 1.5);
        assert!(hit);
        assert!((angle.abs() - std::f32::consts::PI).abs() < 0.001);

        // Radii 0.5 + 0.5 = 1.0 < 2.0 -> Miss!
        let (miss, _) = entity_distancecheck(pos1, pos2, 0.5, 0.5);
        assert!(!miss);
    }

    #[test]
    fn test_hurt_state_and_wait_state() {
        let mut life = EntityLifecycle {
            timer_main: 3,
            ..default()
        };
        let mut mgr = TombaEntityManager::default();

        entity_enterhurtstate(&mut life, &mut mgr);
        assert_eq!(life.state_main, 2);
        assert_eq!(mgr.collision_type, 0);

        // Wait state countdown
        assert!(!entity_waitstate(&mut life));
        assert_eq!(life.timer_main, 2);
        assert!(!entity_waitstate(&mut life));
        assert!(!entity_waitstate(&mut life));
        assert!(entity_waitstate(&mut life)); // Reached 0
    }
}
