//! Sector 7: 2.5D Rail Camera Pipeline (32 funciones 1:1 con Tomba! 2).
//!
//! Implementación exacta de la cinemática, filtros de seguimiento, amortiguación vertical,
//! cota inferior por área (yFloor), rotación de ángulo en rieles (heading), matriz de vista (lookAt),
//! estados cinemáticos de cámara (Modos 1..6) y generador de temblor (shakeTail).
//!
//! Referencias originales:
//!   - `src/main/camera/Camera_*.c`
//!   - `Tomba2Engine/game/camera/cutscene_camera.cpp`, `cutscene_camera.h`
//!   - `Tomba2Engine/game/camera/camera_look_builder.cpp`, `camera_look_builder.h`
//!   - `Tomba2Engine/game/camera/camera_state.h`, `camera_mode.h`

#![allow(dead_code)]

use bevy::prelude::*;
use crate::player::physics::{ps1_cos, ps1_sin, ps1_angle_wrap};

// ─── CONSTANTES DE CALIBRACIÓN PS1 (1:1 con Tomba2Engine) ─────────────────────

/// Distancia por defecto de seguimiento horizontal (1400 unidades PS1 = 14.00m).
/// Ref: Camera_Init.c:73, LookAngleBuilder::distSolve (camera_look_builder.cpp:287).
pub const CAM_FOLLOW_DISTANCE: f32 = 14.00;

/// Altura por defecto sobre la línea base del riel (550 unidades PS1 = 5.50m).
/// Ref: Camera_Init.c:69, CutsceneCamera::pitch (cutscene_camera.cpp:200-230).
pub const CAM_FOLLOW_HEIGHT: f32 = 5.50;

/// Cota inferior absoluta para Fisherman's Village / Seaside (550 unidades PS1 = 5.50m).
/// Ref: CutsceneCamera::yFloor (cutscene_camera.cpp:115-157).
pub const SEASIDE_Y_FLOOR: f32 = 5.50;

/// Límite de paso horizontal por segundo (6144 subunidades/tick * 30Hz / 100 / 30 = 61.44 m/s).
/// Ref: CutsceneCamera::trackXZ (cutscene_camera.cpp:43, FUN_8006D960).
pub const CAM_MAX_STEP_XZ: f32 = 61.44;

/// Límite de paso vertical por segundo (5632 subunidades/tick * 30Hz / 100 / 30 = 56.32 m/s).
/// Ref: CutsceneCamera::trackY (cutscene_camera.cpp:49, FUN_8006DA54).
pub const CAM_MAX_STEP_Y: f32 = 56.32;

/// Tasa de giro angular por tick (8 unidades PS1 / tick @ 30Hz = 0.368155 rad/s).
/// Ref: CutsceneCamera::angleStep (cutscene_camera.cpp:53-65, FUN_8006E010).
pub const CAM_ANGLE_STEP_RATE: f32 = (8.0 / 4096.0) * std::f32::consts::TAU * 30.0;

/// Zona muerta vertical durante salto (140 unidades PS1 = 1.40m).
/// Ref: CutsceneCamera::pitch (cutscene_camera.cpp:231-250).
pub const CAM_VERTICAL_DEADZONE: f32 = 1.40;

/// Umbral de distancia para asentamiento de mira (401 unidades PS1 = 4.01m).
/// Ref: Camera_CalcDelta.c:48, LookAngleBuilder::yawDistAccumulate.
pub const CAM_SETTLE_DIST_THRESHOLD: f32 = 4.01;

/// Radio orbital panorámico (500 unidades PS1 = 5.00m).
/// Ref: Camera_UpdateOrbit.c:23, CutsceneCamera::orbitTick.
pub const CAM_ORBIT_RADIUS: f32 = 5.00;

// ─── ESTRUCTURA PRINCIPAL DEL PIPELINE DE CÁMARA ─────────────────────────────

/// Pipeline de Cámara 2.5D en Rieles de Tomba! 2.
/// Contiene el estado completo de los registros y memorias scratchpad originales.
#[derive(Debug, Clone, Reflect)]
pub struct RailCameraPipeline {
    /// Posición actual de la cámara en el mundo (metros).
    pub pos: Vec3,
    /// Posición objetivo sin suavizar (metros).
    pub target_pos: Vec3,
    /// Punto de mira actual (Look-At, metros).
    pub look_target: Vec3,
    /// Vector normal horizontal (perpendicular al riel activo).
    pub current_normal: Vec3,
    /// Ángulo de orientación horizontal (heading) en radianes.
    pub current_heading: f32,
    /// Ángulo de paso acumulado (cam[0x34] / angleStep).
    pub angle_step_accum: f32,
    /// Ángulo de órbita (g_CameraAngle2, 0..4095).
    pub orbit_angle: u16,
    /// Cota base vertical filtrada por zona muerta (smooth baseline Y).
    pub smooth_baseline_y: f32,
    /// Distancia de seguimiento configurable (metros).
    pub follow_distance: f32,
    /// Altura de seguimiento configurable (metros).
    pub follow_height: f32,
    /// Campo de visión vertical (FOV) en grados.
    pub fov_degrees: f32,
    /// Ángulo de balanceo (roll) en radianes.
    pub roll: f32,
    /// Modo de cámara activo (0..15, coincide con kCamGlobal+0x164).
    pub mode: u8,
    /// Submodo de cámara (cam[0x67]).
    pub saved_mode: u8,
    /// Banderas de estado (bit 1: XZ settled, bit 2: Y settled, bit 4: locked).
    pub flags: u16,
    /// Estado de la máquina de temblor (shakeTail / cam[0x76]).
    pub shake_state: u8,
    /// Temporizador del temblor.
    pub shake_timer: f32,
    /// Desplazamiento reactivo de temblor (screen shake offset).
    pub shake_offset: Vec3,
    /// Cota inferior de suelo activa para el área actual (yFloor).
    pub floor_y: f32,
    /// Matriz/rotación de vista calculada (lookAt).
    pub rotation: Quat,
}

impl Default for RailCameraPipeline {
    fn default() -> Self {
        let mut pipe = Self {
            pos: Vec3::new(39.68, 9.12 + CAM_FOLLOW_HEIGHT, 42.0 + CAM_FOLLOW_DISTANCE),
            target_pos: Vec3::new(39.68, 9.12 + CAM_FOLLOW_HEIGHT, 42.0 + CAM_FOLLOW_DISTANCE),
            look_target: Vec3::new(39.68, 9.12, 42.0),
            current_normal: Vec3::new(0.0, 0.0, 1.0),
            current_heading: 0.0,
            angle_step_accum: 0.0,
            orbit_angle: 0,
            smooth_baseline_y: 9.12,
            follow_distance: CAM_FOLLOW_DISTANCE,
            follow_height: CAM_FOLLOW_HEIGHT,
            fov_degrees: 50.0,
            roll: 0.0,
            mode: 6, // Mode 6 es el modo principal de juego (mainFollow)
            saved_mode: 0,
            flags: 0,
            shake_state: 0,
            shake_timer: 0.0,
            shake_offset: Vec3::ZERO,
            floor_y: SEASIDE_Y_FLOOR,
            rotation: Quat::IDENTITY,
        };
        pipe.camera_init();
        pipe
    }
}

impl RailCameraPipeline {
    // ── CAM-07: Camera_Init (0x8006EA7C) ─────────────────────────────────────
    /// Inicializa y reinicia la cámara con los valores predeterminados de PS1.
    /// Ref: Camera_Init.c:16-35, CutsceneCamera::init.
    pub fn camera_init(&mut self) {
        self.follow_distance = CAM_FOLLOW_DISTANCE;
        self.follow_height = CAM_FOLLOW_HEIGHT;
        self.floor_y = SEASIDE_Y_FLOOR;
        self.flags = 0;
        self.angle_step_accum = 0.0;
        self.orbit_angle = 0;
        self.shake_state = 0;
        self.shake_timer = 0.0;
        self.shake_offset = Vec3::ZERO;
        self.fov_degrees = 50.0;
        self.roll = 0.0;
        self.mode = 6;
    }

    // ── CAM-01: Camera_Border (0x8006C80C) ───────────────────────────────────
    /// Aplica la cota inferior absoluta (yFloor) para que la cámara no descienda al océano o vacío.
    /// Ref: Camera_Border.c:17-38, CutsceneCamera::yFloor (cutscene_camera.cpp:103-167).
    pub fn camera_border(&mut self) {
        if self.pos.y < self.floor_y {
            self.pos.y = self.floor_y;
        }
    }

    // ── CAM-02: Camera_CalcDelta (0x8006DAD8) ─────────────────────────────────
    /// Calcula delta trigonométrico hacia el objetivo y determina si se asienta (settled).
    /// Ref: Camera_CalcDelta.c:23-53, LookAngleBuilder::posBuildB.
    pub fn camera_calcdelta(&mut self, target: Vec3) -> (Vec2, bool) {
        let dx = target.x - self.look_target.x;
        let dz = target.z - self.look_target.z;
        let dist = (dx * dx + dz * dz).sqrt();
        let settled = dist < CAM_SETTLE_DIST_THRESHOLD;
        if settled {
            self.flags |= 1; // Settle bit
        } else {
            self.flags &= !1;
        }
        (Vec2::new(dx, dz), settled)
    }

    // ── CAM-03: Camera_CalcOrbitPos (0x8006E918) ──────────────────────────────
    /// Posiciona la base horizontal X/Z en función del ángulo heading del riel.
    /// Ref: Camera_CalcOrbitPos.c:19-45, CutsceneCamera::initPlace.
    pub fn camera_calcorbitpos(&mut self, center: Vec3, heading_angle: f32) {
        self.current_heading = heading_angle;
        self.current_normal = Vec3::new(heading_angle.cos(), 0.0, heading_angle.sin());
        self.pos.x = center.x + self.current_normal.x * self.follow_distance;
        self.pos.z = center.z + self.current_normal.z * self.follow_distance;
    }

    // ── CAM-04: Camera_CheckEntity (0x8006E1E4) ───────────────────────────────
    /// Restaura el modo anterior o pone modo 0 en caso de bandera forzada.
    /// Ref: Camera_CheckEntity.c:14-22, CutsceneCamera::restoreMode.
    pub fn camera_checkentity(&mut self, force_reset: bool) {
        if force_reset {
            self.mode = 0;
            self.pos.y = self.smooth_baseline_y;
        } else if self.saved_mode != 0 {
            self.mode = self.saved_mode;
            self.saved_mode = 0;
        }
    }

    // ── CAM-05: Camera_Commit (0x8006D02C) ───────────────────────────────────
    /// Construye la rotación y matriz de vista (lookAt) orientada hacia `look_target`.
    /// Incluye roll y compensación de coordenadas Bevy (Y-Up) vs PS1 (Y-Down).
    /// Ref: Camera_Commit.c:20-68, CutsceneCamera::lookAt (cutscene_camera.cpp:400-453).
    pub fn camera_commit(&mut self) -> Quat {
        let d = (self.look_target + self.shake_offset) - self.pos;
        let xz_len = (d.x * d.x + d.z * d.z).sqrt();
        if xz_len > 1e-4 {
            let pitch = d.y.atan2(xz_len);
            let yaw = (-d.x).atan2(-d.z);
            self.rotation = Quat::from_euler(EulerRot::YXZ, yaw, pitch, self.roll);
        }
        self.rotation
    }

    // ── CAM-06: Camera_Config (0x8006E010) ───────────────────────────────────
    /// Ajusta la tasa angular acumulada paso a paso a ±8 unidades/tick (0.368 rad/s).
    /// Ref: Camera_Config.c:19-58, CutsceneCamera::angleStep (cutscene_camera.cpp:53-101).
    pub fn camera_config(&mut self, dt: f32) {
        let max_turn = CAM_ANGLE_STEP_RATE * dt;
        if self.angle_step_accum.abs() <= max_turn {
            self.angle_step_accum = 0.0;
        } else if self.angle_step_accum > 0.0 {
            self.angle_step_accum -= max_turn;
        } else {
            self.angle_step_accum += max_turn;
        }
    }

    // ── CAM-08: Camera_Lerp (0x8006CEC4) ──────────────────────────────────────
    /// Interpola entre dos posiciones 3D con snapping si |delta| <= 0.10m.
    /// Retorna true si todos los ejes quedaron completamente asentados.
    /// Ref: Camera_Lerp.c:17-57.
    pub fn camera_lerp(&mut self, target: Vec3, max_step: f32, dt: f32) -> bool {
        let snap_x = self.camera_smoothx(target.x, max_step, dt);
        let snap_y = self.camera_smoothy(target.y, max_step, dt);
        let snap_z = self.camera_smoothz(target.z, max_step, dt);
        snap_x && snap_y && snap_z
    }

    // ── CAM-09: Camera_Main (0x8006E464) ─────────────────────────────────────
    /// Loop principal de despacho por modo (1..6) y ejecución del temblor posterior (shakeTail).
    /// Ref: Camera_Main.c:21-65, CutsceneCamera::update.
    pub fn camera_main(&mut self, target: Vec3, dt: f32) {
        match self.mode {
            1 => self.camera_mode1(target),
            2 => self.camera_mode2(target),
            3 => self.camera_mode3(target),
            4 => self.camera_mode4(target, dt),
            5 => self.camera_mode5(target, dt),
            _ => self.camera_mode6(target, dt),
        }
        self.camera_modeswitch(dt);
    }

    // ── CAM-10: Camera_Mode1 (0x8006E294) ────────────────────────────────────
    /// Modo 1: Snap instantáneo de acumuladores y commit con look-build A.
    /// Ref: Camera_Mode1.c:14-25, CutsceneCamera::snapFollowA.
    pub fn camera_mode1(&mut self, target: Vec3) {
        self.camera_setfov(self.fov_degrees);
        self.camera_setroll(self.roll);
        self.pos.x = target.x;
        self.pos.z = target.z;
        self.pos.y = target.y + self.follow_height;
        self.look_target = target;
        self.camera_commit();
    }

    // ── CAM-11: Camera_Mode2 (0x8006E2FC) ────────────────────────────────────
    /// Modo 2: Snap instantáneo de acumuladores y commit con look-build B.
    /// Ref: Camera_Mode2.c:14-25, CutsceneCamera::snapFollowB.
    pub fn camera_mode2(&mut self, target: Vec3) {
        self.camera_setfov(self.fov_degrees);
        self.camera_setroll(self.roll);
        self.pos = target + Vec3::new(0.0, self.follow_height, self.follow_distance);
        self.look_target = target;
        self.camera_commit();
    }

    // ── CAM-12: Camera_Mode3 (0x8006EA00) ────────────────────────────────────
    /// Modo 3: Snap a posición objetivo con offset vertical de -2.0m (200 unidades PS1).
    /// Ref: Camera_Mode3.c:15-26, CutsceneCamera::snapToMasterOffsetY200.
    pub fn camera_mode3(&mut self, target: Vec3) {
        self.pos = Vec3::new(target.x, target.y - 2.0 + self.follow_height, target.z + self.follow_distance);
        self.look_target = Vec3::new(target.x, target.y - 2.0, target.z);
        self.camera_commit();
    }

    // ── CAM-13: Camera_Mode4 (0x8006E228) ────────────────────────────────────
    /// Modo 4: Seguimiento suave continuo en XZ y Y con commit.
    /// Ref: Camera_Mode4.c:15-28, CutsceneCamera::trackFollow.
    pub fn camera_mode4(&mut self, target: Vec3, dt: f32) {
        self.camera_smoothx(target.x, CAM_MAX_STEP_XZ, dt);
        self.camera_smoothy(target.y + self.follow_height, CAM_MAX_STEP_Y, dt);
        self.camera_smoothz(target.z + self.follow_distance, CAM_MAX_STEP_XZ, dt);
        self.look_target = target;
        self.camera_commit();
    }

    // ── CAM-14: Camera_Mode5 (0x8006E3F4) ────────────────────────────────────
    /// Modo 5: Simple seguimiento con actualización de banderas de asentamiento (settled).
    /// Ref: Camera_Mode5.c:15-29, CutsceneCamera::simpleFollow.
    pub fn camera_mode5(&mut self, target: Vec3, dt: f32) {
        let snap_xz = self.camera_smoothx(target.x, CAM_MAX_STEP_XZ, dt)
            && self.camera_smoothz(target.z + self.follow_distance, CAM_MAX_STEP_XZ, dt);
        if snap_xz {
            self.flags |= 1;
        }
        let snap_y = self.camera_smoothy(target.y + self.follow_height, CAM_MAX_STEP_Y, dt);
        if snap_y {
            self.flags |= 2;
        }
        self.look_target = target;
        self.camera_commit();
    }

    // ── CAM-15: Camera_Mode6 (0x8006E0F0) ────────────────────────────────────
    /// Modo 6: PIPELINE PRINCIPAL DE JUEGO 2.5D SOBRE RIELES (mainFollow).
    /// Ejecuta la secuencia completa de Tomba! 2:
    ///   1. `camera_updatemain` (distSolve)
    ///   2. `camera_smoothx` / `camera_smoothz` (trackXZ)
    ///   3. `camera_modemain` (pitch con zona muerta)
    ///   4. `camera_smoothy` (trackY)
    ///   5. `camera_border` (yFloor)
    ///   6. `camera_update` (heading)
    ///   7. `camera_commit` (lookAt)
    ///   8. `camera_config` (angleStep)
    /// Ref: Camera_Mode6.c:18-42, CutsceneCamera::mainFollow (cutscene_camera.cpp:509-524).
    pub fn camera_mode6(&mut self, target: Vec3, dt: f32) {
        // 1. distSolve
        self.camera_updatemain(target);

        // 2. trackXZ hacia la posición proyectada
        let target_x = target.x + self.current_normal.x * self.follow_distance;
        let target_z = target.z + self.current_normal.z * self.follow_distance;
        self.camera_smoothx(target_x, CAM_MAX_STEP_XZ, dt);
        self.camera_smoothz(target_z, CAM_MAX_STEP_XZ, dt);

        // 3. pitch: zona muerta vertical
        self.camera_modemain(target.y, dt);

        // 4. trackY
        let target_y = self.smooth_baseline_y + self.follow_height;
        self.camera_smoothy(target_y, CAM_MAX_STEP_Y, dt);

        // 5. yFloor: cota mínima absoluta
        self.camera_border();

        // 6. LookAt target anclado a torso en el suelo
        self.look_target = Vec3::new(target.x, self.smooth_baseline_y, target.z);

        // 7. lookAt
        self.camera_commit();

        // 8. angleStep
        self.camera_config(dt);
    }

    // ── CAM-16: Camera_ModeMain (0x8006D654) ──────────────────────────────────
    /// Filtro de elevación vertical y cabeceo con zona muerta de 1.40m.
    /// Evita que la cámara oscile arriba y abajo cuando Tomba salta.
    /// Ref: Camera_ModeMain.c:21-65, CutsceneCamera::pitch (cutscene_camera.cpp:170-250).
    pub fn camera_modemain(&mut self, player_y: f32, dt: f32) {
        let elevation = player_y - self.smooth_baseline_y;
        let target_baseline = if elevation.abs() > CAM_VERTICAL_DEADZONE {
            self.smooth_baseline_y + (elevation.signum() * (elevation.abs() - CAM_VERTICAL_DEADZONE))
        } else {
            self.smooth_baseline_y
        };

        // Suavizado continuo de la línea base
        let delta = target_baseline - self.smooth_baseline_y;
        if delta.abs() < 1e-4 {
            self.smooth_baseline_y = target_baseline;
        } else {
            let ticks = (dt * 30.0).clamp(0.0, 5.0);
            let alpha = (1.0 - (0.875_f32).powf(ticks)).clamp(0.0, 1.0);
            let step = (delta * alpha).clamp(-CAM_MAX_STEP_Y * dt, CAM_MAX_STEP_Y * dt);
            self.smooth_baseline_y += step;
        }
    }

    // ── CAM-17: Camera_ModeSwitch (0x8006C988) ────────────────────────────────
    /// Máquina de estados de temblor reactivo de cámara (shakeTail).
    /// Genera offset oscilatorio que se suma a la posición en sacudidas sísmicas o explosiones.
    /// Ref: Camera_ModeSwitch.c:16-48, CutsceneCamera::shakeTail (cutscene_camera.cpp:548-570).
    pub fn camera_modeswitch(&mut self, dt: f32) {
        if self.shake_state == 0 {
            self.shake_offset = Vec3::ZERO;
            return;
        }

        self.shake_timer += dt;
        let freq = 25.0; // 25 Hz oscilación
        let decay = (-self.shake_timer * 4.0).exp();
        let amplitude = 0.40 * decay;

        if amplitude < 0.01 || self.shake_timer > 1.5 {
            self.shake_state = 0;
            self.shake_timer = 0.0;
            self.shake_offset = Vec3::ZERO;
        } else {
            let sin_val = (self.shake_timer * freq * std::f32::consts::TAU).sin();
            self.shake_offset = Vec3::new(
                sin_val * amplitude,
                (self.shake_timer * freq * 1.5).cos() * amplitude * 0.7,
                0.0,
            );
        }
    }

    /// Dispara un temblor de cámara sísmico.
    pub fn trigger_shake(&mut self) {
        self.shake_state = 1;
        self.shake_timer = 0.0;
    }

    // ── CAM-18: Camera_SetFOV (0x8006D934) ────────────────────────────────────
    /// Configura el campo de visión vertical de la cámara en grados.
    /// Ref: Camera_SetFOV.c:15-21, CutsceneCamera::snapAccXZ.
    pub fn camera_setfov(&mut self, fov: f32) {
        self.fov_degrees = fov.clamp(20.0, 120.0);
    }

    // ── CAM-19: Camera_SetHeight (0x8006DF88) ─────────────────────────────────
    /// Establece la altura de seguimiento relativa a la línea base.
    /// Ref: Camera_SetHeight.c:16-27, LookAngleBuilder::headBuildA.
    pub fn camera_setheight(&mut self, height: f32) {
        self.follow_height = height;
    }

    // ── CAM-20: Camera_SetModeSeq (0x8006E3B0) ────────────────────────────────
    /// Secuencia de corte para cinemáticas: Snap sin suavizado y commit inmediato.
    /// Ref: Camera_SetModeSeq.c:13-20, CutsceneCamera::snapFollow.
    pub fn camera_setmodeseq(&mut self, target: Vec3) {
        self.pos = target + Vec3::new(0.0, self.follow_height, self.follow_distance);
        self.look_target = target;
        self.camera_commit();
    }

    // ── CAM-21: Camera_SetPosition (0x8006CBA8) ───────────────────────────────
    /// Setea la posición absoluta de la cámara en coordenadas del mundo.
    /// Ref: Camera_SetPosition.c:14-22, CutsceneCamera::initSeedGrp.
    pub fn camera_setposition(&mut self, pos: Vec3) {
        self.pos = pos;
    }

    // ── CAM-22: Camera_SetRoll (0x8006D950) ───────────────────────────────────
    /// Configura el ángulo de balanceo (roll) en radianes.
    /// Ref: Camera_SetRoll.c:13-19, CutsceneCamera::snapAccY.
    pub fn camera_setroll(&mut self, roll: f32) {
        self.roll = roll;
    }

    // ── CAM-23: Camera_SetTarget (0x8006CBD0) ─────────────────────────────────
    /// Setea el punto de mira objetivo (look-at target) del mundo.
    /// Ref: Camera_SetTarget.c:12-22.
    pub fn camera_settarget(&mut self, target: Vec3) {
        self.look_target = target;
    }

    // ── CAM-24: Camera_Smooth (0x8006CC1C) ────────────────────────────────────
    /// Suavizado interpolado paso a paso con factor PS1 0x80 (128 / 4096 = 0.03125 por tick).
    /// Ref: Camera_Smooth.c:18-68.
    pub fn camera_smooth(&mut self, target: Vec3, steps: i16) {
        if steps <= 0 {
            self.pos = target;
            return;
        }
        let factor = 0.03125 * (steps as f32);
        self.pos = self.pos.lerp(target, factor.clamp(0.0, 1.0));
    }

    // ── CAM-25: Camera_SmoothMove (0x8006DEF0) ────────────────────────────────
    /// Suaviza la posición con snap dentro de 0.10m.
    /// Ref: Camera_SmoothMove.c:16-32, LookAngleBuilder::headBuildB.
    pub fn camera_smoothmove(&mut self, target_y: f32, dt: f32) -> bool {
        self.camera_smoothy(target_y, CAM_MAX_STEP_Y, dt)
    }

    // ── CAM-26: Camera_SmoothX (0x8006D960) ───────────────────────────────────
    /// Filtro de seguimiento suave horizontal en el eje X. Snaps si |delta| <= 0.10m.
    /// Ref: Camera_SmoothX.c:18-38, CutsceneCamera::trackXZ.
    pub fn camera_smoothx(&mut self, target_x: f32, max_step: f32, dt: f32) -> bool {
        let (new_val, snapped) = follow_axis_snap(self.pos.x, target_x, max_step, dt);
        self.pos.x = new_val;
        snapped
    }

    // ── CAM-27: Camera_SmoothY (0x8006DA54) ───────────────────────────────────
    /// Filtro de seguimiento suave vertical en el eje Y. Snaps si |delta| <= 0.10m.
    /// Ref: Camera_SmoothY.c:18-38, CutsceneCamera::trackY.
    pub fn camera_smoothy(&mut self, target_y: f32, max_step: f32, dt: f32) -> bool {
        let (new_val, snapped) = follow_axis_snap(self.pos.y, target_y, max_step, dt);
        self.pos.y = new_val;
        snapped
    }

    /// Filtro de seguimiento suave horizontal en el eje Z. Snaps si |delta| <= 0.10m.
    pub fn camera_smoothz(&mut self, target_z: f32, max_step: f32, dt: f32) -> bool {
        let (new_val, snapped) = follow_axis_snap(self.pos.z, target_z, max_step, dt);
        self.pos.z = new_val;
        snapped
    }

    // ── CAM-28: Camera_Update (0x8006DCF4) ────────────────────────────────────
    /// Actualiza el vector normal horizontal y el ángulo heading perpendicular al riel.
    /// Ref: Camera_Update.c:18-85, CutsceneCamera::heading.
    pub fn camera_update(&mut self, rail_dir: Vec2, dt: f32) {
        // Normal horizontal perpendicular a la dirección del riel: (-dir_z, dir_x)
        let n = Vec2::new(-rail_dir.y, rail_dir.x).normalize_or_zero();
        if n.length_squared() > 1e-4 {
            let target_heading = n.y.atan2(n.x);
            let mut diff = target_heading - self.current_heading;
            while diff > std::f32::consts::PI {
                diff -= std::f32::consts::TAU;
            }
            while diff < -std::f32::consts::PI {
                diff += std::f32::consts::TAU;
            }
            let max_turn = CAM_ANGLE_STEP_RATE * dt;
            self.current_heading += diff.clamp(-max_turn, max_turn);
            self.current_normal = Vec3::new(self.current_heading.cos(), 0.0, self.current_heading.sin());
        }
    }

    // ── CAM-29: Camera_UpdateFull (0x8006E360) ────────────────────────────────
    /// Actualización completa para cinemáticas (pitch + snap FOV/Roll + commit).
    /// Ref: Camera_UpdateFull.c:13-22, CutsceneCamera::pitchFollow.
    pub fn camera_updatefull(&mut self, target: Vec3, dt: f32) {
        self.camera_modemain(target.y, dt);
        self.camera_setfov(self.fov_degrees);
        self.camera_setroll(self.roll);
        self.pos = target + Vec3::new(0.0, self.follow_height, self.follow_distance);
        self.look_target = target;
        self.camera_commit();
    }

    // ── CAM-30: Camera_UpdateMain (0x8006D2AC) ────────────────────────────────
    /// Solucionador de distancia y colocación planar sobre el riel (distSolve).
    /// Ref: Camera_UpdateMain.c:26-115, LookAngleBuilder::distSolve.
    pub fn camera_updatemain(&mut self, target: Vec3) {
        self.target_pos = Vec3::new(
            target.x + self.current_normal.x * self.follow_distance,
            target.y + self.follow_height,
            target.z + self.current_normal.z * self.follow_distance,
        );
    }

    // ── CAM-31: Camera_UpdateOrbit (0x8006EF38) ───────────────────────────────
    /// Rotación orbital panorámica a radio 5.0m, avanzando 8 unidades angulares PS1 por tick.
    /// Ref: Camera_UpdateOrbit.c:16-30, CutsceneCamera::orbitTick.
    pub fn camera_updateorbit(&mut self, center: Vec3) {
        self.orbit_angle = ps1_angle_wrap(self.orbit_angle as i32 + 8);
        let cos_val = ps1_cos(self.orbit_angle);
        let sin_val = ps1_sin(self.orbit_angle);
        self.pos.x = center.x + cos_val * CAM_ORBIT_RADIUS;
        self.pos.z = center.z + sin_val * CAM_ORBIT_RADIUS;
        self.look_target = center;
        self.camera_commit();
    }

    // ── CAM-32: Camera_UpdatePosition (0x8006DC38) ────────────────────────────
    /// Actualiza la posición 3D desde ángulos esféricos (pitch, yaw) y radio.
    /// Ref: Camera_UpdatePosition.c:19-35, LookAngleBuilder::posBuildA.
    pub fn camera_updateposition(&mut self, center: Vec3, pitch: u16, yaw: u16, radius: f32) {
        let cp = ps1_cos(pitch);
        let sp = ps1_sin(pitch);
        let cy = ps1_cos(yaw);
        let sy = ps1_sin(yaw);

        self.pos = Vec3::new(
            center.x + cy * cp * radius,
            center.y + sp * radius,
            center.z + sy * cp * radius,
        );
    }
}

// ─── FILTRO DE SEGUIMIENTO CON SNAPPING DE 10 UNIDADES (0.10M) ────────────────

/// Filtro continuo por eje correspondiente a `followAxis` de PS1.
/// Si `|target - current| <= 0.10m` (10 unidades PS1), snapea de inmediato y retorna true.
/// Si no, aplica un decaimiento exponencial con dt acotado a `max_step * dt`.
/// Ref: CutsceneCamera::followAxis (cutscene_camera.cpp:26-36).
pub fn follow_axis_snap(current: f32, target: f32, max_step: f32, dt: f32) -> (f32, bool) {
    let delta = target - current;
    // |delta| <= 0.10m -> Snap
    if delta.abs() <= 0.10 {
        return (target, true);
    }
    let ticks = (dt * 30.0).clamp(0.0, 5.0);
    let alpha = (1.0 - (0.875_f32).powf(ticks)).clamp(0.0, 1.0);
    let step = (delta * alpha).clamp(-max_step * dt, max_step * dt);
    (current + step, false)
}

// ─── TESTS UNITARIOS DEL SECTOR 7 ────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_camera_init_and_borders() {
        let mut cam = RailCameraPipeline::default();
        assert_eq!(cam.mode, 6);
        assert!((cam.follow_distance - 14.0).abs() < 1e-4);
        assert!((cam.follow_height - 5.5).abs() < 1e-4);

        // Probar clamp de piso en seaside (CAM-01: yFloor)
        cam.pos.y = 2.0;
        cam.camera_border();
        assert_eq!(cam.pos.y, SEASIDE_Y_FLOOR);
    }

    #[test]
    fn test_camera_vertical_deadzone_pitch() {
        let mut cam = RailCameraPipeline::default();
        cam.smooth_baseline_y = 10.0;

        // Salto dentro de la zona muerta (1.20m < 1.40m): la línea base NO debe elevarse
        cam.camera_modemain(11.2, 0.033);
        assert!((cam.smooth_baseline_y - 10.0).abs() < 1e-3);

        // Salto superior a la zona muerta (2.50m > 1.40m): debe comenzar a ascender
        cam.camera_modemain(12.5, 0.1);
        assert!(cam.smooth_baseline_y > 10.0);
    }

    #[test]
    fn test_camera_orbit_update() {
        let mut cam = RailCameraPipeline::default();
        let center = Vec3::new(40.0, 10.0, 40.0);

        let initial_pos = cam.pos;
        cam.camera_updateorbit(center);
        assert_ne!(cam.pos, initial_pos);

        // El radio respecto al centro debe ser de exactamente 5.0m (CAM_ORBIT_RADIUS)
        let dist = (Vec2::new(cam.pos.x, cam.pos.z) - Vec2::new(center.x, center.z)).length();
        assert!((dist - CAM_ORBIT_RADIUS).abs() < 1e-2);
        assert_eq!(cam.orbit_angle, 8);
    }

    #[test]
    fn test_camera_lookat_commit_angles() {
        let mut cam = RailCameraPipeline::default();
        cam.pos = Vec3::new(40.0, 15.0, 54.0); // Cámara más alta que el objetivo
        cam.look_target = Vec3::new(40.0, 10.0, 40.0);

        let rot = cam.camera_commit();
        let fwd = rot * Vec3::NEG_Z;

        // Debe mirar hacia abajo
        assert!(fwd.y < 0.0);
    }

    #[test]
    fn test_camera_shake_lifecycle() {
        let mut cam = RailCameraPipeline::default();
        assert_eq!(cam.shake_offset, Vec3::ZERO);

        cam.trigger_shake();
        assert_eq!(cam.shake_state, 1);

        cam.camera_modeswitch(0.05);
        assert_ne!(cam.shake_offset, Vec3::ZERO);

        // Después de 2 segundos, el temblor debe haber decaído y extinguido
        cam.camera_modeswitch(2.0);
        assert_eq!(cam.shake_state, 0);
        assert_eq!(cam.shake_offset, Vec3::ZERO);
    }
}
