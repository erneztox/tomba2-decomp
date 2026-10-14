//! CD subsystem and streaming engine — SEC-12 (SYS)
//!
//! Submodules:
//!   - `sector`: Sector MSF/BCD math, time decoding, seek streaming, name comparison.
//!   - `dma`: SPU-DMA buffer alignment, block allocation, and coalescing.
//!   - `vab`: Sony VAB sound bank parsing and 512KB SPU SRAM allocations.
//!   - `control`: Drive control commands, timeouts, slot validation, driver callbacks.

pub mod control;
pub mod dma;
pub mod sector;
pub mod vab;

pub use control::*;
pub use dma::*;
pub use sector::*;
pub use vab::*;

/// Buffer slot stride for CD packet queue (32 bytes)
pub const CD_BUFFER_SLOT_STRIDE: usize = 0x20;
