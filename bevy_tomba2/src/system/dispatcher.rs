//! System call dispatcher routines — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/Sys_CallWithParams.c (0x800521F4)
//!   - src/main/system/Sys_NoOp.c (0x8001CB98)

use bevy::prelude::*;
use crate::system::TombaSystemState;

/// SYS-505: `Sys_CallWithParams` (`0x800521F4`)
/// Calls system function at 0x800521F4 with 4 byte parameters
/// Ground truth: src/main/system/Sys_CallWithParams.c (func_800521F4)
pub fn sys_callwithparams(
    mut system_state: ResMut<TombaSystemState>,
    p0: u8,
    p1: u8,
    p2: u8,
    p3: u8,
) {
    // Direct: calls FUN_800521F4 with 4 byte params
    // Variable: params mapped to original byte params
    system_state.sys_call_params = [p0, p1, p2, p3];
}

/// SYS-513: `Sys_NoOp` (`0x8001CB98`)
/// Ground truth: src/main/system/Sys_NoOp.c (func_8001CB98)
/// Original is an empty routine / placeholder.
pub fn sys_noop(mut system_state: ResMut<TombaSystemState>) {
    // Original: func_8001CB98 — empty placeholder in PS1 runtime
    system_state.noop_called = true;
}
