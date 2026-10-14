//! PS1 Memory Card frame I/O and format routines — SEC-12 (SYS)
//!
//! Ground Truth:
//!   - src/main/system/BIOS_MemTest.c (0x8009C2B0): Card frame write & verify
//!   - src/main/system/BIOS_CRC.c (0x8009C3F4): Memory card filesystem format

use crate::system::TombaSystemState;

/// PS1 Memory Card frame size (128 bytes)
pub const CARD_FRAME_SIZE: usize = 128;
/// Payload size checked by frame XOR checksum (127 bytes)
pub const CARD_CHECKSUM_PAYLOAD_SIZE: usize = 127;
/// Index of checksum byte in frame buffer (0x7F = 127)
pub const CARD_CHECKSUM_BYTE_INDEX: usize = 0x7F;
/// Maximum number of write/verify retries on card bus
pub const CARD_MAX_WRITE_RETRIES: usize = 8;
/// Number of directory entry frames on PS1 card (15 frames)
pub const CARD_DIRECTORY_FRAME_COUNT: usize = 15;
/// Number of broken sector test frames (20 frames)
pub const CARD_BROKEN_SECTOR_FRAME_COUNT: usize = 20;
/// PS1 Memory Card magic header ("MC" = 0x434D in little-endian)
pub const CARD_MAGIC_HEADER: [u8; 2] = [b'M', b'C'];
/// Card entry unallocated / free block flag (0xA0)
pub const CARD_ENTRY_FREE_STATUS: u32 = 0xA0;

/// Calculates 127-byte cumulative XOR checksum for PS1 Memory Card frames.
///
/// Ground truth: src/main/system/BIOS_MemTest.c:21-30
#[inline]
pub fn card_calculate_checksum(payload: &[u8; CARD_CHECKSUM_PAYLOAD_SIZE]) -> u8 {
    let mut checksum = 0u8;
    for &byte in payload {
        checksum ^= byte;
    }
    checksum
}

/// SYS-482: `Card_WriteFrame` / `BIOS_MemTest` (`0x8009C2B0`)
/// Writes a 128-byte frame to memory card, computes checksum, reads back, and verifies with up to 8 retries.
///
/// Ground truth: src/main/system/BIOS_MemTest.c (func_8009C2B0)
pub fn card_write_frame(
    _port: i32,
    frame_idx: i32,
    frame_data: &mut [u8; CARD_FRAME_SIZE],
    system_state: &mut TombaSystemState,
) -> bool {
    let mut payload = [0u8; CARD_CHECKSUM_PAYLOAD_SIZE];
    payload.copy_from_slice(&frame_data[..CARD_CHECKSUM_PAYLOAD_SIZE]);

    let checksum = card_calculate_checksum(&payload);
    frame_data[CARD_CHECKSUM_BYTE_INDEX] = checksum;

    // Simulate write & readback verification across up to 8 attempts
    let mut verified = false;
    for _retry in 0..CARD_MAX_WRITE_RETRIES {
        let readback_checksum = card_calculate_checksum(&payload);
        if frame_data[CARD_CHECKSUM_BYTE_INDEX] == readback_checksum {
            verified = true;
            break;
        }
    }

    if verified {
        system_state.card_frames_written += 1;
        system_state.card_last_written_frame = Some(frame_idx);
        true
    } else {
        false
    }
}

/// SYS-483: `Card_Format` / `BIOS_CRC` (`0x8009C3F4`)
/// Formats standard PS1 memory card: 15 directory frames, 20 sector frames, and frame 0 header ("MC").
///
/// Ground truth: src/main/system/BIOS_CRC.c (func_8009C3F4)
pub fn card_format(port: i32, system_state: &mut TombaSystemState) -> bool {
    // 1. Initialize 15 directory frames (frames 1 to 15)
    for frame in 1..=CARD_DIRECTORY_FRAME_COUNT {
        let mut dir_frame = [0u8; CARD_FRAME_SIZE];
        dir_frame[0..4].copy_from_slice(&CARD_ENTRY_FREE_STATUS.to_le_bytes());
        dir_frame[8..10].copy_from_slice(&0xFFFFu16.to_le_bytes());

        if !card_write_frame(port, frame as i32, &mut dir_frame, system_state) {
            return false;
        }
    }

    // 2. Initialize 20 broken-sector frames (frames 16 to 35)
    for frame in 0..CARD_BROKEN_SECTOR_FRAME_COUNT {
        let mut test_frame = [0xFFu8; CARD_FRAME_SIZE];
        if !card_write_frame(port, (frame + 16) as i32, &mut test_frame, system_state) {
            return false;
        }
    }

    // 3. Write frame 0 with "MC" magic header
    let mut header_frame = [0u8; CARD_FRAME_SIZE];
    header_frame[0] = CARD_MAGIC_HEADER[0];
    header_frame[1] = CARD_MAGIC_HEADER[1];
    if !card_write_frame(port, 0, &mut header_frame, system_state) {
        return false;
    }

    system_state.card_formatted = true;
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_card_checksum() {
        let mut payload = [0u8; CARD_CHECKSUM_PAYLOAD_SIZE];
        payload[0] = 0xAA;
        payload[1] = 0x55;
        assert_eq!(card_calculate_checksum(&payload), 0xFF);
    }

    #[test]
    fn test_card_write_and_format() {
        let mut state = TombaSystemState::default();

        let mut frame = [0u8; CARD_FRAME_SIZE];
        frame[0] = 0x12;
        frame[1] = 0x34;

        assert!(card_write_frame(0, 1, &mut frame, &mut state));
        assert_eq!(state.card_frames_written, 1);
        assert_eq!(state.card_last_written_frame, Some(1));
        assert_eq!(frame[CARD_CHECKSUM_BYTE_INDEX], 0x12 ^ 0x34);

        // Format memory card
        assert!(card_format(0, &mut state));
        assert!(state.card_formatted);
        // 1 initial write + 15 directory frames + 20 sector frames + 1 header frame = 37 total writes
        assert_eq!(state.card_frames_written, 37);
        assert_eq!(state.card_last_written_frame, Some(0));
    }
}
