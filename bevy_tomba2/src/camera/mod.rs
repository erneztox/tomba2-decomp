use crate::collision::LevelCollision;
use crate::player::{TombaPlayer, TombaRail, TOMBA_PHYS_OFFSET_Y};
use bevy::input::mouse::MouseMotion;
use bevy::prelude::*;

pub mod rail_camera;
pub use rail_camera::*;

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
    /// Pipeline cinemático completo de 32 funciones de Sector 7.
    pub pipeline: RailCameraPipeline,
}

impl Default for GameCamera {
    fn default() -> Self {
        let mut pipe = RailCameraPipeline::default();
        pipe.pos = Vec3::new(39.68, 9.12 + CAM_FOLLOW_HEIGHT, 42.0 + CAM_FOLLOW_DISTANCE);
        pipe.smooth_baseline_y = 9.12;
        pipe.look_target = Vec3::new(39.68, 9.12 + TOMBA_PHYS_OFFSET_Y, 42.0);
        pipe.current_heading = -std::f32::consts::FRAC_PI_2;
        pipe.current_normal = Vec3::new(-1.0, 0.0, 0.0);

        Self {
            mode: CameraMode::RailFollow,
            flight_speed: 50.0,
            sensitivity: 0.003,
            current_heading: -std::f32::consts::FRAC_PI_2,
            current_normal: Vec3::new(-1.0, 0.0, 0.0), // Comienza mirando al este desde el océano
            smooth_baseline_y: 9.12,
            smooth_look_target: Vec3::new(39.68, 9.12 + TOMBA_PHYS_OFFSET_Y, 42.0),
            pipeline: pipe,
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

        // F2: Probar temblor sísmico de pantalla (CAM-17: shakeTail)
        if keyboard.just_pressed(KeyCode::F2) {
            cam.pipeline.trigger_shake();
            println!("[CAMERA] Screen Shake triggered (CAM-17: shakeTail)");
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

                // 1. Heading sobre el riel (CAM-28: camera_update)
                cam.pipeline.camera_update(Vec2::new(plane.dir[0], plane.dir[1]), dt);

                // 2. Ejecutar pipeline principal Modo 6 (CAM-15: camera_mode6)
                cam.pipeline.camera_mode6(player_pos, dt);

                // 3. Aplicar posición y rotación a Bevy Transform
                cam_transform.translation = cam.pipeline.pos + cam.pipeline.shake_offset;
                cam_transform.rotation = cam.pipeline.rotation;

                // 4. Sincronizar campos expuestos
                cam.current_heading = cam.pipeline.current_heading;
                cam.current_normal = cam.pipeline.current_normal;
                cam.smooth_baseline_y = cam.pipeline.smooth_baseline_y;
                cam.smooth_look_target = cam.pipeline.look_target;
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

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_camera_pitch_aims_downward_at_target() {
        // La cámara está ubicada a 14.62m de altura, Tomba a 10.37m (4.25m por debajo de la cámara).
        let cam_pos = Vec3::new(40.0, 14.62, 56.0);
        let look_target = Vec3::new(40.0, 10.37, 42.0);

        let d = look_target - cam_pos;
        let xz_len = (d.x * d.x + d.z * d.z).sqrt();

        let pitch = d.y.atan2(xz_len);
        let yaw = (-d.x).atan2(-d.z);
        let rot = Quat::from_euler(EulerRot::YXZ, yaw, pitch, 0.0);

        // El vector forward en Bevy (rotación aplicada a -Z)
        let forward = rot * Vec3::NEG_Z;

        // Comprobar que forward apunta HACIA ABAJO (componente Y negativo), NO HACIA EL TECHO
        assert!(forward.y < 0.0, "El vector de visión de la cámara debe apuntar hacia abajo: forward.y = {}", forward.y);

        // Comprobar que apunta exactamente en la dirección de d normalizado
        let expected_dir = d.normalize();
        assert!((forward - expected_dir).length() < 1e-4, "Forward ({:?}) debe coincidir con expected ({:?})", forward, expected_dir);

        // Comprobar equivalencia con Transform::look_at
        let mut t = Transform::from_translation(cam_pos);
        t.look_at(look_target, Vec3::Y);
        let look_at_forward = t.forward().as_vec3();
        assert!((forward - look_at_forward).length() < 1e-4, "Forward ({:?}) debe coincidir con Transform::look_at ({:?})", forward, look_at_forward);
    }
}

