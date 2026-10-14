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
pub mod a06_donglin_forest;
pub mod a08_water_temple;

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
pub use a06_donglin_forest::{
    A06OverlayRuntime, A06_OVERLAY_ID, dispatch_a06_handler,
};
pub use a08_water_temple::{
    A08OverlayRuntime, A08_OVERLAY_ID, dispatch_a08_handler,
};

/// Active Overlay identifier enumeration
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ActiveOverlayId {
    #[default]
    A00Fishermen,
    A01CoalMine,
    A06DonglinForest,
    A08WaterTemple,
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
    /// Runtime state for A06 (Donglin Forest)
    pub a06_runtime: A06OverlayRuntime,
    /// Runtime state for A08 (Water Temple)
    pub a08_runtime: A08OverlayRuntime,
}

impl Default for OverlayManager {
    fn default() -> Self {
        Self {
            active_overlay: ActiveOverlayId::A00Fishermen,
            a00_runtime: A00OverlayRuntime::default(),
            a01_runtime: A01OverlayRuntime::default(),
            a06_runtime: A06OverlayRuntime::default(),
            a08_runtime: A08OverlayRuntime::default(),
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
        6 => dispatch_a06_handler(
            handler_addr,
            lifecycle,
            physics,
            &mut overlay_manager.a06_runtime,
            audio,
            events,
            player_pos,
        ),
        8 => dispatch_a08_handler(
            handler_addr,
            lifecycle,
            physics,
            &mut overlay_manager.a08_runtime,
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
