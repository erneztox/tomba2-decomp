use bevy::prelude::*;
use serde::Deserialize;
use std::collections::HashMap;
use std::fs::File;
use std::io::BufReader;

#[allow(dead_code)]
#[derive(Debug, Clone, Deserialize)]
pub struct FloorSegment {
    pub s_min: f32,
    pub s_max: f32,
    pub y_start: f32,
    pub y_end: f32,
    pub kind: u16,
}

impl FloorSegment {
    pub fn height_at(&self, s: f32) -> f32 {
        let span = self.s_max - self.s_min;
        if span.abs() < 1e-4 {
            return self.y_start;
        }
        let t = ((s - self.s_min) / span).clamp(0.0, 1.0);
        self.y_start + t * (self.y_end - self.y_start)
    }
}

#[allow(dead_code)]
#[derive(Debug, Clone, Deserialize)]
pub struct WallSegment {
    pub s: f32,
    pub y_bottom: f32,
    pub y_top: f32,
    pub kind: u16,
}

#[allow(dead_code)]
#[derive(Debug, Clone, Deserialize)]
pub struct CollisionJunction {
    pub s: f32,
    pub pos: [f32; 3],
    pub direction: String, // "up" or "down"
    pub dest: usize,       // 1-based plane index
    pub walk: bool,
    pub gated: bool,
}

#[allow(dead_code)]
#[derive(Debug, Clone, Deserialize)]
pub struct CollisionPlane {
    pub id: usize,
    pub p1: [f32; 3],
    pub p2: [f32; 3],
    pub length: f32,
    pub dir: [f32; 2],
    pub ls: u8,
    pub le: u8,
    pub floors: Vec<FloorSegment>,
    pub walls: Vec<WallSegment>,
    pub junctions: Vec<CollisionJunction>,
}

impl CollisionPlane {
    pub fn point_at(&self, s: f32) -> Vec3 {
        let clamped_s = s.clamp(0.0, self.length);
        Vec3::new(
            self.p1[0] + self.dir[0] * clamped_s,
            self.p1[1],
            self.p1[2] + self.dir[1] * clamped_s,
        )
    }

    pub fn s_of(&self, x: f32, z: f32) -> f32 {
        let dx = x - self.p1[0];
        let dz = z - self.p1[2];
        (dx * self.dir[0] + dz * self.dir[1]).clamp(0.0, self.length)
    }

    /// Authentic PS1 plane projection from `f_ProjectActorOntoAreaPlane` (0x80047778)
    /// and `grid_step_4798c` (Tomba2Engine/game/player/collision.cpp:678-716).
    ///
    /// In PS1 MAIN.EXE, the actor's world coordinates (X, Z) are projected onto the plane segment:
    /// - If span_x < span_z (Z-dominant axis): clamp Z into [z1, z2], then X = x1 + (Z - z1) * (dx / dz).
    /// - If span_x >= span_z (X-dominant axis): clamp X into [x1, x2], then Z = z1 + (X - x1) * (dz / dx).
    /// Returns (projected_x, projected_z, s).
    #[allow(dead_code)]
    pub fn project_actor_onto_plane(&self, x: f32, z: f32) -> (f32, f32, f32) {
        let dx = self.p2[0] - self.p1[0];
        let dz = self.p2[2] - self.p1[2];
        let span_x = dx.abs();
        let span_z = dz.abs();

        if span_x < span_z {
            // Z-dominant branch: clamp Z, recompute X
            let (min_z, max_z) = if dz >= 0.0 { (self.p1[2], self.p2[2]) } else { (self.p2[2], self.p1[2]) };
            let clamped_z = z.clamp(min_z, max_z);
            let s = if span_z > 1e-4 { (clamped_z - self.p1[2]) / dz * self.length } else { 0.0 };
            let computed_x = if span_z > 1e-4 { self.p1[0] + (clamped_z - self.p1[2]) * (dx / dz) } else { self.p1[0] };
            (computed_x, clamped_z, s.clamp(0.0, self.length))
        } else {
            // X-dominant branch: clamp X, recompute Z
            let (min_x, max_x) = if dx >= 0.0 { (self.p1[0], self.p2[0]) } else { (self.p2[0], self.p1[0]) };
            let clamped_x = x.clamp(min_x, max_x);
            let s = if span_x > 1e-4 { (clamped_x - self.p1[0]) / dx * self.length } else { 0.0 };
            let computed_z = if span_x > 1e-4 { self.p1[2] + (clamped_x - self.p1[0]) * (dz / dx) } else { self.p1[2] };
            (clamped_x, computed_z, s.clamp(0.0, self.length))
        }
    }

    pub fn sample_floor(&self, s: f32, current_y: f32) -> Option<f32> {
        let mut candidates = Vec::new();
        // Authentic SCLD cell width is 0.64m (64 PS1 units).
        for floor in &self.floors {
            if s >= floor.s_min - 0.05 && s <= floor.s_max + 0.05 {
                candidates.push(floor.height_at(s));
            }
        }
        if candidates.is_empty() {
            return None;
        }

        // Ref: Entity_CollisionGround.c:37-46, ActorTomba::settleStep (actor_tomba.cpp:385-403)
        // Tomba's vertical collision envelope: boundYUp = 1.40m, boundYDown = 2.70m, step-up limit 0.48m
        let below: Vec<f32> = candidates
            .iter()
            .copied()
            .filter(|&h| h <= current_y + 0.48) // max step-up 48 PS1 units (0.48m)
            .collect();

        if let Some(&highest_below) = below.iter().max_by(|a, b| a.total_cmp(b)) {
            Some(highest_below)
        } else {
            // Nearest floor fallback when airborne
            candidates
                .into_iter()
                .min_by(|a, b| (a - current_y).abs().total_cmp(&(b - current_y).abs()))
        }
    }
}

#[derive(Debug, Deserialize)]
struct RawCollisionFile {
    planes: Vec<CollisionPlane>,
}

#[derive(Resource, Default)]
pub struct LevelCollision {
    pub planes: HashMap<usize, CollisionPlane>,
}

impl LevelCollision {
    pub fn load_from_file(path: &str) -> Result<Self, Box<dyn std::error::Error>> {
        let file = File::open(path)?;
        let reader = BufReader::new(file);
        let raw: RawCollisionFile = serde_json::from_reader(reader)?;

        let mut planes = HashMap::new();
        for p in raw.planes {
            planes.insert(p.id, p);
        }
        Ok(Self { planes })
    }

    pub fn get_plane(&self, id: usize) -> Option<&CollisionPlane> {
        self.planes.get(&id)
    }

    /// Authentic SCLD junction detection:
    /// In PS1 Tomba 2, a junction occupies an SCLD grid cell (64 PS1 units = 0.64m wide).
    /// Detection window is half-cell width (0.32m) along the rail, and within vertical gate.
    /// Ref: Collision_GetFloorHeight.c:58, scld_geometry.py:45-48, 239-246.
    pub fn check_junction(
        &self,
        plane_id: usize,
        s: f32,
        y: f32,
        direction: &str,
    ) -> Option<&CollisionJunction> {
        let plane = self.get_plane(plane_id)?;
        const HALF_CELL: f32 = 0.32; // 32 PS1 units = half SCLD cell width
        const HEIGHT_WINDOW: f32 = 0.64; // 64 PS1 units = height gate window

        for j in &plane.junctions {
            if j.direction == direction
                && (j.s - s).abs() <= HALF_CELL
                && (j.pos[1] - y).abs() <= HEIGHT_WINDOW
            {
                return Some(j);
            }
        }
        None
    }
}

#[derive(Resource)]
pub struct CollisionDebugConfig {
    pub show_rails: bool,
}

impl Default for CollisionDebugConfig {
    fn default() -> Self {
        Self { show_rails: true }
    }
}

pub fn draw_collision_gizmos(
    mut gizmos: Gizmos,
    keyboard: Res<ButtonInput<KeyCode>>,
    mut config: ResMut<CollisionDebugConfig>,
    collision: Res<LevelCollision>,
    player_query: Query<&crate::player::TombaRail>,
) {
    if keyboard.just_pressed(KeyCode::F2) {
        config.show_rails = !config.show_rails;
        println!(
            "Collision Gizmos: {}",
            if config.show_rails { "ENABLED" } else { "DISABLED" }
        );
    }

    if !config.show_rails {
        return;
    }

    let active_plane_id = player_query.get_single().map(|r| r.plane_id).ok();

    for plane in collision.planes.values() {
        let p1 = Vec3::from(plane.p1);
        let p2 = Vec3::from(plane.p2);

        let is_active = Some(plane.id) == active_plane_id;
        let color = if is_active {
            Color::srgb(0.1, 1.0, 0.4) // Bright lime green for active rail
        } else {
            Color::srgb(0.15, 0.4, 0.8) // Faint blue for other rails
        };

        gizmos.line(p1, p2, color);

        // Draw junctions as spheres with indicators
        for junc in &plane.junctions {
            let j_pos = Vec3::from(junc.pos);
            let color = if junc.direction == "up" {
                Color::srgb(1.0, 0.85, 0.0) // Yellow for Up
            } else {
                Color::srgb(1.0, 0.2, 0.6) // Pink for Down
            };
            gizmos.sphere(j_pos, 0.6, color);
        }
    }
}

