//! GPU and VSync synchronization — SEC-12 (SYS)
//! Ground Truth:
//!   - src/main/system/Sys_GPUSync.c (0x8001DB38)

use bevy::prelude::*;
use crate::system::TombaSystemState;

/// SYS-508: `Sys_GPUSync` (`0x8001DB38`)
/// GPU sync wrapper: calls GPU sync and returns status
/// Ground truth: src/main/system/Sys_GPUSync.c (func_8001DB38)
pub fn sys_gpusync(mut system_state: ResMut<TombaSystemState>) -> bool {
    system_state.gpu_sync_called = true;
    true // Status returned; actual GPU sync handled by Bevy render pipeline
}
