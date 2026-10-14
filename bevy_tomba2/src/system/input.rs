//! Controller / Joypad polling — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/Sys_PadRead.c (0x8001CE90)

use bevy::prelude::*;
use crate::system::TombaSystemState;

/// SYS-516: `Sys_PadRead` (`0x8001CE90`)
/// Controller pad read wrapper: calls low-level pad polling function
/// Ground truth: src/main/system/Sys_PadRead.c (func_8001CE90)
pub fn sys_padread(mut system_state: ResMut<TombaSystemState>) {
    // Pad polling — logical dispatcher only, no hardware emulation
    system_state.pad_read_called = true;
}
