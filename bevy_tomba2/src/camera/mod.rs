use crate::collision::LevelCollision;
use crate::player::{TombaPlayer, TombaRail};
use bevy::input::mouse::MouseMotion;
use bevy::prelude::*;

#[derive(Debug, PartialEq, Eq, Clone, Copy, Default)]
pub enum CameraMode {
    #[default]
    RailFollow,
    FreeFlight,
}

#[derive(Component)]
pub struct GameCamera {
    pub mode: CameraMode,
    pub flight_speed: f32,
    pub sensitivity: f32,
    pub follow_distance: f32,
    pub follow_height: f32,
}

impl Default for GameCamera {
    fn default() -> Self {
        Self {
            mode: CameraMode::RailFollow,
            flight_speed: 50.0,
            sensitivity: 0.003,
            follow_distance: 30.0,
            follow_height: 10.0,
        }
    }
}

pub fn camera_controller(
    time: Res<Time>,
    keyboard: Res<ButtonInput<KeyCode>>,
    mouse_button: Res<ButtonInput<MouseButton>>,
    mut mouse_motion: EventReader<MouseMotion>,
    collision: Res<LevelCollision>,
    player_query: Query<(&TombaRail, &Transform), (With<TombaPlayer>, Without<GameCamera>)>,
    mut cam_query: Query<(&mut GameCamera, &mut Transform)>,
) {
    let dt = time.delta_secs();
    if dt <= 0.0 {
        return;
    }

    for (mut cam, mut cam_transform) in &mut cam_query {
        // Toggle camera mode with F1
        if keyboard.just_pressed(KeyCode::F1) {
            cam.mode = match cam.mode {
                CameraMode::RailFollow => {
                    println!("Camera: Switched to Free Flight mode (WASD + Right Click Mouse)");
                    CameraMode::FreeFlight
                }
                CameraMode::FreeFlight => {
                    println!("Camera: Switched to 2.5D Rail Follow mode");
                    CameraMode::RailFollow
                }
            };
        }

        match cam.mode {
            CameraMode::RailFollow => {
                mouse_motion.clear();
                let Ok((rail, player_transform)) = player_query.get_single() else {
                    continue;
                };
                let Some(plane) = collision.get_plane(rail.plane_id) else {
                    continue;
                };

                let player_pos = player_transform.translation;

                // Perpendicular vector to rail in XZ plane
                let norm = Vec3::new(plane.dir[1], 0.0, -plane.dir[0]);
                let target_cam_pos = player_pos + norm * cam.follow_distance + Vec3::Y * cam.follow_height;
                let look_target = player_pos + Vec3::Y * 2.0;

                // Smooth follow interpolation
                let smooth_speed = 6.0;
                cam_transform.translation = cam_transform
                    .translation
                    .lerp(target_cam_pos, (smooth_speed * dt).min(1.0));

                let target_rot = Transform::default()
                    .looking_at(look_target - cam_transform.translation, Vec3::Y)
                    .rotation;
                cam_transform.rotation = cam_transform.rotation.slerp(target_rot, (smooth_speed * dt).min(1.0));
            }
            CameraMode::FreeFlight => {
                // Mouse look (held Right Click)
                if mouse_button.pressed(MouseButton::Right) {
                    for motion in mouse_motion.read() {
                        let yaw = -motion.delta.x * cam.sensitivity;
                        let pitch = -motion.delta.y * cam.sensitivity;
                        cam_transform.rotate_y(yaw);
                        cam_transform.rotate_local_x(pitch);
                    }
                } else {
                    mouse_motion.clear();
                }

                // Keyboard flight
                let mut dir = Vec3::ZERO;
                let fwd = cam_transform.forward().as_vec3();
                let right = cam_transform.right().as_vec3();

                if keyboard.pressed(KeyCode::KeyW) {
                    dir += fwd;
                }
                if keyboard.pressed(KeyCode::KeyS) {
                    dir -= fwd;
                }
                if keyboard.pressed(KeyCode::KeyD) {
                    dir += right;
                }
                if keyboard.pressed(KeyCode::KeyA) {
                    dir -= right;
                }
                if keyboard.pressed(KeyCode::KeyE) {
                    dir += Vec3::Y;
                }
                if keyboard.pressed(KeyCode::KeyQ) {
                    dir -= Vec3::Y;
                }

                if dir.length_squared() > 0.0 {
                    let mut speed = cam.flight_speed;
                    if keyboard.pressed(KeyCode::ShiftLeft) {
                        speed *= 2.5;
                    }
                    cam_transform.translation += dir.normalize() * speed * dt;
                }
            }
        }
    }
}
