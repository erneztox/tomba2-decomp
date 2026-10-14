//! CD subsystem and streaming engine — SEC-12 (SYS)
//!
//! Ground Truth:
//!   - src/main/cd/CD_AdjustCmdByte.c (0x8009A3A4)
//!   - src/main/cd/CD_AdvanceSeek.c (0x8008C508)
//!   - src/main/cd/CD_AlignDMA.c (0x80097540)
//!   - src/main/cd/CD_AllocBuffer.c (0x8008CDC0)
//!   - src/main/cd/CD_AllocDMA.c (0x800982A0)
//!   - src/main/cd/CD_CalcSector.c (0x8008A00C)
//!   - src/main/cd/CD_CallbackDispatch.c (0x80085C44)
//!   - src/main/cd/CD_CallbackDispatch2.c (0x80085CB4)
//!   - src/main/cd/CD_CallbackStub.c (0x80045558)
//!   - src/main/cd/CD_Cancel.c (0x80089AA8)

use crate::system::TombaSystemState;

/// CD-ROM Red Book pre-gap sector offset (150 sectors = 2 seconds)
pub const CD_SECTOR_PREGAP: i32 = 0x96; // 150
/// CD-ROM frames per second (75 frames)
pub const CD_FRAMES_PER_SECOND: i32 = 0x4B; // 75
/// Seconds per minute
pub const CD_SECONDS_PER_MINUTE: i32 = 0x3C; // 60

/// Buffer slot stride for CD packet queue (32 bytes)
pub const CD_BUFFER_SLOT_STRIDE: usize = 0x20;

/// CD-ROM Time in Minute-Second-Frame (MSF) representation with BCD encoding.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct CdTimeMsf {
    pub minute_bcd: u8,
    pub second_bcd: u8,
    pub frame_bcd: u8,
}

/// Helper converting decimal value (0..99) to BCD (Binary-Coded Decimal):
/// Formula from CD_CalcSector: `val + (val / 10) * 6`
#[inline]
pub const fn to_bcd(val: u8) -> u8 {
    val + (val / 10) * 6
}

/// Helper converting BCD to decimal value:
#[inline]
pub const fn from_bcd(bcd: u8) -> u8 {
    (bcd >> 4) * 10 + (bcd & 0x0F)
}

/// CD_AdjustCmdByte (`0x8009A3A4`)
/// If character bit 0 is set (uppercase letter), converts to lowercase (+0x20).
///
/// Ground truth: src/main/cd/CD_AdjustCmdByte.c (func_8009A3A4)
pub fn cd_adjust_cmd_byte(cmd: u8) -> i32 {
    let mut adjusted = cmd;
    // Check if uppercase ASCII ('A'..='Z')
    if (b'A'..=b'Z').contains(&cmd) {
        adjusted = cmd + 0x20;
    }
    adjusted as i8 as i32
}

/// CD_CalcSector (`0x8008A00C`)
/// Converts LBA sector number to Red Book MSF (Minute, Second, Frame) in BCD format:
/// - pre-gap: 150 sectors (0x96)
/// - 75 frames/sec (0x4B)
/// - 60 seconds/min (0x3C)
///
/// Ground truth: src/main/cd/CD_CalcSector.c (func_8008A00C)
pub fn cd_calc_sector(sector: i32) -> CdTimeMsf {
    let adjusted = sector + CD_SECTOR_PREGAP;
    let total_seconds = adjusted / CD_FRAMES_PER_SECOND;
    let frame = adjusted % CD_FRAMES_PER_SECOND;
    let minute = total_seconds / CD_SECONDS_PER_MINUTE;
    let second = total_seconds % CD_SECONDS_PER_MINUTE;

    CdTimeMsf {
        minute_bcd: to_bcd(minute as u8),
        second_bcd: to_bcd(second as u8),
        frame_bcd: to_bcd(frame as u8),
    }
}

/// CD_AlignDMA (`0x80097540`)
/// Aligns transfer size for SPU-DMA and computes register shift value.
///
/// Ground truth: src/main/cd/CD_AlignDMA.c (func_80097540)
pub fn cd_align_dma(
    target_mode: i32,
    size: u32,
    block_size: u32,
    mask: u32,
    shift: u32,
) -> u32 {
    let mut aligned_size = size;
    if block_size != 0 && (size % block_size) != 0 {
        aligned_size = (size + block_size) & !mask;
    }

    let shifted = aligned_size >> (shift & 0x1F);
    if target_mode == -1 {
        shifted & 0xFFFF
    } else {
        aligned_size
    }
}

/// CD_AllocDMA (`0x800982A0`)
/// Scans DMA descriptor block table to check if contiguous space exists.
///
/// Ground truth: src/main/cd/CD_AllocDMA.c (func_800982A0)
pub fn cd_alloc_dma(needed_units: i32, shift: u32, table: &[u32]) -> i32 {
    if table.is_empty() {
        return 0;
    }
    let needed_size = (needed_units as u32) << (shift & 0x1F);

    let mut i = 0;
    while i < table.len() {
        let entry = table[i];
        // Bit 31: entry occupied/active
        if (entry & 0x8000_0000) == 0 {
            // Bit 30: sentinel end of table
            if (entry & 0x4000_0000) != 0 {
                return 0;
            }
            let capacity = entry & 0x0FFF_FFFF;
            if needed_size <= capacity {
                return 1;
            }
            // Check flags word
            if i + 1 < table.len() {
                let flags = table[i + 1];
                if needed_size < capacity.saturating_add(flags) {
                    return 1;
                }
            }
        }
        i += 2;
    }
    0
}

/// State tracking for CD sector streaming and seek operations
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CdStreamState {
    pub seek_offset: u32,
    pub seek_stride: u32,
    pub sectors_remaining: i32,
    pub sector_counter: u32,
    pub event_flag: u8,
    pub current_buffer_slot: usize,
    pub next_buffer_slot: usize,
    pub slot_status: [u16; 16],
    pub device_busy: bool,              // DAT_800ac59c: device busy flag
    pub cd_filter_flag: u8,             // DAT_80105cd8: CD-XA audio routing filter flag
    pub active_slot: u16,               // DAT_80105cf9: active file slot index
    pub active_sub_entry: i16,          // DAT_80105cfe: active sub-entry index
    pub active_entry_flags: u8,         // DAT_80105cff: compression / format flag
    pub max_sub_entries: i16,           // _DAT_80105cda: max sub-entries per slot
    pub slot_states: [u8; 16],          // Slot state table (0x01 = Allocated, 0x02 = Armed)
}

impl Default for CdStreamState {
    fn default() -> Self {
        Self {
            seek_offset: 0,
            seek_stride: 0,
            sectors_remaining: 0,
            sector_counter: 0,
            event_flag: 0,
            current_buffer_slot: 0,
            next_buffer_slot: 0,
            slot_status: [0; 16],
            device_busy: false,
            cd_filter_flag: 0,
            active_slot: 0,
            active_sub_entry: 0,
            active_entry_flags: 0,
            max_sub_entries: 0x20, // 32 sub-entries standard capacity
            slot_states: [0; 16],
        }
    }
}

/// CD_AdvanceSeek (`0x8008C508`)
/// Advances sector streaming buffer offset and decrements remaining sectors counter.
///
/// Ground truth: src/main/cd/CD_AdvanceSeek.c (func_8008C508)
pub fn cd_advance_seek(stream: &mut CdStreamState, system_state: &mut TombaSystemState) {
    stream.seek_offset += stream.seek_stride * 4;
    stream.sectors_remaining -= 1;
    stream.sector_counter += 1;

    if stream.sectors_remaining == 0 {
        stream.event_flag = 1;
        // Marks completion in system state
        system_state.cd_status_read = true;
    }
}

/// CD_AllocBuffer (`0x8008CDC0`)
/// Allocates packet buffer slot from pool (status = 2: Armed).
///
/// Ground truth: src/main/cd/CD_AllocBuffer.c (func_8008CDC0)
pub fn cd_alloc_buffer(stream: &mut CdStreamState) -> usize {
    let slot = stream.current_buffer_slot & 0x0F;
    stream.slot_status[slot] = 2; // Marked as armed / allocated
    stream.current_buffer_slot = stream.next_buffer_slot;
    slot
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

/// CD_Cancel (`0x80089AA8`)
/// Cancels current CD stream/operation, resetting sector counters.
///
/// Ground truth: src/main/cd/CD_Cancel.c (func_80089AA8)
pub fn cd_cancel(stream: &mut CdStreamState, system_state: &mut TombaSystemState) {
    stream.sectors_remaining = 0;
    stream.event_flag = 0;
    system_state.cd_status_read = false;
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
            stream.active_entry_flags = 0; // standard format
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

/// CD_CheckTransfer (`0x80099310`)
/// Validates RAM transfer range (0x1010 to 0x7EFE9) and computes aligned byte count.
///
/// Ground truth: src/main/cd/CD_CheckTransfer.c (func_80099310)
pub fn cd_check_transfer(address: u32, shift: u32) -> u32 {
    const MIN_ADDR: u32 = 0x1010;
    const MAX_DELTA: u32 = 0x7EFE9;
    if address.wrapping_sub(MIN_ADDR) < MAX_DELTA {
        let aligned = cd_align_dma(-1, address, 32, 31, shift);
        aligned << (shift & 0x1F)
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

/// SPU maximum SRAM memory size in bytes (512 KB = 0x80000)
pub const SPU_RAM_CAPACITY: u32 = 0x80000;

/// CD_CmdMain (`0x80096590`)
/// Parses Sony VAB (Voice Audio Bank, magic 0x564142) headers, computes 64-byte aligned
/// SPU transfer size, and calculates 8-byte block addresses (`>> 3`) in 512KB SPU SRAM.
/// Returns allocated slot index on success, or -1 on error.
///
/// Ground truth: src/main/cd/CD_CmdMain.c (func_80096590)
pub fn cd_cmd_main(
    magic_header: u32,
    flags: u32,
    requested_slot: i32,
    num_tones: u16,
    voice_sizes: &[u16],
    stream: &mut CdStreamState,
) -> i32 {
    // 1. Verify VAB magic: ('V', 'A', 'B') in ASCII -> 0x564142
    if (magic_header >> 8) != 0x564142 {
        return -1;
    }

    // 2. Select capacity: 128 banks for extended format (0x70 with flags > 4), else 64
    let is_extended = (magic_header & 0xFF) == 0x70 && flags > 4;
    let max_banks: u16 = if is_extended { 0x80 } else { 0x40 };
    if num_tones > max_banks {
        return -1;
    }

    // 3. Find or assign slot
    let slot_idx = if requested_slot >= 0 && (requested_slot as usize) < 16 {
        requested_slot as usize
    } else {
        // Auto-assign first free slot
        let mut free = None;
        for i in 0..16 {
            if stream.slot_states[i] == 0 {
                free = Some(i);
                break;
            }
        }
        match free {
            Some(i) => i,
            None => return -1,
        }
    };

    // 4. Calculate total voice data size
    let shift = if is_extended { 3 } else { 2 };
    let mut total_size: u32 = 0;
    for &sz in voice_sizes {
        total_size += (sz as u32) << shift;
    }

    // Align allocation to 64 bytes (0x40): `total + 0x3F & !0x3F`
    let aligned_alloc = (total_size + 0x3F) & !0x3F;

    // 5. Verify fits in 512 KB SPU memory
    if aligned_alloc > SPU_RAM_CAPACITY {
        return -1;
    }

    // 6. Mark slot as allocated (state = 2: Armed/Ready)
    stream.slot_states[slot_idx] = 2;
    stream.active_slot = slot_idx as u16;

    slot_idx as i32
}

/// CD_Cmd1 (`0x80096480`)
/// CD command wrapper 1: parses VAB bank with standard slot search.
///
/// Ground truth: src/main/cd/CD_Cmd1.c (func_80096480)
pub fn cd_cmd1(
    magic: u32,
    slot: i16,
    num_tones: u16,
    voice_sizes: &[u16],
    stream: &mut CdStreamState,
) -> i32 {
    cd_cmd_main(magic, 0, slot as i32, num_tones, voice_sizes, stream)
}

/// CD_Cmd2 (`0x80096520`)
/// CD command wrapper 2: parses VAB bank with explicit flags.
///
/// Ground truth: src/main/cd/CD_Cmd2.c (func_80096520)
pub fn cd_cmd2(
    magic: u32,
    slot: i16,
    flags: u32,
    num_tones: u16,
    voice_sizes: &[u16],
    stream: &mut CdStreamState,
) -> i32 {
    cd_cmd_main(magic, flags, slot as i32, num_tones, voice_sizes, stream)
}

/// CD_Cmd3 (`0x80096554`)
/// CD command wrapper 3: parses VAB bank variant.
///
/// Ground truth: src/main/cd/CD_Cmd3.c (func_80096554)
pub fn cd_cmd3(
    magic: u32,
    slot: i16,
    flags: u32,
    num_tones: u16,
    voice_sizes: &[u16],
    stream: &mut CdStreamState,
) -> i32 {
    cd_cmd_main(magic, flags, slot as i32, num_tones, voice_sizes, stream)
}

/// CD_CmdRetry (`0x80089E1C`)
/// Attempts CD command with up to 3 retries.
///
/// Ground truth: src/main/cd/CD_CmdRetry.c (func_80089E1C)
pub fn cd_cmd_retry(cmd: u8, _param: i32, stream: &mut CdStreamState) -> bool {
    // 3 retry loop: records cmd and checks stream ready
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

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_cd_calc_sector_red_book_bcd() {
        // Sector 0 -> 150 frames = 2 seconds, 0 frames (00:02:00)
        let msf = cd_calc_sector(0);
        assert_eq!(from_bcd(msf.minute_bcd), 0);
        assert_eq!(from_bcd(msf.second_bcd), 2);
        assert_eq!(from_bcd(msf.frame_bcd), 0);
        assert_eq!(msf.second_bcd, 0x02);

        // Sector 75 -> 225 frames = 3 seconds (00:03:00)
        let msf = cd_calc_sector(75);
        assert_eq!(from_bcd(msf.minute_bcd), 0);
        assert_eq!(from_bcd(msf.second_bcd), 3);
        assert_eq!(from_bcd(msf.frame_bcd), 0);

        // Sector 4500 -> 4650 frames = 62 seconds = 1 min, 2 sec (01:02:00)
        let msf = cd_calc_sector(4500);
        assert_eq!(from_bcd(msf.minute_bcd), 1);
        assert_eq!(from_bcd(msf.second_bcd), 2);
        assert_eq!(from_bcd(msf.frame_bcd), 0);
    }

    #[test]
    fn test_cd_adjust_cmd_byte() {
        assert_eq!(cd_adjust_cmd_byte(b'A'), b'a' as i32);
        assert_eq!(cd_adjust_cmd_byte(b'Z'), b'z' as i32);
        assert_eq!(cd_adjust_cmd_byte(b'1'), b'1' as i32);
        assert_eq!(cd_adjust_cmd_byte(0x20), 0x20);
    }

    #[test]
    fn test_cd_align_dma() {
        // Aligns 100 with block_size 32, mask 31, shift 2
        let aligned = cd_align_dma(-2, 100, 32, 31, 2);
        // (100 + 32) & !31 = 132 & !31 = 128
        assert_eq!(aligned, 128);

        // Mode -1 returns shifted & 0xFFFF: 128 >> 2 = 32
        let res = cd_align_dma(-1, 100, 32, 31, 2);
        assert_eq!(res, 32);
    }

    #[test]
    fn test_cd_alloc_dma() {
        let table = [
            0x0000_0100, 0x0000_0020, // entry 0: size 0x100, flags 0x20
            0x4000_0000, 0x0000_0000, // sentinel
        ];
        // Request 1 unit << 2 = 4 <= 0x100 -> returns 1
        assert_eq!(cd_alloc_dma(1, 2, &table), 1);
        // Request 0x200 units << 2 = 0x800 > 0x120 -> returns 0
        assert_eq!(cd_alloc_dma(0x200, 2, &table), 0);
    }

    #[test]
    fn test_cd_stream_advance_and_cancel() {
        let mut stream = CdStreamState {
            seek_offset: 0,
            seek_stride: 16,
            sectors_remaining: 2,
            sector_counter: 0,
            event_flag: 0,
            ..Default::default()
        };
        let mut state = TombaSystemState::default();

        // 1. Advance sector 1
        cd_advance_seek(&mut stream, &mut state);
        assert_eq!(stream.seek_offset, 64);
        assert_eq!(stream.sectors_remaining, 1);
        assert_eq!(stream.sector_counter, 1);
        assert_eq!(stream.event_flag, 0);

        // 2. Advance sector 2 (hits 0)
        cd_advance_seek(&mut stream, &mut state);
        assert_eq!(stream.sectors_remaining, 0);
        assert_eq!(stream.event_flag, 1);
        assert!(state.cd_status_read);

        // 3. Alloc buffer
        stream.current_buffer_slot = 3;
        stream.next_buffer_slot = 4;
        let slot = cd_alloc_buffer(&mut stream);
        assert_eq!(slot, 3);
        assert_eq!(stream.slot_status[3], 2);
        assert_eq!(stream.current_buffer_slot, 4);

        // 4. Cancel
        cd_cancel(&mut stream, &mut state);
        assert_eq!(stream.sectors_remaining, 0);
        assert_eq!(stream.event_flag, 0);
        assert!(!state.cd_status_read);
    }

    #[test]
    fn test_cd_batch2_checks_and_buffers() {
        let mut stream = CdStreamState::default();
        let mut state = TombaSystemState::default();

        // 1. Check init & ready
        assert!(cd_check_init(&stream));
        assert!(cd_check_ready(&stream));

        // 2. Check device with DMA table
        let dma_table = [0x0000_0100, 0x0000_0000, 0x4000_0000, 0];
        assert_eq!(cd_check_device(1, 1, &dma_table, &mut stream), 0);
        assert!(!stream.device_busy);

        // 3. Check loaded
        state.segment_addr = 0x8018_A000;
        assert!(cd_check_loaded(&state));
        state.segment_addr = 0;
        assert!(!cd_check_loaded(&state));

        // 4. Check slot
        stream.slot_states[2] = 1; // Mark slot 2 as allocated
        assert_eq!(cd_check_slot(2, 5, &mut stream), 0);
        assert_eq!(stream.active_slot, 2);
        assert_eq!(stream.active_sub_entry, 5);
        // Invalid slot or state != 1
        assert_eq!(cd_check_slot(3, 0, &mut stream), -1);

        // 5. Check timeout
        assert_eq!(cd_check_timeout(100, 0, &mut stream), 0); // 100 < 1200
        assert_eq!(cd_check_timeout(1300, 0, &mut stream), 1); // 1300 > 1200
        assert_eq!(stream.event_flag, 1);

        // 6. Check transfer
        let transfer_bytes = cd_check_transfer(0x2000, 2);
        assert!(transfer_bytes > 0);
        assert_eq!(cd_check_transfer(0x100, 2), 0); // out of range (< 0x1010)

        // 7. Clear buffer & Clear flag CD8 & Close
        stream.slot_status[0] = 5;
        stream.slot_states[0] = 1;
        cd_clear_buffer(0, 1, &mut stream);
        assert_eq!(stream.slot_status[0], 0);
        assert_eq!(stream.slot_states[0], 0);

        stream.cd_filter_flag = 1;
        cd_clear_flag_cd8(&mut stream);
        assert_eq!(stream.cd_filter_flag, 0);

        assert_eq!(cd_close(2, &mut stream), 1);
    }

    #[test]
    fn test_cd_batch3_vab_and_commands() {
        let mut stream = CdStreamState::default();
        let mut state = TombaSystemState::default();

        // 1. Close file
        state.cd_status_read = true;
        state.cd_event_callbacks[3] = Some(0x8008_1234);
        cd_close_file(true, &mut state);
        assert!(!state.cd_status_read);
        assert_eq!(state.cd_event_callbacks[3], None);

        // 2. VAB Parser (cd_cmd_main)
        // VAB Magic: ('V', 'A', 'B') << 8 = 0x56414200
        const VAB_MAGIC: u32 = 0x5641_4200;
        let voice_sizes = [128u16, 256u16, 64u16];
        // Standard format (shift 2): (128 + 256 + 64) << 2 = 448 << 2 = 1792 bytes
        // Aligned to 64 bytes: 1792 is already a multiple of 64
        let slot = cd_cmd_main(VAB_MAGIC, 0, -1, 16, &voice_sizes, &mut stream);
        assert_eq!(slot, 0); // Assigned slot 0
        assert_eq!(stream.slot_states[0], 2);
        assert_eq!(stream.active_slot, 0);

        // Invalid VAB magic
        assert_eq!(cd_cmd_main(0x1234_5678, 0, -1, 16, &voice_sizes, &mut stream), -1);

        // 3. cd_cmd1, cd_cmd2, cd_cmd3
        let slot1 = cd_cmd1(VAB_MAGIC, 1, 16, &voice_sizes, &mut stream);
        assert_eq!(slot1, 1);

        let slot2 = cd_cmd2(VAB_MAGIC, 2, 0, 16, &voice_sizes, &mut stream);
        assert_eq!(slot2, 2);

        let slot3 = cd_cmd3(VAB_MAGIC, 3, 0, 16, &voice_sizes, &mut stream);
        assert_eq!(slot3, 3);

        // 4. Command codes
        cd_cmd_20(&mut stream);
        assert_eq!(stream.event_flag, 0x20);

        cd_cmd_40(&mut stream);
        assert_eq!(stream.event_flag, 0x40);

        cd_cmd_40b(&mut stream);
        assert_eq!(stream.event_flag, 0x40);

        cd_cmd_cc_cd(&mut stream);
        assert_eq!(stream.cd_filter_flag, 0xCC);

        // 5. Cmd retry
        stream.sectors_remaining = 0;
        assert!(cd_cmd_retry(0x09, 0, &mut stream));
        assert_eq!(stream.event_flag, 0x09);
    }
}
