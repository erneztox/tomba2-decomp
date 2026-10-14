//! Entity combat interaction and collision dispatch — SEC-12 (SYS)
//!
//! Ground Truth:
//!   - src/main/system/Sys_PlaySFX.c (0x8002369C): Sound effect trigger & latch interaction
//!   - src/main/system/System_Main.c (0x8001DC9C): Master entity combat / attack interaction switch

use crate::system::TombaSystemState;

/// Sound effect IDs used in entity interactions
pub const SFX_IMPACT_HIT: u32 = 0x0D;
pub const SFX_LATCH_GRAPPLE: u32 = 0x0C;
pub const SFX_HEAVY_HIT: u32 = 0x2E;
pub const SFX_EXPLOSION_CRACK: u32 = 0x2C;
pub const SFX_EXPLOSION_BOOM: u32 = 0x2D;
pub const SFX_BITE_LATCH: u32 = 0x2F;

/// Entity kind for combat collision dispatch (param_1->kind)
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u8)]
pub enum EntityCombatKind {
    BasicContact = 0,
    WeaponContact = 1,
    GrappleLatch = 2,
    GrappleVariation = 3,
    HeavyContact = 4,
    SmashAttack = 5,
    SecondaryContact = 6,
    Other(u8),
}

impl From<u8> for EntityCombatKind {
    fn from(kind: u8) -> Self {
        match kind {
            0 => EntityCombatKind::BasicContact,
            1 => EntityCombatKind::WeaponContact,
            2 => EntityCombatKind::GrappleLatch,
            3 => EntityCombatKind::GrappleVariation,
            4 => EntityCombatKind::HeavyContact,
            5 => EntityCombatKind::SmashAttack,
            6 => EntityCombatKind::SecondaryContact,
            other => EntityCombatKind::Other(other),
        }
    }
}

/// Lightweight snapshot of an entity's kinematics and combat state
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct EntityCombatState {
    pub kind: u8,
    pub state: u8,
    pub behavior_state: u8,
    pub action_state: u8,
    pub move_mode: u8,
    pub collision_state: u8,
    pub flag_5e: u8,
    pub rot_y: u16,
    pub target_angle: u16,
    pub pos_x: i16,
    pub pos_y: i16,
    pub pos_z: i16,
    pub parent_id: Option<u32>,
    pub anim_id: u8,
}

/// Result flags returned by System_Main combat evaluation
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct CombatResult {
    pub status_code: i32,
    pub sfx_triggered: Option<u32>,
    pub spawned_special_id: Option<u32>,
}

/// SYS-517: `Sys_PlaySFX` (`0x8002369C`)
/// Evaluates latching condition between two entities:
/// - Sets move_mode = 2 for both entities
/// - Pairs parent/child hierarchy and positions
/// - Dispatches bite/latch SFX (0x2F)
/// - Spawns special effect entity type 2
///
/// Ground truth: src/main/system/Sys_PlaySFX.c (func_8002369C)
pub fn sys_playsfx(
    attacker: &mut EntityCombatState,
    target: &mut EntityCombatState,
    angle_check: i32,
    _system_state: &mut TombaSystemState,
) -> Option<CombatResult> {
    if angle_check >= 0 {
        attacker.move_mode = 2;
        target.move_mode = 2;

        if attacker.parent_id.is_none() {
            attacker.parent_id = Some(1); // Link established
            attacker.move_mode = 2;
            target.pos_y = attacker.pos_y;
            target.pos_z = attacker.pos_z;
        }

        target.anim_id = attacker.anim_id & 1;

        Some(CombatResult {
            status_code: 0,
            sfx_triggered: Some(SFX_BITE_LATCH),
            spawned_special_id: Some(2),
        })
    } else {
        None
    }
}

/// SYS-530: `System_Main` (`0x8001DC9C`)
/// Master combat collision and attack dispatcher.
/// Evaluates attacker kind, sets target entity reaction states (e.g. STATE_FINISH = 2),
/// triggers impact audio, and returns combat status bitmask.
///
/// Ground truth: src/main/system/System_Main.c (func_8001DC9C)
pub fn system_main(
    attacker: &mut EntityCombatState,
    target: &mut EntityCombatState,
    _param_3: u32,
    flags: u32,
    _system_state: &mut TombaSystemState,
) -> CombatResult {
    attacker.move_mode = 2;
    let kind = EntityCombatKind::from(attacker.kind);

    match kind {
        EntityCombatKind::BasicContact => {
            if (flags & 0xF6) == 0 {
                target.move_mode = (attacker.rot_y >> 4) as u8;
                if (flags & 1) == 0 {
                    target.state = 2; // STATE_FINISH
                    target.behavior_state = 2;
                    target.action_state = 0;
                } else {
                    target.state = 2;
                    target.behavior_state = 0;
                    target.action_state = 0;
                }
            }
            CombatResult {
                status_code: 1,
                sfx_triggered: Some(SFX_IMPACT_HIT),
                spawned_special_id: None,
            }
        }
        EntityCombatKind::WeaponContact => {
            if (flags & 0xDE) == 0 {
                target.move_mode = (attacker.rot_y >> 4) as u8;
                if (flags & 1) == 0 && attacker.flag_5e != 0 {
                    target.state = 2;
                    target.behavior_state = 2;
                } else {
                    target.state = 2;
                    target.behavior_state = 0;
                }
                target.action_state = 0;
            }
            CombatResult {
                status_code: 0x20,
                sfx_triggered: Some(SFX_IMPACT_HIT),
                spawned_special_id: None,
            }
        }
        EntityCombatKind::GrappleLatch => {
            if (flags & 0x400) == 0 {
                if (flags & 0xEE) == 0 {
                    if attacker.flag_5e == 0 {
                        target.move_mode = 10;
                    } else {
                        target.state = 2;
                        target.behavior_state = 0;
                        target.action_state = 0;
                        target.move_mode = (attacker.rot_y >> 4) as u8;
                    }
                }
            } else {
                target.state = 2;
                target.behavior_state = 2;
                target.action_state = 0;
                target.move_mode = (attacker.rot_y >> 4) as u8;
            }
            CombatResult {
                status_code: 0x10,
                sfx_triggered: Some(SFX_LATCH_GRAPPLE),
                spawned_special_id: None,
            }
        }
        EntityCombatKind::HeavyContact => {
            if (flags & 0xBE) == 0 {
                target.move_mode = (attacker.target_angle >> 4) as u8;
                target.state = 2;
                target.behavior_state = if (flags & 1) == 0 && attacker.flag_5e != 0 { 2 } else { 0 };
                target.action_state = 0;
            }
            CombatResult {
                status_code: 0x40,
                sfx_triggered: Some(SFX_HEAVY_HIT),
                spawned_special_id: None,
            }
        }
        EntityCombatKind::SmashAttack => {
            if (flags & 0xBC) == 0 {
                target.move_mode = (attacker.target_angle >> 4) as u8;
                target.state = 2;
                target.behavior_state = if (flags & 1) == 0 && attacker.flag_5e != 0 { 7 } else { 4 };
                target.action_state = 0;
            }
            CombatResult {
                status_code: 0x42,
                sfx_triggered: Some(SFX_EXPLOSION_BOOM),
                spawned_special_id: Some(0x17),
            }
        }
        _ => CombatResult {
            status_code: 0,
            sfx_triggered: None,
            spawned_special_id: None,
        },
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_sys_playsfx_latch() {
        let mut state = TombaSystemState::default();
        let mut attacker = EntityCombatState {
            pos_y: 100,
            pos_z: 200,
            anim_id: 5,
            ..Default::default()
        };
        let mut victim = EntityCombatState::default();

        let res = sys_playsfx(&mut attacker, &mut victim, 1, &mut state);
        assert!(res.is_some());
        let res = res.unwrap();
        assert_eq!(res.sfx_triggered, Some(SFX_BITE_LATCH));
        assert_eq!(res.spawned_special_id, Some(2));
        assert_eq!(attacker.move_mode, 2);
        assert_eq!(victim.move_mode, 2);
        assert_eq!(victim.pos_y, 100);
        assert_eq!(victim.pos_z, 200);
        assert_eq!(victim.anim_id, 1);
    }

    #[test]
    fn test_system_main_combat_dispatch() {
        let mut state = TombaSystemState::default();
        let mut attacker = EntityCombatState {
            kind: 0, // BasicContact
            rot_y: 0x40,
            ..Default::default()
        };
        let mut victim = EntityCombatState::default();

        let res = system_main(&mut attacker, &mut victim, 0, 0, &mut state);
        assert_eq!(res.status_code, 1);
        assert_eq!(res.sfx_triggered, Some(SFX_IMPACT_HIT));
        assert_eq!(victim.state, 2); // STATE_FINISH
        assert_eq!(victim.behavior_state, 2);
        assert_eq!(victim.move_mode, 4); // 0x40 >> 4

        // Smash attack test (kind 5)
        attacker.kind = 5;
        let res_smash = system_main(&mut attacker, &mut victim, 0, 0, &mut state);
        assert_eq!(res_smash.status_code, 0x42);
        assert_eq!(res_smash.sfx_triggered, Some(SFX_EXPLOSION_BOOM));
        assert_eq!(res_smash.spawned_special_id, Some(0x17));
    }
}
