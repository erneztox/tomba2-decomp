//! CD-ROM sector calculation, BCD encoding, and seek streaming — SEC-12 (SYS)
//!
//! Ground Truth:
//!   - src/main/cd/CD_CalcSector.c (0x8008A00C)
//!   - src/main/cd/CD_DecodeTime.c (0x8008A110)
//!   - src/main/cd/CD_AdvanceSeek.c (0x8008C508)
//!   - src/main/cd/CD_Cancel.c (0x80089AA8)
//!   - src/main/cd/CD_AdjustCmdByte.c (0x8009A3A4)
//!   - src/main/cd/CD_CompareName.c (0x8008BBC8)

use crate::system::TombaSystemState;

/// CD-ROM Red Book pre-gap sector offset (150 sectors = 2 seconds)
pub const CD_SECTOR_PREGAP: i32 = 0x96; // 150
/// CD-ROM frames per second (75 frames)
pub const CD_FRAMES_PER_SECOND: i32 = 0x4B; // 75
/// Seconds per minute
pub const CD_SECONDS_PER_MINUTE: i32 = 0x3C; // 60

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

/// CD_DecodeTime (`0x8008A110`)
/// Decodes Red Book MSF (Minute, Second, Frame) BCD time to LBA sector number.
/// Exact inverse of `CD_CalcSector`.
///
/// Ground truth: src/main/cd/CD_DecodeTime.c (func_8008A110)
pub fn cd_decode_time(msf: &CdTimeMsf) -> i32 {
    let minute = from_bcd(msf.minute_bcd) as i32;
    let second = from_bcd(msf.second_bcd) as i32;
    let frame = from_bcd(msf.frame_bcd) as i32;

    (minute * CD_SECONDS_PER_MINUTE + second) * CD_FRAMES_PER_SECOND + frame - CD_SECTOR_PREGAP
}

/// CD_CompareName (`0x8008BBC8`)
/// Compares two 12-byte CD filenames case-insensitively (e.g. "TOMBA2.DAT;1").
///
/// Ground truth: src/main/cd/CD_CompareName.c (func_8008BBC8)
pub fn cd_compare_name(name_a: &[u8], name_b: &[u8]) -> bool {
    let len = name_a.len().min(name_b.len()).min(12);
    name_a[..len].eq_ignore_ascii_case(&name_b[..len])
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
    pub device_busy: bool,
    pub cd_filter_flag: u8,
    pub active_slot: u16,
    pub active_sub_entry: i16,
    pub active_entry_flags: u8,
    pub max_sub_entries: i16,
    pub slot_states: [u8; 16],
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
        system_state.cd_status_read = true;
    }
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
    fn test_cd_sector_math_and_roundtrip() {
        // Sector 0 -> 00:02:00
        let msf = cd_calc_sector(0);
        assert_eq!(from_bcd(msf.minute_bcd), 0);
        assert_eq!(from_bcd(msf.second_bcd), 2);
        assert_eq!(from_bcd(msf.frame_bcd), 0);
        assert_eq!(cd_decode_time(&msf), 0);

        // Sector 4500 -> 01:02:00
        let msf = cd_calc_sector(4500);
        assert_eq!(from_bcd(msf.minute_bcd), 1);
        assert_eq!(from_bcd(msf.second_bcd), 2);
        assert_eq!(from_bcd(msf.frame_bcd), 0);
        assert_eq!(cd_decode_time(&msf), 4500);
    }

    #[test]
    fn test_cd_compare_name() {
        assert!(cd_compare_name(b"TOMBA2.DAT;1", b"tomba2.dat;1"));
        assert!(!cd_compare_name(b"TOMBA2.DAT;1", b"VOICE.XA;1"));
    }
}
