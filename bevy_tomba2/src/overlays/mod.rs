//! Overlays Subsystem for Tomba! 2: The Evil Swine Return
//!
//! Ground Truth & Architecture:
//! - In the original PS1 game, 28 overlays are dynamically loaded into memory
//!   via `sys_loadoverlay` / `engine_dispatchoverlay` (`MAIN.EXE`, Sector 12).
//! - Each overlay contains zone-specific entity handlers, kinematics routines,
//!   and PS1 texture processing.
//! - Handlers operate directly on authentic ECS components (`EntityLifecycle`, `EntityPhysics`).
//! - No mock state structs or fabricated logic are allowed.

pub mod a00_fishermen;
pub mod a01_mines;

use bevy::prelude::*;
use crate::entity::EntityLifecycle;
use crate::player::physics::EntityPhysics;
use crate::events::TombaEvents;
use crate::audio::TombaAudioSystem;

pub use a00_fishermen::{
    A00OverlayRuntime, A00TextureEntry, A00_OVERLAY_ID, A00_TEXTURE_METADATA_COUNT,
    a00_texture_process, dispatch_a00_handler,
};
pub use a01_mines::{
    A01OverlayRuntime, A01_OVERLAY_ID, dispatch_a01_handler,
};

/// Active Overlay identifier enumeration
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ActiveOverlayId {
    #[default]
    A00Fishermen,
    A01CoalMine,
    Other(u8),
}

/// Central Overlay Manager resource
#[derive(Resource, Debug, Clone)]
pub struct OverlayManager {
    /// Currently loaded overlay
    pub active_overlay: ActiveOverlayId,
    /// Runtime state for A00 (Town of the Fishermen)
    pub a00_runtime: A00OverlayRuntime,
    /// Runtime state for A01 (Large Mine Underground)
    pub a01_runtime: A01OverlayRuntime,
}

impl Default for OverlayManager {
    fn default() -> Self {
        Self {
            active_overlay: ActiveOverlayId::A00Fishermen,
            a00_runtime: A00OverlayRuntime::default(),
            a01_runtime: A01OverlayRuntime::default(),
        }
    }
}

/// Universal overlay entity handler dispatcher
pub fn dispatch_overlay_entity_handler(
    overlay_manager: &mut OverlayManager,
    overlay_id: u8,
    handler_addr: u32,
    lifecycle: &mut EntityLifecycle,
    physics: &mut EntityPhysics,
    audio: &mut TombaAudioSystem,
    events: &TombaEvents,
    player_pos: Vec3,
    frame_counter: u32,
) -> bool {
    match overlay_id {
        0 => dispatch_a00_handler(
            handler_addr,
            lifecycle,
            physics,
            &mut overlay_manager.a00_runtime,
            audio,
            events,
            player_pos,
            frame_counter,
        ),
        1 => dispatch_a01_handler(
            handler_addr,
            lifecycle,
            physics,
            &mut overlay_manager.a01_runtime,
            audio,
            events,
            player_pos,
        ),
        _ => false,
    }
}

/// Bevy Plugin for the Overlays Subsystem
pub struct TombaOverlaysPlugin;

impl Plugin for TombaOverlaysPlugin {
    fn build(&self, app: &mut App) {
        app.init_resource::<OverlayManager>();
    }
}
