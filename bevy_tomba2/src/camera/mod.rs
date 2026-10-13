use crate::collision::LevelCollision;
use crate::player::{TombaPlayer, TombaRail};
use bevy::input::mouse::MouseMotion;
use bevy::prelude::*;

/// Authentic camera distance from rail.
/// In PS1 MAIN.EXE, Camera_Init sets camera distance param_1[0x6c] = 0x578 (1400 PS1 units = 14.0m).
/// Ref: Camera_Init.c:73, LookAngleBuilder::distSolve (camera_look_builder.cpp:287).
pub const CAM_FOLLOW_DISTANCE: f32 = 14.0;

/// Authentic camera height above rail baseline.
/// In PS1 MAIN.EXE, Camera_Init sets height offset param_1[0x3e] += 1000 + 0x35c,
/// and yFloor clamps lower bound per area (550 PS1 units = 5.50m in seaside village).
/// Ref: Camera_Init.c:69, CutsceneCamera::yFloor (cutscene_camera.cpp:115-157).
pub const CAM_FOLLOW_HEIGHT: f32 = 5.50;

/// Authentic axis follow limits from CutsceneCamera::trackXZ and trackY.
/// Ref: CutsceneCamera::trackXZ (maxStep = 6144 = 61.44 m/s), trackY (maxStep = 5632 = 56.32 m/s).
pub const CAM_MAX_STEP_XZ: f32 = 61.44;
pub const CAM_MAX_STEP_Y: f32 = 56.32;

/// Authentic PS1 axis tracker from CutsceneCamera::followAxis (cutscene_camera.cpp:26).
/// In PS1 MAIN.EXE, if |delta| <= 10 PS1 units (0.10m), position snaps to target.
/// Otherwise, moves by delta * 0.125 (delta >> 3 in fixed point) clamped to max_step per tick.
/// Ref: CutsceneCamera::followAxis (cutscene_camera.cpp:26).
pub fn follow_axis(current: f32, target: f32, max_step: f32, dt: f32) -> f32 {
    let delta = target - current;
    if delta.abs() <= 0.10 {
        return target;
    }
    // Continuous-time formulation for discrete 30Hz tick (decay 0.875 per tick)
    let ticks = (dt * 30.0).clamp(0.0, 5.0);
    let alpha = (1.0 - (0.875_f32).powf(ticks)).clamp(0.0, 1.0);
    let step = (delta * alpha).clamp(-max_step * dt, max_step * dt);
    current + step
}

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
    pub current_normal: Vec3,
}

impl Default for GameCamera {
    fn default() -> Self {
        Self {
            mode: CameraMode::RailFollow,
            flight_speed: 50.0,
            sensitivity: 0.003,
            current_normal: Vec3::new(-1.0, 0.0, 0.0), // Starts looking east from the ocean
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

                // Authentic plane normal in XZ: n = (-dir_z, dir_x)
                let target_normal = Vec3::new(-plane.dir[1], 0.0, plane.dir[0]).normalize_or_zero();
                if target_normal.length_squared() > 1e-4 {
                    // Smoothly approach normal vector across plane transitions
                    cam.current_normal = cam
                        .current_normal
                        .lerp(target_normal, (dt * 4.0).min(1.0))
                        .normalize();
                }

                // Authentic target camera position (LookAngleBuilder::distSolve + yFloor)
                let target_cam_pos = player_pos
                    + cam.current_normal * CAM_FOLLOW_DISTANCE
                    + Vec3::Y * CAM_FOLLOW_HEIGHT;

                // Authentic per-axis follow from CutsceneCamera::followAxis (cutscene_camera.cpp:26)
                let cur = cam_transform.translation;
                let new_x = follow_axis(cur.x, target_cam_pos.x, CAM_MAX_STEP_XZ, dt);
                let new_y = follow_axis(cur.y, target_cam_pos.y, CAM_MAX_STEP_Y, dt);
                let new_z = follow_axis(cur.z, target_cam_pos.z, CAM_MAX_STEP_XZ, dt);
                cam_transform.translation = Vec3::new(new_x, new_y, new_z);

                // Look target: player waist center (CutsceneCamera::lookAt / camera_look_builder.cpp:38)
                let look_target = player_pos + Vec3::Y * 0.2;
                let target_rot = Transform::from_translation(cam_transform.translation)
                    .looking_at(look_target, Vec3::Y)
                    .rotation;
                cam_transform.rotation = cam_transform.rotation.slerp(target_rot, (dt * 10.0).min(1.0));
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
