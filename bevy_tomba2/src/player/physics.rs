//! SECTOR 2: Entity Physics & Kinematics (82 funciones)
//!
//! Cinemática, integración de velocidades, gravedad de subida/bajada,
//! aceleración analógica, cálculo de pendientes y límites de contacto.
//!
//! Ref: `Tomba2Engine/game/player/actor_tomba.cpp`, `tomba_state.h`,
//! y decompilación Ghidra en `src/main/entity/physics/`.

#![allow(dead_code)]

use bevy::prelude::*;
use std::f32::consts::TAU;

/// Conversión de ángulos PS1 (0..4095, donde 4096 = 360° = TAU rad).
pub const PS1_ANGLE_MASK: u16 = 0x0FFF;
pub const PS1_ANGLE_FULL: u16 = 4096;
pub const PS1_ANGLE_HALF: u16 = 2048;
pub const PS1_ANGLE_TO_RAD: f32 = TAU / 4096.0;
pub const RAD_TO_PS1_ANGLE: f32 = 4096.0 / TAU;

/// Factor de escala PS1: 100 unidades PS1 = 1 metro en Bevy.
pub const PS1_UNIT_TO_METERS: f32 = 0.01;
pub const METERS_TO_PS1_UNITS: f32 = 100.0;

/// Envoltura de ángulo PS1 a rango [0..4095].
#[inline]
pub fn ps1_angle_wrap(angle: i32) -> u16 {
    ((angle % 4096 + 4096) % 4096) as u16
}

/// Diferencia mínima con signo entre ángulos PS1 [-2048..2047].
#[inline]
pub fn ps1_angle_delta(target: u16, current: u16) -> i16 {
    let diff = (target as i32 - current as i32) & 0x0FFF;
    if diff >= 2048 {
        (diff - 4096) as i16
    } else {
        diff as i16
    }
}

/// Coseno con base de ángulo PS1 (retorna [-1.0..1.0]).
#[inline]
pub fn ps1_cos(angle: u16) -> f32 {
    (angle as f32 * PS1_ANGLE_TO_RAD).cos()
}

/// Seno con base de ángulo PS1 (retorna [-1.0..1.0]).
#[inline]
pub fn ps1_sin(angle: u16) -> f32 {
    (angle as f32 * PS1_ANGLE_TO_RAD).sin()
}

/// Atan2 con retorno en ángulo binario PS1 [0..4095].
#[inline]
pub fn ps1_atan2(dz: f32, dx: f32) -> u16 {
    let rad = dz.atan2(dx);
    let wrapped_rad = if rad < 0.0 { rad + TAU } else { rad };
    ((wrapped_rad * RAD_TO_PS1_ANGLE).round() as u32 % 4096) as u16
}

/// Componente ECS que almacena la física y cinemática 1:1 de una entidad/actor.
#[derive(Component, Debug, Clone)]
pub struct EntityPhysics {
    /// Posición en espacio mundo (metros). Correlaciona con entity+0x2E/0x32/0x36.
    pub position: Vec3,
    /// Acumulador sub-pixel de posición (sub-unidades PS1: 1u = 256 subunidades).
    pub subpixel_accum: Vec3,
    /// Velocidad lineal en espacio mundo (m/s).
    pub velocity: Vec3,
    /// Velocidad escalar frontal (m/s). Correlaciona con speed en entity+0x44.
    pub speed: f32,
    /// Ángulo de orientación/rotación horizontal Y en [0..4095]. Correlaciona con rot_y (entity+0x56).
    pub rot_y: u16,
    /// Ángulo de inclinación/alabeo Z en [0..4095]. Correlaciona con rot_z.
    pub rot_z: u16,
    /// Ángulo visual dibujado. Correlaciona con draw_angle (entity+0x54).
    pub draw_angle: u16,
    /// Ángulo objetivo de rotación. Correlaciona con target_rot_y (entity+0x5A).
    pub target_rot_y: u16,
    /// Acumulador de gravedad / aceleración vertical (PS1 angle_offset / fall gravity).
    pub gravity_accum: f32,
    /// Vector normal de la superficie actual. Correlaciona con normal_x/y/z.
    pub surface_normal: Vec3,
    /// Radio horizontal de cilindro de colisión (metros). Correlaciona con bounds_min_x (0x80).
    pub bounds_radius: f32,
    /// Límite inferior vertical respecto a la posición (metros). Correlaciona con bounds_min_y (0x84).
    pub bounds_min_y: f32,
    /// Límite superior vertical respecto a la posición (metros). Correlaciona con bounds_max_y (0x86).
    pub bounds_max_y: f32,
    /// Contador de animación / fase de órbita circular en [0..4095].
    pub orbit_angle: u16,
    /// Estado de colisión (0 = en el aire, 1 = apoyado en suelo, 2 = contacto pared).
    pub collision_state: u8,
    /// Dirección de colisión / flags de riel.
    pub collision_dir: i8,
    /// Flags de estado de comportamiento (entity_flags).
    pub entity_flags: i32,
    /// Flags de modo de física (physics_flag).
    pub physics_flag: u8,
    /// Contador de reposo / ciclo (lifecycle counter).
    pub loop_counter: u32,
    /// Flag de fin de ciclo de vida / despawn (true = destruido o terminado).
    pub is_finished: bool,
}

impl Default for EntityPhysics {
    fn default() -> Self {
        Self {
            position: Vec3::ZERO,
            subpixel_accum: Vec3::ZERO,
            velocity: Vec3::ZERO,
            speed: 0.0,
            rot_y: 0,
            rot_z: 0,
            draw_angle: 0,
            target_rot_y: 0,
            gravity_accum: 0.0,
            surface_normal: Vec3::Y,
            bounds_radius: 0.50, // 50 cm
            bounds_min_y: 0.0,
            bounds_max_y: 1.40,  // 1.4 m
            orbit_angle: 0,
            collision_state: 1,
            collision_dir: 0,
            entity_flags: 0,
            physics_flag: 0,
            loop_counter: 0,
            is_finished: false,
        }
    }
}

impl EntityPhysics {
    // ═════════════════════════════════════════════════════════════════════════
    // 1. TRIGONOMETRÍA Y CÁLCULO DE ÁNGULOS (PHY-01 a PHY-24)
    // ═════════════════════════════════════════════════════════════════════════

    /// PHY-01: `Entity_CalcAimPos` (0x80024AF0)
    /// Calcula posición de mira/objetivo proyectando a lo largo del ángulo rot_y y radio de alcance.
    pub fn entity_calcaimpos(&self, offset_dist: f32, aim_height: f32) -> Vec3 {
        let forward_x = ps1_sin(self.rot_y) * offset_dist;
        let forward_z = ps1_cos(self.rot_y) * offset_dist;
        Vec3::new(
            self.position.x + forward_x,
            self.position.y + aim_height,
            self.position.z + forward_z,
        )
    }

    /// PHY-02: `Entity_CalcAngle10` (0x80022060)
    /// Calcula ángulo horizontal hacia un objetivo verificando el cilindro de proximidad.
    pub fn entity_calcangle10(&self, target_pos: Vec3, target_radius: f32, target_height: f32) -> Option<u16> {
        let dx = target_pos.x - self.position.x;
        let dz = target_pos.z - self.position.z;
        let dist_xz = (dx * dx + dz * dz).sqrt();
        let max_r = self.bounds_radius + target_radius;
        let dy = (target_pos.y - self.position.y).abs();
        if dist_xz <= max_r && dy <= (self.bounds_max_y + target_height) {
            Some(ps1_atan2(-dz, dx))
        } else {
            None
        }
    }

    /// PHY-03: `Entity_CalcAngle11` (0x80022AC8)
    /// Variante de ángulo con offset diferente de punto objetivo.
    pub fn entity_calcangle11(&self, target_pos: Vec3, offset: Vec3) -> u16 {
        let t = target_pos + offset;
        ps1_atan2(-(t.z - self.position.z), t.x - self.position.x)
    }

    /// PHY-04: `Entity_CalcAngle12` (0x800216B4)
    /// Calcula ángulo hacia objetivo con límites XZ y comprobación de altura relativa.
    pub fn entity_calcangle12(&self, target_pos: Vec3, target_radius: f32) -> Option<u16> {
        let dx = target_pos.x - self.position.x;
        let dz = target_pos.z - self.position.z;
        let dist = (dx * dx + dz * dz).sqrt();
        if dist <= (self.bounds_radius + target_radius) {
            Some(ps1_atan2(-dz, dx))
        } else {
            None
        }
    }

    /// PHY-05: `Entity_CalcAngle13` (0x8001FAE0)
    /// Calcula ángulo verificando flag de supresión de giro en entity[0x145].
    pub fn entity_calcangle13(&self, target_pos: Vec3, suppress_flag: bool) -> u16 {
        if suppress_flag {
            self.rot_y
        } else {
            ps1_atan2(-(target_pos.z - self.position.z), target_pos.x - self.position.x)
        }
    }

    /// PHY-06: `Entity_CalcAngle14` (0x80023870)
    /// Calcula ángulo y proyecta posición en el borde del cilindro de colisión.
    pub fn entity_calcangle14(&self, target_pos: Vec3, target_radius: f32) -> (u16, Vec3) {
        let angle = ps1_atan2(-(target_pos.z - self.position.z), target_pos.x - self.position.x);
        let total_radius = self.bounds_radius + target_radius;
        let snapped_pos = Vec3::new(
            target_pos.x + ps1_sin(angle) * total_radius,
            self.position.y,
            target_pos.z + ps1_cos(angle) * total_radius,
        );
        (angle, snapped_pos)
    }

    /// PHY-07: `Entity_CalcAngle15` (0x8002192C)
    /// Atan2 con validación de distancia mínima en el plano XZ.
    pub fn entity_calcangle15(&self, target_pos: Vec3, min_dist: f32) -> Option<u16> {
        let dx = target_pos.x - self.position.x;
        let dz = target_pos.z - self.position.z;
        let dist_sq = dx * dx + dz * dz;
        if dist_sq >= min_dist * min_dist {
            Some(ps1_atan2(-dz, dx))
        } else {
            None
        }
    }

    /// PHY-08: `Entity_CalcAngle16` (0x8001F830)
    /// Atan2 con validación de rango máximo en plano XZ.
    pub fn entity_calcangle16(&self, target_pos: Vec3, max_dist: f32) -> Option<u16> {
        let dx = target_pos.x - self.position.x;
        let dz = target_pos.z - self.position.z;
        let dist_sq = dx * dx + dz * dz;
        if dist_sq <= max_dist * max_dist {
            Some(ps1_atan2(-dz, dx))
        } else {
            None
        }
    }

    /// PHY-09: `Entity_CalcAngle17` (0x80020C34)
    /// Variante de ángulo con offset de altura y corrección de cuadrante.
    pub fn entity_calcangle17(&self, target_pos: Vec3) -> u16 {
        let dx = target_pos.x - self.position.x;
        let dz = target_pos.z - self.position.z;
        ps1_atan2(-dz, dx)
    }

    /// PHY-10: `Entity_CalcAngle18` (0x80020DB8)
    /// Ángulo horizontal directo entre coordenadas de posición.
    pub fn entity_calcangle18(&self, target_x: f32, target_z: f32) -> u16 {
        ps1_atan2(-(target_z - self.position.z), target_x - self.position.x)
    }

    /// PHY-11: `Entity_CalcAngle19` (0x80020F7C)
    /// Ángulo con compensación de rumbo actual.
    pub fn entity_calcangle19(&self, target_pos: Vec3) -> (u16, i16) {
        let angle = ps1_atan2(-(target_pos.z - self.position.z), target_pos.x - self.position.x);
        let delta = ps1_angle_delta(angle, self.rot_y);
        (angle, delta)
    }

    /// PHY-12: `Entity_CalcAngle20` (0x8001F650)
    /// Atan2 con offset compuesto de punto objetivo y comprobación de altura.
    pub fn entity_calcangle20(&self, target_pos: Vec3, y_tol: f32) -> Option<u16> {
        let dy = (target_pos.y - self.position.y).abs();
        if dy <= y_tol {
            Some(ps1_atan2(-(target_pos.z - self.position.z), target_pos.x - self.position.x))
        } else {
            None
        }
    }

    /// PHY-13: `Entity_CalcAngle21` (0x8001FDB4)
    /// Atan2 considerando el componente vertical para elevación/pitch.
    pub fn entity_calcangle21(&self, target_pos: Vec3) -> (u16, u16) {
        let dx = target_pos.x - self.position.x;
        let dz = target_pos.z - self.position.z;
        let dy = target_pos.y - self.position.y;
        let horiz_dist = (dx * dx + dz * dz).sqrt();
        let yaw = ps1_atan2(-dz, dx);
        let pitch = ps1_atan2(dy, horiz_dist);
        (yaw, pitch)
    }

    /// PHY-14: `Entity_CalcAngle22` (0x80021150)
    /// Ángulo hacia punto con interpolación esférica hacia la meta.
    pub fn entity_calcangle22(&self, target_pos: Vec3, max_turn_step: u16) -> u16 {
        let target_angle = ps1_atan2(-(target_pos.z - self.position.z), target_pos.x - self.position.x);
        let delta = ps1_angle_delta(target_angle, self.rot_y);
        let clamped_delta = delta.clamp(-(max_turn_step as i16), max_turn_step as i16);
        ps1_angle_wrap(self.rot_y as i32 + clamped_delta as i32)
    }

    /// PHY-15: `Entity_CalcAngle3` (0x800240FC)
    /// Atan2 desde posición de la entidad a objetivo con offset de radio.
    pub fn entity_calcangle3(&self, target_pos: Vec3, offset_radius: f32) -> u16 {
        let forward = ps1_sin(self.rot_y) * offset_radius;
        let right = ps1_cos(self.rot_y) * offset_radius;
        let origin = self.position + Vec3::new(forward, 0.0, right);
        ps1_atan2(-(target_pos.z - origin.z), target_pos.x - origin.x)
    }

    /// PHY-16: `Entity_CalcAngle4` (0x80022F04)
    /// Ángulo con diferente formato de offset de entidad.
    pub fn entity_calcangle4(&self, target_pos: Vec3) -> u16 {
        ps1_atan2(-(target_pos.z - self.position.z), target_pos.x - self.position.x)
    }

    /// PHY-17: `Entity_CalcAngle5` (0x80021800)
    /// Atan2 con validación de cilindro envolvente.
    pub fn entity_calcangle5(&self, target_pos: Vec3, radius: f32) -> Option<u16> {
        let dx = target_pos.x - self.position.x;
        let dz = target_pos.z - self.position.z;
        if (dx * dx + dz * dz) <= radius * radius {
            Some(ps1_atan2(-dz, dx))
        } else {
            None
        }
    }

    /// PHY-18: `Entity_CalcAngle6` (0x8001F9DC)
    /// Atan2 desde entidad a objetivo pasado como segundo actor.
    pub fn entity_calcangle6(&self, other_pos: Vec3) -> u16 {
        ps1_atan2(-(other_pos.z - self.position.z), other_pos.x - self.position.x)
    }

    /// PHY-19: `Entity_CalcAngle7` (0x8001FC50)
    /// Comprueba flags de estado 0x17E antes de computar atan2.
    pub fn entity_calcangle7(&self, other_pos: Vec3, flags: u16) -> Option<u16> {
        if (flags & 0x8000) != 0 {
            Some(ps1_atan2(-(other_pos.z - self.position.z), other_pos.x - self.position.x))
        } else {
            None
        }
    }

    /// PHY-20: `Entity_CalcAngle8` (0x80020B08)
    /// Comprueba flags de entidad secundaria y computa atan2.
    pub fn entity_calcangle8(&self, other_pos: Vec3, other_active: bool) -> Option<u16> {
        if other_active {
            Some(ps1_atan2(-(other_pos.z - self.position.z), other_pos.x - self.position.x))
        } else {
            None
        }
    }

    /// PHY-21: `Entity_CalcAngle9` (0x80021DF4)
    /// Comprueba bit 3 (0x08) y computa atan2 con offset.
    pub fn entity_calcangle9(&self, other_pos: Vec3, flag_byte: u8) -> Option<u16> {
        if (flag_byte & 0x08) != 0 {
            Some(ps1_atan2(-(other_pos.z - self.position.z), other_pos.x - self.position.x))
        } else {
            None
        }
    }

    /// PHY-22: `Entity_CalcAngleDelta` (0x80072EFC)
    /// Calcula diferencia angular delta: entity[0x56] = target - current.
    pub fn entity_calcangledelta(&mut self) -> i16 {
        let delta = ps1_angle_delta(self.target_rot_y, self.rot_y);
        self.draw_angle = ps1_angle_wrap(self.rot_y as i32 + delta as i32);
        delta
    }

    /// PHY-23: `Entity_CalcAngleToTarget_2` (0x80069A2C)
    /// Calcula ángulo hacia objetivo usando cos/sin y atan2.
    pub fn entity_calcangletotarget_2(&self, target_pos: Vec3) -> u16 {
        ps1_atan2(-(target_pos.z - self.position.z), target_pos.x - self.position.x)
    }

    /// PHY-24: `Entity_CalcAngleToward` (0x8004130C)
    /// Calcula ángulo de rotación desde la entidad hacia la entidad objetivo.
    pub fn entity_calcangletoward(&self, target_pos: Vec3) -> u16 {
        ps1_atan2(-(target_pos.z - self.position.z), target_pos.x - self.position.x)
    }

    // ═════════════════════════════════════════════════════════════════════════
    // 2. COLISIÓN Y PENDIENTE (PHY-25, PHY-40, PHY-41, PHY-48)
    // ═════════════════════════════════════════════════════════════════════════

    /// PHY-25: `Entity_CalcCollisionAngle` (0x80048654)
    /// Calcula ángulos de colisión desde la normal de superficie: atan2 en normal y almacena vectores de pendiente.
    pub fn entity_calccollisionangle(&mut self, normal: Vec3) -> (u16, u16) {
        self.surface_normal = normal.normalize_or_zero();
        let normal_x = ps1_atan2(-self.surface_normal.z, self.surface_normal.x);
        let horiz_len = (self.surface_normal.x * self.surface_normal.x + self.surface_normal.z * self.surface_normal.z).sqrt();
        let normal_y = ps1_atan2(self.surface_normal.y, horiz_len);
        (normal_x, normal_y)
    }

    /// PHY-40: `Entity_CheckCollisionAndAngle` (0x800419C4)
    /// Comprueba colisión en un offset de posición y actualiza ángulo de superficie.
    pub fn entity_checkcollisionandangle(&mut self, offset: Vec3, normal: Vec3) -> u16 {
        let (nx, _) = self.entity_calccollisionangle(normal);
        self.draw_angle = nx;
        self.position += offset;
        nx
    }

    /// PHY-41: `Entity_CheckCollisionFlags` (0x80055634)
    /// Comprueba flags de colisión combinando estado global y flags de entidad.
    pub fn entity_checkcollisionflags(&self, global_flag: u8, mask: u8) -> bool {
        (global_flag & mask) != 0 && (self.physics_flag & mask) != 0
    }

    /// PHY-48: `Entity_CheckGround` (0x800696C4)
    /// Comprueba si la entidad se encuentra apoyada en suelo firme.
    pub fn entity_checkground(&self) -> bool {
        self.collision_state == 1
    }

    // ═════════════════════════════════════════════════════════════════════════
    // 3. TRAYECTORIA Y MOVIMIENTO (PHY-26 a PHY-32, PHY-62 a PHY-68)
    // ═════════════════════════════════════════════════════════════════════════

    /// PHY-26: `Entity_CalcMove` (0x80023D48)
    /// Calcula movimiento hacia meta limitando por velocidad máxima y radio de aproximación.
    pub fn entity_calcmove(&mut self, target_pos: Vec3, dt: f32) -> bool {
        let diff = target_pos - self.position;
        let dist = diff.length();
        if dist <= 0.05 {
            self.position = target_pos;
            self.velocity = Vec3::ZERO;
            true
        } else {
            let dir = diff / dist;
            let step = (self.speed * dt).min(dist);
            self.position += dir * step;
            self.velocity = dir * self.speed;
            false
        }
    }

    /// PHY-27: `Entity_CalcMovePos` (0x800634A8)
    /// Desplaza la entidad una distancia `radius` en dirección del ángulo `rot_y`.
    pub fn entity_calcmovepos(&mut self, radius: f32) {
        self.position.x += ps1_sin(self.rot_y) * radius;
        self.position.z += ps1_cos(self.rot_y) * radius;
    }

    /// PHY-28: `Entity_CalcOrbitPos` (0x80063ECC)
    /// Posición en órbita alrededor de un padre basada en `orbit_angle` y `radius`.
    pub fn entity_calcorbitpos(&self, center: Vec3, radius: f32) -> Vec3 {
        Vec3::new(
            center.x + ps1_sin(self.orbit_angle) * radius,
            center.y,
            center.z + ps1_cos(self.orbit_angle) * radius,
        )
    }

    /// PHY-29: `Entity_CalcPath` (0x80021AB0)
    /// Calcula paso de trayectoria recta hacia el siguiente punto de ruta.
    pub fn entity_calcpath(&mut self, waypoint: Vec3, speed: f32, dt: f32) -> bool {
        let diff = waypoint - self.position;
        let dist = diff.length();
        let step = speed * dt;
        if dist <= step {
            self.position = waypoint;
            true
        } else {
            self.position += (diff / dist) * step;
            false
        }
    }

    /// PHY-30: `Entity_CalcPos` (0x8001F40C)
    /// Actualiza posición a partir de delta acumulado de velocidad y flags de estado.
    pub fn entity_calcpos(&mut self, dt: f32) {
        self.position += self.velocity * dt;
    }

    /// PHY-31: `Entity_CalcRoute` (0x80021394)
    /// Calcula avance a lo largo de una ruta poligonal de waypoints.
    pub fn entity_calcroute(&mut self, waypoints: &[Vec3], current_index: &mut usize, dt: f32) -> bool {
        if *current_index >= waypoints.len() {
            return true;
        }
        let reached = self.entity_calcpath(waypoints[*current_index], self.speed, dt);
        if reached {
            *current_index += 1;
            *current_index >= waypoints.len()
        } else {
            false
        }
    }

    /// PHY-32: `Entity_CalcTarget` (0x80021F34)
    /// Calcula vector delta y distancia al objetivo.
    pub fn entity_calctarget(&self, target_pos: Vec3) -> (Vec3, f32) {
        let delta = target_pos - self.position;
        let dist = delta.length();
        (delta, dist)
    }

    /// PHY-62: `Entity_MoveCalc` (0x8002423C)
    /// Calcula velocidad e integra posición en base a `speed` y `rot_y`.
    pub fn entity_movecalc(&mut self, dt: f32) {
        self.velocity.x = ps1_sin(self.rot_y) * self.speed;
        self.velocity.z = ps1_cos(self.rot_y) * self.speed;
        self.position += self.velocity * dt;
    }

    /// PHY-63: `Entity_MoveInCircle` (0x80070E60)
    /// Movimiento circular que avanza el ángulo en 0x20 (~2.81°) por llamada.
    pub fn entity_moveincircle(&mut self, center: Vec3, radius: f32) {
        let x = center.x + ps1_sin(self.orbit_angle) * radius;
        let z = center.z + ps1_cos(self.orbit_angle) * radius;
        self.position.x = x;
        self.position.z = z;
        self.orbit_angle = ps1_angle_wrap(self.orbit_angle as i32 + 0x20);
    }

    /// PHY-64: `Entity_MoveMain` (0x8001EC3C)
    /// Paso principal de movimiento con comprobación de solapamiento cilíndrico.
    pub fn entity_movemain(&mut self, other_pos: Vec3, other_radius: f32, dt: f32) -> i32 {
        let dx = self.position.x - other_pos.x;
        let dz = self.position.z - other_pos.z;
        let dist_sq = dx * dx + dz * dz;
        let r = self.bounds_radius + other_radius;
        if dist_sq > r * r {
            self.entity_calcpos(dt);
            -1
        } else {
            // Colisión cilíndrica activa
            self.collision_state = 1;
            0
        }
    }

    /// PHY-65: `Entity_MoveTarget` (0x80023A04)
    /// Calcula trayectoria e integra paso hacia la posición objetivo.
    pub fn entity_movetarget(&mut self, target_pos: Vec3, dt: f32) {
        let diff = target_pos - self.position;
        if diff.length_squared() > 0.001 {
            let dir = diff.normalize();
            self.velocity = dir * self.speed;
            self.position += self.velocity * dt;
            self.rot_y = ps1_atan2(-dir.z, dir.x);
        }
    }

    /// PHY-66: `Entity_MoveTo` (0x8001FF7C)
    /// Interpolación lineal directa hacia punto de destino.
    pub fn entity_moveto(&mut self, target_pos: Vec3, factor: f32) {
        self.position = self.position.lerp(target_pos, factor.clamp(0.0, 1.0));
    }

    /// PHY-67: `Entity_MoveToTarget` (0x80041938)
    /// Movimiento hacia objetivo con alineación de ángulo visual `draw_angle`.
    pub fn entity_movetotarget(&mut self, target_pos: Vec3, dt: f32) {
        self.entity_movetarget(target_pos, dt);
        self.draw_angle = self.rot_y;
    }

    /// PHY-68: `Entity_MoveToward` (0x80041194)
    /// Desplaza hacia objetivo respetando velocidad máxima.
    pub fn entity_movetoward(&mut self, target_pos: Vec3, max_step: f32) {
        let delta = target_pos - self.position;
        let dist = delta.length();
        if dist <= max_step {
            self.position = target_pos;
        } else {
            self.position += (delta / dist) * max_step;
        }
    }

    // ═════════════════════════════════════════════════════════════════════════
    // 4. ACCIÓN Y CONDICIONES (PHY-33 a PHY-38, PHY-42 a PHY-47, PHY-49 a PHY-61)
    // ═════════════════════════════════════════════════════════════════════════

    /// PHY-33: `Entity_CheckAction` (0x800552EC)
    /// Comprueba si se cumplen condiciones de acción: entrada activa y flags de entidad.
    pub fn entity_checkaction(&self, input_mask: u32, required_bits: u32) -> bool {
        (input_mask & required_bits) != 0 && (self.entity_flags & 0x7C00) != 0
    }

    /// PHY-34: `Entity_CheckAction2` (0x8005308C)
    /// Comprueba estado de acción variante 2.
    pub fn entity_checkaction2(&self, mode_flag: u8) -> bool {
        mode_flag == 1
    }

    /// PHY-35: `Entity_CheckActionTrigger` (0x80055C30)
    /// Comprueba si se dispara un trigger de acción y actualiza flag interno.
    pub fn entity_checkactiontrigger(&mut self, trigger_condition: bool) -> bool {
        if trigger_condition {
            self.physics_flag = 0x0B;
            true
        } else {
            false
        }
    }

    /// PHY-36: `Entity_CheckAnimEnd` (0x80070830)
    /// Comprueba si la animación ha llegado al final (contador < 1).
    pub fn entity_checkanimend(&self, anim_frames_remaining: i32) -> bool {
        anim_frames_remaining <= 0
    }

    /// PHY-37: `Entity_CheckClimbEnd` (0x800661E0)
    /// Comprueba si la escalada debe terminar por contacto con suelo inferior.
    pub fn entity_checkclimbend(&mut self, floor_y: f32) -> bool {
        if self.position.y <= floor_y + 0.10 {
            self.collision_state = 1;
            true
        } else {
            false
        }
    }

    /// PHY-38: `Entity_CheckCollectible` (0x80040C00)
    /// Comprueba si la entidad entra en rango de recogida de un coleccionable.
    pub fn entity_checkcollectible(&self, item_pos: Vec3, pickup_radius: f32) -> bool {
        (item_pos - self.position).length_squared() <= (pickup_radius * pickup_radius)
    }

    /// PHY-42: `Entity_CheckCondition` (0x8006BD20)
    /// Comprueba condición general de activación de comportamiento.
    pub fn entity_checkcondition(&self, active_mask: i32) -> bool {
        (self.entity_flags & active_mask) != 0
    }

    /// PHY-43: `Entity_CheckDamage` (0x8006918C)
    /// Comprueba si la entidad es vulnerable a daño (flags de invulnerabilidad limpios).
    pub fn entity_checkdamage(&self, invulnerability_timer: f32) -> bool {
        invulnerability_timer <= 0.0 && (self.entity_flags & 0x04) == 0
    }

    /// PHY-44: `Entity_CheckDistance3D` (0x80023794)
    /// Comprueba distancia cilíndrica 3D: sqrt(dx^2 + dz^2) <= radius, dy en rango bounds.
    pub fn entity_checkdistance3d(&self, target_pos: Vec3, radius: f32, min_y: f32, max_y: f32) -> bool {
        let dx = target_pos.x - self.position.x;
        let dz = target_pos.z - self.position.z;
        let dy = target_pos.y - self.position.y;
        (dx * dx + dz * dz) <= radius * radius && dy >= min_y && dy <= max_y
    }

    /// PHY-45: `Entity_CheckEvent` (0x800421CC)
    /// Comprueba si un evento global coincide con el ID de la entidad.
    pub fn entity_checkevent(&self, event_id: u32, expected_id: u32) -> bool {
        event_id == expected_id
    }

    /// PHY-46: `Entity_CheckEventTrigger` (0x8005344C)
    /// Comprueba si un evento específico (ej. bit 0x10) debe dispararse.
    pub fn entity_checkeventtrigger(&self, event_flags: u32, bit_mask: u32) -> bool {
        (event_flags & bit_mask) != 0
    }

    /// PHY-47: `Entity_CheckFlag` (0x800665F4)
    /// Comprueba bit 0x8000 en flags de entidad.
    pub fn entity_checkflag(&self) -> bool {
        (self.entity_flags & 0x8000) != 0
    }

    /// PHY-49: `Entity_CheckInputActive` (0x800557EC)
    /// Comprueba si la entrada de control está activa.
    pub fn entity_checkinputactive(&self, input_active: bool) -> bool {
        input_active || (self.entity_flags & 0x01) != 0
    }

    /// PHY-50: `Entity_CheckInteraction` (0x80023618)
    /// Comprueba si dos entidades pueden interactuar (mismo tipo/capa activa).
    pub fn entity_checkinteraction(&self, other_flags: i32) -> bool {
        !self.is_finished && (self.entity_flags & other_flags) != 0
    }

    /// PHY-51: `Entity_CheckLifecycle` (0x80041F34)
    /// Comprueba fin de ciclo de vida de la entidad.
    pub fn entity_checklifecycle(&self) -> bool {
        self.is_finished
    }

    /// PHY-52: `Entity_CheckLoop` (0x800368D0)
    /// Comprueba y avanza el contador de ciclo.
    pub fn entity_checkloop(&mut self, max_loops: u32) -> bool {
        self.loop_counter += 1;
        self.loop_counter >= max_loops
    }

    /// PHY-53: `Entity_CheckPlayer` (0x80044308)
    /// Comprueba si la entidad corresponde al jugador principal.
    pub fn entity_checkplayer(&self) -> bool {
        (self.entity_flags & 0x8000) != 0
    }

    /// PHY-54: `Entity_CheckProximity` (0x80069B6C)
    /// Comprueba si otra entidad está dentro del rango AABB 0x1CC (~4.6m) en todos los ejes.
    /// PS1: 0x1CC = 460 unidades PS1 = 4.60 metros. Semiancho: 0xE6 = 230 unidades = 2.30 metros.
    pub fn entity_checkproximity(&self, other_pos: Vec3) -> bool {
        let half_span = 2.30; // 0xE6 unidades PS1
        (other_pos.x - self.position.x).abs() <= half_span
            && (other_pos.y - self.position.y).abs() <= half_span
            && (other_pos.z - self.position.z).abs() <= half_span
    }

    /// PHY-55: `Entity_CheckState` (0x800535E0)
    /// Comprobación de estado según selector de tipo.
    pub fn entity_checkstate(&self, state_type: u8) -> u8 {
        match state_type {
            0 => self.collision_state,
            1 => self.physics_flag,
            _ => 0,
        }
    }

    /// PHY-56: `Entity_CheckState2` (0x80051300)
    /// Comprobación iterando flags de sub-estado.
    pub fn entity_checkstate2(&self, mask: u8) -> bool {
        (self.physics_flag & mask) == mask
    }

    /// PHY-57: `Entity_CheckState3` (0x8006042C)
    /// Variante de comprobación de flags de acción activos.
    pub fn entity_checkstate3(&self, flag_a: bool, flag_b: bool) -> bool {
        flag_a && !flag_b
    }

    /// PHY-58: `Entity_CheckStateAndSet` (0x80041FCC)
    /// Comprueba y establece atómicamente un nuevo estado.
    pub fn entity_checkstateandset(&mut self, current_expected: u8, new_state: u8) -> bool {
        if self.collision_state == current_expected {
            self.collision_state = new_state;
            true
        } else {
            false
        }
    }

    /// PHY-59: `Entity_CheckStateType` (0x8005376C)
    /// Retorna el tipo de estado según el selector interno.
    pub fn entity_checkstatetype(&self) -> u8 {
        self.collision_state
    }

    /// PHY-60: `Entity_CheckTarget` (0x800205CC)
    /// Valida que la referencia al objetivo sea válida y activa.
    pub fn entity_checktarget(&self, has_target: bool, target_active: bool) -> bool {
        has_target && target_active
    }

    /// PHY-61: `Entity_CheckVisibility` (0x8002B278)
    /// Comprobación de visibilidad de cono de frustum de cámara 3D:
    /// Comprueba distancia (hasta ~71.69m) y producto escalar con la dirección de vista.
    pub fn entity_checkvisibility(&self, camera_pos: Vec3, camera_forward: Vec3) -> bool {
        let diff = self.position - camera_pos;
        let dist = diff.length();
        // PS1: rango visible entre 5.11m y 71.69m (0x1FF a 0x1C01 unidades PS1)
        if dist < 0.50 || dist > 75.0 {
            return false;
        }
        let dir_to_entity = diff / dist;
        let dot = camera_forward.normalize_or_zero().dot(dir_to_entity);
        // cos(33.28°) ≈ 0.8359
        dot >= 0.8359
    }

    // ═════════════════════════════════════════════════════════════════════════
    // 5. INTEGRACIÓN FÍSICA Y PASO CINEMÁTICO (PHY-69 a PHY-80, PHY-82)
    // ═════════════════════════════════════════════════════════════════════════

    /// PHY-69: `Entity_PhysicsAndAngle` (0x80041AC0)
    /// Ejecuta paso físico y actualiza el ángulo `draw_angle` en base a la velocidad.
    pub fn entity_physicsandangle(&mut self, dt: f32) {
        self.entity_calcpos(dt);
        if self.velocity.length_squared() > 0.01 {
            self.draw_angle = ps1_atan2(-self.velocity.z, self.velocity.x);
        }
    }

    /// PHY-70: `Entity_PhysicsApply` (0x8005B370)
    /// Aplica paso físico de posición relativa a una entidad padre/ancla.
    pub fn entity_physicsapply(&mut self, parent_pos: Vec3, offset: Vec3) {
        self.position = parent_pos + offset;
        self.collision_state = 1;
    }

    /// PHY-71: `Entity_PhysicsClimb` (0x8003FC00)
    /// Paso físico de escalada en escalera o malla vertical.
    pub fn entity_physicsclimb(&mut self, climb_speed: f32, vertical_input: f32, dt: f32) {
        self.velocity.y = vertical_input * climb_speed;
        self.position.y += self.velocity.y * dt;
        self.velocity.x = 0.0;
        self.velocity.z = 0.0;
    }

    /// PHY-72: `Entity_PhysicsFull` (0x8003FBC4)
    /// Ciclo de física completo: gravedad, integración y colisión.
    pub fn entity_physicsfull(&mut self, dt: f32, gravity: f32, floor_y: f32) {
        if self.collision_state == 0 {
            self.velocity.y -= gravity * dt;
            self.position += self.velocity * dt;
            if self.position.y <= floor_y {
                self.position.y = floor_y;
                self.velocity.y = 0.0;
                self.collision_state = 1;
            }
        } else {
            self.position += self.velocity * dt;
        }
    }

    /// PHY-73: `Entity_PhysicsIfMatch` (0x8003FC8C)
    /// Ejecuta paso físico únicamente si el modo global coincide con el ID de la entidad.
    pub fn entity_physicsifmatch(&mut self, global_mode: u8, expected_mode: u8, dt: f32) {
        if global_mode == expected_mode {
            self.entity_calcpos(dt);
        }
    }

    /// PHY-74: `Entity_PhysicsInit` (0x80069858)
    /// Inicializa valores físicos de la entidad y asienta sobre el terreno.
    pub fn entity_physicsinit(&mut self, spawn_pos: Vec3, normal: Vec3) {
        self.position = spawn_pos;
        self.velocity = Vec3::ZERO;
        self.gravity_accum = 0.0;
        self.collision_state = 1;
        self.entity_calccollisionangle(normal);
    }

    /// PHY-75: `Entity_PhysicsMain` (0x80063F9C)
    /// Pipeline principal de cinemática de entidad.
    pub fn entity_physicsmain(&mut self, dt: f32) {
        self.entity_physicsmove(dt);
        self.entity_calcpos(dt);
    }

    /// PHY-76: `Entity_PhysicsMove` (0x80056C00)
    /// Acumulador de gravedad auténtico PS1 (+0x800 por tick, tope en 0x3E00).
    /// En metros: +0x800 = 20.48 m/s² acumulación, hasta velocidad terminal 12.0 m/s (0x3E00).
    pub fn entity_physicsmove(&mut self, dt: f32) {
        if self.collision_state == 0 {
            // En el aire: acumula gravedad
            self.gravity_accum = (self.gravity_accum + 20.48 * dt).min(12.0);
            self.velocity.y -= self.gravity_accum * dt;
        } else {
            // En suelo: reinicia acumulador de caída
            self.gravity_accum = 0.0;
        }
    }

    /// PHY-77: `Entity_PhysicsStep` (0x8004766C)
    /// Paso elemental de física y resolución de avance.
    pub fn entity_physicsstep(&mut self, dt: f32) {
        self.position += self.velocity * dt;
    }

    /// PHY-78: `Entity_PhysicsStep2` (0x80055D5C)
    /// Paso físico con alineación de vector normal y ángulo de dibujo.
    pub fn entity_physicsstep2(&mut self, normal: Vec3, dt: f32) {
        let (nx, _) = self.entity_calccollisionangle(normal);
        self.draw_angle = nx;
        self.entity_physicsstep(dt);
    }

    /// PHY-79: `Entity_PhysicsStep3` (0x80060A80)
    /// Paso físico relativo a posición ancla de un actor padre.
    pub fn entity_physicsstep3(&mut self, anchor_pos: Vec3, local_offset: Vec3) {
        self.position = anchor_pos + local_offset;
    }

    /// PHY-80: `Entity_PhysicsStep4` (0x8005AEE4)
    /// Paso físico compuesto: actualización, aplicación de velocidad y resolución de suelo.
    pub fn entity_physicsstep4(&mut self, floor_y: f32, dt: f32) {
        self.entity_physicsmove(dt);
        self.entity_physicsstep(dt);
        if self.position.y <= floor_y {
            self.position.y = floor_y;
            self.velocity.y = 0.0;
            self.collision_state = 1;
        }
    }

    /// PHY-82: `Entity_PhysicsUpdate` (0x80055E28)
    /// Actualización de fricción/amortiguación de velocidad y avance de ciclo.
    pub fn entity_physicsupdate(&mut self, friction: f32, dt: f32) {
        self.velocity.x *= (1.0 - friction * dt).max(0.0);
        self.velocity.z *= (1.0 - friction * dt).max(0.0);
    }
}

// ═════════════════════════════════════════════════════════════════════════════
// SUITE DE PRUEBAS UNITARIAS
// ═════════════════════════════════════════════════════════════════════════════
#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_ps1_angle_conversions_and_trig() {
        // 0 grados = 0
        assert_eq!(ps1_angle_wrap(0), 0);
        assert!((ps1_cos(0) - 1.0).abs() < 1e-4);
        assert!(ps1_sin(0).abs() < 1e-4);

        // 90 grados = 1024
        assert_eq!(ps1_angle_wrap(1024), 1024);
        assert!(ps1_cos(1024).abs() < 1e-4);
        assert!((ps1_sin(1024) - 1.0).abs() < 1e-4);

        // 180 grados = 2048
        assert_eq!(ps1_angle_wrap(2048), 2048);
        assert!((ps1_cos(2048) - (-1.0)).abs() < 1e-4);

        // 270 grados = 3072
        assert_eq!(ps1_angle_wrap(3072), 3072);
        assert!((ps1_sin(3072) - (-1.0)).abs() < 1e-4);

        // Envoltura negativa
        assert_eq!(ps1_angle_wrap(-1024), 3072);

        // Delta angular más corto
        assert_eq!(ps1_angle_delta(1024, 0), 1024);
        assert_eq!(ps1_angle_delta(0, 1024), -1024);
        assert_eq!(ps1_angle_delta(4000, 10), -106); // cruce de 0
    }

    #[test]
    fn test_entity_calcaimpos() {
        let mut phys = EntityPhysics::default();
        phys.position = Vec3::new(10.0, 5.0, 10.0);
        phys.rot_y = 0; // Mirando hacia +Z

        let aim = phys.entity_calcaimpos(5.0, 1.0);
        assert!((aim.x - 10.0).abs() < 1e-4);
        assert!((aim.y - 6.0).abs() < 1e-4);
        assert!((aim.z - 15.0).abs() < 1e-4);

        phys.rot_y = 1024; // 90° mirando hacia +X
        let aim_x = phys.entity_calcaimpos(5.0, 0.0);
        assert!((aim_x.x - 15.0).abs() < 1e-4);
        assert!((aim_x.z - 10.0).abs() < 1e-4);
    }

    #[test]
    fn test_entity_distance_and_proximity() {
        let mut phys = EntityPhysics::default();
        phys.position = Vec3::new(10.0, 0.0, 10.0);
        phys.bounds_radius = 1.0;
        phys.bounds_max_y = 2.0;

        // Proximidad AABB dentro de span 2.30m
        assert!(phys.entity_checkproximity(Vec3::new(11.5, 1.0, 11.5)));
        assert!(!phys.entity_checkproximity(Vec3::new(13.5, 0.0, 10.0))); // dx = 3.5 > 2.30

        // Cilindro 3D
        assert!(phys.entity_checkdistance3d(Vec3::new(10.5, 1.0, 10.5), 1.0, 0.0, 2.0));
        assert!(!phys.entity_checkdistance3d(Vec3::new(10.5, 3.0, 10.5), 1.0, 0.0, 2.0)); // dy fuera de rango
    }

    #[test]
    fn test_entity_circular_and_orbit_motion() {
        let mut phys = EntityPhysics::default();
        phys.position = Vec3::ZERO;
        phys.orbit_angle = 0;

        let center = Vec3::new(5.0, 0.0, 5.0);
        let radius = 2.0;

        // Órbita inicial (angle=0 -> z=+radius)
        let pos = phys.entity_calcorbitpos(center, radius);
        assert!((pos.x - 5.0).abs() < 1e-4);
        assert!((pos.z - 7.0).abs() < 1e-4);

        // Movimiento circular avanzando en 0x20
        phys.entity_moveincircle(center, radius);
        assert_eq!(phys.orbit_angle, 0x20);
    }

    #[test]
    fn test_entity_movement_and_target_seeking() {
        let mut phys = EntityPhysics::default();
        phys.position = Vec3::ZERO;
        phys.speed = 10.0;

        let target = Vec3::new(10.0, 0.0, 0.0);
        phys.entity_movetarget(target, 0.5);

        // Avanza 5.0m hacia target
        assert!((phys.position.x - 5.0).abs() < 1e-3);
        assert!(phys.position.z.abs() < 1e-3);
        // Debe orientarse hacia +X (atan2(0, 1) = 0)
        assert_eq!(phys.rot_y, 0);

        // Si se mueve hacia -Z (atan2(-(-1), 0) = atan2(1, 0) = 1024 = 90°)
        let target_z = Vec3::new(5.0, 0.0, -10.0);
        phys.entity_movetarget(target_z, 0.5);
        assert_eq!(phys.rot_y, 1024);
    }

    #[test]
    fn test_entity_physicsmove_and_gravity() {
        let mut phys = EntityPhysics::default();
        phys.collision_state = 0; // en el aire
        phys.velocity = Vec3::ZERO;

        phys.entity_physicsmove(0.1);
        assert!(phys.gravity_accum > 0.0);
        assert!(phys.velocity.y < 0.0); // velocidad negativa (cae)

        // Contacto con el suelo reinicia acumulador
        phys.collision_state = 1;
        phys.entity_physicsmove(0.1);
        assert_eq!(phys.gravity_accum, 0.0);
    }

    #[test]
    fn test_entity_frustum_visibility() {
        let mut phys = EntityPhysics::default();
        phys.position = Vec3::new(0.0, 0.0, 10.0);

        let cam_pos = Vec3::ZERO;
        let cam_dir = Vec3::Z; // Mirando hacia +Z

        // Directamente en frente dentro de rango (10m)
        assert!(phys.entity_checkvisibility(cam_pos, cam_dir));

        // Detrás de la cámara
        phys.position = Vec3::new(0.0, 0.0, -10.0);
        assert!(!phys.entity_checkvisibility(cam_pos, cam_dir));

        // Demasiado lejos (>75m)
        phys.position = Vec3::new(0.0, 0.0, 80.0);
        assert!(!phys.entity_checkvisibility(cam_pos, cam_dir));
    }
}
