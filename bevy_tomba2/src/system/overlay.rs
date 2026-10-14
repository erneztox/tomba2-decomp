//! Overlay loader and dispatch routines — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/Sys_LoadOverlay.c (0x8001D2A8)
//!   - src/main/system/Sys_InitOverlay.c (0x8001CB00)
//!   - src/main/system/Sys_LoadBinary.c (0x8001D364)
//!   - src/main/system/Sys_OverlayDispatch.c (0x800750D8)

use bevy::prelude::*;
use crate::system::{OVERLAY_EVENT_SLOT, TombaSystemState};

/// Special dispatch code: initialize overlay subsystem (0xFE)
pub const DISPATCH_INIT: u8 = 0xFE;
/// Special dispatch code: test joypad input during boot (0xFF)
pub const DISPATCH_PAD_TEST: u8 = 0xFF;

/// Bit 0 of mode_flags (param_4): async/mode flag stored in DAT_801fe147
pub const OVERLAY_MODE_ASYNC_MASK: u32 = 0x01;
/// Bits 1-2 of mode_flags (param_4): callback index stored in DAT_800be0e4
pub const OVERLAY_CALLBACK_INDEX_SHIFT: u32 = 1;
pub const OVERLAY_CALLBACK_INDEX_MASK: u32 = 0x03;

/// Category shift for binary ID (bits 3..5 select one of 8 overlay tables)
pub const BINARY_CATEGORY_SHIFT: u32 = 3;
pub const BINARY_CATEGORY_MASK: u32 = 0x07;

/// Sub-index mask for binary ID (bits 0..2 select entry within category table)
pub const BINARY_SUB_INDEX_MASK: u32 = 0x07;

/// Multiplier in bytes per sector unit for PS1 binary segments (8 bytes)
pub const BINARY_BLOCK_UNIT_SIZE: u32 = 8;

/// SYS-512: `Sys_LoadOverlay` (`0x8001D2A8`)
/// Loads overlay binary from CD: sets up params, calls CD read + overlay init
///
/// Ground truth: src/main/system/Sys_LoadOverlay.c (func_8001D2A8)
/// References global state at DAT_80010058, sets event 2, sets callback to System_InitMain
///
/// Logic follows the exact sequence from the Ghidra dump:
/// - Set overlay type from DAT_80010058
/// - Set event flag to 2
/// - Store overlay ID (param_1) at DAT_801fe146
/// - Store segment params (param_2, param_3) at _DAT_801fe134 / _DAT_801fe138
/// - Set mode bit (param_4 & 1) at DAT_801fe147
/// - Set callback (param_4 >> 1) at DAT_800be0e4
/// - Trigger System_InitMain via Sys_SetCallback
pub fn sys_loadoverlay(
    overlay_id: u8,    // param_1: overlay ID (maps to entity[0x6A] context)
    segment_addr: u32, // param_2: segment address / offset
    segment_size: u32, // param_3: segment size
    mode_flags: u32,   // param_4: mode + flags (bit 0 = mode, bits 1-2 = callback)
    mut system_state: ResMut<TombaSystemState>,
) {
    // Direct correlation with original C (src/main/system/Sys_LoadOverlay.c):
    // local_20->kind = DAT_80010058 (overlay type table pointer)
    system_state.overlay_type = 0x80010058;

    // Sys_SetEvent(2) — trigger overlay load event (disable/reset event 2)
    crate::system::events::sys_setevent(OVERLAY_EVENT_SLOT, &mut *system_state);

    // DAT_801fe147 = (u8)param_4 & 1
    system_state.mode_bit = (mode_flags & OVERLAY_MODE_ASYNC_MASK) as u8;

    // DAT_800be0e4 = *(u8*)((int)local_20 + (param_4 >> 1 & 3U))
    // Maps callback index (0-3) from mode flags
    system_state.callback_index = ((mode_flags >> OVERLAY_CALLBACK_INDEX_SHIFT) & OVERLAY_CALLBACK_INDEX_MASK) as u8;

    // _DAT_801fe134 = param_2; _DAT_801fe138 = param_3
    system_state.segment_addr = segment_addr;
    system_state.segment_size = segment_size;

    // DAT_801fe146 = param_1
    system_state.active_overlay = overlay_id;

    // Sys_SetCallback(2, System_InitMain)
    crate::system::events::sys_setcallback(OVERLAY_EVENT_SLOT, crate::system::SystemInitMain, &mut *system_state);
}

/// SYS-510: `Sys_InitOverlay` (`0x8001CB00`)
/// Calls overlay init function at 0x8011534C then internal callback
/// Ground truth: src/main/system/Sys_InitOverlay.c (func_8001CB00)
pub fn sys_initoverlay(mut system_state: ResMut<TombaSystemState>) {
    // Direct correlation: Overlay_8011534c() -> overlay init handler (from src/overlays/)
    system_state.init_overlay_called = true;
}

/// SYS-511: `Sys_LoadBinary` (`0x8001D364`)
/// Computes segment address and size from binary descriptor tables, then calls `sys_loadoverlay`.
///
/// Ground truth: src/main/system/Sys_LoadBinary.c (func_8001D364)
/// Mathematical formulas:
/// - category = (binary_id >> BINARY_CATEGORY_SHIFT) & BINARY_CATEGORY_MASK
/// - segment_addr = g_overlay_base + (start_block as u32) * 8
/// - segment_size = segment_addr + ((block_count as u32) - 2) * 8
/// - mode_flags = (flags & 1) | 2
pub fn sys_loadbinary(
    binary_id: u32,
    flags: u32,
    start_block: u16,
    block_count: u16,
    mut system_state: ResMut<TombaSystemState>,
) {
    let category = ((binary_id >> BINARY_CATEGORY_SHIFT) & BINARY_CATEGORY_MASK) as u8;
    let base = system_state.overlay_base_addr;
    let segment_addr = base + (start_block as u32) * BINARY_BLOCK_UNIT_SIZE;
    let segment_size = segment_addr + ((block_count as u32).saturating_sub(2)) * BINARY_BLOCK_UNIT_SIZE;
    let mode_flags = (flags & OVERLAY_MODE_ASYNC_MASK) | 2;

    system_state.last_loaded_binary_id = Some(binary_id);
    sys_loadoverlay(category, segment_addr, segment_size, mode_flags, system_state);
}

/// SYS-515: `Sys_OverlayDispatch` (`0x800750D8`)
/// Overlay dispatcher: 0xFF=pad test, 0xFE=init, else loads overlay via Sys_LoadBinary (0x8001D364)
/// Ground truth: src/main/system/Sys_OverlayDispatch.c (func_800750D8)
pub fn sys_overlaydispatch(
    mut system_state: ResMut<TombaSystemState>,
    dispatch_code: u8,
) {
    system_state.overlay_dispatch_code = dispatch_code;
    match dispatch_code {
        DISPATCH_INIT => system_state.init_overlay_called = true,
        DISPATCH_PAD_TEST => system_state.pad_test_called = true,
        code => {
            system_state.load_overlay_path = true;
            // Sys_LoadBinary(code, 0)
            sys_loadbinary(code as u32, 0, 0, 2, system_state);
        }
    }
}

/// Flag bit 4 (0x10): Overlay load completion / abort signal in DAT_800be0e4
pub const OVERLAY_SIGNAL_COMPLETE: u8 = 0x10;

/// SYS-508b: `Sys_SetFlag10` (`0x8001CF78`)
/// Sets bit 4 (0x10) on system callback flag at DAT_800be0e4 to signal completion.
///
/// Ground truth: src/main/system/Sys_SetFlag10.c (func_8001CF78)
pub fn sys_setflag10(system_state: &mut TombaSystemState) {
    system_state.callback_index |= OVERLAY_SIGNAL_COMPLETE;
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::system::EventState;

    #[test]
    fn test_sys_loadoverlay() {
        let mut app = App::new();
        app.insert_resource(TombaSystemState::default());

        app.add_systems(Update, |state: ResMut<TombaSystemState>| {
            sys_loadoverlay(0x10, 0x1000, 0x2000, 0b011, state);
        });
        app.update();

        let state = app.world().resource::<TombaSystemState>();
        assert_eq!(state.active_overlay, 0x10);
        assert_eq!(state.segment_addr, 0x1000);
        assert_eq!(state.segment_size, 0x2000);
        assert_eq!(state.mode_bit, 1);
        assert_eq!(state.callback_index, 1);
        assert_eq!(state.overlay_type, 0x80010058);
        assert_eq!(state.events[OVERLAY_EVENT_SLOT].state, EventState::Armed);
        assert_eq!(state.events[OVERLAY_EVENT_SLOT].callback, crate::system::SystemInitMain);
        assert_eq!(state.callback_target, Some(crate::system::SystemInitMain));
    }

    #[test]
    fn test_sys_overlaydispatch() {
        let mut app = App::new();
        app.insert_resource(TombaSystemState::default());

        // Test Init branch
        app.add_systems(Update, |state: ResMut<TombaSystemState>| {
            sys_overlaydispatch(state, DISPATCH_INIT);
        });
        app.update();

        let state = app.world().resource::<TombaSystemState>();
        assert!(state.init_overlay_called);
    }

    #[test]
    fn test_sys_loadbinary() {
        let mut app = App::new();
        let mut init_state = TombaSystemState::default();
        init_state.overlay_base_addr = 0x80100000;
        app.insert_resource(init_state);

        app.add_systems(Update, |state: ResMut<TombaSystemState>| {
            // Binary ID 0x18: (0x18 >> 3) & 7 = 3 (category 3)
            // start_block: 10 -> segment_addr = 0x80100000 + 10 * 8 = 0x80100050
            // block_count: 5 -> segment_size = 0x80100050 + (5 - 2) * 8 = 0x80100068
            sys_loadbinary(0x18, 1, 10, 5, state);
        });
        app.update();

        let state = app.world().resource::<TombaSystemState>();
        assert_eq!(state.active_overlay, 3);
        assert_eq!(state.segment_addr, 0x80100050);
        assert_eq!(state.segment_size, 0x80100068);
        assert_eq!(state.mode_bit, 1);
        assert_eq!(state.callback_index, 1);
        assert_eq!(state.last_loaded_binary_id, Some(0x18));
    }

    #[test]
    fn test_sys_setflag10() {
        let mut state = TombaSystemState::default();
        state.callback_index = 0x01;
        sys_setflag10(&mut state);
        assert_eq!(state.callback_index, 0x11);
    }
}
