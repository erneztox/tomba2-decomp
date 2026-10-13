use crate::collision::LevelCollision;
use crate::player::{TombaPlayer, TombaRail, TOMBA_PHYS_OFFSET_Y};
use bevy::input::mouse::MouseMotion;
use bevy::prelude::*;

// ─── CONSTANTES AUTÉNTICAS DE PS1 (Tomba2Engine / cutscene_camera.cpp) ─────────

/// Distancia auténtica de seguimiento en plano XZ.
/// PS1: 1400 unidades PS1 = 14.00m (Camera_Init: param_1[0x6c] = 0x578).
/// Ref: Camera_Init.c:73, LookAngleBuilder::distSolve (camera_look_builder.cpp:287).
pub const CAM_FOLLOW_DISTANCE: f32 = 14.00;

/// Altura de referencia sobre la línea base del riel.
/// PS1: 550 unidades PS1 = 5.50m (Camera_Init: param_1[0x3e] += 1000 + 0x35c).
/// Ref: Camera_Init.c:69, CutsceneCamera::pitch (cutscene_camera.cpp:200-230).
pub const CAM_FOLLOW_HEIGHT: f32 = 5.50;

/// Límite inferior absoluto de altura para la zona costera (Fisherman's Village).
/// PS1: kSeaFloorLow = 550 unidades PS1 = 5.50m.
/// Ref: CutsceneCamera::yFloor (cutscene_camera.cpp:115-157).
pub const SEASIDE_Y_FLOOR: f32 = 5.50;

/// Velocidad máxima de seguimiento en plano XZ.
/// PS1: maxStep = 6144 subunidades/tick → 61.44 m/s.
/// Ref: CutsceneCamera::trackXZ (cutscene_camera.cpp:43, FUN_8006D960).
pub const CAM_MAX_STEP_XZ: f32 = 61.44;

/// Velocidad máxima de seguimiento en eje vertical Y.
/// PS1: maxStep = 5632 subunidades/tick → 56.32 m/s.
/// Ref: CutsceneCamera::trackY (cutscene_camera.cpp:49, FUN_8006DA54).
pub const CAM_MAX_STEP_Y: f32 = 56.32;

/// Tasa auténtica de giro de ángulo por tick (0x08 unidades angulares por tick a 30Hz).
/// PS1: 8 / 4096 × TAU × 30 Hz = 0.368155 rad/s.
/// Ref: CutsceneCamera::angleStep (cutscene_camera.cpp:53-65, FUN_8006E010).
pub const CAM_ANGLE_STEP_RATE: f32 = (8.0 / 4096.0) * std::f32::consts::TAU * 30.0;

/// Amplitud de la zona muerta vertical en salto para evitar cabeceo de cámara.
/// En saltos normales (hasta 1.80m / 2.37m), la cámara no oscila con el jugador.
/// Ref: CutsceneCamera::pitch (cutscene_camera.cpp:231-250, r7 = 140 = 1.40m).
pub const CAM_VERTICAL_DEADZONE: f32 = 1.40;

// ─── FILTRO DE SEGUIMIENTO POR EJE (followAxis) ──────────────────────────────

/// Seguidor suave de eje continuo calibrado contra el filtro PS1 (0x8006D960).
/// PS1: paso por tick = (delta * 0.125) limitado a max_step.
/// En tiempo continuo: decaimiento exponencial equivalente con dt.
/// Ref: CutsceneCamera::followAxis (cutscene_camera.cpp:26-36).
pub fn follow_axis(current: f32, target: f32, max_step: f32, dt: f32) -> f32 {
    let delta = target - current;
    if delta.abs() < 1e-4 {
        return target;
    }
    let ticks = (dt * 30.0).clamp(0.0, 5.0);
    let alpha = (1.0 - (0.875_f32).powf(ticks)).clamp(0.0, 1.0);
    let step = (delta * alpha).clamp(-max_step * dt, max_step * dt);
    current + step
}

/// Normaliza un ángulo al rango [-PI, PI].
fn wrap_angle_pi(mut a: f32) -> f32 {
    while a > std::f32::consts::PI {
        a -= std::f32::consts::TAU;
    }
    while a < -std::f32::consts::PI {
        a += std::f32::consts::TAU;
    }
    a
}

// ─── COMPONENTES Y ESTADOS DE CÁMARA ──────────────────────────────────────────

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
    /// Ángulo acumulado de heading en radianes (correlaciona con kCamGlobal+0x140 / cam[0x34]).
    pub current_heading: f32,
    /// Vector normal horizontal suavizado (perpendicular al plano activo).
    pub current_normal: Vec3,
    /// Cota de altura vertical de referencia filtrada por zona muerta (pitch).
    pub smooth_baseline_y: f32,
    /// Posición suavizada del punto de mira (look target).
    pub smooth_look_target: Vec3,
}

impl Default for GameCamera {
    fn default() -> Self {
        Self {
            mode: CameraMode::RailFollow,
            flight_speed: 50.0,
            sensitivity: 0.003,
            current_heading: -std::f32::consts::FRAC_PI_2,
            current_normal: Vec3::new(-1.0, 0.0, 0.0), // Comienza mirando al este desde el océano
            smooth_baseline_y: 9.12,
            smooth_look_target: Vec3::new(39.68, 9.12 + TOMBA_PHYS_OFFSET_Y, 42.0),
        }
    }
}

// ─── SISTEMA PRINCIPAL DE CÁMARA (CutsceneCamera::mainFollow) ──────────────────

/// Controlador de cámara 2.5D en rieles 1:1 con Tomba2Engine.
///
/// Implementa la secuencia completa de `CutsceneCamera::mainFollow` (cutscene_camera.cpp:509-524):
///   1. `LookAngleBuilder::distSolve` (0x8006CF10) → cálculo de distancia y normal.
///   2. `CutsceneCamera::trackXZ` (0x8006D960) → seguimiento suave horizontal X/Z.
///   3. `CutsceneCamera::pitch` (0x8006D654) → filtrado con zona muerta vertical.
///   4. `CutsceneCamera::trackY` (0x8006DA54) → seguimiento suave vertical Y.
///   5. `CutsceneCamera::yFloor` (0x8006C80C) → clamp a cota inferior absoluta de nivel.
///   6. `CutsceneCamera::heading` / `angleStep` (0x8006E010) → rotación angular a ±8 unidades/tick.
///   7. `CutsceneCamera::lookAt` (0x8006D02C) → matriz de vista (pitch / yaw) sin roll.
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
        // Alternar modo de cámara con F1
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

                // ── 1. Heading & Angle Step (0x8006DCF4 / 0x8006E010) ───────────────────
                // La normal objetivo del plano en XZ es perpendicular al vector de dirección:
                // n = (-dir_z, dir_x).
                let target_normal = Vec3::new(-plane.dir[1], 0.0, plane.dir[0]).normalize_or_zero();
                if target_normal.length_squared() > 1e-4 {
                    let target_heading = target_normal.z.atan2(target_normal.x);
                    let diff = wrap_angle_pi(target_heading - cam.current_heading);
                    let max_turn = CAM_ANGLE_STEP_RATE * dt;
                    cam.current_heading += diff.clamp(-max_turn, max_turn);
                    cam.current_normal = Vec3::new(cam.current_heading.cos(), 0.0, cam.current_heading.sin());
                }

                // ── 2. Zona Muerta Vertical & Pitch (0x8006D654) ───────────────────────
                // En el juego original, la cámara Y está anclada a la cota del riel (rail.y).
                // Mientras Tomba esté saltando dentro de la ventana de zona muerta,
                // la cámara NO se eleva con él. Solo si supera la zona muerta se desplaza.
                let vertical_elevation = player_pos.y - (rail.y + TOMBA_PHYS_OFFSET_Y);
                let target_baseline_y = if vertical_elevation.abs() > CAM_VERTICAL_DEADZONE {
                    rail.y + (vertical_elevation.signum() * (vertical_elevation.abs() - CAM_VERTICAL_DEADZONE))
                } else {
                    rail.y
                };
                cam.smooth_baseline_y = follow_axis(cam.smooth_baseline_y, target_baseline_y, CAM_MAX_STEP_Y, dt);

                // ── 3. Posición Objetivo de Cámara (distSolve + yFloor) ─────────────────
                // Target X/Z sigue al jugador a lo largo del riel, más la distancia normal.
                // Target Y es la cota base + CAM_FOLLOW_HEIGHT, acotada por yFloor.
                let target_cam_x = player_pos.x + cam.current_normal.x * CAM_FOLLOW_DISTANCE;
                let target_cam_z = player_pos.z + cam.current_normal.z * CAM_FOLLOW_DISTANCE;
                let target_cam_y = (cam.smooth_baseline_y + CAM_FOLLOW_HEIGHT).max(SEASIDE_Y_FLOOR);

                // ── 4. Seguimiento por Ejes (trackXZ + trackY, 0x8006D960) ─────────────
                let cur = cam_transform.translation;
                let new_x = follow_axis(cur.x, target_cam_x, CAM_MAX_STEP_XZ, dt);
                let new_y = follow_axis(cur.y, target_cam_y, CAM_MAX_STEP_Y, dt);
                let new_z = follow_axis(cur.z, target_cam_z, CAM_MAX_STEP_XZ, dt);
                cam_transform.translation = Vec3::new(new_x, new_y, new_z);

                // ── 5. Matriz de Vista / LookAt (0x8006D02C) ───────────────────────────
                // El punto de mira objetivo en X/Z sigue a Tomba, pero en Y se mantiene anclado
                // a su centro torso en el suelo para que los saltos se perciban elevados en pantalla.
                let raw_look_target = Vec3::new(
                    player_pos.x,
                    cam.smooth_baseline_y + TOMBA_PHYS_OFFSET_Y,
                    player_pos.z,
                );
                cam.smooth_look_target.x = follow_axis(cam.smooth_look_target.x, raw_look_target.x, CAM_MAX_STEP_XZ, dt);
                cam.smooth_look_target.y = follow_axis(cam.smooth_look_target.y, raw_look_target.y, CAM_MAX_STEP_Y, dt);
                cam.smooth_look_target.z = follow_axis(cam.smooth_look_target.z, raw_look_target.z, CAM_MAX_STEP_XZ, dt);

                let d = cam.smooth_look_target - cam_transform.translation;
                let xz_len = (d.x * d.x + d.z * d.z).sqrt();
                if xz_len > 1e-4 {
                    // Ref: CutsceneCamera::lookAt (cutscene_camera.cpp:417-431)
                    // pitch = ratan2(sinp, cosp), yaw = ratan2(a, b). Sin roll.
                    let pitch = (-d.y).atan2(xz_len);
                    let yaw = (-d.x).atan2(-d.z);
                    cam_transform.rotation = Quat::from_euler(EulerRot::YXZ, yaw, pitch, 0.0);
                }
            }
            CameraMode::FreeFlight => {
                // Control libre de cámara (Right Click + Mouse)
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

                // Desplazamiento de vuelo por teclado
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
