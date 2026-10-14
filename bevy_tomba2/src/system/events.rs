//! System event handling and callbacks — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/Sys_ClearEvent.c (0x80052078)

use bevy::prelude::*;
use crate::system::TombaSystemState;

/// SYS-507: `Sys_ClearEvent` (`0x80052078`)
/// Clears system event: resets event handler state
/// Ground truth: src/main/system/Sys_ClearEvent.c (func_80052078)
pub fn sys_clearevent(mut system_state: ResMut<TombaSystemState>) {
    system_state.event_flag = 0;
    system_state.clear_event_called = true;
}
