use crate::collision::LevelCollision;
use bevy::prelude::*;

#[derive(Component)]
pub struct TombaPlayer;

#[derive(Component)]
pub struct TombaRail {
    pub plane_id: usize,
    pub s: f32,
    pub y: f32,
    pub vertical_velocity: f32,
    pub is_grounded: bool,
    pub speed: f32,
    pub jump_force: f32,
    pub gravity: f32,
    pub facing: f32, // +1.0 for forward along rail, -1.0 for backward
}

impl Default for TombaRail {
    fn default() -> Self {
        Self {
            plane_id: 1, // Main pier in Fisherman's Village
            s: 10.0,     // Start 10m along the pier
            y: 9.12,     // Initial floor height
            vertical_velocity: 0.0,
            is_grounded: true,
            speed: 12.0,
            jump_force: 15.0,
            gravity: 38.0,
            facing: 1.0,
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
        commands.entity(entity).insert(AnimationGraphHandle(anim_assets.graph_handle.clone()));
    }
}

/// Core 2.5D movement system on SCLD rails
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

        // 1. Horizontal Input (A / D or Left / Right)
        let mut move_input = 0.0;
        if keyboard.pressed(KeyCode::KeyA) || keyboard.pressed(KeyCode::ArrowLeft) {
            move_input -= 1.0;
        }
        if keyboard.pressed(KeyCode::KeyD) || keyboard.pressed(KeyCode::ArrowRight) {
            move_input += 1.0;
        }

        if move_input != 0.0 {
            rail.facing = move_input;
            rail.s += move_input * rail.speed * dt;
        }

        // Clamp to current plane length or switch to linked planes
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
        if keyboard.just_pressed(KeyCode::KeyW) || keyboard.just_pressed(KeyCode::ArrowUp) {
            if let Some(junc) = collision.check_junction(rail.plane_id, rail.s, "up", 2.0) {
                if let Some(dest_plane) = collision.get_plane(junc.dest) {
                    let new_s = dest_plane.s_of(junc.pos[0], junc.pos[2]);
                    rail.plane_id = junc.dest;
                    rail.s = new_s;
                    println!(
                        "-> Switched rail to Plane {} via UP junction at s={:.1}m",
                        junc.dest, new_s
                    );
                }
            }
        }
        if keyboard.just_pressed(KeyCode::KeyS) || keyboard.just_pressed(KeyCode::ArrowDown) {
            if let Some(junc) = collision.check_junction(rail.plane_id, rail.s, "down", 2.0) {
                if let Some(dest_plane) = collision.get_plane(junc.dest) {
                    let new_s = dest_plane.s_of(junc.pos[0], junc.pos[2]);
                    rail.plane_id = junc.dest;
                    rail.s = new_s;
                    println!(
                        "-> Switched rail to Plane {} via DOWN junction at s={:.1}m",
                        junc.dest, new_s
                    );
                }
            }
        }

        // Re-fetch current plane in case we switched
        let plane = collision.get_plane(rail.plane_id).unwrap_or(plane);

        // 3. Jump Input
        if (keyboard.just_pressed(KeyCode::Space) || keyboard.just_pressed(KeyCode::KeyK))
            && rail.is_grounded
        {
            rail.vertical_velocity = rail.jump_force;
            rail.is_grounded = false;
        }

        // 4. Gravity & Vertical Physics
        if !rail.is_grounded {
            rail.vertical_velocity -= rail.gravity * dt;
            rail.y += rail.vertical_velocity * dt;

            // Check floor collision while falling
            if rail.vertical_velocity <= 0.0 {
                if let Some(floor_h) = plane.sample_floor(rail.s, rail.y) {
                    if rail.y <= floor_h + 0.15 {
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
        let pos_on_rail = plane.point_at(rail.s);
        let world_pos = Vec3::new(pos_on_rail.x, rail.y, pos_on_rail.z);
        transform.translation = world_pos;

        // Facing rotation: along plane direction * facing sign
        let look_dir = Vec3::new(plane.dir[0] * rail.facing, 0.0, plane.dir[1] * rail.facing);
        if look_dir.length_squared() > 1e-4 {
            transform.look_to(look_dir, Vec3::Y);
        }
    }
}
