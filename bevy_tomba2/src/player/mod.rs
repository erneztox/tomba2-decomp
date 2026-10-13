use crate::collision::LevelCollision;
use bevy::prelude::*;

/// Player physical root offset from floor contact point.
/// In `tomba.glb`, the origin (0, 0, 0) is at the scene root. The skeletal bone chain extends down to the foot soles:
/// - Node 1/9 (bone_0/8 pelvis): -0.23m
/// - Node 10/13 (bone_9/12 thigh): -0.13m
/// - Node 11/14 (bone_10/13 calf): -0.52m
/// - Node 12/15 (bone_11/14 foot sole): -0.37m
/// Cumulative distance from origin to foot contact: -0.23 + (-0.13) + (-0.52) + (-0.37) = -1.25m.
/// Ground truth placement formula: `origin.y = floor_y + TOMBA_PHYS_OFFSET_Y` (1.25m),
/// placing the bottoms of Tomba's shoes in exact contact with the floor surface (zero hover, zero sink).
/// Ref: tomba.glb bone hierarchy, ActorTomba::settleStep (actor_tomba.cpp:385-403), Collision::snapObjectToTerrain (collision.cpp:770).
pub const TOMBA_PHYS_OFFSET_Y: f32 = 1.25;

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

#[derive(Component, Debug, Clone)]
pub struct TombaRail {
    /// Active SCLD plane ID (1-based). Correlates with ACT_SECTOR_ID at entity+0x2A (collision.cpp:67).
    pub plane_id: usize,
    /// 3D World coordinates in meters. Correlates with ACT_WORLD_X/Y/Z at entity+0x2E/0x32/0x36 (collision.cpp:68-71).
    pub world_pos: Vec3,
    /// Distance along active plane in meters.
    pub s: f32,
    /// Floor contact height (Y) in meters.
    pub y: f32,
    /// Vertical velocity in m/s. Correlates with velocity_y at entity+0x4A (Entity_State_Idle.c:43).
    pub vertical_velocity: f32,
    /// Ground contact state. Correlates with collision_state at entity+0x29 (include/tomba.h:51).
    pub is_grounded: bool,
    /// Facing direction sign (+1.0 forward, -1.0 backward). Correlates with direction at entity+0x147.
    pub facing: f32,
    /// Action state machine. Correlates with action_state at entity+0x06.
    pub action_state: PlayerActionState,
    /// Current facing / look direction vector in world space.
    pub current_look_dir: Vec3,
    /// Current horizontal speed in m/s.
    pub move_speed: f32,
}

impl Default for TombaRail {
    fn default() -> Self {
        Self {
            plane_id: 1, // Main pier in Fisherman's Village (Plane 1)
            world_pos: Vec3::new(39.68, 9.12, 42.0), // Plane 1 at s=10.0m
            s: 10.0,     // Start 10m along the pier
            y: 9.12,     // Initial floor contact height
            vertical_velocity: 0.0,
            is_grounded: true,
            facing: 1.0,
            action_state: PlayerActionState::Normal,
            current_look_dir: Vec3::Z,
            move_speed: 0.0,
        }
    }
}

/// Resource holding the animation graph handles for Tomba
#[derive(Resource)]
pub struct TombaAnimationAssets {
    pub graph_handle: Handle<AnimationGraph>,
    pub idle_node: AnimationNodeIndex,
    pub walk_node: AnimationNodeIndex,
    pub run_node: AnimationNodeIndex,
    pub jump_node: AnimationNodeIndex,
    pub fall_node: AnimationNodeIndex,
}

pub fn setup_tomba_animations(
    mut commands: Commands,
    asset_server: Res<AssetServer>,
    mut animation_graphs: ResMut<Assets<AnimationGraph>>,
) {
    let mut graph = AnimationGraph::new();
    let idle_node = graph.add_clip(asset_server.load("models/tomba.glb#Animation2"), 1.0, graph.root);
    let walk_node = graph.add_clip(asset_server.load("models/tomba.glb#Animation4"), 1.0, graph.root);
    let run_node = graph.add_clip(asset_server.load("models/tomba.glb#Animation12"), 1.0, graph.root);
    let jump_node = graph.add_clip(asset_server.load("models/tomba.glb#Animation202"), 1.0, graph.root);
    let fall_node = graph.add_clip(asset_server.load("models/tomba.glb#Animation203"), 1.0, graph.root);
    let graph_handle = animation_graphs.add(graph);

    commands.insert_resource(TombaAnimationAssets {
        graph_handle,
        idle_node,
        walk_node,
        run_node,
        jump_node,
        fall_node,
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
        let mut transitions = AnimationTransitions::new();
        transitions
            .play(&mut player, anim_assets.idle_node, std::time::Duration::ZERO)
            .repeat();
        commands
            .entity(entity)
            .insert(AnimationGraphHandle(anim_assets.graph_handle.clone()))
            .insert(transitions);
    }
}

/// Controls active skeletal animation based on authentic movement and airborne states
pub fn tomba_animation_control_system(
    anim_assets: Option<Res<TombaAnimationAssets>>,
    rails: Query<&TombaRail, With<TombaPlayer>>,
    mut players: Query<(&mut AnimationPlayer, &mut AnimationTransitions)>,
) {
    let Some(anim_assets) = anim_assets else { return };
    let Ok(rail) = rails.get_single() else { return };

    let target_node = if !rail.is_grounded {
        if rail.vertical_velocity > 0.0 {
            anim_assets.jump_node
        } else {
            anim_assets.fall_node
        }
    } else {
        match rail.action_state {
            PlayerActionState::TurnToJunction { .. } => anim_assets.walk_node,
            PlayerActionState::Normal => {
                if rail.move_speed > 3.0 {
                    anim_assets.run_node
                } else if rail.move_speed > 0.1 {
                    anim_assets.walk_node
                } else {
                    anim_assets.idle_node
                }
            }
        }
    };

    for (mut player, mut transitions) in &mut players {
        transitions
            .play(&mut player, target_node, std::time::Duration::from_millis(120))
            .repeat();
    }
}

/// Authentic 2.5D player movement system on SCLD rails
pub fn tomba_movement_system(
    mut commands: Commands,
    asset_server: Option<Res<AssetServer>>,
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
                rail.world_pos = Vec3::new(pos_on_rail.x, rail.y, pos_on_rail.z);
                transform.translation = Vec3::new(rail.world_pos.x, rail.y + TOMBA_PHYS_OFFSET_Y, rail.world_pos.z);
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
            rail.move_speed = TOMBA_WALK_SPEED;
            let step = move_input * TOMBA_WALK_SPEED * dt;
            let target_s = rail.s + step;
            // Check wall collision (f_ResolveTerrainProbeHorizontalSurfaceBySideMask)
            if !plane.is_wall_blocking(rail.s, target_s, rail.y) {
                rail.s = target_s;
            }
        } else {
            rail.move_speed = 0.0;
        }

        // Clamp to current plane length or switch to linked planes (ls / le)
        // Ref: collision.cpp:639-675 (0x80048fc4 sector handoff)
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

        // Project actor coordinates (X, Z) authentically onto plane line segment
        // Ref: f_ProjectActorOntoAreaPlane (0x80047778 / collision.cpp:678-716)
        let unprojected = plane.point_at(rail.s);
        let (proj_x, proj_z, proj_s) = plane.project_actor_onto_plane(unprojected.x, unprojected.z);
        rail.world_pos.x = proj_x;
        rail.world_pos.z = proj_z;
        rail.s = proj_s;

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
            if let Some(asset_server) = asset_server.as_ref() {
                commands.spawn(AudioPlayer::new(asset_server.load("audio/sfx/00_025_hero jump0.wav")));
            }
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
        // Ground truth: origin.y = floor_y + TOMBA_PHYS_OFFSET_Y (1.25m so rest foot sole bone contacts ground at 0.0)
        // Ref: Collision::snapObjectToTerrain (collision.cpp:770), f_ProjectActorOntoAreaPlane (0x80047778)
        rail.world_pos.y = rail.y;
        let world_pos = Vec3::new(rail.world_pos.x, rail.world_pos.y + TOMBA_PHYS_OFFSET_Y, rail.world_pos.z);
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
