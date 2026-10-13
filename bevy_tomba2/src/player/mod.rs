use crate::collision::LevelCollision;
use bevy::prelude::*;

/// Player physical root offset from floor contact point.
/// In PS1 MAIN.EXE, Tomba's master node G (0x800E7E80) stores physOffsetY at G + 0x62:
/// physOffsetY = 0x8C (140 PS1 units = 1.40m).
/// The glTF model origin (0, 0, 0) is at Tomba's pelvis/waist, with vertices extending -1.46m down to feet.
/// Ground truth placement formula: `origin.y = floor_y + TOMBA_PHYS_OFFSET_Y` (1.40m).
/// Ref: ActorTomba::growthStep (actor_tomba.cpp:231), tomba_state.h:243, postFrameWaterCheck (actor_tomba.cpp:90).
pub const TOMBA_PHYS_OFFSET_Y: f32 = 1.40;

/// Horizontal walk speed along the SCLD rail.
/// In PS1 MAIN.EXE, Entity_Update reads speed from table 0x800a4710[0]:
/// speed = 16 PS1 units/tick.
/// At 30 ticks/second: 16 units * 0.01 m/unit * 30 ticks/s = 4.80 m/s.
/// Ref: Table 0x800a4710[0] (Entity_Update.c:30), ActorTomba::velocityIntegrate (actor_tomba.cpp:440).
pub const TOMBA_WALK_SPEED: f32 = 4.80;

/// Jump initial vertical impulse.
/// In PS1 MAIN.EXE, Entity_State_Idle sets velocity_y = 0xd800 (-0x2800 = -40 PS1 units/tick upward).
/// In meters/second at 30 ticks/s: 40 units * 0.01 m/unit * 30 = 12.0 m/s.
/// Ref: Entity_State_Idle.c:43, Entity_SetAccel.c:15, Table 0x800a457c.
pub const TOMBA_JUMP_IMPULSE: f32 = 12.0;

/// Gravitational acceleration.
/// In PS1 MAIN.EXE, Entity_ApplyGravity and Entity_ApplyVelocityMax add +0x400 (+4 PS1 units/tick^2) per tick.
/// In m/s^2 at 30 ticks/s: 4 units * 0.01 m/unit * 30^2 = 36.0 m/s^2.
/// Ref: Entity_ApplyGravity.c:25, Entity_ApplyVelocityMax.c:26, Entity_State_Combo.c:65.
pub const TOMBA_GRAVITY: f32 = 36.0;

/// Terminal downward fall velocity.
/// In PS1 MAIN.EXE, Entity_ApplyVelocityMax clamps velocity_y to 0x2800 (+40 PS1 units/tick downward = 12.0 m/s).
/// Ref: Entity_ApplyVelocityMax.c:28.
pub const TOMBA_TERMINAL_VELOCITY: f32 = 12.0;

/// Authentic turning speed for junction transitions.
/// In PS1 MAIN.EXE, Math_ApproachAngle_2 turns at 0x100 angle units per tick (256 / 4096 * TAU * 30 rad/s = 11.78 rad/s).
/// Ref: Entity_StateMain12.c:96, Entity_StateMain13.c:96.
pub const TOMBA_TURN_RATE: f32 = 256.0 * (std::f32::consts::TAU / 4096.0) * 30.0;

#[derive(Component)]
pub struct TombaPlayer;

#[derive(Debug, Clone, PartialEq, Default)]
pub enum PlayerActionState {
    #[default]
    Normal,
    /// Authentic turning and stepping into a junction (Entity_StateMain12.c states 2 & 3)
    TurnToJunction {
        dest_plane: usize,
        dest_s: f32,
        target_look_dir: Vec3,
        timer: f32,
    },
}

#[derive(Component)]
pub struct TombaRail {
    pub plane_id: usize,
    pub s: f32,
    pub y: f32, // Floor contact height
    pub vertical_velocity: f32,
    pub is_grounded: bool,
    pub facing: f32, // +1.0 for forward along rail, -1.0 for backward
    pub action_state: PlayerActionState,
    pub current_look_dir: Vec3,
}

impl Default for TombaRail {
    fn default() -> Self {
        Self {
            plane_id: 1, // Main pier in Fisherman's Village (Plane 1)
            s: 10.0,     // Start 10m along the pier
            y: 9.12,     // Initial floor contact height
            vertical_velocity: 0.0,
            is_grounded: true,
            facing: 1.0,
            action_state: PlayerActionState::Normal,
            current_look_dir: Vec3::Z,
        }
    }
}

/// Resource holding the animation graph handle for Tomba
#[derive(Resource)]
pub struct TombaAnimationAssets {
    pub graph_handle: Handle<AnimationGraph>,
    pub idle_node: AnimationNodeIndex,
}

pub fn setup_tomba_animations(
    mut commands: Commands,
    asset_server: Res<AssetServer>,
    mut animation_graphs: ResMut<Assets<AnimationGraph>>,
) {
    // Load Idle animation clip from tomba.glb
    let idle_clip: Handle<AnimationClip> = asset_server.load("models/tomba.glb#Animation0");
    let (graph, idle_node) = AnimationGraph::from_clip(idle_clip);
    let graph_handle = animation_graphs.add(graph);

    commands.insert_resource(TombaAnimationAssets {
        graph_handle,
        idle_node,
    });
}

/// Automatically hooks into AnimationPlayers spawned by the glTF scene
pub fn hook_tomba_animation_player(
    mut commands: Commands,
    anim_assets: Option<Res<TombaAnimationAssets>>,
    mut players: Query<(Entity, &mut AnimationPlayer), Added<AnimationPlayer>>,
) {
    let Some(anim_assets) = anim_assets else { return };

    for (entity, mut player) in &mut players {
        player.play(anim_assets.idle_node).repeat();
        commands
            .entity(entity)
            .insert(AnimationGraphHandle(anim_assets.graph_handle.clone()));
    }
}

/// Authentic 2.5D player movement system on SCLD rails
pub fn tomba_movement_system(
    time: Res<Time>,
    keyboard: Res<ButtonInput<KeyCode>>,
    collision: Res<LevelCollision>,
    mut query: Query<(&mut TombaRail, &mut Transform), With<TombaPlayer>>,
) {
    let dt = time.delta_secs();
    if dt <= 0.0 {
        return;
    }

    for (mut rail, mut transform) in &mut query {
        let Some(plane) = collision.get_plane(rail.plane_id) else {
            continue;
        };

        // Handle State Transitions
        match rail.action_state.clone() {
            PlayerActionState::TurnToJunction {
                dest_plane,
                dest_s,
                target_look_dir,
                timer,
            } => {
                // Ref: Entity_StateMain12.c:96-100 (Math_ApproachAngle_2 transition)
                let new_timer = timer + dt;
                // Slerp or rotate current look direction towards target
                let current = rail.current_look_dir;
                let angle_diff = current.angle_between(target_look_dir);

                if angle_diff <= 0.08 || new_timer >= 0.35 {
                    // Turn complete: transfer to destination plane
                    rail.plane_id = dest_plane;
                    rail.s = dest_s;
                    rail.current_look_dir = target_look_dir;
                    rail.action_state = PlayerActionState::Normal;
                    println!(
                        "-> Switched rail to Plane {} at s={:.2}m (turn complete)",
                        dest_plane, dest_s
                    );
                } else {
                    let step = (TOMBA_TURN_RATE * dt / angle_diff).min(1.0);
                    rail.current_look_dir = current.lerp(target_look_dir, step).normalize();
                    rail.action_state = PlayerActionState::TurnToJunction {
                        dest_plane,
                        dest_s,
                        target_look_dir,
                        timer: new_timer,
                    };
                }

                // Transform update during turn
                let pos_on_rail = plane.point_at(rail.s);
                transform.translation = Vec3::new(pos_on_rail.x, rail.y + TOMBA_PHYS_OFFSET_Y, pos_on_rail.z);
                if rail.current_look_dir.length_squared() > 1e-4 {
                    transform.look_to(-rail.current_look_dir, Vec3::Y);
                }
                continue;
            }
            PlayerActionState::Normal => {}
        }

        // 1. Horizontal Input & Velocity Integration
        // Ref: Table 0x800a4710[0] (TOMBA_WALK_SPEED = 4.80 m/s), ActorTomba::velocityIntegrate (actor_tomba.cpp:440)
        let mut move_input = 0.0;
        if keyboard.pressed(KeyCode::KeyA) || keyboard.pressed(KeyCode::ArrowLeft) {
            move_input -= 1.0;
        }
        if keyboard.pressed(KeyCode::KeyD) || keyboard.pressed(KeyCode::ArrowRight) {
            move_input += 1.0;
        }

        if move_input != 0.0 {
            rail.facing = move_input;
            rail.s += move_input * TOMBA_WALK_SPEED * dt;
        }

        // Clamp to current plane length or switch to linked planes (ls / le)
        if rail.s < 0.0 {
            if plane.ls > 0 {
                let dest_id = plane.ls as usize;
                if let Some(dest) = collision.get_plane(dest_id) {
                    rail.plane_id = dest_id;
                    rail.s = dest.length;
                } else {
                    rail.s = 0.0;
                }
            } else {
                rail.s = 0.0;
            }
        } else if rail.s > plane.length {
            if plane.le > 0 {
                let dest_id = plane.le as usize;
                if collision.get_plane(dest_id).is_some() {
                    rail.plane_id = dest_id;
                    rail.s = 0.0;
                } else {
                    rail.s = plane.length;
                }
            } else {
                rail.s = plane.length;
            }
        }

        // 2. Junction lane switching (W / Up or S / Down)
        // Ref: Collision_GetFloorHeight.c:58, Entity_StateMain12.c:23-100
        if keyboard.just_pressed(KeyCode::KeyW) || keyboard.just_pressed(KeyCode::ArrowUp) {
            if let Some(junc) = collision.check_junction(rail.plane_id, rail.s, rail.y, "up") {
                if let Some(dest_plane) = collision.get_plane(junc.dest) {
                    let new_s = dest_plane.s_of(junc.pos[0], junc.pos[2]);
                    let target_look = Vec3::new(dest_plane.dir[0], 0.0, dest_plane.dir[1]).normalize_or_zero();
                    rail.action_state = PlayerActionState::TurnToJunction {
                        dest_plane: junc.dest,
                        dest_s: new_s,
                        target_look_dir: if target_look.length_squared() > 1e-4 { target_look } else { Vec3::Z },
                        timer: 0.0,
                    };
                    println!(
                        "-> Initiating UP turn to Plane {} at s={:.2}m",
                        junc.dest, new_s
                    );
                }
            }
        }
        if keyboard.just_pressed(KeyCode::KeyS) || keyboard.just_pressed(KeyCode::ArrowDown) {
            if let Some(junc) = collision.check_junction(rail.plane_id, rail.s, rail.y, "down") {
                if let Some(dest_plane) = collision.get_plane(junc.dest) {
                    let new_s = dest_plane.s_of(junc.pos[0], junc.pos[2]);
                    let target_look = Vec3::new(dest_plane.dir[0], 0.0, dest_plane.dir[1]).normalize_or_zero();
                    rail.action_state = PlayerActionState::TurnToJunction {
                        dest_plane: junc.dest,
                        dest_s: new_s,
                        target_look_dir: if target_look.length_squared() > 1e-4 { target_look } else { Vec3::Z },
                        timer: 0.0,
                    };
                    println!(
                        "-> Initiating DOWN turn to Plane {} at s={:.2}m",
                        junc.dest, new_s
                    );
                }
            }
        }

        // Re-fetch current plane
        let plane = collision.get_plane(rail.plane_id).unwrap_or(plane);

        // 3. Jump Input
        // Ref: Entity_State_Idle.c:43 (velocity_y = 0xd800 = TOMBA_JUMP_IMPULSE)
        if (keyboard.just_pressed(KeyCode::Space) || keyboard.just_pressed(KeyCode::KeyK))
            && rail.is_grounded
        {
            rail.vertical_velocity = TOMBA_JUMP_IMPULSE;
            rail.is_grounded = false;
        }

        // 4. Gravity & Vertical Physics
        // Ref: Entity_ApplyGravity.c:25 (+0x400 = TOMBA_GRAVITY), Entity_ApplyVelocityMax.c:28 (cap at TOMBA_TERMINAL_VELOCITY)
        if !rail.is_grounded {
            rail.vertical_velocity = (rail.vertical_velocity - TOMBA_GRAVITY * dt).max(-TOMBA_TERMINAL_VELOCITY);
            rail.y += rail.vertical_velocity * dt;

            // Check floor collision while falling
            if rail.vertical_velocity <= 0.0 {
                if let Some(floor_h) = plane.sample_floor(rail.s, rail.y) {
                    if rail.y <= floor_h {
                        rail.y = floor_h;
                        rail.vertical_velocity = 0.0;
                        rail.is_grounded = true;
                    }
                }
            }
        } else {
            // Snap to floor contour while grounded (slopes, steps)
            if let Some(floor_h) = plane.sample_floor(rail.s, rail.y) {
                rail.y = floor_h;
            } else {
                // Stepped off a ledge
                rail.is_grounded = false;
            }
        }

        // 5. Update World Transform
        // Ground truth: origin.y = floor_y + TOMBA_PHYS_OFFSET_Y (waist at 1.40m so feet contact ground at 0.0)
        let pos_on_rail = plane.point_at(rail.s);
        let world_pos = Vec3::new(pos_on_rail.x, rail.y + TOMBA_PHYS_OFFSET_Y, pos_on_rail.z);
        transform.translation = world_pos;

        // Facing rotation: along plane direction * facing sign
        let look_dir = Vec3::new(plane.dir[0] * rail.facing, 0.0, plane.dir[1] * rail.facing);
        if look_dir.length_squared() > 1e-4 {
            rail.current_look_dir = look_dir.normalize();
            transform.look_to(-rail.current_look_dir, Vec3::Y);
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_tomba_movement_input() {
        let mut app = App::new();
        app.add_plugins(MinimalPlugins);

        // Load level collision
        let collision = LevelCollision::load_from_file("assets/levels/area_04_collision.json")
            .expect("Failed to load collision");
        app.insert_resource(collision);
        app.init_resource::<ButtonInput<KeyCode>>();
        app.add_systems(Update, tomba_movement_system);

        // Spawn player
        let entity = app
            .world_mut()
            .spawn((
                Transform::from_xyz(39.68, 9.12 + TOMBA_PHYS_OFFSET_Y, 42.0),
                TombaPlayer,
                TombaRail::default(),
            ))
            .id();

        // 1. Initial frame
        app.update();
        let (rail_before, transform_before) = (
            app.world().get::<TombaRail>(entity).unwrap().s,
            app.world().get::<Transform>(entity).unwrap().translation,
        );
        println!("Initial: s={}, pos={:?}", rail_before, transform_before);

        // 2. Press KeyD
        let mut input = app.world_mut().resource_mut::<ButtonInput<KeyCode>>();
        input.press(KeyCode::KeyD);

        // Advance time
        {
            let mut time = app.world_mut().resource_mut::<Time>();
            time.advance_by(std::time::Duration::from_millis(50));
        }

        app.update();

        let (rail_after, transform_after) = (
            app.world().get::<TombaRail>(entity).unwrap().s,
            app.world().get::<Transform>(entity).unwrap().translation,
        );
        println!("After KeyD: s={}, pos={:?}", rail_after, transform_after);

        assert!(
            rail_after > rail_before,
            "Rail position s should increase when KeyD is pressed: before={}, after={}",
            rail_before,
            rail_after
        );
        assert!(
            transform_after.z > transform_before.z,
            "World Z should increase when KeyD is pressed: before={}, after={}",
            transform_before.z,
            transform_after.z
        );
    }
}
