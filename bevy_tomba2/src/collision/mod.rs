use bevy::prelude::*;
use serde::Deserialize;
use std::collections::HashMap;
use std::fs::File;
use std::io::BufReader;

// ─── TIPOS DE SUPERFICIE Y MATERIALES (0x8004960C - Collision_GetSurfaceType) ──

/// Tipo de material de superficie según el formato auténtico SCLD de PS1.
/// Ref: Collision_GetSurfaceType.c (func_8004960C), scld_geometry.py:18-22.
#[allow(dead_code)]
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum SurfaceType {
    #[default]
    Rock,  // Tipo 0: Piedra / Roca / Tierra firme
    Wood,  // Tipo 1: Madera (muelles, tablones, puentes)
    Metal, // Tipo 2: Metal (vías de mina, engranajes)
    Water, // Tipo 3: Agua poco profunda / orilla
    Ice,   // Tipo 4: Hielo resbaladizo (baja fricción)
    Mud,   // Tipo 5: Lodo / Arena (alta resistencia)
}

#[allow(dead_code)]
impl SurfaceType {
    /// Decodifica el material desde el byte bajo de `kind`.
    pub fn from_kind(kind: u16) -> Self {
        match kind & 0x07 {
            1 => SurfaceType::Wood,
            2 => SurfaceType::Metal,
            3 => SurfaceType::Water,
            4 => SurfaceType::Ice,
            5 => SurfaceType::Mud,
            _ => SurfaceType::Rock,
        }
    }

    /// Coeficiente de fricción relativo al material.
    pub fn friction(&self) -> f32 {
        match self {
            SurfaceType::Ice => 0.05,
            SurfaceType::Mud => 1.80,
            SurfaceType::Water => 1.40,
            SurfaceType::Wood => 1.00,
            SurfaceType::Metal => 0.95,
            SurfaceType::Rock => 1.00,
        }
    }

    /// ID de banco de sonido de pisada (SFX).
    pub fn footstep_sfx_name(&self) -> &'static str {
        match self {
            SurfaceType::Wood => "wood",
            SurfaceType::Water => "water",
            SurfaceType::Metal => "metal",
            SurfaceType::Ice | SurfaceType::Rock | SurfaceType::Mud => "rock",
        }
    }
}

// ─── ESTRUCTURAS GEOMÉTRICAS SCLD ─────────────────────────────────────────────

/// Segmento de suelo en un riel SCLD.
/// Ref: scld_geometry.py:FloorSegment, Collision_FindGround.c:14 (0x800498C8).
#[derive(Debug, Clone, Deserialize)]
pub struct FloorSegment {
    pub s_min: f32,
    pub s_max: f32,
    pub y_start: f32,
    pub y_end: f32,
    pub kind: u16,
}

impl FloorSegment {
    /// Altura interpolada en la coordenada curvilínea s.
    pub fn height_at(&self, s: f32) -> f32 {
        let span = self.s_max - self.s_min;
        if span.abs() < 1e-4 {
            return self.y_start;
        }
        let t = ((s - self.s_min) / span).clamp(0.0, 1.0);
        self.y_start + t * (self.y_end - self.y_start)
    }

    /// Ángulo de inclinación de la rampa en radianes (+ = subida hacia +s, - = bajada).
    /// Ref: Collision_CalcSlope.c (0x80049674), Collision_CalcAngle.c (0x80049760).
    pub fn slope_angle(&self) -> f32 {
        let span = self.s_max - self.s_min;
        if span.abs() < 1e-4 {
            0.0
        } else {
            ((self.y_end - self.y_start) / span).atan()
        }
    }

    /// Vector normal 3D unitario de la superficie orientado hacia arriba.
    /// Ref: Collision_CalcSlope (0x80049674), Collision::flatNormal (collision.cpp:797).
    pub fn surface_normal(&self, plane_dir: [f32; 2]) -> Vec3 {
        let span = self.s_max - self.s_min;
        if span.abs() < 1e-4 {
            Vec3::Y
        } else {
            let dy_ds = (self.y_end - self.y_start) / span;
            // Vector tangente a lo largo del riel: (dir_x, dy_ds, dir_z).
            // Normal perpendicular apuntando hacia +Y: (-dir_x * dy_ds, 1.0, -dir_z * dy_ds).
            Vec3::new(-plane_dir[0] * dy_ds, 1.0, -plane_dir[1] * dy_ds).normalize()
        }
    }

    /// Tipo de material del suelo.
    pub fn surface_type(&self) -> SurfaceType {
        SurfaceType::from_kind(self.kind)
    }

    /// Comprueba si el suelo es transitable (no es pared vertical ni techo invertido).
    pub fn is_walkable(&self) -> bool {
        self.slope_angle().abs() <= std::f32::consts::FRAC_PI_4 // <= 45°
    }
}

/// Información completa del contacto de suelo devuelta por la sonda de colisión.
/// Ref: Collision_ProcessResult.c (0x80048034), Collision::floorPick (collision.cpp:784).
#[allow(dead_code)]
#[derive(Debug, Clone, Copy)]
pub struct GroundContact {
    /// Altura de contacto Y del suelo en el punto s.
    pub height: f32,
    /// Vector normal 3D de la superficie (perpendicular al plano inclinado).
    pub normal: Vec3,
    /// Ángulo de la pendiente en radianes.
    pub slope_angle: f32,
    /// Material de la superficie para fricción y SFX.
    pub surface_type: SurfaceType,
    /// True si la pendiente es transitable (< 45°).
    pub is_walkable: bool,
    /// True si es una rampa pronunciada (> 45°) que provoca deslizamiento o escalada.
    pub is_steep: bool,
}

/// Segmento de pared vertical bloqueante.
/// Ref: Collision_CheckWall.c (0x80048134), Collision::isWallBlocking.
#[allow(dead_code)]
#[derive(Debug, Clone, Deserialize)]
pub struct WallSegment {
    pub s: f32,
    pub y_bottom: f32,
    pub y_top: f32,
    pub kind: u16,
}

/// Resultado de la comprobación y empuje de muros.
/// Ref: Collision_Push.c (0x80045810), Collision_Push2.c (0x80047468).
#[allow(dead_code)]
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct WallHit {
    /// True si una pared bloquea el avance.
    pub is_blocked: bool,
    /// Coordenada s de la pared que bloquea.
    pub wall_s: f32,
    /// Coordenada s corregida empujada hacia atrás para evitar penetración.
    pub push_s: f32,
}

/// Junción / bifurcación de camino en un riel.
/// Ref: Collision_GetFloorHeight.c:58, scld_geometry.py:45-48.
#[allow(dead_code)]
#[derive(Debug, Clone, Deserialize)]
pub struct CollisionJunction {
    pub s: f32,
    pub pos: [f32; 3],
    pub direction: String, // "up" o "down"
    pub dest: usize,       // Índice del plano destino (1-based)
    pub walk: bool,
    pub gated: bool,
}

/// Plano de colisión 2.5D (SCLD Path Sector).
/// Corresponde a un sector de riel continuo en MAIN.EXE.
/// Ref: f_ProjectActorOntoAreaPlane (0x80047778), Collision::snapObjectToTerrain (collision.cpp:769).
#[derive(Debug, Clone, Deserialize)]
pub struct CollisionPlane {
    pub id: usize,
    pub p1: [f32; 3],
    pub p2: [f32; 3],
    pub length: f32,
    pub dir: [f32; 2],
    /// Link Start: ID de plano conectado en s = 0 (CELL_SECTOR_LINK 0x4000).
    pub ls: u8,
    /// Link End: ID de plano conectado en s = length (CELL_SECTOR_LINK 0x4000).
    pub le: u8,
    pub floors: Vec<FloorSegment>,
    pub walls: Vec<WallSegment>,
    pub junctions: Vec<CollisionJunction>,
}

impl CollisionPlane {
    /// Posición 3D del punto del riel en la coordenada s.
    pub fn point_at(&self, s: f32) -> Vec3 {
        let clamped_s = s.clamp(0.0, self.length);
        Vec3::new(
            self.p1[0] + self.dir[0] * clamped_s,
            self.p1[1],
            self.p1[2] + self.dir[1] * clamped_s,
        )
    }

    /// Coordenada curvilínea s correspondiente a un punto horizontal (X, Z).
    pub fn s_of(&self, x: f32, z: f32) -> f32 {
        let dx = x - self.p1[0];
        let dz = z - self.p1[2];
        (dx * self.dir[0] + dz * self.dir[1]).clamp(0.0, self.length)
    }

    /// Proyección ortogonal con eje dominante sobre el plano del sector.
    ///
    /// Ref: `f_ProjectActorOntoAreaPlane` (0x80047778) y `grid_step_4798c` (collision.cpp:678-716).
    /// - Si span_x < span_z (eje Z dominante): clampea Z a [z1, z2] y recomputa X = x1 + (Z - z1) * (dx / dz).
    /// - Si span_x >= span_z (eje X dominante): clampea X a [x1, x2] y recomputa Z = z1 + (X - x1) * (dz / dx).
    /// Retorna `(projected_x, projected_z, s)`.
    pub fn project_actor_onto_plane(&self, x: f32, z: f32) -> (f32, f32, f32) {
        let dx = self.p2[0] - self.p1[0];
        let dz = self.p2[2] - self.p1[2];
        let span_x = dx.abs();
        let span_z = dz.abs();

        if span_x < span_z {
            // Eje Z dominante
            let (min_z, max_z) = if dz >= 0.0 { (self.p1[2], self.p2[2]) } else { (self.p2[2], self.p1[2]) };
            let clamped_z = z.clamp(min_z, max_z);
            let s = if span_z > 1e-4 { (clamped_z - self.p1[2]) / dz * self.length } else { 0.0 };
            let computed_x = if span_z > 1e-4 { self.p1[0] + (clamped_z - self.p1[2]) * (dx / dz) } else { self.p1[0] };
            (computed_x, clamped_z, s.clamp(0.0, self.length))
        } else {
            // Eje X dominante
            let (min_x, max_x) = if dx >= 0.0 { (self.p1[0], self.p2[0]) } else { (self.p2[0], self.p1[0]) };
            let clamped_x = x.clamp(min_x, max_x);
            let s = if span_x > 1e-4 { (clamped_x - self.p1[0]) / dx * self.length } else { 0.0 };
            let computed_z = if span_x > 1e-4 { self.p1[2] + (clamped_x - self.p1[0]) * (dz / dx) } else { self.p1[2] };
            (clamped_x, computed_z, s.clamp(0.0, self.length))
        }
    }

    /// Sondeo simple de la altura de suelo (floorPick).
    /// Retorna la cota Y más alta situada por debajo del actor (`y <= current_y + 0.48m`).
    /// Ref: Collision::floorPick (collision.cpp:39-41, 784-785).
    #[allow(dead_code)]
    pub fn sample_floor(&self, s: f32, current_y: f32) -> Option<f32> {
        self.sample_ground_contact(s, current_y).map(|c| c.height)
    }

    /// Sondeo completo de suelo con cálculo de normal 3D, pendiente y material.
    ///
    /// Implementa:
    /// - `Collision_FindGround` (0x800498C8)
    /// - `Collision_CalcSlope` (0x80049674)
    /// - `Collision_CalcAngle` (0x80049760)
    /// - `Collision_GetSurfaceType` (0x8004960C)
    /// - `Collision_ProcessResult` (0x80048034)
    pub fn sample_ground_contact(&self, s: f32, current_y: f32) -> Option<GroundContact> {
        let mut best: Option<(&FloorSegment, f32)> = None;
        const CELL_TOLERANCE: f32 = 0.05;
        const STEP_UP_LIMIT: f32 = 0.48; // 48 unidades PS1 = 0.48m máximo para subir un escalón

        for floor in &self.floors {
            if s >= floor.s_min - CELL_TOLERANCE && s <= floor.s_max + CELL_TOLERANCE {
                let h = floor.height_at(s);
                // Debe estar por debajo o como máximo a un escalón de altura (STEP_UP_LIMIT).
                if h <= current_y + STEP_UP_LIMIT {
                    match best {
                        None => best = Some((floor, h)),
                        Some((_, best_h)) => {
                            if h > best_h {
                                best = Some((floor, h));
                            }
                        }
                    }
                }
            }
        }

        let (seg, height) = best?;
        let slope_angle = seg.slope_angle();
        let normal = seg.surface_normal(self.dir);
        let surface_type = seg.surface_type();
        let is_steep = slope_angle.abs() > std::f32::consts::FRAC_PI_4; // > 45°
        let is_walkable = !is_steep;

        Some(GroundContact {
            height,
            normal,
            slope_angle,
            surface_type,
            is_walkable,
            is_steep,
        })
    }

    /// Comprueba si una pared bloquea el avance entre dos coordenadas s.
    /// Ref: `f_ResolveTerrainProbeHorizontalSurfaceBySideMask` (MAIN.EXE / scld_geometry.py:24-28).
    /// - `kind & 0x04` (WALL_A): bloquea el movimiento en sentido hacia adelante (+s).
    /// - `kind & 0x08` (WALL_B): bloquea el movimiento en sentido hacia atrás (-s).
    #[allow(dead_code)]
    pub fn is_wall_blocking(&self, s_start: f32, s_end: f32, y: f32) -> bool {
        self.resolve_wall_movement(s_start, s_end, y).is_blocked
    }

    /// Resuelve el movimiento horizontal contra muros y calcula la posición empujada (push-out).
    ///
    /// Implementa:
    /// - `Collision_CheckWall` (0x80048134)
    /// - `Collision_Push` (0x80045810)
    /// - `Collision_Push2` (0x80047468)
    pub fn resolve_wall_movement(&self, s_start: f32, s_end: f32, y: f32) -> WallHit {
        let (min_s, max_s, moving_forward) = if s_end >= s_start {
            (s_start, s_end, true)
        } else {
            (s_end, s_start, false)
        };

        const WALL_TOLERANCE_S: f32 = 0.05;
        const WALL_TOLERANCE_Y: f32 = 0.20;
        const PUSH_OFFSET: f32 = 0.04; // Desplazamiento preventivo para no quedar incrustado

        for wall in &self.walls {
            if wall.s >= min_s - WALL_TOLERANCE_S && wall.s <= max_s + WALL_TOLERANCE_S {
                if y >= wall.y_bottom - WALL_TOLERANCE_Y && y <= wall.y_top + WALL_TOLERANCE_Y {
                    if moving_forward && (wall.kind & 0x04 != 0) {
                        return WallHit {
                            is_blocked: true,
                            wall_s: wall.s,
                            push_s: (wall.s - PUSH_OFFSET).max(0.0),
                        };
                    }
                    if !moving_forward && (wall.kind & 0x08 != 0) {
                        return WallHit {
                            is_blocked: true,
                            wall_s: wall.s,
                            push_s: (wall.s + PUSH_OFFSET).min(self.length),
                        };
                    }
                }
            }
        }

        WallHit {
            is_blocked: false,
            wall_s: s_end,
            push_s: s_end,
        }
    }
}

// ─── RECURSO PRINCIPAL DE COLISIÓN DE NIVEL ──────────────────────────────────

#[derive(Debug, Deserialize)]
struct RawCollisionFile {
    planes: Vec<CollisionPlane>,
}

/// Base de datos espacial de colisiones 2.5D cargada para el nivel activo.
/// Ref: Collision::gridSetup (0x80049968), Collision::gridQuery (0x80047CBC).
#[derive(Resource, Default)]
pub struct LevelCollision {
    pub planes: HashMap<usize, CollisionPlane>,
}

impl LevelCollision {
    /// Carga y parsea la geometría de colisión SCLD desde un archivo JSON exportado.
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

    /// Obtiene un plano de colisión por su ID (1-based).
    pub fn get_plane(&self, id: usize) -> Option<&CollisionPlane> {
        self.planes.get(&id)
    }

    /// Detección auténtica de bifurcaciones en rieles SCLD.
    ///
    /// En PS1 Tomba 2, cada junción ocupa una celda SCLD de 64 unidades PS1 (0.64m de ancho).
    /// La ventana de captura es media celda (0.32m) a lo largo del riel, y dentro del umbral de altura (0.64m).
    /// Ref: Collision_GetFloorHeight.c:58, scld_geometry.py:45-48.
    pub fn check_junction(
        &self,
        plane_id: usize,
        s: f32,
        y: f32,
        direction: &str,
    ) -> Option<&CollisionJunction> {
        let plane = self.get_plane(plane_id)?;
        const HALF_CELL: f32 = 0.32;     // 32 unidades PS1 = ancho de media celda
        const HEIGHT_WINDOW: f32 = 0.64; // 64 unidades PS1 = umbral vertical de captura

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

    /// Función universal de snapping al terreno (`snapObjectToTerrain` 0x8004766C).
    ///
    /// Toma la posición 3D de cualquier entidad (Tomba, Cerdo Koma, Caja, Coleccionable)
    /// y la proyecta de forma segura al riel activo, calculando su coordenada s, su altura
    /// de apoyo en el suelo y su vector normal de superficie.
    /// Ref: Collision::snapObjectToTerrain (collision.cpp:769-816).
    #[allow(dead_code)]
    pub fn snap_actor_to_terrain(
        &self,
        plane_id: usize,
        world_x: f32,
        world_y: f32,
        world_z: f32,
    ) -> Option<(usize, f32, GroundContact)> {
        let plane = self.get_plane(plane_id)?;
        let (_, _, s) = plane.project_actor_onto_plane(world_x, world_z);
        let contact = plane.sample_ground_contact(s, world_y)?;
        Some((plane_id, s, contact))
    }

    /// Desplazamiento continuo a lo largo del riel con resolución de muros y enlace entre planos.
    ///
    /// Implementa:
    /// - `Collision_MoveMain` (0x80045CAC)
    /// - `CELL_SECTOR_LINK` (0x4000 / 0x80048FC4): Handoff automático continuo en extremos de plano (ls / le).
    /// - `Collision_CheckWall` (0x80048134) & `Collision_Push` (0x80045810).
    /// Retorna `(new_plane_id, new_s, was_blocked)`.
    #[allow(dead_code)]
    pub fn advance_actor_along_rail(
        &self,
        current_plane_id: usize,
        current_s: f32,
        delta_s: f32,
        y: f32,
    ) -> (usize, f32, bool) {
        let Some(plane) = self.get_plane(current_plane_id) else {
            return (current_plane_id, current_s, false);
        };

        let target_s = current_s + delta_s;

        // 1. Comprobación y empuje contra muros en el plano actual
        let wall_hit = plane.resolve_wall_movement(current_s, target_s, y);
        if wall_hit.is_blocked {
            return (current_plane_id, wall_hit.push_s, true);
        }

        // 2. Enlace automático al inicio del plano (Link Start: ls, s < 0)
        if target_s < 0.0 {
            if plane.ls > 0 {
                let dest_id = plane.ls as usize;
                if let Some(dest_plane) = self.get_plane(dest_id) {
                    let overflow = -target_s;
                    let new_s = (dest_plane.length - overflow).clamp(0.0, dest_plane.length);
                    return (dest_id, new_s, false);
                }
            }
            return (current_plane_id, 0.0, true);
        }

        // 3. Enlace automático al final del plano (Link End: le, s > length)
        if target_s > plane.length {
            if plane.le > 0 {
                let dest_id = plane.le as usize;
                if let Some(dest_plane) = self.get_plane(dest_id) {
                    let overflow = target_s - plane.length;
                    let new_s = overflow.clamp(0.0, dest_plane.length);
                    return (dest_id, new_s, false);
                }
            }
            return (current_plane_id, plane.length, true);
        }

        (current_plane_id, target_s, false)
    }
}

// ─── GIZMOS DE DEPURACIÓN (F2 Toggle) ─────────────────────────────────────────

#[derive(Resource)]
pub struct CollisionDebugConfig {
    pub show_rails: bool,
}

impl Default for CollisionDebugConfig {
    fn default() -> Self {
        Self { show_rails: true }
    }
}

/// Sistema de visualización 3D interactiva de la geometría de colisión SCLD.
/// - Tecla F2: Alterna la visibilidad.
/// - Rieles: Verde brillante (activo), Azul tenue (secundarios).
/// - Suelo y pendientes: Líneas con inclinación.
/// - Muros: Marcadores magenta.
/// - Junciones: Esferas amarillas (Up) y rosas (Down).
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
        let rail_color = if is_active {
            Color::srgb(0.1, 1.0, 0.4) // Verde lima para riel activo
        } else {
            Color::srgb(0.2, 0.4, 0.8) // Azul suave para otros rieles
        };

        gizmos.line(p1, p2, rail_color);

        // Dibujar segmentos de suelo y pendientes
        for floor in &plane.floors {
            let start_pt = plane.point_at(floor.s_min);
            let end_pt = plane.point_at(floor.s_max);
            let floor_start = Vec3::new(start_pt.x, floor.y_start, start_pt.z);
            let floor_end = Vec3::new(end_pt.x, floor.y_end, end_pt.z);

            let floor_color = if floor.is_walkable() {
                Color::srgb(0.0, 0.8, 0.9) // Cian para suelo transitable
            } else {
                Color::srgb(1.0, 0.3, 0.0) // Naranja para rampa muy inclinada (>45°)
            };
            gizmos.line(floor_start, floor_end, floor_color);
        }

        // Dibujar muros verticales
        for wall in &plane.walls {
            let wall_pt = plane.point_at(wall.s);
            let bottom = Vec3::new(wall_pt.x, wall.y_bottom, wall_pt.z);
            let top = Vec3::new(wall_pt.x, wall.y_top, wall_pt.z);
            gizmos.line(bottom, top, Color::srgb(0.9, 0.1, 0.9)); // Magenta para muros
        }

        // Dibujar junciones
        for junc in &plane.junctions {
            let j_pos = Vec3::from(junc.pos);
            let color = if junc.direction == "up" {
                Color::srgb(1.0, 0.85, 0.0) // Amarillo para Up
            } else {
                Color::srgb(1.0, 0.2, 0.6)  // Rosa para Down
            };
            gizmos.sphere(j_pos, 0.5, color);
        }
    }
}

// ─── TESTS UNITARIOS DEL SECTOR 3 ─────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_surface_type_from_kind() {
        assert_eq!(SurfaceType::from_kind(0), SurfaceType::Rock);
        assert_eq!(SurfaceType::from_kind(1), SurfaceType::Wood);
        assert_eq!(SurfaceType::from_kind(769), SurfaceType::Wood); // 769 = 0x0301 (Wood)
        assert_eq!(SurfaceType::from_kind(2), SurfaceType::Metal);
        assert_eq!(SurfaceType::from_kind(3), SurfaceType::Water);
        assert_eq!(SurfaceType::from_kind(4), SurfaceType::Ice);
        assert_eq!(SurfaceType::from_kind(5), SurfaceType::Mud);
    }

    #[test]
    fn test_floor_slope_and_normal_calculation() {
        let flat = FloorSegment {
            s_min: 0.0,
            s_max: 2.0,
            y_start: 5.0,
            y_end: 5.0,
            kind: 0,
        };
        assert_eq!(flat.slope_angle(), 0.0);
        let normal_flat = flat.surface_normal([0.0, 1.0]);
        assert!((normal_flat - Vec3::Y).length() < 1e-4);

        // Rampa inclinada subiendo a 45° (dy = 2.0, ds = 2.0)
        let slope = FloorSegment {
            s_min: 0.0,
            s_max: 2.0,
            y_start: 0.0,
            y_end: 2.0,
            kind: 0,
        };
        let angle = slope.slope_angle();
        assert!((angle - std::f32::consts::FRAC_PI_4).abs() < 1e-4); // 45°

        // Normal inclinada apuntando hacia arriba y hacia atrás del vector dir
        let normal_slope = slope.surface_normal([0.0, 1.0]);
        assert!(normal_slope.y > 0.0);
        assert!(normal_slope.z < 0.0);
    }

    #[test]
    fn test_wall_blocking_and_push_resolution() {
        let plane = CollisionPlane {
            id: 1,
            p1: [0.0, 0.0, 0.0],
            p2: [10.0, 0.0, 0.0],
            length: 10.0,
            dir: [1.0, 0.0],
            ls: 0,
            le: 0,
            floors: vec![],
            walls: vec![
                WallSegment {
                    s: 5.0,
                    y_bottom: -1.0,
                    y_top: 3.0,
                    kind: 0x04, // Bloquea avance hacia +s
                },
                WallSegment {
                    s: 8.0,
                    y_bottom: -1.0,
                    y_top: 3.0,
                    kind: 0x08, // Bloquea retroceso hacia -s
                },
            ],
            junctions: vec![],
        };

        // Movimiento hacia adelante chocando con muro en s = 5.0
        let hit_forward = plane.resolve_wall_movement(4.0, 6.0, 1.0);
        assert!(hit_forward.is_blocked);
        assert_eq!(hit_forward.wall_s, 5.0);
        assert!(hit_forward.push_s < 5.0);

        // Movimiento sin cruzar el muro
        let hit_clear = plane.resolve_wall_movement(1.0, 3.0, 1.0);
        assert!(!hit_clear.is_blocked);
        assert_eq!(hit_clear.push_s, 3.0);
    }

    #[test]
    fn test_load_collision_and_junction_check() {
        let col = LevelCollision::load_from_file("assets/levels/area_04_collision.json")
            .expect("Debe cargar area_04_collision.json");

        assert!(col.planes.len() >= 37);

        // Comprobar plano 1 (el muelle de Fisherman's Village)
        let p1 = col.get_plane(1).expect("Plano 1 debe existir");
        assert_eq!(p1.id, 1);
        assert!(p1.length > 100.0);
        assert!(!p1.floors.is_empty());

        // Comprobar contacto de suelo en s = 10.0
        let contact = p1.sample_ground_contact(10.0, 9.12).expect("Debe encontrar suelo");
        assert!(contact.height > 8.0);
        assert!(contact.is_walkable);
        assert_eq!(contact.surface_type, SurfaceType::Wood); // El muelle es de madera

        // Comprobar junción UP en el plano 1 (está en s = 14.395, dest = 2)
        let junc = col.check_junction(1, 14.4, 9.12, "up");
        assert!(junc.is_some());
        let j = junc.unwrap();
        assert_eq!(j.dest, 2);
        assert_eq!(j.direction, "up");
    }

    #[test]
    fn test_snap_actor_to_terrain() {
        let col = LevelCollision::load_from_file("assets/levels/area_04_collision.json")
            .expect("Debe cargar area_04_collision.json");

        // Actor cerca del muelle (Plano 1, s ~ 10.0)
        let snapped = col.snap_actor_to_terrain(1, 39.68, 9.12, 42.0);
        assert!(snapped.is_some());
        let (plane_id, s, contact) = snapped.unwrap();
        assert_eq!(plane_id, 1);
        assert!((s - 10.0).abs() < 1.0);
        assert!(contact.is_walkable);
        assert_eq!(contact.surface_type, SurfaceType::Wood);
    }

    #[test]
    fn test_advance_actor_along_rail_with_handoff() {
        let mut planes = HashMap::new();
        // Plano 1: longitud 10.0, conecta en le a Plano 2
        planes.insert(
            1,
            CollisionPlane {
                id: 1,
                p1: [0.0, 0.0, 0.0],
                p2: [10.0, 0.0, 0.0],
                length: 10.0,
                dir: [1.0, 0.0],
                ls: 0,
                le: 2,
                floors: vec![],
                walls: vec![WallSegment {
                    s: 5.0,
                    y_bottom: -1.0,
                    y_top: 2.0,
                    kind: 0x04,
                }],
                junctions: vec![],
            },
        );
        // Plano 2: longitud 20.0, conecta en ls a Plano 1
        planes.insert(
            2,
            CollisionPlane {
                id: 2,
                p1: [10.0, 0.0, 0.0],
                p2: [30.0, 0.0, 0.0],
                length: 20.0,
                dir: [1.0, 0.0],
                ls: 1,
                le: 0,
                floors: vec![],
                walls: vec![],
                junctions: vec![],
            },
        );
        let col = LevelCollision { planes };

        // 1. Choque contra muro en s = 5.0
        let (plane, s, blocked) = col.advance_actor_along_rail(1, 4.0, 2.0, 0.0);
        assert_eq!(plane, 1);
        assert!(blocked);
        assert!(s < 5.0);

        // 2. Movimiento libre en plano 1
        let (plane, s, blocked) = col.advance_actor_along_rail(1, 6.0, 2.0, 0.0);
        assert_eq!(plane, 1);
        assert!(!blocked);
        assert_eq!(s, 8.0);

        // 3. Handoff continuo de Plano 1 a Plano 2 vía `le` (overflow = 9.0 + 2.0 - 10.0 = 1.0)
        let (plane, s, blocked) = col.advance_actor_along_rail(1, 9.0, 2.0, 0.0);
        assert_eq!(plane, 2);
        assert!(!blocked);
        assert_eq!(s, 1.0);

        // 4. Handoff continuo de Plano 2 a Plano 1 vía `ls` (overflow = -(-0.5) = 0.5 -> 10.0 - 0.5 = 9.5)
        let (plane, s, blocked) = col.advance_actor_along_rail(2, 0.5, -1.0, 0.0);
        assert_eq!(plane, 1);
        assert!(!blocked);
        assert_eq!(s, 9.5);
    }
}
