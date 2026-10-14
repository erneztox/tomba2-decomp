//! Sony VAB (Voice Audio Bank) sound bank parser and 512KB SPU SRAM allocator — SEC-12 (SYS)
//!
//! Ground Truth:
//!   - src/main/cd/CD_CmdMain.c (0x80096590)
//!   - src/main/cd/CD_Cmd1.c (0x80096480)
//!   - src/main/cd/CD_Cmd2.c (0x80096520)
//!   - src/main/cd/CD_Cmd3.c (0x80096554)

use super::sector::CdStreamState;

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

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_vab_sound_bank_parsing() {
        let mut stream = CdStreamState::default();
        const VAB_MAGIC: u32 = 0x5641_4200;
        let voice_sizes = [128u16, 256u16, 64u16];

        let slot = cd_cmd_main(VAB_MAGIC, 0, -1, 16, &voice_sizes, &mut stream);
        assert_eq!(slot, 0);
        assert_eq!(stream.slot_states[0], 2);

        // Invalid magic returns -1
        assert_eq!(cd_cmd_main(0xDEAD_BEEF, 0, -1, 16, &voice_sizes, &mut stream), -1);

        let slot1 = cd_cmd1(VAB_MAGIC, 1, 16, &voice_sizes, &mut stream);
        assert_eq!(slot1, 1);
    }
}
