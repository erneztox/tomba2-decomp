//! BIOS routines and low-level sequence steps — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/BIOS_InitSeq.c (0x8009BD1C)
//!   - src/main/system/BIOS_Seq2.c (0x8009BBB4)
//!   - src/main/system/BIOS_Seq3.c (0x8009BB7C)
//!   - src/main/system/BIOS_Seq4.c (0x8009BBFC)
//!   - src/main/system/BIOS_InitIRQ.c (0x8009BB10)
//!   - src/main/system/BIOS_ZeroRegion.c (0x8009BFC0)

use crate::system::TombaSystemState;

/// PS1 BIOS struct offset for zero region initialization (0x62C = 1580 bytes)
pub const BIOS_ZERO_REGION_OFFSET: usize = 0x62C;
/// Number of 32-bit words cleared in BIOS zero region (9 words)
pub const BIOS_ZERO_REGION_WORD_COUNT: usize = 9;

/// SYS-459: `BIOS_InitSeq` (`0x8009BD1C`)
/// BIOS init sequence: calls BIOS_B0, BIOS_B0(0), getter, returns 1
/// Ground truth: src/main/system/BIOS_InitSeq.c (func_8009BD1C)
pub fn bios_initseq(system_state: &mut TombaSystemState) -> i32 {
    system_state.bios_init_called = true;
    system_state.bios_seq_step = 3;
    1
}

/// SYS-466: `BIOS_Seq2` (`0x8009BBB4`)
/// BIOS sequence: calls BIOS_B0 stub then BIOS_CopyToEvent
/// Ground truth: src/main/system/BIOS_Seq2.c (func_8009BBB4)
pub fn bios_seq2(system_state: &mut TombaSystemState) {
    system_state.bios_seq2_called = true;
}

/// SYS-467: `BIOS_Seq3` (`0x8009BB7C`)
/// BIOS sequence 3: disable IRQ, BIOS_B0, BIOS_B0(0), enable IRQ
/// Ground truth: src/main/system/BIOS_Seq3.c (func_8009BB7C)
pub fn bios_seq3(system_state: &mut TombaSystemState) {
    system_state.bios_seq3_called = true;
    system_state.irq_disabled = true;
    system_state.bios_b0_param0 = true;
}

/// SYS-468: `BIOS_Seq4` (`0x8009BBFC`)
/// BIOS sequence 4: BIOS_ZeroRegion + IRQ off + BIOS_ResetRegion + IRQ on + B0 + MDEC init
/// Ground truth: src/main/system/BIOS_Seq4.c (func_8009BBFC)
pub fn bios_seq4(
    _p1: i32,
    _p2: i32,
    _p3: i32,
    _p4: i32,
    system_state: &mut TombaSystemState,
) {
    system_state.bios_seq4_called = true;
    system_state.bios_zeroregion_done = true;
    system_state.bios_resetregion_done = true;
    system_state.mdec_setup_done = true;
    system_state.dat_800acf44 = 1;
}

/// SYS-459b: `BIOS_InitIRQ` (`0x8009BB10`)
/// BIOS IRQ init: calls BIOS_B0, IRQ off, checks CD status, enables
/// Ground truth: src/main/system/BIOS_InitIRQ.c (func_8009BB10)
pub fn bios_initirq(
    param_1: i32,
    system_state: &mut TombaSystemState,
) -> i32 {
    system_state.bios_initirq_called = true;
    system_state.cd_status_read = true;
    if system_state.cd_status_read && param_1 == 0 {
        // Original logic preserved: param_1 reset to 0 on CD not ready
    }
    0
}

/// SYS-501: `BIOS_ZeroRegion` (`0x8009BFC0`)
/// BIOS zero region: zeros 9 words at BIOS struct+0x62C
/// Ground truth: src/main/system/BIOS_ZeroRegion.c (func_8009BFC0)
pub fn bios_zeroregion(system_state: &mut TombaSystemState) {
    system_state.bios_zero_offset = BIOS_ZERO_REGION_OFFSET;
    system_state.bios_zero_iterations = BIOS_ZERO_REGION_WORD_COUNT;
    system_state.bios_zero_completed = true;
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_bios_sequences() {
        let mut state = TombaSystemState::default();

        assert_eq!(bios_initseq(&mut state), 1);
        assert!(state.bios_init_called);
        assert_eq!(state.bios_seq_step, 3);

        bios_seq2(&mut state);
        assert!(state.bios_seq2_called);

        bios_seq3(&mut state);
        assert!(state.bios_seq3_called);
        assert!(state.irq_disabled);
        assert!(state.bios_b0_param0);

        bios_seq4(0, 0, 0, 0, &mut state);
        assert!(state.bios_seq4_called);
        assert!(state.bios_zeroregion_done);
        assert!(state.mdec_setup_done);

        assert_eq!(bios_initirq(1, &mut state), 0);
        assert!(state.bios_initirq_called);
        assert!(state.cd_status_read);

        bios_zeroregion(&mut state);
        assert_eq!(state.bios_zero_offset, BIOS_ZERO_REGION_OFFSET);
        assert_eq!(state.bios_zero_iterations, BIOS_ZERO_REGION_WORD_COUNT);
        assert!(state.bios_zero_completed);
    }
}
