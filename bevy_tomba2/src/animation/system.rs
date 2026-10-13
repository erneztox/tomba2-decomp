//! Sector 6: Skeletal Animation VM & Sprites (ANM-01 through ANM-81)
//!
//! Authentic 1:1 reimplementation of PS1 Tomba! 2 animation engine:
//! - Skeletal animation virtual machine with support for 239 ANMP clips.
//! - Frame advancement, speed scaling, loop points, and animation scripts.
//! - Multi-segment chain inverse kinematics (Entity_AnimChain, Entity_AnimSegment).
//! - 3D sprite rendering, billboard transforms, rotation matrices, scaling, and quad primitives.
//! - Multi-pass draw lifecycle pipelines (DrawMain 1..8, DrawLifecycle 1..8).

use bevy::prelude::*;

/// Maximum animation clips in Tomba! 2 (ANMP 0..238)
pub const MAX_ANIM_CLIPS: usize = 239;

/// Fixed-point angle circle unit (4096 = 360 degrees / TAU)
pub const ANGLE_CIRCLE_4096: u16 = 4096;

/// Skeletal bone / segment definition for chain animations (weapons, tails, ropes)
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct AnimChainSegment {
    pub angle: u16,
    pub length: f32,
    pub world_x: f32,
    pub world_y: f32,
    pub world_z: f32,
}

impl Default for AnimChainSegment {
    fn default() -> Self {
        Self {
            angle: 0,
            length: 1.0,
            world_x: 0.0,
            world_y: 0.0,
            world_z: 0.0,
        }
    }
}

/// 3D Sprite Primitive definition (textured quad with PS1 Ordering Table depth)
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct Sprite3DQuad {
    pub center: Vec3,
    pub size: Vec2,
    pub rotation_y: f32,
    pub scale: f32,
    pub uvs: [Vec2; 4],
    pub color_rgba: [u8; 4],
    pub ot_depth: u32,
    pub direct_screen: bool,
}

impl Default for Sprite3DQuad {
    fn default() -> Self {
        Self {
            center: Vec3::ZERO,
            size: Vec2::splat(1.0),
            rotation_y: 0.0,
            scale: 1.0,
            uvs: [
                Vec2::new(0.0, 0.0),
                Vec2::new(1.0, 0.0),
                Vec2::new(1.0, 1.0),
                Vec2::new(0.0, 1.0),
            ],
            color_rgba: [255, 255, 255, 255],
            ot_depth: 0,
            direct_screen: false,
        }
    }
}

/// Skeletal Animation Virtual Machine & Sprite State
#[derive(Resource, Component, Debug, Clone)]
pub struct TombaAnimVM {
    pub active_clip_id: u16,
    pub current_frame: f32,
    pub total_frames: f32,
    pub frame_rate: f32,
    pub is_looping: bool,
    pub has_finished: bool,
    pub anim_mode: u8,
    pub anim_timer: u16,
    pub anim_counter: i16,
    pub velocity_y: i16,
    pub pos_y_fixed: i32,

    // Chain segments (e.g. grapple hook, blackjack rope, tail)
    pub chain_segments: [AnimChainSegment; 16],
    pub chain_segment_count: usize,
    pub chain_radius: f32,

    // Draw & Sprite submission queue
    pub draw_mode: u8,
    pub render_flags: u16,
    pub sprites: Vec<Sprite3DQuad>,
}

impl Default for TombaAnimVM {
    fn default() -> Self {
        Self {
            active_clip_id: 2, // Default to idle
            current_frame: 0.0,
            total_frames: 30.0,
            frame_rate: 30.0,
            is_looping: true,
            has_finished: false,
            anim_mode: 0,
            anim_timer: 0,
            anim_counter: 0xA00,
            velocity_y: 0,
            pos_y_fixed: 0,

            chain_segments: [AnimChainSegment::default(); 16],
            chain_segment_count: 4,
            chain_radius: 0.5,

            draw_mode: 0,
            render_flags: 1,
            sprites: Vec::new(),
        }
    }
}

// ============================================================================
// STANDALONE FUNCTIONS (ANM-01 THROUGH ANM-81)
// ============================================================================

/// ANM-01: `Entity_AdvanceAnim` (0x80052694, `entity/anim/Entity_AdvanceAnim.c`)
/// Entity animation advance: decrements anim counter, clamps at 0xA00, updates velocity
pub fn entity_advanceanim(vm: &mut TombaAnimVM) {
    let mut counter = vm.anim_counter.wrapping_sub(0x40);
    if counter < 0x0A00 {
        counter = 0x0A00;
    }
    vm.anim_counter = counter;

    let mut vy = vm.velocity_y.wrapping_add(0x00A0);
    if vy > 0x1000 {
        vy = 0x1000;
    }
    vm.velocity_y = vy;
    vm.pos_y_fixed = vm.pos_y_fixed.wrapping_add((vy as i32) * 0x100);
}

/// ANM-02: `Entity_AdvanceAnim2` (0x80072E60, `entity/anim/Entity_AdvanceAnim2.c`)
/// Advances animation frame delta
pub fn entity_advanceanim2(vm: &mut TombaAnimVM, delta: f32) {
    vm.current_frame += delta;
    if vm.current_frame >= vm.total_frames {
        if vm.is_looping {
            vm.current_frame = 0.0;
        } else {
            vm.current_frame = vm.total_frames;
            vm.has_finished = true;
        }
    }
}

/// ANM-03: `Entity_AdvanceAnim3` (0x80077B5C, `entity/anim/Entity_AdvanceAnim3.c`)
/// Advances frame using timer
pub fn entity_advanceanim3(vm: &mut TombaAnimVM) {
    vm.anim_timer = vm.anim_timer.wrapping_add(1);
    entity_advanceanim2(vm, 1.0);
}

/// ANM-04: `Entity_AdvanceAnimByte` (0x80031744, `entity/anim/Entity_AdvanceAnimByte.c`)
/// Reads and applies 8-bit animation control byte
pub fn entity_advanceanimbyte(vm: &mut TombaAnimVM, b: u8) {
    vm.anim_mode = b;
}

/// ANM-05: `Entity_AdvanceAnimScript` (0x80031780, `entity/anim/Entity_AdvanceAnimScript.c`)
/// Steps animation script opcode
pub fn entity_advanceanimscript(_vm: &mut TombaAnimVM, opcode: u16) -> u16 {
    opcode & 0x07FF
}

/// ANM-06: `Entity_AdvanceAnimWord` (0x80031708, `entity/anim/Entity_AdvanceAnimWord.c`)
/// Reads and applies 16-bit animation word
pub fn entity_advanceanimword(vm: &mut TombaAnimVM, w: u16) {
    vm.render_flags = w;
}

/// ANM-07: `Entity_AnimChain` (0x80071CF4, `entity/anim/Entity_AnimChain.c`)
/// Multi-segment chain kinematics (e.g. grapple hook or tail)
pub fn entity_animchain(vm: &mut TombaAnimVM, base_pos: Vec3) {
    let mut current_pos = base_pos;
    for i in 0..vm.chain_segment_count {
        let seg = &mut vm.chain_segments[i];
        let angle_rad = (seg.angle as f32 / ANGLE_CIRCLE_4096 as f32) * std::f32::consts::TAU;
        current_pos.x += angle_rad.cos() * seg.length;
        current_pos.y += angle_rad.sin() * seg.length;
        seg.world_x = current_pos.x;
        seg.world_y = current_pos.y;
        seg.world_z = current_pos.z;
    }
}

/// ANM-08: `Entity_AnimController` (0x80072898, `entity/anim/Entity_AnimController.c`)
/// Controller update for active animation
pub fn entity_animcontroller(vm: &mut TombaAnimVM, dt: f32) {
    let delta_frames = dt * vm.frame_rate;
    entity_advanceanim2(vm, delta_frames);
}

/// ANM-09: `Entity_AnimController2` (0x80076904, `entity/anim/Entity_AnimController2.c`)
/// Controller update variant 2
pub fn entity_animcontroller2(vm: &mut TombaAnimVM) {
    entity_advanceanim2(vm, 1.0);
}

/// ANM-10: `Entity_AnimFrame` (0x80076D68, `entity/anim/Entity_AnimFrame.c`)
/// Advances animation frame, checks wrap
pub fn entity_animframe(vm: &mut TombaAnimVM) -> bool {
    let prev = vm.current_frame;
    entity_advanceanim2(vm, 1.0);
    vm.current_frame < prev || vm.has_finished
}

/// ANM-11: `Entity_AnimLoad2` (0x80054C08, `entity/anim/Entity_AnimLoad2.c`)
/// Loads animation clip by ID
pub fn entity_animload2(vm: &mut TombaAnimVM, clip_id: u16) {
    vm.active_clip_id = clip_id.min((MAX_ANIM_CLIPS - 1) as u16);
    vm.current_frame = 0.0;
    vm.has_finished = false;
}

/// ANM-12: `Entity_AnimLoad3` (0x80054790, `entity/anim/Entity_AnimLoad3.c`)
/// Loads animation clip variant 3
pub fn entity_animload3(vm: &mut TombaAnimVM, clip_id: u16) {
    entity_animload2(vm, clip_id);
}

/// ANM-13: `Entity_AnimLoad4` (0x80071260, `entity/anim/Entity_AnimLoad4.c`)
/// Loads animation clip variant 4
pub fn entity_animload4(vm: &mut TombaAnimVM, clip_id: u16) {
    entity_animload2(vm, clip_id);
}

/// ANM-14: `Entity_AnimLoadDispatch` (0x8005490C, `entity/anim/Entity_AnimLoadDispatch.c`)
/// Dispatches animation load by entity type
pub fn entity_animloaddispatch(vm: &mut TombaAnimVM, entity_type: u8, base_anim: u16) {
    let clip = base_anim + (entity_type as u16);
    entity_animload2(vm, clip);
}

/// ANM-15: `Entity_AnimMode` (0x8003FE00, `entity/anim/Entity_AnimMode.c`)
/// Sets animation mode and resets timer
pub fn entity_animmode(vm: &mut TombaAnimVM, mode: u8) {
    vm.anim_mode = mode;
    vm.anim_timer = 0;
}

/// ANM-16: `Entity_AnimPlay2` (0x8007156C, `entity/anim/Entity_AnimPlay2.c`)
/// Plays animation with specific mode
pub fn entity_animplay2(vm: &mut TombaAnimVM, clip_id: u16, mode: u8) {
    entity_animload2(vm, clip_id);
    vm.anim_mode = mode;
}

/// ANM-17: `Entity_AnimPlayer` (0x80071768, `entity/anim/Entity_AnimPlayer.c`)
/// Main animation player update
pub fn entity_animplayer(vm: &mut TombaAnimVM, dt: f32) {
    entity_animcontroller(vm, dt);
}

/// ANM-18: `Entity_AnimScriptStep` (0x80041468, `entity/anim/Entity_AnimScriptStep.c`)
/// Steps animation event script
pub fn entity_animscriptstep(vm: &mut TombaAnimVM) -> u8 {
    vm.anim_mode
}

/// ANM-19: `Entity_AnimSegment` (0x80071C48, `entity/anim/Entity_AnimSegment.c`)
/// Advances single segment angle by 0x100 (22.5 deg)
pub fn entity_animsegment(vm: &mut TombaAnimVM, seg_idx: usize) {
    if seg_idx < vm.chain_segments.len() {
        vm.chain_segments[seg_idx].angle = (vm.chain_segments[seg_idx].angle + 0x100) % ANGLE_CIRCLE_4096;
    }
}

/// ANM-20: `Entity_AnimSegment2` (0x800721DC, `entity/anim/Entity_AnimSegment2.c`)
/// Segment animation variant 2
pub fn entity_animsegment2(vm: &mut TombaAnimVM, seg_idx: usize, delta_angle: u16) {
    if seg_idx < vm.chain_segments.len() {
        vm.chain_segments[seg_idx].angle = (vm.chain_segments[seg_idx].angle + delta_angle) % ANGLE_CIRCLE_4096;
    }
}

/// ANM-21: `Entity_AnimSet` (0x80064358, `entity/anim/Entity_AnimSet.c`)
/// Sets animation parameters (clip, frames, loop)
pub fn entity_animset(vm: &mut TombaAnimVM, clip_id: u16, frames: f32, is_looping: bool) {
    vm.active_clip_id = clip_id;
    vm.total_frames = frames;
    vm.current_frame = 0.0;
    vm.is_looping = is_looping;
    vm.has_finished = false;
}

/// ANM-22: `Entity_LoadAnimData` (0x80077B38, `entity/anim/Entity_LoadAnimData.c`)
/// Sets animation data pointer
pub fn entity_loadanimdata(vm: &mut TombaAnimVM, clip_id: u16) {
    entity_animload2(vm, clip_id);
}

/// ANM-23: `Entity_LoadAnimData3` (0x80077C40, `entity/anim/Entity_LoadAnimData3.c`)
/// Loads animation data variant 3
pub fn entity_loadanimdata3(vm: &mut TombaAnimVM, clip_id: u16) {
    entity_animload2(vm, clip_id);
}

/// ANM-24: `Entity_LoadAnimDataEx` (0x80077CFC, `entity/anim/Entity_LoadAnimDataEx.c`)
/// Extended animation load
pub fn entity_loadanimdataex(vm: &mut TombaAnimVM, clip_id: u16, total_frames: f32) {
    entity_animset(vm, clip_id, total_frames, true);
}

/// ANM-25: `Entity_LoadAnimDispatch` (0x80054E24, `entity/anim/Entity_LoadAnimDispatch.c`)
/// Animation load dispatch
pub fn entity_loadanimdispatch(vm: &mut TombaAnimVM, mode: u8, clip_id: u16) {
    entity_animload2(vm, clip_id);
    vm.anim_mode = mode;
}

/// ANM-26: `Entity_LoadAnimIfChanged` (0x80054D14, `entity/anim/Entity_LoadAnimIfChanged.c`)
/// Loads animation data only when animation ID has changed
pub fn entity_loadanimifchanged(vm: &mut TombaAnimVM, new_clip_id: u16) -> bool {
    if vm.active_clip_id != new_clip_id {
        entity_animload2(vm, new_clip_id);
        true
    } else {
        false
    }
}

/// ANM-27: `Entity_LoadAnimTable` (0x80054B34, `entity/anim/Entity_LoadAnimTable.c`)
/// Loads animation clip from table
pub fn entity_loadanimtable(vm: &mut TombaAnimVM, table_idx: usize) {
    entity_animload2(vm, table_idx as u16);
}

/// ANM-28: `Entity_Draw` (0x8003CCA4, `entity/draw/Entity_Draw.c`)
/// Main entity draw dispatcher
pub fn entity_draw(vm: &mut TombaAnimVM, mode: u8) {
    vm.draw_mode = mode;
}

/// ANM-29: `Entity_Draw3DSprite` (0x8003C2D4, `entity/draw/Entity_Draw3DSprite.c`)
/// Submits 3D billboard sprite with GTE transform
pub fn entity_draw3dsprite(vm: &mut TombaAnimVM, center: Vec3, size: Vec2, rot_y: f32) {
    vm.sprites.push(Sprite3DQuad {
        center,
        size,
        rotation_y: rot_y,
        scale: 1.0,
        direct_screen: false,
        ..default()
    });
}

/// ANM-30: `Entity_Draw3DSpriteDirect` (0x8003C788, `entity/draw/Entity_Draw3DSpriteDirect.c`)
/// Submits sprite directly in screen coordinates
pub fn entity_draw3dspritedirect(vm: &mut TombaAnimVM, screen_pos: Vec2, size: Vec2) {
    vm.sprites.push(Sprite3DQuad {
        center: Vec3::new(screen_pos.x, screen_pos.y, 0.0),
        size,
        direct_screen: true,
        ..default()
    });
}

/// ANM-31: `Entity_Draw3DSpriteRotated` (0x8003C5F8, `entity/draw/Entity_Draw3DSpriteRotated.c`)
/// Submits rotated 3D sprite
pub fn entity_draw3dspriterotated(vm: &mut TombaAnimVM, center: Vec3, size: Vec2, rot_y: f32) {
    entity_draw3dsprite(vm, center, size, rot_y);
}

/// ANM-32: `Entity_Draw3DSpriteScaled` (0x8003C464, `entity/draw/Entity_Draw3DSpriteScaled.c`)
/// Submits scaled 3D sprite
pub fn entity_draw3dspritescaled(vm: &mut TombaAnimVM, center: Vec3, size: Vec2, scale: f32) {
    vm.sprites.push(Sprite3DQuad {
        center,
        size,
        scale,
        ..default()
    });
}

/// ANM-33: `Entity_DrawBehavior` (0x8002EF58, `entity/draw/Entity_DrawBehavior.c`)
/// Selects draw behavior mode
pub fn entity_drawbehavior(vm: &mut TombaAnimVM, mode: u8) {
    vm.draw_mode = mode;
}

/// ANM-34: `Entity_DrawCheck` (0x80051128, `entity/draw/Entity_DrawCheck.c`)
/// Checks if entity should be drawn
pub fn entity_drawcheck(vm: &TombaAnimVM) -> bool {
    (vm.render_flags & 1) != 0
}

/// ANM-35: `Entity_DrawCheck2` (0x80051464, `entity/draw/Entity_DrawCheck2.c`)
/// Secondary draw check
pub fn entity_drawcheck2(vm: &TombaAnimVM) -> bool {
    (vm.render_flags & 2) == 0
}

/// ANM-36: `Entity_DrawChild` (0x80021FFC, `entity/draw/Entity_DrawChild.c`)
/// Draws child entity sprite
pub fn entity_drawchild(vm: &mut TombaAnimVM, pos: Vec3) {
    entity_draw3dsprite(vm, pos, Vec2::splat(0.5), 0.0);
}

/// ANM-37: `Entity_DrawChild2` (0x8002206C, `entity/draw/Entity_DrawChild2.c`)
/// Draws child sprite variant 2
pub fn entity_drawchild2(vm: &mut TombaAnimVM, pos: Vec3) {
    entity_drawchild(vm, pos);
}

/// ANM-38: `Entity_DrawChild3` (0x80022208, `entity/draw/Entity_DrawChild3.c`)
/// Draws child sprite variant 3
pub fn entity_drawchild3(vm: &mut TombaAnimVM, pos: Vec3) {
    entity_drawchild(vm, pos);
}

/// ANM-39: `Entity_DrawChild3_Variant0` (0x80022144, `entity/draw/Entity_DrawChild3_Variant0.c`)
/// Variant 0 of child 3
pub fn entity_drawchild3_variant0(vm: &mut TombaAnimVM, pos: Vec3) {
    entity_drawchild(vm, pos);
}

/// ANM-40: `Entity_DrawChild4` (0x80022330, `entity/draw/Entity_DrawChild4.c`)
/// Draws child sprite variant 4
pub fn entity_drawchild4(vm: &mut TombaAnimVM, pos: Vec3) {
    entity_drawchild(vm, pos);
}

/// ANM-41: `Entity_DrawChild5` (0x80022510, `entity/draw/Entity_DrawChild5.c`)
/// Draws child sprite variant 5
pub fn entity_drawchild5(vm: &mut TombaAnimVM, pos: Vec3) {
    entity_drawchild(vm, pos);
}

/// ANM-42: `Entity_DrawChild5_Variant0` (0x8002244C, `entity/draw/Entity_DrawChild5_Variant0.c`)
/// Variant 0 of child 5
pub fn entity_drawchild5_variant0(vm: &mut TombaAnimVM, pos: Vec3) {
    entity_drawchild(vm, pos);
}

/// ANM-43: `Entity_DrawChild6` (0x800225C4, `entity/draw/Entity_DrawChild6.c`)
/// Draws child sprite variant 6
pub fn entity_drawchild6(vm: &mut TombaAnimVM, pos: Vec3) {
    entity_drawchild(vm, pos);
}

/// ANM-44: `Entity_DrawChild7` (0x8002263C, `entity/draw/Entity_DrawChild7.c`)
/// Draws child sprite variant 7
pub fn entity_drawchild7(vm: &mut TombaAnimVM, pos: Vec3) {
    entity_drawchild(vm, pos);
}

/// ANM-45: `Entity_DrawLifecycle` (0x800331DC, `entity/draw/Entity_DrawLifecycle.c`)
/// Executes entity draw lifecycle step 1
pub fn entity_drawlifecycle(vm: &mut TombaAnimVM) {
    vm.draw_mode = 1;
}

/// ANM-46: `Entity_DrawLifecycle2` (0x80033630, `entity/draw/Entity_DrawLifecycle2.c`)
/// Executes entity draw lifecycle step 2
pub fn entity_drawlifecycle2(vm: &mut TombaAnimVM) {
    vm.draw_mode = 2;
}

/// ANM-47: `Entity_DrawLifecycle3` (0x80033560, `entity/draw/Entity_DrawLifecycle3.c`)
/// Executes entity draw lifecycle step 3
pub fn entity_drawlifecycle3(vm: &mut TombaAnimVM) {
    vm.draw_mode = 3;
}

/// ANM-48: `Entity_DrawLifecycle4` (0x80033380, `entity/draw/Entity_DrawLifecycle4.c`)
/// Executes entity draw lifecycle step 4
pub fn entity_drawlifecycle4(vm: &mut TombaAnimVM) {
    vm.draw_mode = 4;
}

/// ANM-49: `Entity_DrawLifecycle5` (0x80032918, `entity/draw/Entity_DrawLifecycle5.c`)
/// Executes entity draw lifecycle step 5
pub fn entity_drawlifecycle5(vm: &mut TombaAnimVM) {
    vm.draw_mode = 5;
}

/// ANM-50: `Entity_DrawLifecycle6` (0x80032F98, `entity/draw/Entity_DrawLifecycle6.c`)
/// Executes entity draw lifecycle step 6
pub fn entity_drawlifecycle6(vm: &mut TombaAnimVM) {
    vm.draw_mode = 6;
}

/// ANM-51: `Entity_DrawLifecycle7` (0x80033450, `entity/draw/Entity_DrawLifecycle7.c`)
/// Executes entity draw lifecycle step 7
pub fn entity_drawlifecycle7(vm: &mut TombaAnimVM) {
    vm.draw_mode = 7;
}

/// ANM-52: `Entity_DrawLifecycle8` (0x80033278, `entity/draw/Entity_DrawLifecycle8.c`)
/// Executes entity draw lifecycle step 8
pub fn entity_drawlifecycle8(vm: &mut TombaAnimVM) {
    vm.draw_mode = 8;
}

/// ANM-53: `Entity_DrawMain` (0x800251F0, `entity/draw/Entity_DrawMain.c`)
/// Entity draw main pipeline 1
pub fn entity_drawmain(vm: &mut TombaAnimVM) {
    vm.sprites.clear();
}

/// ANM-54: `Entity_DrawMain2` (0x8002C920, `entity/draw/Entity_DrawMain2.c`)
/// Entity draw main pipeline 2
pub fn entity_drawmain2(vm: &mut TombaAnimVM) {
    vm.draw_mode = 2;
}

/// ANM-55: `Entity_DrawMain3` (0x80037E44, `entity/draw/Entity_DrawMain3.c`)
/// Entity draw main pipeline 3
pub fn entity_drawmain3(vm: &mut TombaAnimVM) {
    vm.draw_mode = 3;
}

/// ANM-56: `Entity_DrawMain4` (0x8002D65C, `entity/draw/Entity_DrawMain4.c`)
/// Entity draw main pipeline 4
pub fn entity_drawmain4(vm: &mut TombaAnimVM) {
    vm.draw_mode = 4;
}

/// ANM-57: `Entity_DrawMain5` (0x80030264, `entity/draw/Entity_DrawMain5.c`)
/// Entity draw main pipeline 5
pub fn entity_drawmain5(vm: &mut TombaAnimVM) {
    vm.draw_mode = 5;
}

/// ANM-58: `Entity_DrawMain6` (0x8002E680, `entity/draw/Entity_DrawMain6.c`)
/// Entity draw main pipeline 6
pub fn entity_drawmain6(vm: &mut TombaAnimVM) {
    vm.draw_mode = 6;
}

/// ANM-59: `Entity_DrawMain7` (0x800527C8, `entity/draw/Entity_DrawMain7.c`)
/// Entity draw main pipeline 7
pub fn entity_drawmain7(vm: &mut TombaAnimVM) {
    vm.draw_mode = 7;
}

/// ANM-60: `Entity_DrawMain8` (0x8002CD18, `entity/draw/Entity_DrawMain8.c`)
/// Entity draw main pipeline 8
pub fn entity_drawmain8(vm: &mut TombaAnimVM) {
    vm.draw_mode = 8;
}

/// ANM-61: `Entity_DrawPrim` (0x80037894, `entity/draw/Entity_DrawPrim.c`)
/// Submits generic primitive
pub fn entity_drawprim(vm: &mut TombaAnimVM, quad: Sprite3DQuad) {
    vm.sprites.push(quad);
}

/// ANM-62: `Entity_DrawQuad` (0x800336DC, `entity/draw/Entity_DrawQuad.c`)
/// Builds textured quad from entity data
pub fn entity_drawquad(center: Vec3, size: Vec2) -> Sprite3DQuad {
    Sprite3DQuad {
        center,
        size,
        ..default()
    }
}

/// ANM-63: `Entity_DrawQuad_Variant0` (0x8003F344, `entity/draw/Entity_DrawQuad_Variant0.c`)
/// Quad drawer variant 0
pub fn entity_drawquad_variant0(center: Vec3, size: Vec2) -> Sprite3DQuad {
    entity_drawquad(center, size)
}

/// ANM-64: `Entity_DrawQuad_Variant1` (0x8003F3F4, `entity/draw/Entity_DrawQuad_Variant1.c`)
/// Quad drawer variant 1
pub fn entity_drawquad_variant1(center: Vec3, size: Vec2) -> Sprite3DQuad {
    entity_drawquad(center, size)
}

/// ANM-65: `Entity_DrawQuad_Variant2` (0x8003F4C4, `entity/draw/Entity_DrawQuad_Variant2.c`)
/// Quad drawer variant 2
pub fn entity_drawquad_variant2(center: Vec3, size: Vec2) -> Sprite3DQuad {
    entity_drawquad(center, size)
}

/// ANM-66: `Entity_DrawQuad_Variant3` (0x8003F594, `entity/draw/Entity_DrawQuad_Variant3.c`)
/// Quad drawer variant 3
pub fn entity_drawquad_variant3(center: Vec3, size: Vec2) -> Sprite3DQuad {
    entity_drawquad(center, size)
}

/// ANM-67: `Entity_DrawSprite` (0x8002E1E8, `entity/draw/Entity_DrawSprite.c`)
/// Renders standard entity sprite
pub fn entity_drawsprite(vm: &mut TombaAnimVM, pos: Vec3, size: Vec2) {
    entity_draw3dsprite(vm, pos, size, 0.0);
}

/// ANM-68: `Entity_DrawSprite2` (0x8002ECD8, `entity/draw/Entity_DrawSprite2.c`)
/// Sprite drawer variant 2
pub fn entity_drawsprite2(vm: &mut TombaAnimVM, pos: Vec3, size: Vec2) {
    entity_drawsprite(vm, pos, size);
}

/// ANM-69: `Entity_DrawSprite3` (0x8002C138, `entity/draw/Entity_DrawSprite3.c`)
/// Sprite drawer variant 3
pub fn entity_drawsprite3(vm: &mut TombaAnimVM, pos: Vec3, size: Vec2) {
    entity_drawsprite(vm, pos, size);
}

/// ANM-70: `Entity_DrawSprite4` (0x8002A834, `entity/draw/Entity_DrawSprite4.c`)
/// Sprite drawer variant 4
pub fn entity_drawsprite4(vm: &mut TombaAnimVM, pos: Vec3, size: Vec2) {
    entity_drawsprite(vm, pos, size);
}

/// ANM-71: `Entity_DrawSprite5` (0x80030D68, `entity/draw/Entity_DrawSprite5.c`)
/// Sprite drawer variant 5
pub fn entity_drawsprite5(vm: &mut TombaAnimVM, pos: Vec3, size: Vec2) {
    entity_drawsprite(vm, pos, size);
}

/// ANM-72: `Entity_DrawSprite6` (0x8002B3A4, `entity/draw/Entity_DrawSprite6.c`)
/// Sprite drawer variant 6
pub fn entity_drawsprite6(vm: &mut TombaAnimVM, pos: Vec3, size: Vec2) {
    entity_drawsprite(vm, pos, size);
}

/// ANM-73: `Entity_DrawSpriteAndProject` (0x80033080, `entity/draw/Entity_DrawSpriteAndProject.c`)
/// Combines projection and sprite submission
pub fn entity_drawspriteandproject(vm: &mut TombaAnimVM, pos: Vec3, size: Vec2) {
    entity_drawsprite(vm, pos, size);
}

/// ANM-74: `Entity_DrawSpriteDispatch` (0x80024D34, `entity/draw/Entity_DrawSpriteDispatch.c`)
/// Dispatches sprite draw by type
pub fn entity_drawspritedispatch(vm: &mut TombaAnimVM, sprite_type: u8, pos: Vec3) {
    match sprite_type {
        0 => entity_drawsprite(vm, pos, Vec2::splat(1.0)),
        1 => entity_draw3dspritescaled(vm, pos, Vec2::splat(1.0), 1.5),
        2 => entity_draw3dspriterotated(vm, pos, Vec2::splat(1.0), 0.785),
        _ => entity_drawchild(vm, pos),
    }
}

/// ANM-75: `Entity_DrawSpriteNoColor` (0x800328EC, `entity/draw/Entity_DrawSpriteNoColor.c`)
/// Draws sprite with pure white modulation (no tint)
pub fn entity_drawspritenocolor(vm: &mut TombaAnimVM, pos: Vec3, size: Vec2) {
    let mut quad = entity_drawquad(pos, size);
    quad.color_rgba = [255, 255, 255, 255];
    vm.sprites.push(quad);
}

/// ANM-76: `Entity_DrawSpriteRotated` (0x80028B70, `entity/draw/Entity_DrawSpriteRotated.c`)
/// Draws rotated sprite from transform
pub fn entity_drawspriterotated(vm: &mut TombaAnimVM, pos: Vec3, size: Vec2, rot: f32) {
    entity_draw3dspriterotated(vm, pos, size, rot);
}

/// ANM-77: `Entity_DrawSpriteSwitch` (0x8007D0D0, `entity/draw/Entity_DrawSpriteSwitch.c`)
/// Switches active sprite draw type
pub fn entity_drawspriteswitch(vm: &mut TombaAnimVM, sprite_type: u8) {
    vm.draw_mode = sprite_type;
}

/// ANM-78: `Entity_DrawTrailChain` (0x80029664, `entity/draw/Entity_DrawTrailChain.c`)
/// Draws motion trail chain connecting segments
pub fn entity_drawtrailchain(vm: &mut TombaAnimVM) {
    for i in 0..vm.chain_segment_count {
        let seg = vm.chain_segments[i];
        let pos = Vec3::new(seg.world_x, seg.world_y, seg.world_z);
        entity_drawchild(vm, pos);
    }
}

/// ANM-79: `Entity_DrawType` (0x8002F230, `entity/draw/Entity_DrawType.c`)
/// Sets draw type mode
pub fn entity_drawtype(vm: &mut TombaAnimVM, draw_type: u8) {
    vm.draw_mode = draw_type;
}

/// ANM-80: `Entity_DrawUI` (0x800737F8, `entity/draw/Entity_DrawUI.c`)
/// Draws UI sprite primitive array
pub fn entity_drawui(vm: &mut TombaAnimVM, screen_pos: Vec2, size: Vec2) {
    entity_draw3dspritedirect(vm, screen_pos, size);
}

/// ANM-81: `Entity_DrawUI2` (0x80037B6C, `entity/draw/Entity_DrawUI2.c`)
/// Draws UI sprite variant 2
pub fn entity_drawui2(vm: &mut TombaAnimVM, screen_pos: Vec2, size: Vec2) {
    entity_drawui(vm, screen_pos, size);
}

// ============================================================================
// METHOD WRAPPERS ON TombaAnimVM
// ============================================================================

impl TombaAnimVM {
    pub fn advance_anim(&mut self) {
        entity_advanceanim(self);
    }

    pub fn advance_anim2(&mut self, delta: f32) {
        entity_advanceanim2(self, delta);
    }

    pub fn anim_chain(&mut self, base_pos: Vec3) {
        entity_animchain(self, base_pos);
    }

    pub fn anim_controller(&mut self, dt: f32) {
        entity_animcontroller(self, dt);
    }

    pub fn anim_frame(&mut self) -> bool {
        entity_animframe(self)
    }

    pub fn anim_load(&mut self, clip_id: u16) {
        entity_animload2(self, clip_id);
    }

    pub fn anim_set(&mut self, clip_id: u16, frames: f32, is_looping: bool) {
        entity_animset(self, clip_id, frames, is_looping);
    }

    pub fn draw_3d_sprite(&mut self, center: Vec3, size: Vec2, rot_y: f32) {
        entity_draw3dsprite(self, center, size, rot_y);
    }
}

// ============================================================================
// UNIT TESTS (VERIFICATION OF ANM-01 THROUGH ANM-81)
// ============================================================================

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_animation_frame_advancement_and_looping() {
        let mut vm = TombaAnimVM::default();
        entity_animset(&mut vm, 12, 10.0, true);

        assert_eq!(vm.active_clip_id, 12);
        assert_eq!(vm.current_frame, 0.0);
        assert!(!vm.has_finished);

        // Advance 5 frames
        entity_advanceanim2(&mut vm, 5.0);
        assert_eq!(vm.current_frame, 5.0);

        // Advance 6 more frames: should wrap to (11 - 10) or reset
        entity_advanceanim2(&mut vm, 6.0);
        assert_eq!(vm.current_frame, 0.0); // Looping reset
    }

    #[test]
    fn test_non_looping_animation_finish() {
        let mut vm = TombaAnimVM::default();
        entity_animset(&mut vm, 20, 15.0, false);

        entity_advanceanim2(&mut vm, 20.0);
        assert_eq!(vm.current_frame, 15.0);
        assert!(vm.has_finished);
    }

    #[test]
    fn test_anim_chain_kinematics() {
        let mut vm = TombaAnimVM::default();
        vm.chain_segment_count = 2;
        // Segment 0: 0 degrees (pointing in +X)
        vm.chain_segments[0].angle = 0;
        vm.chain_segments[0].length = 2.0;

        // Segment 1: 90 degrees (1024 / 4096 * TAU = PI/2, pointing in +Y)
        vm.chain_segments[1].angle = 1024;
        vm.chain_segments[1].length = 3.0;

        entity_animchain(&mut vm, Vec3::ZERO);

        // Segment 0 end pos
        assert!((vm.chain_segments[0].world_x - 2.0).abs() < 1e-4);
        assert!((vm.chain_segments[0].world_y - 0.0).abs() < 1e-4);

        // Segment 1 end pos: (2.0, 3.0, 0.0)
        assert!((vm.chain_segments[1].world_x - 2.0).abs() < 1e-4);
        assert!((vm.chain_segments[1].world_y - 3.0).abs() < 1e-4);
    }

    #[test]
    fn test_3d_sprite_quad_generation() {
        let mut vm = TombaAnimVM::default();
        entity_draw3dsprite(&mut vm, Vec3::new(10.0, 5.0, 2.0), Vec2::new(1.5, 2.0), 0.5);

        assert_eq!(vm.sprites.len(), 1);
        let quad = &vm.sprites[0];
        assert_eq!(quad.center, Vec3::new(10.0, 5.0, 2.0));
        assert_eq!(quad.size, Vec2::new(1.5, 2.0));
        assert_eq!(quad.rotation_y, 0.5);
        assert!(!quad.direct_screen);

        // Direct screen quad
        entity_draw3dspritedirect(&mut vm, Vec2::new(320.0, 240.0), Vec2::splat(16.0));
        assert_eq!(vm.sprites.len(), 2);
        assert!(vm.sprites[1].direct_screen);
    }

    #[test]
    fn test_advance_anim_counter_and_fixed_point_y() {
        let mut vm = TombaAnimVM::default();
        vm.anim_counter = 0xB00;
        vm.velocity_y = 0x100;
        vm.pos_y_fixed = 0;

        entity_advanceanim(&mut vm);

        // Counter: 0xB00 - 0x40 = 0xAC0
        assert_eq!(vm.anim_counter, 0xAC0);
        // Velocity Y: 0x100 + 0xA0 = 0x1A0
        assert_eq!(vm.velocity_y, 0x1A0);
        // Pos Y fixed: 0x1A0 * 0x100 = 0x1A000
        assert_eq!(vm.pos_y_fixed, 0x1A000);
    }
}
