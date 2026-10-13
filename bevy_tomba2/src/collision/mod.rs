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

    pub fn sample_floor(&self, s: f32, current_y: f32) -> Option<f32> {
        let mut candidates = Vec::new();
        for floor in &self.floors {
            // Give a tiny epsilon tolerance on segment boundaries
            if s >= floor.s_min - 0.05 && s <= floor.s_max + 0.05 {
                let h = floor.height_at(s);
                candidates.push(h);
            }
        }
        if candidates.is_empty() {
            return None;
        }

        // Prefer the highest floor below or near the current Y
        let tolerance = 2.0; // Allow snapping slightly above ground when walking up steps
        let valid_floors: Vec<f32> = candidates
            .iter()
            .copied()
            .filter(|&h| h <= current_y + tolerance)
            .collect();

        if let Some(&highest) = valid_floors.iter().max_by(|a, b| a.total_cmp(b)) {
            Some(highest)
        } else {
            // Fallback: take closest floor
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

    pub fn check_junction(
        &self,
        plane_id: usize,
        s: f32,
        direction: &str,
        tolerance: f32,
    ) -> Option<&CollisionJunction> {
        let plane = self.get_plane(plane_id)?;
        for j in &plane.junctions {
            if j.direction == direction && (j.s - s).abs() <= tolerance {
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

    for plane in collision.planes.values() {
        let p1 = Vec3::from(plane.p1);
        let p2 = Vec3::from(plane.p2);

        // Draw plane line
        gizmos.line(p1, p2, Color::srgb(0.2, 0.8, 1.0));

        // Draw junctions as spheres with indicators
        for junc in &plane.junctions {
            let j_pos = Vec3::from(junc.pos);
            let color = if junc.direction == "up" {
                Color::srgb(1.0, 0.8, 0.0) // Yellow for Up
            } else {
                Color::srgb(1.0, 0.2, 0.6) // Pink for Down
            };
            gizmos.sphere(j_pos, 0.6, color);
        }
    }
}

