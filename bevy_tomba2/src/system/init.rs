//! System initialization and reset lifecycle routines — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/System_Init.c (0x8001CC00)
//!   - src/main/system/System_Reset.c (0x8001D940)
//!   - src/main/system/System_InitMain.c (0x8001CFC8)

use crate::system::TombaSystemState;

/// SYS-519: `System_Init` (`0x8001CC00`)
/// Master low-level system initialization: initializes BIOS IRQ, enters critical section,
/// sets up controller joypad ports 1 and 2, and zeroes scratchpad buffers.
///
/// Ground truth: src/main/system/System_Init.c (func_8001CC00)
pub fn system_init(system_state: &mut TombaSystemState) {
    // 1. BIOS IRQ init sequence with param 1
    crate::system::bios::bios_initirq(1, system_state);

    // 2. BIOS sequence 3 (disable IRQ, B0, B0(0), enable IRQ)
    crate::system::bios::bios_seq3(system_state);

    // 3. Initialize Controller Joypad Ports 1 & 2 (Pad_Init_2 at 0x800bf498)
    crate::system::input::pad_init(0, system_state);
    crate::system::input::pad_init(1, system_state);

    system_state.system_init_completed = true;
}

/// SYS-520: `System_Reset` (`0x8001D940`)
/// Resets system flags, DMA addresses, and CD state registers.
///
/// Ground truth: src/main/system/System_Reset.c (func_8001D940)
pub fn system_reset(system_state: &mut TombaSystemState) {
    // 1. Clear callback index / mode flag at DAT_800be0e4
    system_state.callback_index = 0;

    // 2. Issue CD/SPU stream command 0
    crate::system::dispatcher::sys_call(0, system_state);

    system_state.system_reset_completed = true;
}

/// SYS-521: `System_InitMain` (`0x8001CFC8`)
/// Overlay loading completion callback handler.
///
/// Ground truth: src/main/system/System_InitMain.c (func_8001CFC8)
/// References: Sys_Call(0), Sys_PadRead(0xc), Sys_Call(1), Sys_PadRead(9), DAT_800be0e4 = 0
pub fn system_initmain(system_state: &mut TombaSystemState) {
    // Pre-read stream command 0 & pad read command 0x0C
    crate::system::dispatcher::sys_call(0, system_state);
    crate::system::input::sys_padread(0x0C, system_state);

    // Stream start command 1
    crate::system::dispatcher::sys_call(1, system_state);

    // Completion: stream command 0, pad read 9, clear callback flag
    crate::system::dispatcher::sys_call(0, system_state);
    crate::system::input::sys_padread(9, system_state);
    system_state.callback_index = 0;

    system_state.init_main_completed = true;
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_system_lifecycle() {
        let mut state = TombaSystemState::default();

        // 1. System_Init
        system_init(&mut state);
        assert!(state.system_init_completed);
        assert!(state.bios_initirq_called);
        assert!(state.bios_seq3_called);
        assert!(state.pads[0].is_connected);
        assert!(state.pads[1].is_connected);

        // 2. System_Reset
        state.callback_index = 0x15;
        system_reset(&mut state);
        assert!(state.system_reset_completed);
        assert_eq!(state.callback_index, 0);
        assert_eq!(state.last_sys_call_code, Some(0));

        // 3. System_InitMain
        state.callback_index = 0x80;
        system_initmain(&mut state);
        assert!(state.init_main_completed);
        assert_eq!(state.callback_index, 0);
        assert_eq!(state.last_pad_read_cmd, 9);
    }
}
