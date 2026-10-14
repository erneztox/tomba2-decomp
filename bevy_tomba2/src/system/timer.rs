//! Timer and root counter reader routines — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/Timer_GetCounter.c (0x80085900)

use crate::system::TombaSystemState;

/// PS1 16-bit root timer counter mask (0xFFFF)
pub const ROOT_COUNTER_MASK: u32 = 0xFFFF;

/// Timer query and synchronization modes for Timer_GetCounter
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TimerMode {
    /// param_1 < 0: returns current raw VSync frame count (DAT_800abde0)
    VsyncFrameCount,
    /// param_1 == 1: returns elapsed root counter ticks since last snapshot without waiting
    DeltaTicksOnly,
    /// param_1 == 0: immediate VSync frame resync (target = last_synced_vsync_tick)
    SyncImmediate,
    /// param_1 > 1: syncs to `(last_synced_vsync_tick - 1) + n` frames, updates snapshot
    SyncTargetFrames(i32),
}

impl From<i32> for TimerMode {
    fn from(val: i32) -> Self {
        if val < 0 {
            TimerMode::VsyncFrameCount
        } else if val == 1 {
            TimerMode::DeltaTicksOnly
        } else if val == 0 {
            TimerMode::SyncImmediate
        } else {
            TimerMode::SyncTargetFrames(val)
        }
    }
}

/// SYS-517: `Timer_GetCounter` (`0x80085900`)
/// Reads hardware root counter delta or synchronizes frame loop with VSync.
///
/// Ground truth: src/main/system/Timer_GetCounter.c (func_80085900)
/// Logic:
/// - Computes delta: `(root_counter - prev_root_counter) & 0xFFFF`
/// - If `mode` is `VsyncFrameCount`: returns current `vsync_counter`
/// - If `mode` is `DeltaTicksOnly`: returns delta ticks without waiting
/// - If `mode` is `SyncImmediate` or `SyncTargetFrames`:
///   1. Waits for target VSync tick: `(last_synced_vsync_tick - 1) + param_1`
///   2. Waits for next VSync tick: `vsync_counter + 1`
///   3. Updates `last_synced_vsync_tick = vsync_counter`
///   4. Updates `prev_root_counter = root_counter`
///   5. Returns the delta ticks prior to sync
pub fn timer_getcounter(
    mode: TimerMode,
    system_state: &mut TombaSystemState,
) -> u32 {
    let delta_ticks = system_state.root_counter.wrapping_sub(system_state.prev_root_counter) & ROOT_COUNTER_MASK;
    let vsync_count = system_state.vsync_counter as u32;

    match mode {
        TimerMode::VsyncFrameCount => vsync_count,
        TimerMode::DeltaTicksOnly => delta_ticks,
        TimerMode::SyncImmediate => {
            let target_tick = system_state.last_synced_vsync_tick;
            crate::system::gpu::sys_vsyncwait(target_tick, 0, system_state);
            let next_tick = system_state.vsync_counter + 1;
            crate::system::gpu::sys_vsyncwait(next_tick, 1, system_state);

            system_state.last_synced_vsync_tick = system_state.vsync_counter;
            system_state.prev_root_counter = system_state.root_counter;
            delta_ticks
        }
        TimerMode::SyncTargetFrames(param_1) => {
            let target_tick = (system_state.last_synced_vsync_tick - 1) + param_1;
            let timeout = param_1 - 1;
            crate::system::gpu::sys_vsyncwait(target_tick, timeout, system_state);
            let next_tick = system_state.vsync_counter + 1;
            crate::system::gpu::sys_vsyncwait(next_tick, 1, system_state);

            system_state.last_synced_vsync_tick = system_state.vsync_counter;
            system_state.prev_root_counter = system_state.root_counter;
            delta_ticks
        }
    }
}

/// Raw C-compatible wrapper for Timer_GetCounter accepting integer parameter
pub fn timer_getcounter_raw(
    param_1: i32,
    system_state: &mut TombaSystemState,
) -> u32 {
    timer_getcounter(TimerMode::from(param_1), system_state)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_timer_modes() {
        let mut state = TombaSystemState::default();
        state.vsync_counter = 42;
        state.root_counter = 0x1200;
        state.prev_root_counter = 0x1000;

        // 1. VsyncFrameCount (param < 0) -> returns vsync_counter (42)
        assert_eq!(timer_getcounter(TimerMode::VsyncFrameCount, &mut state), 42);
        assert_eq!(timer_getcounter_raw(-1, &mut state), 42);

        // 2. DeltaTicksOnly (param == 1) -> returns (0x1200 - 0x1000) = 0x200
        assert_eq!(timer_getcounter(TimerMode::DeltaTicksOnly, &mut state), 0x200);
        assert_eq!(timer_getcounter_raw(1, &mut state), 0x200);

        // 3. SyncTargetFrames (param == 3) -> waits and updates snapshots
        state.last_synced_vsync_tick = 40;
        let delta = timer_getcounter(TimerMode::SyncTargetFrames(3), &mut state);
        assert_eq!(delta, 0x200);
        assert_eq!(state.last_synced_vsync_tick, 42);
        assert_eq!(state.prev_root_counter, 0x1200);
    }
}
