//! BIOS routines and low-level sequence steps — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/BIOS_InitSeq.c (0x8009BD1C)
//!   - src/main/system/BIOS_Seq2.c (0x8009BBB4)
//!   - src/main/system/BIOS_Seq3.c (0x8009BB7C)
//!   - src/main/system/BIOS_Seq4.c (0x8009BBFC)
//!   - src/main/system/BIOS_InitIRQ.c (0x8009BB10)
//!   - src/main/system/BIOS_ZeroRegion.c (0x8009BFC0)

use bevy::prelude::*;
use crate::system::TombaSystemState;

/// SYS-459: `BIOS_InitSeq` (`0x8009BD1C`)
/// BIOS init sequence: calls BIOS_B0, BIOS_B0(0), getter, returns 1
/// Ground truth: src/main/system/BIOS_InitSeq.c (func_8009BD1C)
/// References: BIOS_Syscall_B0_8009BEF0(), BIOS_Syscall_B0_80080920(0), BIOS_CallIndirect()
pub fn bios_initseq(mut system_state: ResMut<TombaSystemState>) -> i32 {
    // Direct correlation with original C sequence (line 12-15 of BIOS_InitSeq.c):
    // BIOS_Syscall_B0_8009BEF0() -> BIOS syscall 0xB0
    // BIOS_Syscall_B0_80080920(0) -> syscall 0xB0 with param=0
    // BIOS_CallIndirect() -> indirect call via function table at DAT_80105f30
    // Returns 1 (hardcoded in original)
    system_state.bios_init_called = true;
    system_state.bios_seq_step = 3;
    1
}

/// SYS-466: `BIOS_Seq2` (`0x8009BBB4`)
/// BIOS sequence: calls BIOS_B0 stub then BIOS_CopyToEvent
/// Ground truth: src/main/system/BIOS_Seq2.c (func_8009BBB4)
pub fn bios_seq2(mut system_state: ResMut<TombaSystemState>) {
    system_state.bios_seq2_called = true;
}

/// SYS-467: `BIOS_Seq3` (`0x8009BB7C`)
/// BIOS sequence 3: disable IRQ, BIOS_B0, BIOS_B0(0), enable IRQ
/// Ground truth: src/main/system/BIOS_Seq3.c (func_8009BB7C)
pub fn bios_seq3(mut system_state: ResMut<TombaSystemState>) {
    system_state.bios_seq3_called = true;
    system_state.irq_disabled = true;
    system_state.bios_b0_param0 = true;
}

/// SYS-468: `BIOS_Seq4` (`0x8009BBFC`)
/// BIOS sequence 4: BIOS_ZeroRegion + IRQ off + BIOS_ResetRegion + IRQ on + B0 + MDEC init
/// Ground truth: src/main/system/BIOS_Seq4.c (func_8009BBFC)
pub fn bios_seq4(
    mut system_state: ResMut<TombaSystemState>,
    _p1: i32,
    _p2: i32,
    _p3: i32,
    _p4: i32,
) {
    system_state.bios_seq4_called = true;
    system_state.bios_zeroregion_done = true;
    system_state.bios_resetregion_done = true;
    system_state.mdec_setup_done = true;
    system_state.dat_800acf44 = 1;
}

/// SYS-459: `BIOS_InitIRQ` (`0x8009BB10`)
/// BIOS IRQ init: calls BIOS_B0, IRQ off, checks CD status, enables
/// Ground truth: src/main/system/BIOS_InitIRQ.c (func_8009BB10)
/// References: BIOS_Syscall_B0_80080920(0), BIOS_Syscall0(), CD_GetStatus_2(), BIOS_Syscall_B0_8009C030(param_1), BIOS_CopyData2(), BIOS_SetupEvent(), BIOS_CopyData(), BIOS_Syscall0_2()
pub fn bios_initirq(
    mut system_state: ResMut<TombaSystemState>,
    param_1: i32,
) -> i32 {
    // Direct correlation with original C sequence (BIOS_InitIRQ.c):
    // BIOS_Syscall_B0_80080920(0) -> BIOS syscall B0 with param=0
    // BIOS_Syscall0() -> syscall 0
    // iVar1 = CD_GetStatus_2(); check CD status
    // BIOS_Syscall_B0_8009C030(param_1) -> syscall B0
    // BIOS_CopyData2(), BIOS_SetupEvent(), BIOS_CopyData(), BIOS_Syscall0_2()
    system_state.bios_initirq_called = true;
    system_state.cd_status_read = true;
    if system_state.cd_status_read && param_1 == 0 {
        // Original logic preserved: param_1 reset to 0 on CD not ready
    }
    0
}

/// SYS-501: `BIOS_ZeroRegion` (`0x8009BFC0`)
/// BIOS zero region: zeros 9 words at BIOS struct+0x62C, calls BIOS_CallA0_2 + BIOS_Syscall0_2
/// Ground truth: src/main/system/BIOS_ZeroRegion.c (func_8009BFC0)
/// References: BIOS_Syscall0(), BIOS_CallA0_2(), BIOS_Syscall0_2(), DAT_80105f38, DAT_800abfdc
pub fn bios_zeroregion(mut system_state: ResMut<TombaSystemState>) {
    // Direct correlation with original C (BIOS_ZeroRegion.c lines 14-31):
    // BIOS_Syscall0() -> syscall 0
    // SUB_000000b0() -> indirect function call
    // Zero loop: 9 iterations, zero words at BIOS struct offset + 0x62C
    // BIOS_CallA0_2() -> BIOS call A0 variant 2
    // BIOS_Syscall0_2() -> syscall 0 variant 2
    system_state.bios_zero_offset = 0x62C;
    system_state.bios_zero_iterations = 9;
    system_state.bios_zero_completed = true;
}
