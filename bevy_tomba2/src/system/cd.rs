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
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct CdStreamState {
    pub seek_offset: u32,
    pub seek_stride: u32,
    pub sectors_remaining: i32,
    pub sector_counter: u32,
    pub event_flag: u8,
    pub current_buffer_slot: usize,
    pub next_buffer_slot: usize,
    pub slot_status: [u16; 16],
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
}
