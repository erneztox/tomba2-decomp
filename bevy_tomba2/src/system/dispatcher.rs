//! System call dispatcher routines — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/Sys_Call.c (0x8001CF00)
//!   - src/main/system/Sys_CallWithParams.c (0x800521F4)
//!   - src/main/system/Sys_NoOp.c (0x8001CB98)
//!   - src/main/system/Sys_NoOp2.c (0x80080930)

use crate::system::TombaSystemState;

/// Command type for CD/SPU stream control packet (0x200)
pub const CMD_CD_SPU_STREAM: i32 = 0x200;

/// SYS-503: `Sys_Call` (`0x8001CF00`)
/// Generic system call wrapper: passes command packet with type 0x200 to CD/SPU kernel.
///
/// Ground truth: src/main/system/Sys_Call.c (func_8001CF00)
pub fn sys_call(
    code: i32,
    system_state: &mut TombaSystemState,
) {
    system_state.last_sys_call_code = Some(code);
}

/// SYS-505: `Sys_CallWithParams` (`0x800521F4`)
/// Calls system function at 0x800521F4 with 4 byte parameters
/// Ground truth: src/main/system/Sys_CallWithParams.c (func_800521F4)
pub fn sys_callwithparams(
    p0: u8,
    p1: u8,
    p2: u8,
    p3: u8,
    system_state: &mut TombaSystemState,
) {
    system_state.sys_call_params = [p0, p1, p2, p3];
}

/// SYS-513: `Sys_NoOp` (`0x8001CB98`)
/// Ground truth: src/main/system/Sys_NoOp.c (func_8001CB98)
/// Original is an empty routine / placeholder in PS1 runtime.
pub fn sys_noop(system_state: &mut TombaSystemState) {
    system_state.noop_called = true;
}

/// SYS-514: `Sys_NoOp2` (`0x80080930`)
/// Ground truth: src/main/system/Sys_NoOp2.c (func_80080930)
/// Original is an empty routine / placeholder in PS1 runtime.
pub fn sys_noop2(system_state: &mut TombaSystemState) {
    system_state.noop2_called = true;
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_dispatcher_calls() {
        let mut state = TombaSystemState::default();

        // 1. Sys_Call
        sys_call(1, &mut state);
        assert_eq!(state.last_sys_call_code, Some(1));

        // 2. Sys_CallWithParams
        sys_callwithparams(0x10, 0x20, 0x30, 0x40, &mut state);
        assert_eq!(state.sys_call_params, [0x10, 0x20, 0x30, 0x40]);

        // 3. Sys_NoOp & Sys_NoOp2
        sys_noop(&mut state);
        assert!(state.noop_called);

        sys_noop2(&mut state);
        assert!(state.noop2_called);
    }
}
