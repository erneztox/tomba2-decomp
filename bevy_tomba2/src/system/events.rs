//! System event handling and callbacks — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/Sys_SetCallback.c (0x80051F14)
//!   - src/main/system/Sys_SetEvent.c (0x80052010)
//!   - src/main/system/Sys_ClearEvent.c (0x80052078)

use crate::system::{EventState, TombaSystemState};

/// SYS-506: `Sys_SetCallback` (`0x80051F14`)
/// Sets system callback function and event mask in DAT_801fe000 table.
///
/// Ground truth: src/main/system/Sys_SetCallback.c (func_80051F14)
/// Stride: param_1 * 0x70
/// - Writes callback pointer to +0x0c (DAT_801fe00c)
/// - Calls Sys_NoOp2() and stores mask at +0x10 (DAT_801fe010)
/// - Sets state at +0x00 to Armed (2) (DAT_801fe000)
/// - Clears pending trigger flag at +0x6f (DAT_801fe06f = 0)
/// - Calls BIOS OpenEvent (Syscall B0:80080860) and stores handle at +0x04 (DAT_801fe004)
pub fn sys_setcallback(
    event_index: usize,
    callback_fn: u32,
    system_state: &mut TombaSystemState,
) {
    if event_index < system_state.events.len() {
        let ev = &mut system_state.events[event_index];
        ev.callback = callback_fn;
        ev.mask = 0; // Sys_NoOp2() returns 0
        ev.state = EventState::Armed;
        ev.pending_flag = 0; // Clear pending trigger status
        ev.handle = (event_index as i32) + 1; // Logical BIOS event handle
    }
    system_state.callback_target = Some(callback_fn);
}

/// SYS-506: `Sys_SetEvent` (`0x80052010`)
/// Disables and closes system event if active: clears state and flags in DAT_801fe000.
///
/// Ground truth: src/main/system/Sys_SetEvent.c (func_80052010)
/// Stride: param_1 * 0x70
/// - Checks if *(s16*)(&DAT_801fe000 + offset) != 0
/// - If non-zero, sets state to Inactive (0)
/// - Clears aux flag at +0x6c (DAT_801fe06c = 0)
/// - Clears pending flag at +0x6f (DAT_801fe06f = 0)
/// - Closes BIOS event handle via Syscall B0:80080870
pub fn sys_setevent(
    event_index: usize,
    system_state: &mut TombaSystemState,
) {
    system_state.event_flag = event_index as u8;
    if event_index < system_state.events.len() {
        let ev = &mut system_state.events[event_index];
        if ev.state != EventState::Inactive {
            ev.state = EventState::Inactive;
            ev.aux_flag = 0;
            ev.pending_flag = 0;
            ev.handle = 0;
        }
    }
}

/// SYS-507: `Sys_ClearEvent` (`0x80052078`)
/// Clears system event: sets state to Handled (3), clears pending flag, closes event handle.
///
/// Ground truth: src/main/system/Sys_ClearEvent.c (func_80052078)
/// - Sets state at +0x00 to Handled (3)
/// - Clears pending flag at +0x6f
/// - Closes BIOS event handle via Syscall B0:80080870
/// - Calls BIOS syscall B0:80080880 with 0xff000000
pub fn sys_clearevent(
    event_index: usize,
    system_state: &mut TombaSystemState,
) {
    system_state.event_flag = 0;
    system_state.clear_event_called = true;
    if event_index < system_state.events.len() {
        let ev = &mut system_state.events[event_index];
        ev.state = EventState::Handled;
        ev.pending_flag = 0;
        ev.handle = 0;
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_event_lifecycle() {
        let mut state = TombaSystemState::default();

        // 1. Arm callback at event slot 2 (as done in Sys_LoadOverlay)
        sys_setcallback(2, crate::system::SystemInitMain, &mut state);
        assert_eq!(state.events[2].state, EventState::Armed);
        assert_eq!(state.events[2].callback, crate::system::SystemInitMain);
        assert_eq!(state.events[2].pending_flag, 0);
        assert_eq!(state.events[2].handle, 3);
        assert_eq!(state.callback_target, Some(crate::system::SystemInitMain));

        // 2. Disable event 2 via Sys_SetEvent
        sys_setevent(2, &mut state);
        assert_eq!(state.events[2].state, EventState::Inactive);
        assert_eq!(state.events[2].handle, 0);
        assert_eq!(state.events[2].aux_flag, 0);
        assert_eq!(state.events[2].pending_flag, 0);
        assert_eq!(state.event_flag, 2);

        // 3. Clear event 2 via Sys_ClearEvent
        sys_clearevent(2, &mut state);
        assert_eq!(state.events[2].state, EventState::Handled);
        assert_eq!(state.events[2].handle, 0);
        assert!(state.clear_event_called);
    }
}
