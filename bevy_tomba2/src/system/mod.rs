pub mod bios;
pub mod dispatcher;
pub mod events;
pub mod gpu;
pub mod input;
pub mod overlay;

use bevy::prelude::*;

/// Stride between event descriptors in PS1 memory (0x70 = 112 bytes)
pub const EVENT_DESCRIPTOR_STRIDE: usize = 0x70;

/// Event descriptor slot used by overlay loading system (index 2)
pub const OVERLAY_EVENT_SLOT: usize = 2;

/// PS1 event descriptor lifecycle state (DAT_801fe000 + 0x00)
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[repr(i16)]
pub enum EventState {
    #[default]
    Inactive = 0, // Cleared / closed
    Armed = 2,    // Armed with callback (Sys_SetCallback)
    Handled = 3,  // Acknowledged / handled (Sys_ClearEvent)
}

/// PS1 Event Descriptor entry in DAT_801fe000 table (stride: 0x70 bytes).
/// Mapped directly from src/main/system/Sys_SetCallback.c and Sys_SetEvent.c.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct EventDescriptor {
    pub state: EventState, // +0x00: DAT_801fe000 (Event lifecycle state)
    pub handle: i32,       // +0x04: DAT_801fe004 (BIOS event handle)
    pub spec: i32,         // +0x08: DAT_801fe008 (event spec/mode)
    pub callback: u32,     // +0x0c: DAT_801fe00c (callback function address)
    pub mask: i32,         // +0x10: DAT_801fe010 (event mask)
    pub aux_flag: u8,      // +0x6c: DAT_801fe06c (auxiliary status flag)
    pub pending_flag: u8,  // +0x6f: DAT_801fe06f (pending trigger flag)
}

/// Address of System_InitMain in original PS1 memory (0x8001CFC8)
#[allow(non_upper_case_globals)]
pub const SystemInitMain: u32 = 0x8001CFC8;

/// TombaSystemState — base resource mapping original PS1 system state.
/// Variable names map directly to original memory addresses, registers, and flags.
#[derive(Resource, Default, Debug, Clone)]
pub struct TombaSystemState {
    pub events: [EventDescriptor; 8], // DAT_801fe000 event table (stride 0x70)
    pub overlay_type: u32,            // maps to DAT_80010058 / local_20->kind
    pub event_flag: u8,               // Sys_SetEvent param
    pub mode_bit: u8,                 // DAT_801fe147
    pub callback_index: u8,           // DAT_800be0e4 (derived from param_4 >> 1)
    pub active_overlay: u8,           // DAT_801fe146
    pub segment_addr: i32,            // _DAT_801fe134
    pub segment_size: i32,            // _DAT_801fe138
    pub callback_target: Option<u32>, // Sys_SetCallback(2, System_InitMain)
    pub noop_called: bool,            // tracking for SYS-513 verification
    pub init_overlay_called: bool,    // SYS-510: Sys_InitOverlay (0x8001CB00)
    pub bios_init_called: bool,       // SYS-459: BIOS_InitSeq (0x8009BD1C)
    pub bios_seq_step: u8,            // BIOS sequence step counter
    pub sys_call_params: [u8; 4],     // SYS-505: Sys_CallWithParams (0x800521F4)
    pub pad_read_called: bool,        // SYS-516: Sys_PadRead (0x8001CE90)
    pub clear_event_called: bool,     // SYS-507: Sys_ClearEvent (0x80052078)
    pub gpu_sync_called: bool,        // SYS-508: Sys_GPUSync (0x8001DB38)
    pub overlay_dispatch_code: u8,    // SYS-515: Sys_OverlayDispatch (0x800750D8)
    pub pad_test_called: bool,        // Dispatch code 0xFF
    pub load_overlay_path: bool,      // Dispatch code normal overlay load
    pub bios_seq2_called: bool,       // SYS-466: BIOS_Seq2 (0x8009BBB4)
    pub bios_seq3_called: bool,       // SYS-467: BIOS_Seq3 (0x8009BB7C)
    pub irq_disabled: bool,           // IRQ disable status
    pub bios_b0_param0: bool,         // BIOS syscall B0 with param 0
    pub bios_seq4_called: bool,       // SYS-468: BIOS_Seq4 (0x8009BBFC)
    pub bios_zeroregion_done: bool,   // BIOS zero region completed
    pub bios_resetregion_done: bool,  // BIOS reset region completed
    pub mdec_setup_done: bool,        // MDEC hardware setup flag
    pub dat_800acf44: i32,            // DAT_800acf44 global
    pub bios_zero_offset: usize,      // BIOS struct zero offset (0x62C)
    pub bios_zero_iterations: usize,  // BIOS zero iterations (9 words)
    pub bios_zero_completed: bool,    // BIOS zero loop complete
    pub bios_initirq_called: bool,    // SYS-459: BIOS_InitIRQ (0x8009BB10)
    pub cd_status_read: bool,         // CD status read flag
}
