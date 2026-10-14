//! PS1 Scratchpad (D-Cache RAM at 0x1F800000) sprite packet allocators — SEC-12 (SYS)
//!
//! Ground Truth:
//!   - src/main/misc/Sprite_Alloc1.c (0x80077EBC)
//!   - src/main/misc/Sprite_Alloc2.c (0x80077E7C)
//!   - src/main/misc/Sprite_Alloc3.c (0x80077EFC)

/// Capacity limits for the 3 fast scratchpad sprite packet pools
pub const SPRITE_POOL1_CAPACITY: usize = 0x28; // 40 items (_DAT_1f800150)
pub const SPRITE_POOL2_CAPACITY: usize = 0x18; // 24 items (_DAT_1f800144)
pub const SPRITE_POOL3_CAPACITY: usize = 0x1C; // 28 items (_DAT_1f80015c)

/// Scratchpad allocator state tracking stack pointers and item counts in PS1 fast RAM.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ScratchpadAllocator {
    pub pool1_count: usize,
    pub pool1_stack: Vec<i32>,
    pub pool2_count: usize,
    pub pool2_stack: Vec<i32>,
    pub pool3_count: usize,
    pub pool3_stack: Vec<i32>,
}

impl Default for ScratchpadAllocator {
    fn default() -> Self {
        Self {
            pool1_count: 0,
            pool1_stack: Vec::with_capacity(SPRITE_POOL1_CAPACITY),
            pool2_count: 0,
            pool2_stack: Vec::with_capacity(SPRITE_POOL2_CAPACITY),
            pool3_count: 0,
            pool3_stack: Vec::with_capacity(SPRITE_POOL3_CAPACITY),
        }
    }
}

/// Sprite_Alloc1 (`0x80077EBC`)
/// Allocates sprite packet into pool 1 if counter < 40 (0x28).
///
/// Ground truth: src/main/misc/Sprite_Alloc1.c (func_80077EBC)
pub fn sprite_alloc1(packet: i32, sp: &mut ScratchpadAllocator) -> bool {
    if sp.pool1_count < SPRITE_POOL1_CAPACITY {
        sp.pool1_count += 1;
        sp.pool1_stack.push(packet);
        true
    } else {
        false
    }
}

/// Sprite_Alloc2 (`0x80077E7C`)
/// Allocates sprite packet into pool 2 if counter < 24 (0x18).
///
/// Ground truth: src/main/misc/Sprite_Alloc2.c (func_80077E7C)
pub fn sprite_alloc2(packet: i32, sp: &mut ScratchpadAllocator) -> bool {
    if sp.pool2_count < SPRITE_POOL2_CAPACITY {
        sp.pool2_count += 1;
        sp.pool2_stack.push(packet);
        true
    } else {
        false
    }
}

/// Sprite_Alloc3 (`0x80077EFC`)
/// Allocates sprite packet into pool 3 if counter < 28 (0x1C).
///
/// Ground truth: src/main/misc/Sprite_Alloc3.c (func_80077EFC)
pub fn sprite_alloc3(packet: i32, sp: &mut ScratchpadAllocator) -> bool {
    if sp.pool3_count < SPRITE_POOL3_CAPACITY {
        sp.pool3_count += 1;
        sp.pool3_stack.push(packet);
        true
    } else {
        false
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_sprite_allocators() {
        let mut sp = ScratchpadAllocator::default();

        // Pool 1: capacity 40
        for i in 0..SPRITE_POOL1_CAPACITY {
            assert!(sprite_alloc1(i as i32, &mut sp));
        }
        assert_eq!(sp.pool1_count, 40);
        assert!(!sprite_alloc1(999, &mut sp)); // capacity full

        // Pool 2: capacity 24
        for i in 0..SPRITE_POOL2_CAPACITY {
            assert!(sprite_alloc2(i as i32, &mut sp));
        }
        assert_eq!(sp.pool2_count, 24);
        assert!(!sprite_alloc2(999, &mut sp));

        // Pool 3: capacity 28
        for i in 0..SPRITE_POOL3_CAPACITY {
            assert!(sprite_alloc3(i as i32, &mut sp));
        }
        assert_eq!(sp.pool3_count, 28);
        assert!(!sprite_alloc3(999, &mut sp));
    }
}
