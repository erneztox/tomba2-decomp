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
/// Shared MIPS function return epilogue (`lw $ra, 0x10($sp); jr $ra; addiu $sp, 0x18`).
///
/// Ground truth: src/main/system/Sys_NoOp.c (func_8001CB98)
pub fn sys_noop() {
    // Shared MIPS return epilogue — pure return without side effects
}

/// SYS-514: `Sys_NoOp2` / `GetGp` (`0x80080930`)
/// Returns MIPS Global Pointer ($gp) register value (`move $v0, $gp; jr $ra`).
///
/// Ground truth: src/main/system/Sys_NoOp2.c (func_80080930)
pub fn sys_getgp(system_state: &TombaSystemState) -> u32 {
    if system_state.gp_reg == 0 {
        0x800B_0000 // Default PS1 GP base address
    } else {
        system_state.gp_reg
    }
}

/// SYS-518: `Sys_TimeoutError` (`0x8009CC2C`)
/// Handles subsystem/CD timeout error: resets CD controller status registers and returns 0.
///
/// Ground truth: src/main/system/Sys_TimeoutError.c (func_8009CC2C)
pub fn sys_timeouterror(_tag: u32, system_state: &mut TombaSystemState) -> i32 {
    system_state.cd_status_read = false;
    0
}

/// SYS-519: `Sys_IncCounter` (`0x80026100`)
/// Increments global counter at 0x800BF87E with upper limit cap (g_ItemFlag) and sets dirty flag.
///
/// Ground truth: src/main/system/Sys_IncCounter.c (func_80026100)
pub fn sys_inccounter(delta: i8, system_state: &mut TombaSystemState) {
    system_state.item_max = system_state.item_max.saturating_add(delta);
    if system_state.item_max > system_state.item_flag {
        system_state.item_max = system_state.item_flag;
    }
    system_state.ui_dirty_flags |= 1;
}

/// Func_Nop / `__do_global_ctors_aux` (`0x800897F8`)
/// CRT static constructor iterator (`lw $t0, ($s0); jalr $t0; addiu $s1, -1`).
/// If enabled flag ($t0 != 0) is set and constructor count ($s1) > 0, executes each ctor.
///
/// Ground truth: src/main/misc/Func_Nop.c (func_800897F8)
pub fn crt_do_global_ctors(
    enabled: bool,
    ctors: &[fn(&mut TombaSystemState)],
    system_state: &mut TombaSystemState,
) {
    if !enabled {
        return;
    }
    for &ctor in ctors {
        ctor(system_state);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn dummy_init_step(state: &mut TombaSystemState) {
        state.system_init_completed = true;
    }

    #[test]
    fn test_dispatcher_calls() {
        let mut state = TombaSystemState::default();

        // 1. Sys_Call
        sys_call(1, &mut state);
        assert_eq!(state.last_sys_call_code, Some(1));

        // 2. Sys_CallWithParams
        sys_callwithparams(0x10, 0x20, 0x30, 0x40, &mut state);
        assert_eq!(state.sys_call_params, [0x10, 0x20, 0x30, 0x40]);

        // 3. Sys_NoOp (shared return epilogue) & Sys_NoOp2 / GetGp (returns $gp)
        sys_noop();
        assert_eq!(sys_getgp(&state), 0x800B_0000);
        state.gp_reg = 0x800E_0000;
        assert_eq!(sys_getgp(&state), 0x800E_0000);

        // 4. Sys_TimeoutError
        state.cd_status_read = true;
        let res = sys_timeouterror(0x8001caac, &mut state);
        assert_eq!(res, 0);
        assert!(!state.cd_status_read);

        // 5. Sys_IncCounter
        state.item_flag = 0x40;
        state.item_max = 0x3E;
        sys_inccounter(5, &mut state);
        // Capped at item_flag (0x40)
        assert_eq!(state.item_max, 0x40);
        assert_eq!(state.ui_dirty_flags & 1, 1);

        // 6. crt_do_global_ctors: disabled vs enabled execution
        state.system_init_completed = false;
        let ctors: [fn(&mut TombaSystemState); 1] = [dummy_init_step];

        // Disabled ($t0 == 0) -> no execution
        crt_do_global_ctors(false, &ctors, &mut state);
        assert!(!state.system_init_completed);

        // Enabled ($t0 != 0) -> executes ctor
        crt_do_global_ctors(true, &ctors, &mut state);
        assert!(state.system_init_completed);
    }
}
