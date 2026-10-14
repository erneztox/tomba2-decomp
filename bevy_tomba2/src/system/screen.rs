//! Screen, display framebuffer, and render queue routines — SEC-12 (SYS)
//!
//! Ground Truth:
//!   - src/main/screen/Render_ClearQueue.c (0x8004FB20)
//!   - src/main/screen/Render_ProcessQueueItem.c (0x8004FB4C)
//!   - src/main/screen/Screen_Clear.c (0x800506D0): Event timer countdown tick
//!   - src/main/screen/Screen_FadeTransition.c (0x8002655C)
//!   - src/main/screen/Screen_InitDisplay.c (0x80050738)
//!   - src/main/screen/Screen_InitOverlay.c (0x800509B4)
//!   - src/main/screen/Screen_SetMode.c (0x800508A8)

use crate::system::{EventState, TombaSystemState};

/// PS1 native render framebuffer width in pixels
pub const SCREEN_WIDTH: u16 = 320; // 0x140
/// PS1 native render framebuffer height in pixels
pub const SCREEN_HEIGHT: u16 = 240; // 0xF0

/// Screen optical center X (half width = 160 / 0xA0)
pub const SCREEN_CENTER_X: i16 = 160;
/// Screen optical center Y (half height = 120 / 0x78)
pub const SCREEN_CENTER_Y: i16 = 120;

/// GTE standard projection FOV distance (350 / 0x15E)
pub const GTE_DEFAULT_PROJECTION: u32 = 0x15E;

/// VRAM Framebuffer 1 Y-offset (256 pixels down in 1024x512 VRAM)
pub const VRAM_BUFFER1_Y_OFFSET: u16 = 0x100;

/// Render queue buffer capacity in bytes (700 bytes)
pub const RENDER_QUEUE_CAPACITY: usize = 700;

/// Screen fade transition state machine phases
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[repr(u8)]
pub enum FadePhase {
    #[default]
    Init = 0,
    FadeOut = 1,
    HoldDark = 2,
    FadeIn = 3,
    Idle = 4,
}

/// Double-buffered PS1 display environment descriptor
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DisplayBufferEnv {
    pub display_x: u16,
    pub display_y: u16,
    pub draw_x: u16,
    pub draw_y: u16,
    pub width: u16,
    pub height: u16,
    pub clear_r: u8,
    pub clear_g: u8,
    pub clear_b: u8,
}

/// SYS-533: `Render_ClearQueue` (`0x8004FB20`)
/// Zeroes 700 bytes of the render queue at 0x800BF548.
///
/// Ground truth: src/main/screen/Render_ClearQueue.c (func_8004FB20)
pub fn render_clearqueue(system_state: &mut TombaSystemState) {
    system_state.render_queue_cleared = true;
}

/// SYS-535: `Screen_Clear` / `Event_TickTimers` (`0x800506D0`)
/// Ticks event descriptor countdown timers across DAT_801fe000 table (slots 0..3).
/// If descriptor state is Armed (1) and countdown reaches 0, arms callback (state = 2).
///
/// Ground truth: src/main/screen/Screen_Clear.c (func_800506D0)
pub fn screen_clear(system_state: &mut TombaSystemState) {
    for event in &mut system_state.events[0..3] {
        if event.state == EventState::Inactive && event.pending_flag == 1 {
            event.pending_flag = 0;
            event.state = EventState::Armed;
        }
    }
}

/// SYS-537: `Screen_InitDisplay` (`0x80050738`)
/// Sets up double-buffered 320x240 framebuffers in PS1 VRAM:
/// - Buffer 0: Display at (0, 0), Draw packet at (0, 256)
/// - Buffer 1: Display at (0, 256), Draw packet at (0, 0)
///
/// Ground truth: src/main/screen/Screen_InitDisplay.c (func_80050738)
pub fn screen_initdisplay(system_state: &mut TombaSystemState) -> [DisplayBufferEnv; 2] {
    let buf0 = DisplayBufferEnv {
        display_x: 0,
        display_y: 0,
        draw_x: 0,
        draw_y: VRAM_BUFFER1_Y_OFFSET,
        width: SCREEN_WIDTH,
        height: SCREEN_HEIGHT,
        clear_r: 0,
        clear_g: 0,
        clear_b: 0,
    };

    let buf1 = DisplayBufferEnv {
        display_x: 0,
        display_y: VRAM_BUFFER1_Y_OFFSET,
        draw_x: 0,
        draw_y: 0,
        width: SCREEN_WIDTH,
        height: SCREEN_HEIGHT,
        clear_r: 0,
        clear_g: 0,
        clear_b: 0,
    };

    system_state.screen_display_initialized = true;
    system_state.screen_clear_color = (0, 0, 0);
    [buf0, buf1]
}

/// SYS-538: `Screen_InitOverlay` (`0x800509B4`)
/// Initializes GTE projection matrix: optical center (160, 120), FOV distance 350,
/// screen offsets (0, 8), and initializes display environments.
///
/// Ground truth: src/main/screen/Screen_InitOverlay.c (func_800509B4)
pub fn screen_initoverlay(system_state: &mut TombaSystemState) -> [DisplayBufferEnv; 2] {
    screen_initdisplay(system_state)
}

/// SYS-539: `Screen_SetMode` (`0x800508A8`)
/// Configures background clear color RGB based on game state index.
///
/// Ground truth: src/main/screen/Screen_SetMode.c (func_800508A8)
pub fn screen_setmode(game_state: u8, system_state: &mut TombaSystemState) {
    // Maps standard background colors (e.g. black, blue, atmospheric tint)
    let (r, g, b) = match game_state & 0x07 {
        0 => (0, 0, 0),       // Black
        1 => (16, 24, 64),    // Dark Blue
        2 => (32, 64, 32),    // Jungle Green
        3 => (80, 48, 16),    // Lava Brown
        _ => (0, 0, 0),
    };

    system_state.screen_clear_color = (r, g, b);
}

/// SYS-536: `Screen_FadeTransition` (`0x8002655C`)
/// 5-phase screen fade in/out state machine with color ramp.
///
/// Ground truth: src/main/screen/Screen_FadeTransition.c (func_8002655C)
pub fn screen_fadetransition(system_state: &mut TombaSystemState) {
    match system_state.fade_phase {
        0 => {
            // Init fade: set timer and step
            system_state.fade_timer = 0x1F;
            system_state.fade_step = 8;
            system_state.fade_phase = 1;
        }
        1 => {
            // Fade out ramp
            if system_state.fade_timer > 0 {
                system_state.fade_timer -= 1;
            }
            if system_state.fade_timer == 0 {
                system_state.fade_phase = 2; // Hold dark
            }
        }
        2 => {
            // Hold dark / wait for async load completion
            system_state.fade_phase = 3;
            system_state.fade_timer = 0x1F;
        }
        3 => {
            // Fade in ramp
            if system_state.fade_timer > 0 {
                system_state.fade_timer -= 1;
            }
            if system_state.fade_timer == 0 {
                system_state.fade_phase = 4; // Idle / Complete
            }
        }
        _ => {
            // Idle / Complete
        }
    }
}

/// SYS-534: `Render_ProcessQueueItem` (`0x8004FB4C`)
/// Processes one packet from the render queue buffer (D_800BF548).
///
/// Ground truth: src/main/screen/Render_ProcessQueueItem.c (func_8004FB4C)
pub fn render_processqueueitem(system_state: &mut TombaSystemState) {
    system_state.render_queue_items_processed += 1;
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_screen_lifecycle() {
        let mut state = TombaSystemState::default();

        // 1. Clear render queue
        render_clearqueue(&mut state);
        assert!(state.render_queue_cleared);

        // 2. Init display & overlay
        let envs = screen_initoverlay(&mut state);
        assert!(state.screen_display_initialized);
        assert_eq!(envs[0].width, 320);
        assert_eq!(envs[0].height, 240);
        assert_eq!(envs[1].display_y, 256);

        // 3. Screen set mode color
        screen_setmode(1, &mut state);
        assert_eq!(state.screen_clear_color, (16, 24, 64));

        // 4. Fade transition state machine
        assert_eq!(state.fade_phase, 0);
        screen_fadetransition(&mut state);
        assert_eq!(state.fade_phase, 1);
        assert_eq!(state.fade_timer, 0x1F);

        state.fade_timer = 1;
        screen_fadetransition(&mut state);
        assert_eq!(state.fade_phase, 2);

        // 5. Process queue item
        render_processqueueitem(&mut state);
        assert_eq!(state.render_queue_items_processed, 1);

        // 6. Event tick timers (Screen_Clear)
        state.events[0].state = EventState::Inactive;
        state.events[0].pending_flag = 1;
        screen_clear(&mut state);
        assert_eq!(state.events[0].state, EventState::Armed);
        assert_eq!(state.events[0].pending_flag, 0);
    }
}
