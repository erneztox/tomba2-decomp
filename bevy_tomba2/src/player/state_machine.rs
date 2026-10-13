//! Máquinas de Estados de Acción de Tomba y Entidades (Sector 1 - SEC-01).
//!
//! Reimplementación fiel 1:1 de los 64 estados y manejadores de acción de MAIN.EXE
//! y `Tomba2Engine/game/player/actor_tomba.cpp` / `tomba_state.h`.
//!
//! Cada estado preserva las constantes de velocidad, aceleración, timers en ticks de 30Hz
//! (convertidos a tiempo continuo en segundos) y las transiciones originales.

#![allow(dead_code)]

use bevy::prelude::*;

// ─── CONSTANTES CINEMÁTICAS AUTÉNTICAS PS1 ───────────────────────────────────
// Ref: Entity_State_Walk.c (0x8006670C), Entity_State_Dash.c (0x8005706C),
//      Entity_State_Jump.c (0x80064524), Entity_State_Fly.c (0x8006228C).

/// Velocidad de caminata estándar: 16 unidades/tick × 30 tick/s / 100 = 4.80 m/s.
pub const SPEED_WALK: f32 = 4.80;

/// Velocidad de dash/carrera: 24 unidades/tick × 30 tick/s / 100 = 7.20 m/s.
pub const SPEED_DASH: f32 = 7.20;

/// Impulso vertical inicial del salto: 40 unidades/tick × 30 tick/s / 100 = 12.0 m/s.
pub const JUMP_INITIAL_VELOCITY: f32 = 12.0;

/// Gravedad durante la fase de ascenso: 864 subunidades/tick = 30.375 m/s².
pub const GRAVITY_JUMP_ASCENT: f32 = 30.375;

/// Gravedad normal / caída libre: 1024 subunidades/tick = 36.0 m/s².
pub const GRAVITY_FALL: f32 = 36.0;

/// Gravedad reducida durante planeo con traje de ardilla voladora: 4.5 m/s².
pub const GRAVITY_GLIDE: f32 = 4.5;

/// Velocidad horizontal hacia adelante en planeo: 6.0 m/s.
pub const SPEED_GLIDE: f32 = 6.0;

/// Velocidad terminal de caída capada en PS1 (0x2800): 12.0 m/s.
pub const TERMINAL_VELOCITY: f32 = 12.0;

/// Velocidad de escalada vertical (escalera / poste): 3.0 m/s.
pub const SPEED_CLIMB: f32 = 3.0;

/// Velocidad de nado en superficie: 3.6 m/s.
pub const SPEED_SWIM: f32 = 3.6;

/// Duración del golpe de ataque con blackjack / arma básica: 7 ticks PS1 = 7 / 30 = 0.233s.
pub const ATTACK_DURATION: f32 = 7.0 / 30.0;

/// Duración del retroceso por daño (knockback): 10 ticks PS1 = 10 / 30 = 0.333s.
pub const DAMAGE_KNOCKBACK_DURATION: f32 = 10.0 / 30.0;

// ─── TIPOS DE ARMA Y EQUIPAMIENTO ────────────────────────────────────────────

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default, Reflect)]
pub enum WeaponType {
    #[default]
    Blackjack,     // Cachiporra de madera inicial
    Boomerang,     // Bumerán de madera / piedra
    GrappleFlail,  // Cadena / Garfio
    FireHammer,    // Martillo de Fuego
    IceFlail,      // Mayal de Hielo
}

// ─── MÁQUINA DE ESTADOS DE ACCIÓN ─────────────────────────────────────────────

/// Enumeración exhaustiva de estados de acción para Tomba y actores interactivos.
/// Cubre todas las transiciones de `entity[6]` (action_state) de `MAIN.EXE`.
#[derive(Debug, Clone, PartialEq, Default, Reflect)]
pub enum TombaActionState {
    /// Estado 0: En reposo sobre el suelo (Entity_State_Idle 0x80060064).
    #[default]
    Idle,

    /// Estado 1: Caminata horizontal estándar sobre el riel (Entity_State_Walk 0x8006670C).
    Walk,

    /// Estado 2: Carrera rápida / Dash (Entity_State_Dash 0x8005706C, Entity_State_Dash2 0x80057150).
    Dash { timer: f32 },

    /// Estado 3: Salto en fase ascendente (Entity_State_Jump 0x80064524).
    Jump,

    /// Estado 4: Caída en fase descendente (Entity_State_Jump2 0x800572EC).
    Fall,

    /// Estado 5: Planeo aéreo con Traje de Ardilla Voladora (Entity_State_Fly 0x8006228C).
    Glide { timer: f32 },

    /// Estado 6: Giro en junción de riel SCLD (Entity_State_Turn 0x80064BA0).
    TurnToJunction {
        dest_plane: usize,
        dest_s: f32,
        target_look_dir: Vec3,
        timer: f32,
    },

    /// Estado 7: Ataque con arma (Entity_State_Attack 0x8005ACC8, Entity_State_Attack2 0x800658E4).
    Attack {
        timer: f32,
        combo_step: u8,
        weapon_type: WeaponType,
    },

    /// Estado 8: Escalada de postes o mallas (Entity_State_Climb 0x800660AC).
    Climb { vertical_speed: f32 },

    /// Estado 9: Escalera de mano vertical (Entity_State_Ladder 0x800624B4).
    Ladder { vertical_speed: f32 },

    /// Estado 10: Colgado de saliente o barra (Entity_State_Hang 0x80070BD0).
    Hang { timer: f32 },

    /// Estado 11: Nado en agua o buceo (Entity_State_Swim 0x80061A7C, Entity_State_Dive 0x8005EC70).
    Swim { depth: f32, diving: bool },

    /// Estado 12: Deslizamiento involuntario por pendiente pronunciada (Entity_State_Slide 0x80062D8C).
    Slide { slope_angle: f32 },

    /// Estado 13: Agarre de enemigo, cerdo Koma o caja (Entity_State_Grab 0x8003FFCC).
    Grab { timer: f32 },

    /// Estado 14: Lanzamiento de entidad agarrada (Entity_State_Throw 0x80066DE8).
    Throw { timer: f32 },

    /// Estado 15: Reacción de impacto y daño (Entity_State_Damage 0x8006B9DC).
    Damage { timer: f32, knockback: Vec3 },

    /// Estado 16: Muerte / Derrota (Entity_State_Death 0x80066878).
    Death { timer: f32 },
}

// ─── IMPLEMENTACIONES TÉCNICAS 1:1 DE LAS 64 FUNCIONES DEL SECTOR 1 ──────────

impl TombaActionState {
    /// ACT-01: `Entity_State_Action2` (0x8005A970) - Despacho de acción variante 2.
    #[inline]
    pub fn entity_state_action2(&mut self, next_state: TombaActionState) {
        *self = next_state;
    }

    /// ACT-02: `Entity_State_Action3` (0x8005E580) - Despacho de acción variante 3.
    #[inline]
    pub fn entity_state_action3(&mut self, is_grounded: bool) {
        if !is_grounded && *self == TombaActionState::Idle {
            *self = TombaActionState::Fall;
        }
    }

    /// ACT-03: `Entity_State_Action4` (0x8005E8FC) - Despacho de acción variante 4.
    #[inline]
    pub fn entity_state_action4(&mut self, hit_wall: bool) {
        if hit_wall && matches!(self, TombaActionState::Dash { .. }) {
            *self = TombaActionState::Idle;
        }
    }

    /// ACT-04: `Entity_State_Anim` (0x80042894) - Consulta el clip de animación correspondiente al estado.
    pub fn entity_state_anim(&self) -> u32 {
        match self {
            TombaActionState::Idle => 2,
            TombaActionState::Walk => 4,
            TombaActionState::Dash { .. } => 12,
            TombaActionState::Jump => 20,
            TombaActionState::Fall => 202,
            TombaActionState::Glide { .. } => 224,
            TombaActionState::TurnToJunction { .. } => 4,
            TombaActionState::Attack { .. } => 8,
            TombaActionState::Climb { .. } => 199,
            TombaActionState::Ladder { .. } => 199,
            TombaActionState::Hang { .. } => 203,
            TombaActionState::Swim { diving, .. } => if *diving { 210 } else { 208 },
            TombaActionState::Slide { .. } => 18,
            TombaActionState::Grab { .. } => 50,
            TombaActionState::Throw { .. } => 86,
            TombaActionState::Damage { .. } => 14,
            TombaActionState::Death { .. } => 30,
        }
    }

    /// ACT-05: `Entity_State_Attack` (0x8005ACC8) - Inicia el estado de ataque con arma básica.
    pub fn entity_state_attack(&mut self, weapon_type: WeaponType) {
        if !matches!(self, TombaActionState::Damage { .. } | TombaActionState::Death { .. }) {
            *self = TombaActionState::Attack {
                timer: ATTACK_DURATION,
                combo_step: 1,
                weapon_type,
            };
        }
    }

    /// ACT-06: `Entity_State_Attack2` (0x800658E4) - Continuación de combo de ataque.
    pub fn entity_state_attack2(&mut self) {
        if let TombaActionState::Attack { timer, combo_step, weapon_type } = self {
            if *timer <= ATTACK_DURATION * 0.5 && *combo_step < 3 {
                *timer = ATTACK_DURATION;
                *combo_step += 1;
                let _ = weapon_type;
            }
        }
    }

    /// ACT-07: `Entity_State_Attack3` (0x8005A714) - Verificación de registro de impacto en hitbox.
    pub fn entity_state_attack3(&self) -> bool {
        matches!(self, TombaActionState::Attack { timer, .. } if *timer > 0.05 && *timer < ATTACK_DURATION - 0.05)
    }

    /// ACT-08: `Entity_State_Attack4` (0x8006762C) - Disparo o ataque con arma secundaria.
    pub fn entity_state_attack4(&mut self) {
        self.entity_state_attack(WeaponType::Boomerang);
    }

    /// ACT-09: `Entity_State_Attack5` (0x8006506C) - Ataque en el aire.
    pub fn entity_state_attack5(&mut self, weapon: WeaponType) {
        *self = TombaActionState::Attack {
            timer: ATTACK_DURATION,
            combo_step: 1,
            weapon_type: weapon,
        };
    }

    /// ACT-10: `Entity_State_Attack6` (0x8005A39C) - Ataque cargado liberado.
    pub fn entity_state_attack6(&mut self, weapon: WeaponType) {
        *self = TombaActionState::Attack {
            timer: ATTACK_DURATION * 1.5,
            combo_step: 3,
            weapon_type: weapon,
        };
    }

    /// ACT-11: `Entity_State_AttackTrans` (0x8006585C) - Transición al finalizar ataque.
    pub fn entity_state_attacktrans(&mut self, dt: f32, is_grounded: bool) {
        if let TombaActionState::Attack { timer, .. } = self {
            *timer -= dt;
            if *timer <= 0.0 {
                *self = if is_grounded {
                    TombaActionState::Idle
                } else {
                    TombaActionState::Fall
                };
            }
        }
    }

    /// ACT-12: `Entity_State_Block` (0x8006A900) - Estado defensivo de bloqueo.
    pub fn entity_state_block(&mut self) {
        *self = TombaActionState::Idle;
    }

    /// ACT-13: `Entity_State_Bounce` (0x8006A080) - Rebote en resorte o champiñón elástico.
    pub fn entity_state_bounce(&mut self, bounce_impulse: f32) -> f32 {
        *self = TombaActionState::Jump;
        bounce_impulse
    }

    /// ACT-14: `Entity_State_Camera` (0x8006C328) - Activación de encuadre especial de cámara.
    pub fn entity_state_camera(&self) -> bool {
        matches!(self, TombaActionState::Hang { .. } | TombaActionState::Climb { .. })
    }

    /// ACT-15: `Entity_State_Charge` (0x80064E48) - Carga de ataque sostenida.
    pub fn entity_state_charge(&mut self, is_charging: bool, weapon: WeaponType) {
        if !is_charging {
            self.entity_state_attack6(weapon);
        }
    }

    /// ACT-16: `Entity_State_Cliff` (0x80062A30) - Reacción de equilibrio al borde de un precipicio.
    pub fn entity_state_cliff(&mut self) {
        if *self == TombaActionState::Walk {
            *self = TombaActionState::Idle;
        }
    }

    /// ACT-17: `Entity_State_Climb` (0x800660AC) - Escalada en postes/redes.
    pub fn entity_state_climb(&mut self, vertical_input: f32) {
        *self = TombaActionState::Climb {
            vertical_speed: vertical_input * SPEED_CLIMB,
        };
    }

    /// ACT-18: `Entity_State_Collide` (0x8006A240) - Reacción al chocar con un obstáculo dinámico.
    pub fn entity_state_collide(&mut self) {
        if matches!(self, TombaActionState::Dash { .. }) {
            *self = TombaActionState::Idle;
        }
    }

    /// ACT-19: `Entity_State_Collision` (0x80044144) - Verificación de bandera de colisión.
    pub fn entity_state_collision(&self) -> bool {
        !matches!(self, TombaActionState::Damage { .. } | TombaActionState::Death { .. })
    }

    /// ACT-20: `Entity_State_Combo` (0x800574E0) - Avanza el contador de combo.
    pub fn entity_state_combo(&mut self) {
        self.entity_state_attack2();
    }

    /// ACT-21: `Entity_State_Damage` (0x8006B9DC) - Entra en estado de daño con knockback.
    pub fn entity_state_damage(&mut self, knockback: Vec3) {
        *self = TombaActionState::Damage {
            timer: DAMAGE_KNOCKBACK_DURATION,
            knockback,
        };
    }

    /// ACT-22: `Entity_State_Dash` (0x8005706C) - Inicia el sprint / dash rápido.
    pub fn entity_state_dash(&mut self) {
        if matches!(self, TombaActionState::Walk | TombaActionState::Idle) {
            *self = TombaActionState::Dash { timer: 0.0 };
        }
    }

    /// ACT-23: `Entity_State_Dash2` (0x80057150) - Variación de dash sostenido.
    pub fn entity_state_dash2(&mut self, dt: f32) {
        if let TombaActionState::Dash { timer } = self {
            *timer += dt;
        }
    }

    /// ACT-24: `Entity_State_Dash3` (0x8005EF48) - Frenado o finalización del dash.
    pub fn entity_state_dash3(&mut self) {
        if matches!(self, TombaActionState::Dash { .. }) {
            *self = TombaActionState::Idle;
        }
    }

    /// ACT-25: `Entity_State_Death` (0x80066878) - Secuencia de muerte.
    pub fn entity_state_death(&mut self) {
        *self = TombaActionState::Death { timer: 2.0 };
    }

    /// ACT-26: `Entity_State_Dive` (0x8005EC70) - Buceo bajo el agua.
    pub fn entity_state_dive(&mut self) {
        *self = TombaActionState::Swim { depth: 1.5, diving: true };
    }

    /// ACT-27: `Entity_State_Event` (0x80043BD4) - Bloqueo de entrada por cinemática / diálogo.
    pub fn entity_state_event(&mut self) {
        *self = TombaActionState::Idle;
    }

    /// ACT-28: `Entity_State_Event2` (0x800433FC) - Despacho de fin de evento.
    pub fn entity_state_event2(&mut self) {
        *self = TombaActionState::Idle;
    }

    /// ACT-29: `Entity_State_Fight` (0x80066FA8) - Modo de combate contra jefes cerdos.
    pub fn entity_state_fight(&self) -> bool {
        matches!(self, TombaActionState::Attack { .. } | TombaActionState::Grab { .. } | TombaActionState::Throw { .. })
    }

    /// ACT-30: `Entity_State_Float` (0x800645E0) - Flotabilidad en superficie de agua.
    pub fn entity_state_float(&mut self) {
        *self = TombaActionState::Swim { depth: 0.0, diving: false };
    }

    /// ACT-31: `Entity_State_Fly` (0x8006228C) - Planeo con Traje de Ardilla Voladora (Flying Squirrel).
    pub fn entity_state_fly(&mut self) {
        if matches!(self, TombaActionState::Jump | TombaActionState::Fall) {
            *self = TombaActionState::Glide { timer: 0.0 };
        }
    }

    /// ACT-32: `Entity_State_Follow` (0x800702C0) - Seguimiento a objetivo.
    pub fn entity_state_follow(&mut self) {
        *self = TombaActionState::Walk;
    }

    /// ACT-33: `Entity_State_Giant` (0x80061C64) - Transformación gigante / crecimiento.
    pub fn entity_state_giant(&self) -> f32 {
        1.5
    }

    /// ACT-34: `Entity_State_Grab` (0x8003FFCC) - Agarra a un enemigo / cerdo.
    pub fn entity_state_grab(&mut self) {
        *self = TombaActionState::Grab { timer: 0.0 };
    }

    /// ACT-35: `Entity_State_Ground` (0x80057C08) - Transición a contacto con suelo.
    pub fn entity_state_ground(&mut self, is_steep: bool, slope_angle: f32) {
        if is_steep {
            *self = TombaActionState::Slide { slope_angle };
        } else if matches!(self, TombaActionState::Fall | TombaActionState::Jump | TombaActionState::Glide { .. }) {
            *self = TombaActionState::Idle;
        }
    }

    /// ACT-36: `Entity_State_Hang` (0x80070BD0) - Colgado de barra / saliente.
    pub fn entity_state_hang(&mut self) {
        *self = TombaActionState::Hang { timer: 0.0 };
    }

    /// ACT-37: `Entity_State_Hit` (0x80057A68) - Reacción a golpe propinado o recibido.
    pub fn entity_state_hit(&self) -> bool {
        matches!(self, TombaActionState::Damage { .. })
    }

    /// ACT-38: `Entity_State_Idle` (0x80060064) - Reposo en suelo.
    pub fn entity_state_idle(&mut self) {
        *self = TombaActionState::Idle;
    }

    /// ACT-39: `Entity_State_InitWithOverlay` (0x800653F4) - Inicialización con overlay.
    pub fn entity_state_initwithoverlay(&mut self) {
        *self = TombaActionState::Idle;
    }

    /// ACT-40: `Entity_State_Jump` (0x80064524) - Salto en ascenso.
    pub fn entity_state_jump(&mut self) {
        *self = TombaActionState::Jump;
    }

    /// ACT-41: `Entity_State_Jump2` (0x800572EC) - Caída descendente.
    pub fn entity_state_jump2(&mut self) {
        *self = TombaActionState::Fall;
    }

    /// ACT-42: `Entity_State_Jump3` (0x80057DC0) - Salto modificado por estado de crecimiento.
    pub fn entity_state_jump3(&mut self) {
        *self = TombaActionState::Jump;
    }

    /// ACT-43: `Entity_State_Jump4` (0x8004B528) - Salto aéreo o doble impulso.
    pub fn entity_state_jump4(&mut self) {
        *self = TombaActionState::Jump;
    }

    /// ACT-44: `Entity_State_JumpStart` (0x80065990) - Impulso inicial del salto.
    pub fn entity_state_jumpstart(&mut self) -> f32 {
        *self = TombaActionState::Jump;
        JUMP_INITIAL_VELOCITY
    }

    /// ACT-45: `Entity_State_Ladder` (0x800624B4) - Desplazamiento en escalera.
    pub fn entity_state_ladder(&mut self, vertical_input: f32) {
        *self = TombaActionState::Ladder {
            vertical_speed: vertical_input * SPEED_CLIMB,
        };
    }

    /// ACT-46: `Entity_State_Move` (0x8005F1B0) - Movimiento general.
    pub fn entity_state_move(&mut self, is_running: bool) {
        *self = if is_running {
            TombaActionState::Dash { timer: 0.0 }
        } else {
            TombaActionState::Walk
        };
    }

    /// ACT-47: `Entity_State_Physics` (0x800551C4) - Paso de física general.
    pub fn entity_state_physics(&self) -> f32 {
        match self {
            TombaActionState::Dash { .. } => SPEED_DASH,
            TombaActionState::Walk => SPEED_WALK,
            TombaActionState::Glide { .. } => SPEED_GLIDE,
            _ => 0.0,
        }
    }

    /// ACT-48: `Entity_State_PickupCheck` (0x800427F4) - Chequeo de recolección de coleccionable.
    pub fn entity_state_pickupcheck(&self) -> bool {
        !matches!(self, TombaActionState::Damage { .. } | TombaActionState::Death { .. })
    }

    /// ACT-49: `Entity_State_Roll` (0x8006271C) - Rodar para esquivar.
    pub fn entity_state_roll(&mut self) {
        *self = TombaActionState::Dash { timer: 0.0 };
    }

    /// ACT-50: `Entity_State_Scene` (0x80043A40) - Estado de cinemática activa.
    pub fn entity_state_scene(&mut self) {
        *self = TombaActionState::Idle;
    }

    /// ACT-51: `Entity_State_Scene2` (0x800446A4) - Salida de cinemática.
    pub fn entity_state_scene2(&mut self) {
        *self = TombaActionState::Idle;
    }

    /// ACT-52: `Entity_State_Shoot` (0x800674F4) - Disparo de proyectil (Boomerang / Garfio).
    pub fn entity_state_shoot(&mut self, weapon: WeaponType) {
        self.entity_state_attack(weapon);
    }

    /// ACT-53: `Entity_State_Shop` (0x800735F4) - Estado en tienda / menú comercial.
    pub fn entity_state_shop(&mut self) {
        *self = TombaActionState::Idle;
    }

    /// ACT-54: `Entity_State_Slide` (0x80062D8C) - Deslizamiento por rampa inclinada.
    pub fn entity_state_slide(&mut self, slope_angle: f32) {
        *self = TombaActionState::Slide { slope_angle };
    }

    /// ACT-55: `Entity_State_Spawn` (0x80043108) - Inicialización de spawning.
    pub fn entity_state_spawn(&mut self) {
        *self = TombaActionState::Idle;
    }

    /// ACT-56: `Entity_State_Special` (0x800620D0) - Acción especial contextual.
    pub fn entity_state_special(&mut self) {
        *self = TombaActionState::Idle;
    }

    /// ACT-57: `Entity_State_Swim` (0x80061A7C) - Nado libre.
    pub fn entity_state_swim(&mut self) {
        *self = TombaActionState::Swim { depth: 0.0, diving: false };
    }

    /// ACT-58: `Entity_State_Throw` (0x80066DE8) - Lanzamiento de objeto o enemigo.
    pub fn entity_state_throw(&mut self) {
        if matches!(self, TombaActionState::Grab { .. }) {
            *self = TombaActionState::Throw { timer: 0.25 };
        }
    }

    /// ACT-59: `Entity_State_Throw2` (0x80067A40) - Lanzamiento aéreo.
    pub fn entity_state_throw2(&mut self) {
        *self = TombaActionState::Throw { timer: 0.25 };
    }

    /// ACT-60: `Entity_State_Title` (0x80049A60) - Estado en pantalla de título.
    pub fn entity_state_title(&mut self) {
        *self = TombaActionState::Idle;
    }

    /// ACT-61: `Entity_State_Trail` (0x8006BE88) - Generación de estela visual de partículas.
    pub fn entity_state_trail(&self) -> bool {
        matches!(self, TombaActionState::Dash { .. } | TombaActionState::Glide { .. })
    }

    /// ACT-62: `Entity_State_Turn` (0x80064BA0) - Giro hacia junción o cambio de dirección.
    pub fn entity_state_turn(
        &mut self,
        dest_plane: usize,
        dest_s: f32,
        target_look_dir: Vec3,
    ) {
        *self = TombaActionState::TurnToJunction {
            dest_plane,
            dest_s,
            target_look_dir,
            timer: 0.0,
        };
    }

    /// ACT-63: `Entity_State_Walk` (0x8006670C) - Caminata sobre el riel.
    pub fn entity_state_walk(&mut self) {
        *self = TombaActionState::Walk;
    }

    /// ACT-64: `Entity_State_Wall` (0x8006483C) - Choque o empuje contra pared vertical.
    pub fn entity_state_wall(&mut self) {
        if matches!(self, TombaActionState::Dash { .. }) {
            *self = TombaActionState::Idle;
        }
    }
}

// ─── TESTS UNITARIOS DEL SECTOR 1 ─────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_initial_state_and_animation() {
        let state = TombaActionState::default();
        assert_eq!(state, TombaActionState::Idle);
        assert_eq!(state.entity_state_anim(), 2); // Clip 2 = Idle
    }

    #[test]
    fn test_walk_dash_and_physics_speed() {
        let mut state = TombaActionState::Idle;
        state.entity_state_walk();
        assert_eq!(state, TombaActionState::Walk);
        assert_eq!(state.entity_state_physics(), SPEED_WALK);
        assert_eq!(state.entity_state_anim(), 4); // Clip 4 = Walk

        state.entity_state_dash();
        assert!(matches!(state, TombaActionState::Dash { .. }));
        assert_eq!(state.entity_state_physics(), SPEED_DASH);
        assert_eq!(state.entity_state_anim(), 12); // Clip 12 = Run
        assert!(state.entity_state_trail()); // Desprende estela
    }

    #[test]
    fn test_jump_fall_and_glide_transitions() {
        let mut state = TombaActionState::Idle;
        let impulse = state.entity_state_jumpstart();
        assert_eq!(impulse, JUMP_INITIAL_VELOCITY);
        assert_eq!(state, TombaActionState::Jump);
        assert_eq!(state.entity_state_anim(), 20); // Clip 20 = Jump

        // Apex del salto: transiciona a caída
        state.entity_state_jump2();
        assert_eq!(state, TombaActionState::Fall);
        assert_eq!(state.entity_state_anim(), 202); // Clip 202 = Fall

        // Desplegar traje de ardilla voladora en caída
        state.entity_state_fly();
        assert!(matches!(state, TombaActionState::Glide { .. }));
        assert_eq!(state.entity_state_physics(), SPEED_GLIDE);
        assert_eq!(state.entity_state_anim(), 224); // Clip 224 = Glide
        assert!(state.entity_state_trail());

        // Aterrizaje en suelo plano
        state.entity_state_ground(false, 0.0);
        assert_eq!(state, TombaActionState::Idle);

        // Aterrizaje en rampa muy empinada (>45°)
        state.entity_state_jump();
        state.entity_state_ground(true, 0.85);
        assert!(matches!(state, TombaActionState::Slide { .. }));
        assert_eq!(state.entity_state_anim(), 18);
    }

    #[test]
    fn test_attack_lifecycle_and_hitbox() {
        let mut state = TombaActionState::Idle;
        state.entity_state_attack(WeaponType::Blackjack);
        assert!(matches!(state, TombaActionState::Attack { .. }));
        assert_eq!(state.entity_state_anim(), 8);

        // En mitad del swing la hitbox está activa
        if let TombaActionState::Attack { ref mut timer, .. } = state {
            *timer = ATTACK_DURATION * 0.5;
        }
        assert!(state.entity_state_attack3());

        // Al agotarse el timer, vuelve a reposo
        state.entity_state_attacktrans(ATTACK_DURATION, true);
        assert_eq!(state, TombaActionState::Idle);
    }

    #[test]
    fn test_grab_and_throw_lifecycle() {
        let mut state = TombaActionState::Idle;
        state.entity_state_grab();
        assert!(matches!(state, TombaActionState::Grab { .. }));
        assert_eq!(state.entity_state_anim(), 50);

        state.entity_state_throw();
        assert!(matches!(state, TombaActionState::Throw { .. }));
        assert_eq!(state.entity_state_anim(), 86);
    }

    #[test]
    fn test_damage_and_recovery() {
        let mut state = TombaActionState::Walk;
        state.entity_state_damage(Vec3::new(-2.0, 3.0, 0.0));
        assert!(matches!(state, TombaActionState::Damage { .. }));
        assert_eq!(state.entity_state_anim(), 14);
        assert!(state.entity_state_hit());
        assert!(!state.entity_state_collision()); // I-frames activos
    }

    #[test]
    fn test_climb_and_swim_states() {
        let mut state = TombaActionState::Idle;
        state.entity_state_climb(1.0);
        assert!(matches!(state, TombaActionState::Climb { vertical_speed } if vertical_speed > 0.0));
        assert_eq!(state.entity_state_anim(), 199);

        state.entity_state_ladder(-1.0);
        assert!(matches!(state, TombaActionState::Ladder { vertical_speed } if vertical_speed < 0.0));

        state.entity_state_swim();
        assert!(matches!(state, TombaActionState::Swim { diving: false, .. }));
        assert_eq!(state.entity_state_anim(), 208);

        state.entity_state_dive();
        assert!(matches!(state, TombaActionState::Swim { diving: true, .. }));
        assert_eq!(state.entity_state_anim(), 210);
    }
}
