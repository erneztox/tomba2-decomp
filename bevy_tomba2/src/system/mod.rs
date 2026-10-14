pub mod bios;
pub mod dispatcher;
pub mod events;
pub mod gpu;
pub mod init;
pub mod input;
pub mod irq;
pub mod overlay;
pub mod timer;

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

/// PS1 digital joypad button bitmasks (16-bit)
pub const PAD_SELECT: u16 = 0x0001;
pub const PAD_L3: u16 = 0x0002;
pub const PAD_R3: u16 = 0x0004;
pub const PAD_START: u16 = 0x0008;
pub const PAD_UP: u16 = 0x0010;
pub const PAD_RIGHT: u16 = 0x0020;
pub const PAD_DOWN: u16 = 0x0040;
pub const PAD_LEFT: u16 = 0x0080;
pub const PAD_L2: u16 = 0x0100;
pub const PAD_R2: u16 = 0x0200;
pub const PAD_L1: u16 = 0x0400;
pub const PAD_R1: u16 = 0x0800;
pub const PAD_TRIANGLE: u16 = 0x1000;
pub const PAD_CIRCLE: u16 = 0x2000;
pub const PAD_CROSS: u16 = 0x4000;
pub const PAD_SQUARE: u16 = 0x8000;

/// Controller Pad State for PS1 Gamepad Port (0x800BF498)
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct PadState {
    pub buttons_held: u16,
    pub buttons_just_pressed: u16,
    pub buttons_just_released: u16,
    pub analog_left_x: i8,
    pub analog_left_y: i8,
    pub analog_right_x: i8,
    pub analog_right_y: i8,
    pub is_connected: bool,
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
    pub segment_addr: u32,            // _DAT_801fe134 (PS1 memory address)
    pub segment_size: u32,            // _DAT_801fe138 (PS1 segment size/end address)
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
    pub vsync_counter: i32,           // DAT_800abde0: VSync interrupt frame counter
    pub vsync_timeout_called: bool,   // Logged when Sys_VSyncWait hits timeout loop
    pub pending_irq: Option<i16>,     // SYS-502: Sys_TriggerIRQ (0x80051F80)
    pub irq_trigger_called: bool,     // IRQ trigger status flag
    pub irq_callbacks: [Option<u32>; 8], // DAT_800abdc0: IRQ callback table (8 slots)
    pub irq_dispatch_count: u32,      // Total times IRQ_Dispatch executed
    pub overlay_base_addr: u32,       // _g_OverlayBase / DAT_1f800224
    pub last_loaded_binary_id: Option<u32>, // Last binary ID passed to Sys_LoadBinary
    pub last_sys_call_code: Option<i32>, // SYS-503: Sys_Call (0x8001CF00)
    pub noop2_called: bool,           // SYS-514: Sys_NoOp2 (0x80080930)
    pub root_counter: u32,            // *DAT_800aacac: PS1 hardware root timer 0/1 counter
    pub prev_root_counter: u32,       // DAT_800aacb0: previous root timer snapshot
    pub last_synced_vsync_tick: i32,  // DAT_800aacb4: last synchronized VSync tick
    pub timer_ctrl_status: u32,       // *DAT_800aaca8: timer control status register
    pub pads: [PadState; 2],          // Joypad state for Port 1 and Port 2 (0x800BF498)
    pub last_pad_read_cmd: u8,        // Last command byte passed to Sys_PadRead
    pub system_init_completed: bool,  // System_Init (0x8001CC00) completion flag
    pub system_reset_completed: bool, // System_Reset (0x8001D940) completion flag
    pub init_main_completed: bool,    // System_InitMain (0x8001CFC8) completion flag
    pub cd_event_callbacks: [Option<u32>; 4], // CD event register callbacks (slots 0, 1, 3)
}
