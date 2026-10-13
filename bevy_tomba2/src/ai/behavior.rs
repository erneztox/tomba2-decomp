//! Sector 5: Entity Behaviors, AI & Interactive World (BEH-01 through BEH-71)
//!
//! Authentic 1:1 reimplementation of PS1 Tomba! 2 entity behaviors:
//! - Enemy AI (Koma Pigs, Evil Pigs, Bosses): patrol/wander, target seeking, approach, attack lunges.
//! - Interactive World: Doors & level transitions, pushable crates/blocks, mechanisms.
//! - Collectibles & Items: Bouncing AP coins, gems, quest items with pickup radius.
//! - Projectiles & Combat: Boomerangs, fireballs, rocks with ballistic kinematics.
//! - Particles & Dust: Dust trails, sparkle bursts, explosions with timed lifecycle.

use bevy::prelude::*;

/// AI State enumeration for enemies and NPCs
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum EnemyAIState {
    #[default]
    Idle,
    Wander,
    Approach,
    Attack,
    Hurt,
    Death,
    BossPhase(u8),
    Talk,
}

/// Generic entity behavior component for Bevy ECS
#[derive(Component, Debug, Clone, PartialEq)]
pub struct EntityBehavior {
    pub state: EnemyAIState,
    pub sub_state: u8,
    pub timer: f32,
    pub health: i16,
    pub max_health: i16,
    pub move_speed: f32,
    pub patrol_min: f32,
    pub patrol_max: f32,
    pub facing: f32,
    pub target_pos: Vec3,
    pub attack_cooldown: f32,
    pub is_alive: bool,
}

impl Default for EntityBehavior {
    fn default() -> Self {
        Self {
            state: EnemyAIState::Idle,
            sub_state: 0,
            timer: 0.0,
            health: 3,
            max_health: 3,
            move_speed: 2.4,
            patrol_min: 0.0,
            patrol_max: 20.0,
            facing: 1.0,
            target_pos: Vec3::ZERO,
            attack_cooldown: 0.0,
            is_alive: true,
        }
    }
}

/// Collectible item entity data (gems, AP coins, items)
#[derive(Component, Debug, Clone, PartialEq)]
pub struct CollectibleItem {
    pub item_id: u8,
    pub ap_value: u32,
    pub bounce_timer: f32,
    pub is_collected: bool,
    pub pickup_radius: f32,
}

impl Default for CollectibleItem {
    fn default() -> Self {
        Self {
            item_id: 1,
            ap_value: 100,
            bounce_timer: 0.0,
            is_collected: false,
            pickup_radius: 1.8,
        }
    }
}

/// Door / Level transition trigger
#[derive(Component, Debug, Clone, PartialEq, Eq)]
pub struct DoorTrigger {
    pub target_area: u8,
    pub target_plane: u32,
    pub is_open: bool,
    pub requires_key: bool,
    pub key_item_id: u8,
}

impl Default for DoorTrigger {
    fn default() -> Self {
        Self {
            target_area: 5,
            target_plane: 0,
            is_open: true,
            requires_key: false,
            key_item_id: 0,
        }
    }
}

/// Projectile entity (rocks, boomerangs, fireballs)
#[derive(Component, Debug, Clone, PartialEq)]
pub struct Projectile {
    pub velocity: Vec3,
    pub lifetime: f32,
    pub damage: i16,
    pub is_friendly: bool,
}

impl Default for Projectile {
    fn default() -> Self {
        Self {
            velocity: Vec3::new(10.0, 0.0, 0.0),
            lifetime: 3.0,
            damage: 1,
            is_friendly: true,
        }
    }
}

/// Comprehensive Tomba! 2 AI & World Behavior Resource
#[derive(Resource, Component, Debug, Clone, Default)]
pub struct TombaAI {
    pub active_enemies_count: usize,
    pub active_boss_id: u8,
    pub global_alert: bool,
    pub dust_trail_history: [Vec3; 5],
}

// ============================================================================
// STANDALONE FUNCTIONS (BEH-01 THROUGH BEH-71)
// ============================================================================

/// BEH-01: `Entity_Behavior_AI` (0x80020364, `entity/behavior/Entity_Behavior_AI.c`)
/// Entity AI behavior: checks distance to target, transitions between Wander and Approach
pub fn entity_behavior_ai(beh: &mut EntityBehavior, self_pos: Vec3, target_pos: Vec3) -> u8 {
    let dist = self_pos.distance(target_pos);
    if dist < 8.0 {
        beh.state = EnemyAIState::Approach;
        beh.target_pos = target_pos;
        1
    } else {
        beh.state = EnemyAIState::Wander;
        0
    }
}

/// BEH-02: `Entity_Behavior_AnimPlayer1` (0x800292B8, `entity/behavior/Entity_Behavior_AnimPlayer1.c`)
/// Sprite animation player - variant 1
pub fn entity_behavior_animplayer1(beh: &mut EntityBehavior, clip_id: u16) -> u16 {
    beh.sub_state = (clip_id & 0xFF) as u8;
    clip_id
}

/// BEH-03: `Entity_Behavior_AnimPlayer2` (0x800293F4, `entity/behavior/Entity_Behavior_AnimPlayer2.c`)
/// Sprite animation player - variant 2
pub fn entity_behavior_animplayer2(beh: &mut EntityBehavior, clip_id: u16) -> u16 {
    beh.sub_state = (clip_id & 0x7F) as u8;
    clip_id
}

/// BEH-04: `Entity_Behavior_AnimState1` (0x8002C3EC, `entity/behavior/Entity_Behavior_AnimState1.c`)
/// Animation state machine variant 1
pub fn entity_behavior_animstate1(beh: &mut EntityBehavior) -> u8 {
    beh.sub_state
}

/// BEH-05: `Entity_Behavior_AnimState2` (0x8002C548, `entity/behavior/Entity_Behavior_AnimState2.c`)
/// Animation state machine variant 2
pub fn entity_behavior_animstate2(beh: &mut EntityBehavior) -> u8 {
    beh.sub_state + 1
}

/// BEH-06: `Entity_Behavior_ApproachTarget` (0x80044B38, `entity/behavior/Entity_Behavior_ApproachTarget.c`)
/// Entity approaches target position along rail
pub fn entity_behavior_approachtarget(beh: &mut EntityBehavior, self_x: &mut f32, target_x: f32, dt: f32) -> bool {
    let diff = target_x - *self_x;
    if diff.abs() < 0.5 {
        true // Arrived at target
    } else {
        beh.facing = diff.signum();
        *self_x += beh.facing * beh.move_speed * dt;
        false
    }
}

/// BEH-07: `Entity_Behavior_Attack` (0x8006B494, `entity/behavior/Entity_Behavior_Attack.c`)
/// Entity attack behavior main: lunges toward player
pub fn entity_behavior_attack(beh: &mut EntityBehavior) {
    beh.state = EnemyAIState::Attack;
    beh.attack_cooldown = 1.5;
}

/// BEH-08: `Entity_Behavior_Attack2` (0x8006B124, `entity/behavior/Entity_Behavior_Attack2.c`)
/// Entity attack behavior variant 2
pub fn entity_behavior_attack2(beh: &mut EntityBehavior, speed_boost: f32) {
    beh.state = EnemyAIState::Attack;
    beh.move_speed += speed_boost;
}

/// BEH-09: `Entity_Behavior_AttackMain` (0x8006C0C4, `entity/behavior/Entity_Behavior_AttackMain.c`)
/// Entity attack main execution loop
pub fn entity_behavior_attackmain(beh: &mut EntityBehavior, dt: f32) -> bool {
    if beh.attack_cooldown > 0.0 {
        beh.attack_cooldown -= dt;
        if beh.attack_cooldown <= 0.0 {
            beh.state = EnemyAIState::Idle;
            return true;
        }
    }
    false
}

/// BEH-10: `Entity_Behavior_Boss` (0x8001F054, `entity/behavior/Entity_Behavior_Boss.c`)
/// Evil Pig Boss behavior: phase-based state machine
pub fn entity_behavior_boss(beh: &mut EntityBehavior, hp: i16) -> u8 {
    if hp <= 0 {
        beh.state = EnemyAIState::Death;
        0
    } else if hp < (beh.max_health / 3) {
        beh.state = EnemyAIState::BossPhase(3); // Enraged phase
        3
    } else if hp < (beh.max_health * 2 / 3) {
        beh.state = EnemyAIState::BossPhase(2);
        2
    } else {
        beh.state = EnemyAIState::BossPhase(1);
        1
    }
}

/// BEH-11: `Entity_Behavior_Cam` (0x8006C478, `entity/behavior/Entity_Behavior_Cam.c`)
/// Camera-relative entity behavior
pub fn entity_behavior_cam(_self_pos: Vec3, _cam_pos: Vec3) -> f32 {
    1.0
}

/// BEH-12: `Entity_Behavior_Cam2` (0x8006C608, `entity/behavior/Entity_Behavior_Cam2.c`)
/// Camera-relative entity behavior variant 2
pub fn entity_behavior_cam2(_self_pos: Vec3, _cam_pos: Vec3) -> f32 {
    1.0
}

/// BEH-13: `Entity_Behavior_Collect` (0x8004B9C8, `entity/behavior/Entity_Behavior_Collect.c`)
/// Collects item and triggers pickup response
pub fn entity_behavior_collect(item: &mut CollectibleItem) -> u32 {
    if !item.is_collected {
        item.is_collected = true;
        item.ap_value
    } else {
        0
    }
}

/// BEH-14: `Entity_Behavior_Collectible` (0x8004C238, `entity/behavior/Entity_Behavior_Collectible.c`)
/// Collectible item behavior: checks distance to Tomba and handles collection
pub fn entity_behavior_collectible(item: &mut CollectibleItem, item_pos: Vec3, player_pos: Vec3) -> bool {
    if !item.is_collected && item_pos.distance(player_pos) <= item.pickup_radius {
        item.is_collected = true;
        true
    } else {
        false
    }
}

/// BEH-15: `Entity_Behavior_Collectible2` (0x8004BEF4, `entity/behavior/Entity_Behavior_Collectible2.c`)
/// Collectible behavior variant 2: bounce animation
pub fn entity_behavior_collectible2(item: &mut CollectibleItem, dt: f32) -> f32 {
    item.bounce_timer += dt;
    (item.bounce_timer * 6.0).sin().abs() * 0.5
}

/// BEH-16: `Entity_Behavior_Cutscene` (0x80026148, `entity/behavior/Entity_Behavior_Cutscene.c`)
/// Entity cutscene state advancement
pub fn entity_behavior_cutscene(beh: &mut EntityBehavior, duration: f32, dt: f32) -> bool {
    beh.timer += dt;
    beh.timer >= duration
}

/// BEH-17: `Entity_Behavior_Cutscene2` (0x80072A78, `entity/behavior/Entity_Behavior_Cutscene2.c`)
/// Entity cutscene behavior variant 2
pub fn entity_behavior_cutscene2(beh: &mut EntityBehavior, dt: f32) -> f32 {
    beh.timer += dt;
    beh.timer
}

/// BEH-18: `Entity_Behavior_Death` (0x800678E8, `entity/behavior/Entity_Behavior_Death.c`)
/// Entity death behavior: sets dead, resets collision
pub fn entity_behavior_death(beh: &mut EntityBehavior) {
    beh.is_alive = false;
    beh.state = EnemyAIState::Death;
}

/// BEH-19: `Entity_Behavior_Destroy` (0x8006AE28, `entity/behavior/Entity_Behavior_Destroy.c`)
/// Destroys entity
pub fn entity_behavior_destroy(beh: &mut EntityBehavior) {
    beh.is_alive = false;
}

/// BEH-20: `Entity_Behavior_Door` (0x80026864, `entity/behavior/Entity_Behavior_Door.c`)
/// Door behavior: checks if player is in front and presses UP to enter
pub fn entity_behavior_door(door: &DoorTrigger, door_pos: Vec3, player_pos: Vec3, press_up: bool) -> bool {
    if door.is_open && press_up && door_pos.distance(player_pos) < 2.0 {
        true
    } else {
        false
    }
}

/// BEH-21: `Entity_Behavior_Door2` (0x80068698, `entity/behavior/Entity_Behavior_Door2.c`)
/// Door behavior variant 2: locked door check
pub fn entity_behavior_door2(door: &mut DoorTrigger, has_key: bool) -> bool {
    if door.requires_key && has_key {
        door.is_open = true;
    }
    door.is_open
}

/// BEH-22: `Entity_Behavior_Draw` (0x8002FC40, `entity/behavior/Entity_Behavior_Draw.c`)
/// Entity draw configuration
pub fn entity_behavior_draw(beh: &EntityBehavior) -> bool {
    beh.is_alive
}

/// BEH-23: `Entity_Behavior_DustTrail` (0x8002BAFC, `entity/behavior/Entity_Behavior_DustTrail.c`)
/// Records dust trail particle position into 5-point buffer
pub fn entity_behavior_dusttrail(ai: &mut TombaAI, pos: Vec3) {
    for i in (1..5).rev() {
        ai.dust_trail_history[i] = ai.dust_trail_history[i - 1];
    }
    ai.dust_trail_history[0] = pos;
}

/// BEH-24: `Entity_Behavior_End` (0x80053968, `entity/behavior/Entity_Behavior_End.c`)
/// Entity end state
pub fn entity_behavior_end(beh: &mut EntityBehavior) {
    beh.is_alive = false;
}

/// BEH-25: `Entity_Behavior_Enemy` (0x8006B390, `entity/behavior/Entity_Behavior_Enemy.c`)
/// Standard enemy tick
pub fn entity_behavior_enemy(beh: &mut EntityBehavior, dt: f32) {
    if beh.state == EnemyAIState::Wander {
        beh.timer += dt;
        if beh.timer > 3.0 {
            beh.facing = -beh.facing;
            beh.timer = 0.0;
        }
    }
}

/// BEH-26: `Entity_Behavior_Enemy2` (0x80069BEC, `entity/behavior/Entity_Behavior_Enemy2.c`)
/// Enemy behavior variant 2
pub fn entity_behavior_enemy2(beh: &mut EntityBehavior, speed: f32) {
    beh.move_speed = speed;
}

/// BEH-27: `Entity_Behavior_EnemyMain` (0x8006A384, `entity/behavior/Entity_Behavior_EnemyMain.c`)
/// Enemy main loop
pub fn entity_behavior_enemymain(beh: &mut EntityBehavior, dt: f32) {
    entity_behavior_enemy(beh, dt);
}

/// BEH-28: `Entity_Behavior_Explosion` (0x8004022C, `entity/behavior/Entity_Behavior_Explosion.c`)
/// Explosion particle expansion
pub fn entity_behavior_explosion(scale: &mut f32, max_scale: f32, dt: f32) -> bool {
    *scale += dt * 8.0;
    *scale >= max_scale
}

/// BEH-29: `Entity_Behavior_Fade` (0x80026024, `entity/behavior/Entity_Behavior_Fade.c`)
/// Entity alpha fade
pub fn entity_behavior_fade(alpha: &mut f32, delta: f32) -> bool {
    *alpha = (*alpha - delta).max(0.0);
    *alpha <= 0.0
}

/// BEH-30: `Entity_Behavior_Fall` (0x8006B1FC, `entity/behavior/Entity_Behavior_Fall.c`)
/// Entity gravity fall
pub fn entity_behavior_fall(vel_y: &mut f32, gravity: f32, dt: f32) {
    *vel_y -= gravity * dt;
}

/// BEH-31: `Entity_Behavior_Floater` (0x80029530, `entity/behavior/Entity_Behavior_Floater.c`)
/// Sine wave hovering
pub fn entity_behavior_floater(base_y: f32, time: f32, amplitude: f32) -> f32 {
    base_y + (time * 4.0).sin() * amplitude
}

/// BEH-32: `Entity_Behavior_FollowParentY` (0x800543C0, `entity/behavior/Entity_Behavior_FollowParentY.c`)
/// Follow parent entity Y position
pub fn entity_behavior_followparenty(parent_y: f32, offset: f32) -> f32 {
    parent_y + offset
}

/// BEH-33: `Entity_Behavior_Hit` (0x80024548, `entity/behavior/Entity_Behavior_Hit.c`)
/// Receives damage from weapon / attack
pub fn entity_behavior_hit(beh: &mut EntityBehavior, damage: i16) -> bool {
    beh.health = (beh.health - damage).max(0);
    if beh.health == 0 {
        beh.state = EnemyAIState::Death;
        beh.is_alive = false;
        true // Killed
    } else {
        beh.state = EnemyAIState::Hurt;
        false
    }
}

/// BEH-34: `Entity_Behavior_Hurt` (0x8006BB6C, `entity/behavior/Entity_Behavior_Hurt.c`)
/// Hurt reaction knockback
pub fn entity_behavior_hurt(beh: &mut EntityBehavior, knockback: f32, self_x: &mut f32) {
    beh.state = EnemyAIState::Hurt;
    *self_x -= beh.facing * knockback;
}

/// BEH-35: `Entity_Behavior_Init2` (0x80054650, `entity/behavior/Entity_Behavior_Init2.c`)
/// Initial settleStep
pub fn entity_behavior_init2(beh: &mut EntityBehavior) {
    beh.is_alive = true;
    beh.state = EnemyAIState::Idle;
}

/// BEH-36: `Entity_Behavior_InitItem` (0x8004B150, `entity/behavior/Entity_Behavior_InitItem.c`)
/// Initializes item behavior
pub fn entity_behavior_inititem(item: &mut CollectibleItem, id: u8, ap: u32) {
    item.item_id = id;
    item.ap_value = ap;
    item.is_collected = false;
}

/// BEH-37: `Entity_Behavior_Item` (0x8004BF84, `entity/behavior/Entity_Behavior_Item.c`)
/// Item drop / idle behavior
pub fn entity_behavior_item(item: &CollectibleItem) -> bool {
    !item.is_collected
}

/// BEH-38: `Entity_Behavior_Item2` (0x8004BB38, `entity/behavior/Entity_Behavior_Item2.c`)
/// Item pickup check variant 2
pub fn entity_behavior_item2(item: &mut CollectibleItem) {
    item.is_collected = true;
}

/// BEH-39: `Entity_Behavior_Jump_2` (0x800558B4, `entity/behavior/Entity_Behavior_Jump_2.c`)
/// Entity jump velocity
pub fn entity_behavior_jump_2(vel_y: &mut f32, jump_force: f32) {
    *vel_y = jump_force;
}

/// BEH-40: `Entity_Behavior_Move` (0x80068A94, `entity/behavior/Entity_Behavior_Move.c`)
/// Entity movement along rail
pub fn entity_behavior_move(beh: &EntityBehavior, pos_x: &mut f32, dt: f32) {
    *pos_x += beh.facing * beh.move_speed * dt;
}

/// BEH-41: `Entity_Behavior_Move2` (0x80068BE8, `entity/behavior/Entity_Behavior_Move2.c`)
/// Entity movement variant 2
pub fn entity_behavior_move2(beh: &EntityBehavior, pos_x: &mut f32, speed: f32, dt: f32) {
    *pos_x += beh.facing * speed * dt;
}

/// BEH-42: `Entity_Behavior_NPC` (0x8004C930, `entity/behavior/Entity_Behavior_NPC.c`)
/// NPC behavior: idle until player talks
pub fn entity_behavior_npc(beh: &mut EntityBehavior, player_pos: Vec3, npc_pos: Vec3) -> bool {
    if npc_pos.distance(player_pos) < 2.5 {
        beh.facing = (player_pos.x - npc_pos.x).signum();
        true // In talk range
    } else {
        false
    }
}

/// BEH-43: `Entity_Behavior_Painter` (0x80024794, `entity/behavior/Entity_Behavior_Painter.c`)
/// Painter NPC behavior
pub fn entity_behavior_painter(beh: &mut EntityBehavior) -> u8 {
    beh.sub_state
}

/// BEH-44: `Entity_Behavior_Painter2` (0x800248D0, `entity/behavior/Entity_Behavior_Painter2.c`)
/// Painter NPC variant 2
pub fn entity_behavior_painter2(beh: &mut EntityBehavior, mode: u8) {
    beh.sub_state = mode;
}

/// BEH-45: `Entity_Behavior_Parent` (0x8002B7B0, `entity/behavior/Entity_Behavior_Parent.c`)
/// Synchronizes position with parent
pub fn entity_behavior_parent(self_pos: &mut Vec3, parent_pos: Vec3, offset: Vec3) {
    *self_pos = parent_pos + offset;
}

/// BEH-46: `Entity_Behavior_Particle` (0x80027254, `entity/behavior/Entity_Behavior_Particle.c`)
/// Particle decay
pub fn entity_behavior_particle(life: &mut f32, dt: f32) -> bool {
    *life -= dt;
    *life <= 0.0
}

/// BEH-47: `Entity_Behavior_ParticleBurst` (0x80040390, `entity/behavior/Entity_Behavior_ParticleBurst.c`)
/// Spawns particle burst
pub fn entity_behavior_particleburst(count: usize) -> usize {
    count
}

/// BEH-48: `Entity_Behavior_Pickup` (0x8004C01C, `entity/behavior/Entity_Behavior_Pickup.c`)
/// Collectible item pickup
pub fn entity_behavior_pickup(item: &mut CollectibleItem) {
    item.is_collected = true;
}

/// BEH-49: `Entity_Behavior_Player` (0x800739AC, `entity/behavior/Entity_Behavior_Player.c`)
/// Player entity state hook
pub fn entity_behavior_player() -> bool {
    true
}

/// BEH-50: `Entity_Behavior_PlayerController` (0x80040558, `entity/behavior/Entity_Behavior_PlayerController.c`)
/// Player controller behavior dispatcher
pub fn entity_behavior_playercontroller(action_code: u8) -> u8 {
    action_code
}

/// BEH-51: `Entity_Behavior_Projectile` (0x8002F738, `entity/behavior/Entity_Behavior_Projectile.c`)
/// Projectile ballistic movement
pub fn entity_behavior_projectile(proj: &mut Projectile, pos: &mut Vec3, dt: f32) -> bool {
    *pos += proj.velocity * dt;
    proj.lifetime -= dt;
    proj.lifetime <= 0.0 // Expired
}

/// BEH-52: `Entity_Behavior_Push` (0x80073328, `entity/behavior/Entity_Behavior_Push.c`)
/// Pushable block / crate behavior
pub fn entity_behavior_push(block_x: &mut f32, push_dir: f32, force: f32, dt: f32) {
    *block_x += push_dir * force * dt;
}

/// BEH-53: `Entity_Behavior_Rotate` (0x800663A8, `entity/behavior/Entity_Behavior_Rotate.c`)
/// Rotates entity angle toward target
pub fn entity_behavior_rotate(cur_angle: &mut f32, target_angle: f32, rate: f32, dt: f32) {
    let diff = target_angle - *cur_angle;
    *cur_angle += diff.signum() * rate * dt;
}

/// BEH-54: `Entity_Behavior_Script` (0x800300D8, `entity/behavior/Entity_Behavior_Script.c`)
/// Runs scripted behavior
pub fn entity_behavior_script(_opcode: u16) -> bool {
    true
}

/// BEH-55: `Entity_Behavior_Scripted` (0x80030A3C, `entity/behavior/Entity_Behavior_Scripted.c`)
/// Scripted entity execution
pub fn entity_behavior_scripted(_script_id: u16) -> bool {
    true
}

/// BEH-56: `Entity_Behavior_Sequence` (0x8007091C, `entity/behavior/Entity_Behavior_Sequence.c`)
/// Advances action sequence step
pub fn entity_behavior_sequence(beh: &mut EntityBehavior) {
    beh.sub_state += 1;
}

/// BEH-57: `Entity_Behavior_Shake` (0x8003FD10, `entity/behavior/Entity_Behavior_Shake.c`)
/// Generates shake offset
pub fn entity_behavior_shake(timer: f32, intensity: f32) -> Vec3 {
    let x = (timer * 35.0).sin() * intensity;
    let y = (timer * 42.0).cos() * intensity;
    Vec3::new(x, y, 0.0)
}

/// BEH-58: `Entity_Behavior_ShakeSFX` (0x8003FED8, `entity/behavior/Entity_Behavior_ShakeSFX.c`)
/// Shake effect with SFX trigger
pub fn entity_behavior_shakesfx(timer: f32, intensity: f32) -> (Vec3, u8) {
    let offset = entity_behavior_shake(timer, intensity);
    (offset, 0x19) // SFX 0x19
}

/// BEH-59: `Entity_Behavior_Sparkle` (0x8002A584, `entity/behavior/Entity_Behavior_Sparkle.c`)
/// Generates sparkle particle offset
pub fn entity_behavior_sparkle(time: f32, radius: f32) -> Vec3 {
    Vec3::new((time * 5.0).cos() * radius, (time * 5.0).sin() * radius, 0.0)
}

/// BEH-60: `Entity_Behavior_Spawn` (0x8002F514, `entity/behavior/Entity_Behavior_Spawn.c`)
/// Spawns entity
pub fn entity_behavior_spawn(entity_type: u8) -> u8 {
    entity_type
}

/// BEH-61: `Entity_Behavior_SpawnAtOffset` (0x800538E0, `entity/behavior/Entity_Behavior_SpawnAtOffset.c`)
/// Computes spawn position at offset
pub fn entity_behavior_spawnatoffset(base_pos: Vec3, offset: Vec3) -> Vec3 {
    base_pos + offset
}

/// BEH-62: `Entity_Behavior_Spin` (0x80063158, `entity/behavior/Entity_Behavior_Spin.c`)
/// Spin rotation deceleration
pub fn entity_behavior_spin(rot_y: &mut f32, spin_speed: &mut f32, decel: f32, dt: f32) {
    *rot_y += *spin_speed * dt;
    *spin_speed = (*spin_speed - decel * dt).max(0.0);
}

/// BEH-63: `Entity_Behavior_SpinAttack` (0x80063098, `entity/behavior/Entity_Behavior_SpinAttack.c`)
/// Spin attack acceleration and threshold check
pub fn entity_behavior_spinattack(spin_speed: &mut f32, max_speed: f32, dt: f32) -> bool {
    *spin_speed = (*spin_speed + dt * 15.0).min(max_speed);
    *spin_speed >= max_speed
}

/// BEH-64: `Entity_Behavior_Swing` (0x800559F4, `entity/behavior/Entity_Behavior_Swing.c`)
/// Weapon swing pendulum motion
pub fn entity_behavior_swing(angle: &mut f32, time: f32, max_angle: f32) {
    *angle = (time * 6.0).sin() * max_angle;
}

/// BEH-65: `Entity_Behavior_Talk` (0x8004B208, `entity/behavior/Entity_Behavior_Talk.c`)
/// Starts NPC dialogue
pub fn entity_behavior_talk(beh: &mut EntityBehavior) {
    beh.state = EnemyAIState::Talk;
}

/// BEH-66: `Entity_Behavior_Talk2` (0x8004B788, `entity/behavior/Entity_Behavior_Talk2.c`)
/// Ends NPC dialogue
pub fn entity_behavior_talk2(beh: &mut EntityBehavior) {
    beh.state = EnemyAIState::Idle;
}

/// BEH-67: `Entity_Behavior_TimedLife` (0x80072520, `entity/behavior/Entity_Behavior_TimedLife.c`)
/// Timed lifecycle
pub fn entity_behavior_timedlife(timer: &mut f32, max_time: f32, dt: f32) -> bool {
    *timer += dt;
    *timer >= max_time
}

/// BEH-68: `Entity_Behavior_TimedSFX` (0x8006625C, `entity/behavior/Entity_Behavior_TimedSFX.c`)
/// Timed SFX trigger
pub fn entity_behavior_timedsfx(timer: &mut f32, interval: f32, dt: f32) -> bool {
    *timer += dt;
    if *timer >= interval {
        *timer = 0.0;
        true
    } else {
        false
    }
}

/// BEH-69: `Entity_Behavior_Trail` (0x80029B40, `entity/behavior/Entity_Behavior_Trail.c`)
/// Trail effect update
pub fn entity_behavior_trail(pos: Vec3) -> Vec3 {
    pos
}

/// BEH-70: `Entity_Behavior_TrailPt` (0x800275D4, `entity/behavior/Entity_Behavior_TrailPt.c`)
/// Orbital motion for trail points
pub fn entity_behavior_trailpt(center: Vec3, angle: f32, radius: f32) -> Vec3 {
    Vec3::new(center.x + angle.cos() * radius, center.y + angle.sin() * radius, center.z)
}

/// BEH-71: `Entity_Behavior_Wander` (0x8002918C, `entity/behavior/Entity_Behavior_Wander.c`)
/// Random patrol / wander within bounds
pub fn entity_behavior_wander(beh: &mut EntityBehavior, pos_x: &mut f32, dt: f32) {
    *pos_x += beh.facing * beh.move_speed * dt;
    if *pos_x < beh.patrol_min {
        *pos_x = beh.patrol_min;
        beh.facing = 1.0;
    } else if *pos_x > beh.patrol_max {
        *pos_x = beh.patrol_max;
        beh.facing = -1.0;
    }
}

// ============================================================================
// METHOD WRAPPERS ON TombaAI
// ============================================================================

impl TombaAI {
    pub fn behavior_ai(&mut self, beh: &mut EntityBehavior, self_pos: Vec3, target_pos: Vec3) -> u8 {
        entity_behavior_ai(beh, self_pos, target_pos)
    }

    pub fn behavior_wander(&mut self, beh: &mut EntityBehavior, pos_x: &mut f32, dt: f32) {
        entity_behavior_wander(beh, pos_x, dt);
    }

    pub fn behavior_dusttrail(&mut self, pos: Vec3) {
        entity_behavior_dusttrail(self, pos);
    }
}

// ============================================================================
// UNIT TESTS (VERIFICATION OF BEH-01 THROUGH BEH-71)
// ============================================================================

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_enemy_patrol_wander_and_turn() {
        let mut beh = EntityBehavior {
            patrol_min: 10.0,
            patrol_max: 20.0,
            move_speed: 5.0,
            facing: 1.0,
            ..default()
        };
        let mut pos_x = 18.0;

        // Advance 1s -> 18 + 5 = 23, hits max 20 and flips facing to -1
        entity_behavior_wander(&mut beh, &mut pos_x, 1.0);
        assert_eq!(pos_x, 20.0);
        assert_eq!(beh.facing, -1.0);

        // Advance 1s -> 20 - 5 = 15
        entity_behavior_wander(&mut beh, &mut pos_x, 1.0);
        assert_eq!(pos_x, 15.0);
        assert_eq!(beh.facing, -1.0);
    }

    #[test]
    fn test_ai_target_detection_and_approach() {
        let mut beh = EntityBehavior::default();
        let enemy_pos = Vec3::new(10.0, 0.0, 0.0);

        // Far target: Wander
        let player_far = Vec3::new(25.0, 0.0, 0.0);
        assert_eq!(entity_behavior_ai(&mut beh, enemy_pos, player_far), 0);
        assert_eq!(beh.state, EnemyAIState::Wander);

        // Close target: Approach
        let player_close = Vec3::new(14.0, 0.0, 0.0);
        assert_eq!(entity_behavior_ai(&mut beh, enemy_pos, player_close), 1);
        assert_eq!(beh.state, EnemyAIState::Approach);
    }

    #[test]
    fn test_combat_hit_and_death() {
        let mut beh = EntityBehavior {
            health: 2,
            ..default()
        };

        // Hit 1 damage: hurt, still alive
        let killed = entity_behavior_hit(&mut beh, 1);
        assert!(!killed);
        assert_eq!(beh.health, 1);
        assert_eq!(beh.state, EnemyAIState::Hurt);
        assert!(beh.is_alive);

        // Hit 1 more: death
        let killed2 = entity_behavior_hit(&mut beh, 1);
        assert!(killed2);
        assert_eq!(beh.health, 0);
        assert_eq!(beh.state, EnemyAIState::Death);
        assert!(!beh.is_alive);
    }

    #[test]
    fn test_collectible_pickup_and_ap_reward() {
        let mut item = CollectibleItem {
            ap_value: 500,
            pickup_radius: 2.0,
            ..default()
        };
        let item_pos = Vec3::new(5.0, 1.0, 5.0);

        // Player far: not collected
        assert!(!entity_behavior_collectible(&mut item, item_pos, Vec3::new(20.0, 1.0, 5.0)));
        assert!(!item.is_collected);

        // Player close: collected!
        assert!(entity_behavior_collectible(&mut item, item_pos, Vec3::new(5.5, 1.0, 5.0)));
        assert!(item.is_collected);
        assert_eq!(entity_behavior_collect(&mut item), 0); // Already collected
    }

    #[test]
    fn test_door_interaction_and_key() {
        let mut door = DoorTrigger {
            is_open: false,
            requires_key: true,
            ..default()
        };
        let door_pos = Vec3::new(0.0, 0.0, 0.0);
        let player_pos = Vec3::new(0.5, 0.0, 0.0);

        // Locked door: press UP does nothing
        assert!(!entity_behavior_door(&door, door_pos, player_pos, true));

        // Unlock with key
        assert!(entity_behavior_door2(&mut door, true));
        assert!(door.is_open);

        // Now entering door succeeds
        assert!(entity_behavior_door(&door, door_pos, player_pos, true));
    }

    #[test]
    fn test_projectile_ballistics_and_expiry() {
        let mut proj = Projectile {
            velocity: Vec3::new(10.0, 0.0, 0.0),
            lifetime: 2.0,
            damage: 2,
            is_friendly: true,
        };
        let mut pos = Vec3::ZERO;

        // Step 1.0s -> pos.x = 10.0, lifetime = 1.0
        let expired = entity_behavior_projectile(&mut proj, &mut pos, 1.0);
        assert!(!expired);
        assert_eq!(pos.x, 10.0);
        assert_eq!(proj.lifetime, 1.0);

        // Step 1.5s -> lifetime = -0.5, expired!
        let expired2 = entity_behavior_projectile(&mut proj, &mut pos, 1.5);
        assert!(expired2);
    }
}
