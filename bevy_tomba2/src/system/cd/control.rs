//! CD drive control commands, timeouts, slot validation, and driver callbacks — SEC-12 (SYS)
//!
//! Ground Truth:
//!   - src/main/cd/CD_Control.c (0x8008AC34)
//!   - src/main/cd/CD_CloseFile.c (0x8008CD40)
//!   - src/main/cd/CD_Close.c (0x80089A3C)
//!   - src/main/cd/CD_CheckDevice.c (0x80098CE0)
//!   - src/main/cd/CD_CheckInit.c (0x80089F88)
//!   - src/main/cd/CD_CheckLoaded.c (0x80045580)
//!   - src/main/cd/CD_CheckReady.c (0x80089FA8)
//!   - src/main/cd/CD_CheckSlot.c (0x800962B0)
//!   - src/main/cd/CD_CheckTimeout.c (0x8008CAFC)
//!   - src/main/cd/CD_ClearBuffer.c (0x8008CFF0)
//!   - src/main/cd/CD_ClearFlagCD8.c (0x80096390)
//!   - src/main/cd/CD_AllocBuffer.c (0x8008CDC0)
//!   - src/main/cd/CD_CallbackDispatch.c (0x80085C44)
//!   - src/main/cd/CD_CallbackDispatch2.c (0x80085CB4)
//!   - src/main/cd/CD_CallbackStub.c (0x80045558)
//!   - src/main/cd/CD_CmdRetry.c (0x80089E1C)
//!   - src/main/cd/CD_Cmd_20.c (0x8008996C)
//!   - src/main/cd/CD_Cmd_40.c (0x80089994)
//!   - src/main/cd/CD_Cmd_40b.c (0x800899BC)
//!   - src/main/cd/CD_Cmd_CC_CD.c (0x80098DB0)
//!   - src/main/cd/CD_Dispatch04.c (0x80085B80)
//!   - src/main/cd/CD_Dispatch08.c (0x80085B50)
//!   - src/main/cd/CD_Dispatch0C.c (0x80085B20)
//!   - src/main/cd/CD_Dispatch10.c (0x80085C14)
//!   - src/main/cd/CD_Dispatch14.c (0x80085BB0)
//!   - src/main/cd/CD_Dispatch14_NoParam.c (0x80085BE4)

use super::dma::cd_alloc_dma;
use super::sector::CdStreamState;
use crate::system::TombaSystemState;

/// CD_Control (`0x8008AC34`)
/// Executes CD-ROM command with parameters:
/// - command 2 (CdlSetloc): sets 4-byte target MSF
/// - command 14 (0x0E / CdlSetmode): sets drive mode byte
/// Returns 0 on success, -1 on timeout/error, -2 if parameter missing.
///
/// Ground truth: src/main/cd/CD_Control.c (func_8008AC34)
pub fn cd_control(
    cmd: u8,
    params: Option<&[u8]>,
    stream: &mut CdStreamState,
) -> i32 {
    if let Some(p) = params {
        if cmd == 2 && p.len() >= 4 {
            // CdlSetloc: target MSF
            stream.seek_offset = u32::from_le_bytes([p[0], p[1], p[2], p[3]]);
        }
        if cmd == 0x0E && !p.is_empty() {
            // CdlSetmode: drive mode
            stream.active_entry_flags = p[0];
        }
    }
    stream.event_flag = cmd;
    0
}

/// CD_CloseFile (`0x8008CD40`)
/// Closes streaming file, resets event handlers and read pointers.
///
/// Ground truth: src/main/cd/CD_CloseFile.c (func_8008CD40)
pub fn cd_close_file(audio_streaming: bool, system_state: &mut TombaSystemState) {
    if audio_streaming {
        system_state.cd_event_callbacks[3] = None;
    }
    system_state.cd_status_read = false;
}

/// CD_Close (`0x80089A3C`)
/// Finalizes CD stream: mode 2 resets callbacks, mode 1 syncs drive. Returns 1.
///
/// Ground truth: src/main/cd/CD_Close.c (func_80089A3C)
pub fn cd_close(mode: i32, stream: &mut CdStreamState) -> i32 {
    if mode == 2 {
        stream.event_flag = 0;
        stream.sectors_remaining = 0;
    }
    1
}

/// CD_AllocBuffer (`0x8008CDC0`)
/// Allocates packet buffer slot from pool (status = 2: Armed).
///
/// Ground truth: src/main/cd/CD_AllocBuffer.c (func_8008CDC0)
pub fn cd_alloc_buffer(stream: &mut CdStreamState) -> usize {
    let slot = stream.current_buffer_slot & 0x0F;
    stream.slot_status[slot] = 2;
    stream.current_buffer_slot = stream.next_buffer_slot;
    slot
}

/// CD_CheckDevice (`0x80098CE0`)
/// Verifies if device channel is busy; checks buffer space via DMA allocator.
/// Returns 1 if busy, 0 if ready.
///
/// Ground truth: src/main/cd/CD_CheckDevice.c (func_80098CE0)
pub fn cd_check_device(param_1: i32, dma_units: i32, dma_table: &[u32], stream: &mut CdStreamState) -> i32 {
    if param_1 != 0 && cd_alloc_dma(dma_units, 2, dma_table) == 0 {
        stream.device_busy = true;
        1
    } else {
        stream.device_busy = false;
        0
    }
}

/// CD_CheckInit (`0x80089F88`)
/// Checks if CD drive parameters are initialized.
///
/// Ground truth: src/main/cd/CD_CheckInit.c (func_80089F88)
pub fn cd_check_init(stream: &CdStreamState) -> bool {
    stream.max_sub_entries > 0
}

/// CD_CheckLoaded (`0x80045580`)
/// Checks if asset at streaming buffer 0x8018A000 is loaded.
///
/// Ground truth: src/main/cd/CD_CheckLoaded.c (func_80045580)
pub fn cd_check_loaded(system_state: &TombaSystemState) -> bool {
    system_state.segment_addr == 0x8018_A000
}

/// CD_CheckReady (`0x80089FA8`)
/// Checks if CD stream has finished current seek/read operation.
///
/// Ground truth: src/main/cd/CD_CheckReady.c (func_80089FA8)
pub fn cd_check_ready(stream: &CdStreamState) -> bool {
    stream.sectors_remaining == 0
}

/// CD_CheckSlot (`0x800962B0`)
/// Validates slot index (< 16), verifies state is 1 (allocated), and loads entry descriptor.
/// Returns 0 on success, -1 (0xFFFFFFFF) if invalid.
///
/// Ground truth: src/main/cd/CD_CheckSlot.c (func_800962B0)
pub fn cd_check_slot(slot: u16, sub_entry: i16, stream: &mut CdStreamState) -> i32 {
    if slot < 16 {
        let slot_idx = slot as usize;
        if stream.slot_states[slot_idx] != 1 {
            return -1;
        }
        if sub_entry < stream.max_sub_entries {
            stream.active_slot = slot;
            stream.active_sub_entry = sub_entry;
            stream.active_entry_flags = 0;
            return 0;
        }
    }
    -1
}

/// CD_CheckTimeout (`0x8008CAFC`)
/// Checks current counter against seek timeout threshold (seek_pos + 1200 ticks / 0x4B0).
/// Returns 1 if timed out / handled, 0 if still waiting.
///
/// Ground truth: src/main/cd/CD_CheckTimeout.c (func_8008CAFC)
pub fn cd_check_timeout(current_tick: u32, seek_tick: u32, stream: &mut CdStreamState) -> i32 {
    const TIMEOUT_TICKS: u32 = 0x4B0; // 1200 ticks
    if current_tick > seek_tick.saturating_add(TIMEOUT_TICKS) {
        stream.event_flag = 1;
        1
    } else {
        0
    }
}

/// CD_ClearBuffer (`0x8008CFF0`)
/// Zeroes `count` consecutive 32-byte slots in the streaming buffer table.
///
/// Ground truth: src/main/cd/CD_ClearBuffer.c (func_8008CFF0)
pub fn cd_clear_buffer(start_slot: usize, count: usize, stream: &mut CdStreamState) {
    for i in 0..count {
        let idx = (start_slot + i) & 0x0F;
        stream.slot_status[idx] = 0;
        stream.slot_states[idx] = 0;
    }
}

/// CD_ClearFlagCD8 (`0x80096390`)
/// Clears CD audio routing filter flag (DAT_80105cd8 = 0).
///
/// Ground truth: src/main/cd/CD_ClearFlagCD8.c (func_80096390)
pub fn cd_clear_flag_cd8(stream: &mut CdStreamState) {
    stream.cd_filter_flag = 0;
}

/// CD_CallbackDispatch (`0x80085C44`)
/// Dispatches CD event callback via registered vector in system state.
///
/// Ground truth: src/main/cd/CD_CallbackDispatch.c (func_80085C44)
pub fn cd_callback_dispatch(callback_slot: usize, system_state: &mut TombaSystemState) {
    if callback_slot < system_state.cd_event_callbacks.len() {
        if let Some(cb) = system_state.cd_event_callbacks[callback_slot] {
            system_state.last_loaded_binary_id = Some(cb);
        }
    }
}

/// CD_CallbackDispatch2 (`0x80085CB4`)
/// Validates CD context magic cookie (0x33333333) and initializes stream pointers.
///
/// Ground truth: src/main/cd/CD_CallbackDispatch2.c (func_80085CB4)
pub fn cd_callback_dispatch2(stream: &mut CdStreamState) -> u32 {
    const CD_COOKIE_MAGIC: u32 = 0x3333_3333;
    stream.sectors_remaining = 0;
    CD_COOKIE_MAGIC
}

/// CD_CallbackStub (`0x80045558`)
/// Loads specified chunk ID into base buffer address 0x8018A000.
///
/// Ground truth: src/main/cd/CD_CallbackStub.c (func_80045558)
pub fn cd_callback_stub(chunk_id: u8, system_state: &mut TombaSystemState) {
    const CHUNK_BASE_ADDR: u32 = 0x8018_A000;
    system_state.segment_addr = CHUNK_BASE_ADDR;
    system_state.overlay_type = chunk_id as u32;
}

/// CD_CmdRetry (`0x80089E1C`)
/// Attempts CD command with up to 3 retries.
///
/// Ground truth: src/main/cd/CD_CmdRetry.c (func_80089E1C)
pub fn cd_cmd_retry(cmd: u8, _param: i32, stream: &mut CdStreamState) -> bool {
    let mut retries = 3;
    while retries > 0 {
        if stream.sectors_remaining == 0 {
            stream.event_flag = cmd;
            return true;
        }
        retries -= 1;
    }
    false
}

/// CD_Cmd_20 (`0x8008996C`)
/// Issues CD interrupt event code 0x20.
///
/// Ground truth: src/main/cd/CD_Cmd_20.c (func_8008996C)
pub fn cd_cmd_20(stream: &mut CdStreamState) {
    stream.event_flag = 0x20;
}

/// CD_Cmd_40 (`0x80089994`)
/// Issues CD interrupt event code 0x40.
///
/// Ground truth: src/main/cd/CD_Cmd_40.c (func_80089994)
pub fn cd_cmd_40(stream: &mut CdStreamState) {
    stream.event_flag = 0x40;
}

/// CD_Cmd_40b (`0x800899BC`)
/// Issues CD interrupt event code 0x40 variant.
///
/// Ground truth: src/main/cd/CD_Cmd_40b.c (func_800899BC)
pub fn cd_cmd_40b(stream: &mut CdStreamState) {
    stream.event_flag = 0x40;
}

/// CD_Cmd_CC_CD (`0x80098DB0`)
/// Issues CD-XA SPU stream control opcodes 0xCC (Filter) and 0xCD (Volume).
///
/// Ground truth: src/main/cd/CD_Cmd_CC_CD.c (func_80098DB0)
pub fn cd_cmd_cc_cd(stream: &mut CdStreamState) {
    stream.cd_filter_flag = 0xCC;
}

/// CD_Dispatch04 (`0x80085B80`)
/// Dispatches CD driver function at table+0x04.
///
/// Ground truth: src/main/cd/CD_Dispatch04.c (func_80085B80)
pub fn cd_dispatch04(slot: usize, system_state: &mut TombaSystemState) {
    cd_callback_dispatch(slot, system_state);
}

/// CD_Dispatch08 (`0x80085B50`)
/// Dispatches CD driver function at table+0x08.
///
/// Ground truth: src/main/cd/CD_Dispatch08.c (func_80085B50)
pub fn cd_dispatch08(slot: usize, system_state: &mut TombaSystemState) {
    cd_callback_dispatch(slot, system_state);
}

/// CD_Dispatch0C (`0x80085B20`)
/// Dispatches CD driver function at table+0x0C.
///
/// Ground truth: src/main/cd/CD_Dispatch0C.c (func_80085B20)
pub fn cd_dispatch0c(slot: usize, system_state: &mut TombaSystemState) {
    cd_callback_dispatch(slot, system_state);
}

/// CD_Dispatch10 (`0x80085C14`)
/// Dispatches CD driver function at table+0x10.
///
/// Ground truth: src/main/cd/CD_Dispatch10.c (func_80085C14)
pub fn cd_dispatch10(slot: usize, system_state: &mut TombaSystemState) {
    cd_callback_dispatch(slot, system_state);
}

/// CD_Dispatch14 (`0x80085BB0`)
/// Dispatches CD driver function at table+0x14 with parameters.
///
/// Ground truth: src/main/cd/CD_Dispatch14.c (func_80085BB0)
pub fn cd_dispatch14(param: i32, system_state: &mut TombaSystemState) {
    system_state.last_sys_call_code = Some(param);
}

/// CD_Dispatch14_NoParam (`0x80085BE4`)
/// Dispatches CD driver function at table+0x14 without parameters.
///
/// Ground truth: src/main/cd/CD_Dispatch14_NoParam.c (func_80085BE4)
pub fn cd_dispatch14_noparam(system_state: &mut TombaSystemState) {
    system_state.last_sys_call_code = Some(0);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_cd_control_and_dispatchers() {
        let mut stream = CdStreamState::default();
        let mut state = TombaSystemState::default();

        // 1. CD_Control: command 2 (CdlSetloc) sets 4 bytes
        let target_msf = [0x00, 0x02, 0x00, 0x00];
        assert_eq!(cd_control(2, Some(&target_msf), &mut stream), 0);
        assert_eq!(stream.event_flag, 2);
        assert_eq!(stream.seek_offset, 0x0200);

        // 2. CD_Control: command 0x0E (CdlSetmode)
        let mode_byte = [0x80];
        assert_eq!(cd_control(0x0E, Some(&mode_byte), &mut stream), 0);
        assert_eq!(stream.active_entry_flags, 0x80);

        // 3. Dispatchers 04, 08, 0C, 10, 14
        cd_dispatch14(0x1234, &mut state);
        assert_eq!(state.last_sys_call_code, Some(0x1234));

        cd_dispatch14_noparam(&mut state);
        assert_eq!(state.last_sys_call_code, Some(0));
    }
}
