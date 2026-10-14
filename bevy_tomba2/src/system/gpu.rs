//! GPU and VSync synchronization — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/Sys_GPUSync.c (0x8001DB38)
//!   - src/main/system/Sys_CheckVSync.c (0x8001CF94)
//!   - src/main/system/Sys_VSyncWait.c (0x80085A78)

use bevy::prelude::*;
use crate::system::TombaSystemState;

/// GPU status bitmask requiring immediate VSync trigger:
/// Bit 0 (0x01) or Bit 4 (0x10): GPU command processing / DMA transfer active
pub const VSYNC_DIRTY_MASK: u32 = 0x11;

/// GPU status bit 1 (0x02): VSync signal acknowledged / in vertical blank
pub const VSYNC_ACK_BIT: u32 = 0x02;

/// IRQ code 2: VSync frame interrupt
pub const IRQ_VSYNC: i16 = 2;

/// Shift amount for VSync timeout loop counter (multiplier << 15)
pub const VSYNC_TIMEOUT_SHIFT: u32 = 15;

/// SYS-508: `Sys_GPUSync` (`0x8001DB38`)
/// GPU sync wrapper: calls GPU sync and returns status
/// Ground truth: src/main/system/Sys_GPUSync.c (func_8001DB38)
pub fn sys_gpusync(mut system_state: ResMut<TombaSystemState>) -> bool {
    system_state.gpu_sync_called = true;
    true // Status returned; actual GPU sync handled by Bevy render pipeline
}

/// SYS-509: `Sys_CheckVSync` (`0x8001CF94`)
/// Checks GPU VSync/interrupt state: if dirty flags (bits 0 or 4) are set,
/// or VSync ACK (bit 1) is not set, triggers VSync IRQ 2.
///
/// Ground truth: src/main/system/Sys_CheckVSync.c (func_8001CF94)
pub fn sys_checkvsync(gpu_status: u32, system_state: &mut TombaSystemState) -> bool {
    let needs_sync = ((gpu_status & VSYNC_DIRTY_MASK) != 0) || ((gpu_status & VSYNC_ACK_BIT) == 0);
    if needs_sync {
        crate::system::irq::sys_triggerirq(IRQ_VSYNC, system_state);
    }
    needs_sync
}

/// SYS-504: `Sys_VSyncWait` (`0x80085A78`)
/// Waits until the VSync frame counter (DAT_800abde0) reaches target_tick,
/// with a countdown of `timeout_multiplier << 15` iterations.
///
/// Ground truth: src/main/system/Sys_VSyncWait.c (func_80085A78)
/// Returns true if synchronized, false if timed out.
pub fn sys_vsyncwait(
    target_tick: i32,
    timeout_multiplier: i32,
    system_state: &mut TombaSystemState,
) -> bool {
    let mut countdown = timeout_multiplier << VSYNC_TIMEOUT_SHIFT;
    loop {
        if target_tick <= system_state.vsync_counter {
            return true;
        }
        countdown -= 1;
        if countdown == -1 {
            break;
        }
    }
    // Timeout branch: original logged "VSync timeout" and called BIOS reset
    system_state.vsync_timeout_called = true;
    false
}

/// SYS-540: `DMA_TransferAndWait` (`0x8001DB8C`)
/// Arms DMA event at slot 1, aligns word transfer size, records src/dest pointers,
/// arms Sys_GPUSync callback, and polls until transfer completion.
///
/// Ground truth: src/main/misc/DMA_TransferAndWait.c (func_8001DB8C)
pub fn dma_transferandwait(
    src_addr: u32,
    dest_addr: u32,
    byte_count: i32,
    system_state: &mut TombaSystemState,
) -> i32 {
    // 1. Reset event slot 1
    crate::system::events::sys_setevent(1, system_state);

    // 2. Word-align transfer size with rounding
    let mut dma_size = byte_count + 3;
    if dma_size < 0 {
        dma_size = byte_count + 6;
    }
    let word_count = (dma_size >> 2) as u32;

    // 3. Set DMA registers
    system_state.dma_src = src_addr;
    system_state.dma_dest = dest_addr;
    system_state.dma_word_count = word_count;

    // 4. Set callback for slot 1 (Sys_GPUSync at 0x8001DB38)
    crate::system::events::sys_setcallback(1, 0x8001_DB38, system_state);

    // 5. Simulate polling loop with IRQ 1 trigger
    crate::system::irq::sys_triggerirq(1, system_state);

    byte_count
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_sys_checkvsync() {
        let mut state = TombaSystemState::default();

        // Case 1: GPU has bit 0 set (busy) -> triggers IRQ 2
        assert!(sys_checkvsync(0x01, &mut state));
        assert_eq!(state.pending_irq, Some(IRQ_VSYNC));
        assert!(state.irq_trigger_called);

        // Reset
        state.pending_irq = None;
        state.irq_trigger_called = false;

        // Case 2: Bit 1 set (ACK) and dirty bits clear -> no trigger needed
        assert!(!sys_checkvsync(0x02, &mut state));
        assert_eq!(state.pending_irq, None);
        assert!(!state.irq_trigger_called);

        // Case 3: Bit 1 cleared (no ACK) -> triggers IRQ 2
        assert!(sys_checkvsync(0x00, &mut state));
        assert_eq!(state.pending_irq, Some(IRQ_VSYNC));
    }

    #[test]
    fn test_sys_vsyncwait() {
        let mut state = TombaSystemState::default();
        state.vsync_counter = 10;

        // Case 1: Target reached immediately (10 <= 10)
        assert!(sys_vsyncwait(10, 1, &mut state));
        assert!(!state.vsync_timeout_called);

        // Case 2: Target tick in the future, timeout expires
        assert!(!sys_vsyncwait(20, 0, &mut state));
        assert!(state.vsync_timeout_called);
    }

    #[test]
    fn test_dma_transferandwait() {
        let mut state = TombaSystemState::default();

        let bytes = dma_transferandwait(0x8001_0000, 0x1F80_0000, 128, &mut state);
        assert_eq!(bytes, 128);
        assert_eq!(state.dma_src, 0x8001_0000);
        assert_eq!(state.dma_dest, 0x1F80_0000);
        // (128 + 3) >> 2 = 131 >> 2 = 32 words
        assert_eq!(state.dma_word_count, 32);
        assert_eq!(state.events[1].callback, 0x8001_DB38);
        assert!(state.irq_trigger_called);
    }
}
