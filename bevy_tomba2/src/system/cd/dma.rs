//! CD SPU-DMA buffer alignment, block allocation, and coalescing — SEC-12 (SYS)
//!
//! Ground Truth:
//!   - src/main/cd/CD_AlignDMA.c (0x80097540)
//!   - src/main/cd/CD_AllocDMA.c (0x800982A0)
//!   - src/main/cd/CD_CheckTransfer.c (0x80099310)
//!   - src/main/cd/CD_DMAProcess.c (0x80097A90)

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
        if (entry & 0x8000_0000) == 0 {
            if (entry & 0x4000_0000) != 0 {
                return 0; // Sentinel end
            }
            let capacity = entry & 0x0FFF_FFFF;
            if needed_size <= capacity {
                return 1;
            }
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

/// CD_DMAProcess (`0x80097A90`)
/// Coalesces adjacent free DMA blocks in the channel descriptor table,
/// sorting entries by start address and merging contiguous memory regions.
///
/// Ground truth: src/main/cd/CD_DMAProcess.c (func_80097A90)
pub fn cd_dma_process(table: &mut [u32], count: usize) {
    if count == 0 || table.len() < count * 2 {
        return;
    }

    // Step 1: Merge contiguous adjacent free blocks
    let mut i = 0;
    while i < count {
        let entry = table[i * 2];
        if (entry & 0x8000_0000) != 0 {
            // Find next block
            let mut next = i + 1;
            while next < count && table[next * 2] == 0x2FFF_FFFF {
                next += 1;
            }
            if next < count {
                let next_entry = table[next * 2];
                let current_end = (entry & 0x0FFF_FFFF) + table[i * 2 + 1];
                if (next_entry & 0x8000_0000) != 0 && (next_entry & 0x0FFF_FFFF) == current_end {
                    table[next * 2] = 0x2FFF_FFFF; // Mark as merged
                    table[i * 2 + 1] += table[next * 2 + 1]; // Extend capacity
                }
            }
        }
        i += 1;
    }

    // Step 2: Mark zero-sized blocks as freed
    for j in 0..count {
        if table[j * 2 + 1] == 0 {
            table[j * 2] = 0x2FFF_FFFF;
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_cd_align_and_alloc() {
        let aligned = cd_align_dma(-2, 100, 32, 31, 2);
        assert_eq!(aligned, 128);

        let table = [0x0000_0100, 0x0000_0020, 0x4000_0000, 0];
        assert_eq!(cd_alloc_dma(1, 2, &table), 1);
        assert_eq!(cd_alloc_dma(0x200, 2, &table), 0);
    }

    #[test]
    fn test_cd_dma_process_coalescing() {
        let mut table = [
            0x8000_0000, 0x0000_0040, // Block 0: addr 0, len 64
            0x8000_0040, 0x0000_0040, // Block 1: addr 64, len 64 (contiguous with block 0!)
            0x4000_0000, 0x0000_0000, // Sentinel
        ];
        cd_dma_process(&mut table, 2);
        // Block 0 should now have length 128 (0x80)
        assert_eq!(table[1], 0x80);
        // Block 1 was merged and marked with 0x2FFFFFFF
        assert_eq!(table[2], 0x2FFF_FFFF);
    }
}
