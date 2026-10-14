//! Controller / Joypad polling and input state — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/Sys_PadRead.c (0x8001CE90)
//!   - src/main/system/System_Init.c (0x8001CC00) (Pad_Init_2)

use crate::system::TombaSystemState;

/// SYS-516: `Sys_PadRead` (`0x8001CE90`)
/// Controller pad / CD read request wrapper.
///
/// Ground truth: src/main/system/Sys_PadRead.c (func_8001CE90)
pub fn sys_padread(
    command: u8,
    system_state: &mut TombaSystemState,
) {
    system_state.pad_read_called = true;
    system_state.last_pad_read_cmd = command;
}

/// Initializes controller pad port 0 or 1 (corresponds to Pad_Init_2 in System_Init.c).
pub fn pad_init(
    port: usize,
    system_state: &mut TombaSystemState,
) {
    if port < system_state.pads.len() {
        system_state.pads[port].is_connected = true;
    }
}

/// Updates button state for a gamepad port, computing just_pressed and just_released transitions.
pub fn pad_update_buttons(
    port: usize,
    new_held: u16,
    system_state: &mut TombaSystemState,
) {
    if port < system_state.pads.len() {
        let pad = &mut system_state.pads[port];
        pad.buttons_just_pressed = new_held & !pad.buttons_held;
        pad.buttons_just_released = pad.buttons_held & !new_held;
        pad.buttons_held = new_held;
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::system::{PAD_CROSS, PAD_SQUARE};

    #[test]
    fn test_pad_lifecycle() {
        let mut state = TombaSystemState::default();

        // 1. Init port 0
        pad_init(0, &mut state);
        assert!(state.pads[0].is_connected);

        // 2. Press Cross (0x4000)
        pad_update_buttons(0, PAD_CROSS, &mut state);
        assert_eq!(state.pads[0].buttons_held, PAD_CROSS);
        assert_eq!(state.pads[0].buttons_just_pressed, PAD_CROSS);
        assert_eq!(state.pads[0].buttons_just_released, 0);

        // 3. Hold Cross and press Square (0x8000)
        pad_update_buttons(0, PAD_CROSS | PAD_SQUARE, &mut state);
        assert_eq!(state.pads[0].buttons_held, PAD_CROSS | PAD_SQUARE);
        assert_eq!(state.pads[0].buttons_just_pressed, PAD_SQUARE);
        assert_eq!(state.pads[0].buttons_just_released, 0);

        // 4. Release Cross
        pad_update_buttons(0, PAD_SQUARE, &mut state);
        assert_eq!(state.pads[0].buttons_held, PAD_SQUARE);
        assert_eq!(state.pads[0].buttons_just_pressed, 0);
        assert_eq!(state.pads[0].buttons_just_released, PAD_CROSS);

        // 5. Sys_PadRead
        sys_padread(0x0C, &mut state);
        assert!(state.pad_read_called);
        assert_eq!(state.last_pad_read_cmd, 0x0C);
    }
}
