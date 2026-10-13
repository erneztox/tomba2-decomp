use crate::collision::LevelCollision;
use bevy::prelude::*;

// ─── FÍSICA AUTÉNTICA PS1 ────────────────────────────────────────────────────
// Ref: Entity_ApplyGravity.c (func_80066478), Entity_ApplyVelocityMax.c (func_80066538)
// Entity_State_Idle.c:43 (func_80060064), Entity_State_Walk.c (func_8006670C)

/// Offset del origen del esqueleto al contacto de pie.
/// bone_0(pelvis)=-0.23 + bone_9(muslo)=-0.13 + bone_10(tibia)=-0.52 + bone_11(pie)=-0.37 = -1.25m
/// Ref: ActorTomba::settleStep (actor_tomba.cpp:385-403), Collision::snapObjectToTerrain (collision.cpp:770).
pub const TOMBA_PHYS_OFFSET_Y: f32 = 1.25;

/// Velocidad de caminata horizontal en el riel SCLD.
/// PS1: 16 unidades/tick × (1m/100u) × 30 ticks/s = 4.80 m/s.
/// Ref: Entity_State_Walk.c (func_8006670C), ActorTomba::velocityIntegrate (actor_tomba.cpp:440).
pub const TOMBA_WALK_SPEED: f32 = 4.80;

/// Velocidad inicial del salto (positiva = arriba en Bevy Y-up).
/// PS1: velocity_y = 0xd800 = -0x2800 = -10240 subunidades/tick (signo PS1 Y-down → arriba).
/// -10240/256 = -40 PS1 units/tick → 40×(1m/100)×30 = 12.0 m/s hacia arriba.
/// Ref: Entity_State_Idle.c:43 (func_80060064).
pub const TOMBA_JUMP_SPEED: f32 = 12.0;

/// Gravedad de ascenso en salto: +0x360 (864 subunidades/tick = 3.375 PS1 units/tick).
/// A 30Hz: 3.375 * 0.01 * 30^2 = 30.375 m/s^2.
/// Ref: Entity_State_Jump2.c:28 (func_800572EC), Entity_State_Dash.c:16 (func_8005706C).
pub const TOMBA_JUMP_GRAVITY: f32 = 30.375;

/// Gravedad normal / de caída: +0x400 (1024 subunidades/tick = 4.0 PS1 units/tick).
/// A 30Hz: 4.0 * 0.01 * 30^2 = 36.0 m/s^2.
/// Ref: Entity_ApplyGravity.c (func_80066478), Entity_ApplyVelocityMax.c (func_80066538).
pub const TOMBA_GRAVITY: f32 = 36.0;

/// Velocidad terminal de caída (tope positivo hacia abajo en Bevy).
/// PS1: if (velocity_y > 0x2800) velocity_y = 0x2800 → 40 PS1 units/tick → 12.0 m/s.
/// Ref: Entity_ApplyVelocityMax.c (func_80066538).
pub const TOMBA_TERMINAL_VELOCITY: f32 = 12.0;

/// Velocidad de giro en junción.
/// PS1: 0x100 unidades de ángulo/tick → 256/4096 × TAU × 30 rad/s.
/// Ref: Entity_StateMain12.c:96.
pub const TOMBA_TURN_RATE: f32 = 256.0 * (std::f32::consts::TAU / 4096.0) * 30.0;


// ─── COMPONENTES ─────────────────────────────────────────────────────────────

#[derive(Component)]
pub struct TombaPlayer;

#[derive(Debug, Clone, PartialEq, Default)]
pub enum PlayerActionState {
    #[default]
    Normal,
    /// Giro auténtico hacia una junción (Entity_StateMain12.c states 2 & 3)
    TurnToJunction {
        dest_plane: usize,
        dest_s: f32,
        target_look_dir: Vec3,
        timer: f32,
    },
}

#[derive(Component, Debug, Clone)]
pub struct TombaRail {
    /// ID de plano SCLD activo (1-based). Correlaciona con ACT_SECTOR_ID en entity+0x2A.
    pub plane_id: usize,
    /// Posición 3D en metros. Correlaciona con ACT_WORLD_X/Y/Z en entity+0x2E/0x32/0x36.
    pub world_pos: Vec3,
    /// Distancia a lo largo del plano activo en metros.
    pub s: f32,
    /// Altura de contacto con el suelo (Y) en metros.
    pub y: f32,
    /// Velocidad vertical en m/s. CONVENCIÓN BEVY: positivo = arriba, negativo = abajo.
    /// PS1 usa Y-down (positivo = abajo); convertimos en los límites de lectura/escritura.
    /// Correlaciona con velocity_y en entity+0x4A (Entity_ApplyGravity.c).
    pub vertical_velocity: f32,
    /// Contacto con el suelo. Correlaciona con collision_state en entity+0x29 (tomba.h:51).
    pub is_grounded: bool,
    /// Signo de orientación (+1.0 adelante, -1.0 atrás). Correlaciona con direction en entity+0x147.
    pub facing: f32,
    /// Máquina de estados de acción. Correlaciona con action_state en entity+0x06.
    pub action_state: PlayerActionState,
    /// Dirección de mirada actual en espacio mundo.
    pub current_look_dir: Vec3,
    /// Velocidad horizontal actual en m/s.
    pub move_speed: f32,
    /// Latch de fase ascendente del salto (state_flag144 en PS1).
    pub is_rising: bool,
}

impl Default for TombaRail {
    fn default() -> Self {
        Self {
            plane_id: 1,
            world_pos: Vec3::new(39.68, 9.12, 42.0),
            s: 10.0,
            y: 9.12,
            vertical_velocity: 0.0,
            is_grounded: true,
            facing: 1.0,
            action_state: PlayerActionState::Normal,
            current_look_dir: Vec3::Z,
            move_speed: 0.0,
            is_rising: false,
        }
    }
}

/// Rastrea qué nodo de animación está activo actualmente.
///
/// BUG CRÍTICO ANTERIOR: `tomba_animation_control_system` llamaba `transitions.play()`
/// CADA FRAME (cada ~16ms). En Bevy 0.15, `play()` siempre reinicia la animación a tick=0.
/// Resultado: Tomba congelado en el frame 1 de cada clip (la pose de "inclinado deslizándose").
///
/// FIX: Solo llamar `transitions.play()` cuando el nodo objetivo CAMBIA.
#[derive(Component, Debug, Clone, PartialEq)]
pub struct CurrentAnimation(pub AnimationNodeIndex);

// ─── ANIMACIÓN ───────────────────────────────────────────────────────────────

#[derive(Resource)]
pub struct TombaAnimationAssets {
    pub graph_handle: Handle<AnimationGraph>,
    pub idle_node: AnimationNodeIndex,
    pub walk_node: AnimationNodeIndex,
    pub run_node: AnimationNodeIndex,
    pub jump_node: AnimationNodeIndex,
    pub fall_node: AnimationNodeIndex,
}

pub fn setup_tomba_animations(
    mut commands: Commands,
    asset_server: Res<AssetServer>,
    mut animation_graphs: ResMut<Assets<AnimationGraph>>,
) {
    let mut graph = AnimationGraph::new();
    let idle_node = graph.add_clip(asset_server.load("models/tomba.glb#Animation2"), 1.0, graph.root);
    let walk_node = graph.add_clip(asset_server.load("models/tomba.glb#Animation4"), 1.0, graph.root);
    let run_node  = graph.add_clip(asset_server.load("models/tomba.glb#Animation12"), 1.0, graph.root);
    // Ref: Entity_State_Jump.c:23 (0x14 = Anim 20, 11 frames = 0.33s ascenso)
    let jump_node = graph.add_clip(asset_server.load("models/tomba.glb#Animation20"), 1.0, graph.root);
    // Ref: Entity_State_Jump2.c:29 (0xca = Anim 202, pose de caída/apex)
    let fall_node = graph.add_clip(asset_server.load("models/tomba.glb#Animation202"), 1.0, graph.root);
    let graph_handle = animation_graphs.add(graph);

    commands.insert_resource(TombaAnimationAssets {
        graph_handle,
        idle_node,
        walk_node,
        run_node,
        jump_node,
        fall_node,
    });
}

/// Engancha el AnimationPlayer del glTF scene cuando aparece.
pub fn hook_tomba_animation_player(
    mut commands: Commands,
    anim_assets: Option<Res<TombaAnimationAssets>>,
    mut players: Query<(Entity, &mut AnimationPlayer), Added<AnimationPlayer>>,
) {
    let Some(anim_assets) = anim_assets else { return };

    for (entity, mut player) in &mut players {
        let mut transitions = AnimationTransitions::new();
        transitions
        .play(&mut player, anim_assets.idle_node, std::time::Duration::ZERO)
        .repeat();
        commands
        .entity(entity)
        .insert(AnimationGraphHandle(anim_assets.graph_handle.clone()))
        .insert(transitions)
        .insert(CurrentAnimation(anim_assets.idle_node));
    }
}

/// Controla la animación esqueletal basado en estado de movimiento y aéreo.
///
/// Solo llama `transitions.play()` cuando el estado CAMBIA (fix del freeze).
/// Mapeo de estados:
///   - Aéreo + sube (vel > 0)  → jump  (clip #202)
///   - Aéreo + baja (vel <= 0) → fall  (clip #203)
///   - Suelo + girando         → walk  (clip #4)
///   - Suelo + speed > 3.0    → run   (clip #12)
///   - Suelo + speed > 0.1    → walk  (clip #4)
///   - Suelo + quieto          → idle  (clip #2)
///
/// Ref: Entity_State_Walk.c, Entity_State_Jump.c, Entity_ApplyGravity.c.
pub fn tomba_animation_control_system(
    anim_assets: Option<Res<TombaAnimationAssets>>,
    rails: Query<&TombaRail, With<TombaPlayer>>,
    mut players: Query<(&mut AnimationPlayer, &mut AnimationTransitions, &mut CurrentAnimation)>,
) {
    let Some(anim_assets) = anim_assets else { return };
    let Ok(rail) = rails.get_single() else { return };

    let target_node = if !rail.is_grounded {
        if rail.is_rising {
            anim_assets.jump_node
        } else {
            anim_assets.fall_node
        }
    } else {
        match rail.action_state {
            PlayerActionState::TurnToJunction { .. } => anim_assets.walk_node,
            PlayerActionState::Normal => {
                if rail.move_speed > 3.0 {
                    anim_assets.run_node
                } else if rail.move_speed > 0.1 {
                    anim_assets.walk_node
                } else {
                    anim_assets.idle_node
                }
            }
        }
    };

    for (mut player, mut transitions, mut current_anim) in &mut players {
        // Solo reiniciar la animación cuando el estado objetivo cambia.
        if current_anim.0 != target_node {
            current_anim.0 = target_node;
            let anim_transition = transitions
                .play(&mut player, target_node, std::time::Duration::from_millis(100));

            // Solo reproducir en bucle las animaciones continuas (Idle, Walk, Run).
            // Las animaciones de salto y caída (Jump, Fall) son estados transitorios que
            // NO deben repetirse en bucle rápido (esto causaba la vibración de brazos).
            if target_node == anim_assets.idle_node
                || target_node == anim_assets.walk_node
                || target_node == anim_assets.run_node
            {
                anim_transition.repeat();
            }
        }
    }
}

// ─── MOVIMIENTO Y FÍSICA ─────────────────────────────────────────────────────

/// Sistema de movimiento 2.5D sobre rieles SCLD con física discreta 30Hz.
///
/// La física PS1 original es DISCRETA: un tick fijo de física por vblank (30Hz).
/// Entity_ApplyGravity.c añade exactamente +0x400 por tick, y posición += velocity * 0x100 por tick.
/// Usamos un acumulador sub-tick para disparar n ticks discretos por frame de Bevy.
///
/// Detección de suelo: el juego original usa Collision::snapObjectToTerrain (collision.cpp:816)
/// que SOLO mueve X/Z; Y se actualiza por Entity_ApplyGravity/Entity_CollisionGround.
/// Cuando collision_state (entity+0x29) != 0 → el actor tocó el suelo → velocity_y = 0.
///
/// Ref: Entity_ApplyGravity.c (func_80066478), Entity_ApplyVelocityMax.c (func_80066538),
///      Collision::snapObjectToTerrain (collision.cpp:816), Entity_State_Walk.c (func_8006670C).
pub fn tomba_movement_system(
    mut commands: Commands,
    asset_server: Option<Res<AssetServer>>,
    time: Res<Time>,
    keyboard: Res<ButtonInput<KeyCode>>,
    collision: Res<LevelCollision>,
    mut query: Query<(&mut TombaRail, &mut Transform), With<TombaPlayer>>,
) {
    let dt = time.delta_secs();
    if dt <= 0.0 {
        return;
    }

    for (mut rail, mut transform) in &mut query {
        let Some(plane) = collision.get_plane(rail.plane_id) else {
            continue;
        };

        // ── Estado de giro hacia junción ─────────────────────────────────────
        match rail.action_state.clone() {
            PlayerActionState::TurnToJunction {
                dest_plane,
                dest_s,
                target_look_dir,
                timer,
            } => {
                // Ref: Entity_StateMain12.c:96-100 (Math_ApproachAngle_2)
                let new_timer = timer + dt;
                let current = rail.current_look_dir;
                let angle_diff = current.angle_between(target_look_dir);

                if angle_diff <= 0.08 || new_timer >= 0.35 {
                    rail.plane_id = dest_plane;
                    rail.s = dest_s;
                    rail.current_look_dir = target_look_dir;
                    rail.action_state = PlayerActionState::Normal;
                    println!(
                        "-> Switched rail to Plane {} at s={:.2}m (turn complete)",
                             dest_plane, dest_s
                    );
                } else {
                    let step = (TOMBA_TURN_RATE * dt / angle_diff).min(1.0);
                    rail.current_look_dir = current.lerp(target_look_dir, step).normalize();
                    rail.action_state = PlayerActionState::TurnToJunction {
                        dest_plane,
                        dest_s,
                        target_look_dir,
                        timer: new_timer,
                    };
                }

                let pos_on_rail = plane.point_at(rail.s);
                rail.world_pos = Vec3::new(pos_on_rail.x, rail.y, pos_on_rail.z);
                transform.translation = Vec3::new(rail.world_pos.x, rail.y + TOMBA_PHYS_OFFSET_Y, rail.world_pos.z);
                if rail.current_look_dir.length_squared() > 1e-4 {
                    transform.look_to(-rail.current_look_dir, Vec3::Y);
                }
                continue;
            }
            PlayerActionState::Normal => {}
        }

        // ── 1. Input horizontal ──────────────────────────────────────────────
        // Ref: Entity_State_Walk.c (func_8006670C), ActorTomba::velocityIntegrate (actor_tomba.cpp:440).
        let mut move_input = 0.0_f32;
        if keyboard.pressed(KeyCode::KeyA) || keyboard.pressed(KeyCode::ArrowLeft) {
            move_input -= 1.0;
        }
        if keyboard.pressed(KeyCode::KeyD) || keyboard.pressed(KeyCode::ArrowRight) {
            move_input += 1.0;
        }

        if move_input != 0.0 {
            rail.facing = move_input;
            rail.move_speed = TOMBA_WALK_SPEED;
            let step = move_input * TOMBA_WALK_SPEED * dt;
            let target_s = rail.s + step;
            // Ref: f_ResolveTerrainProbeHorizontalSurfaceBySideMask
            if !plane.is_wall_blocking(rail.s, target_s, rail.y) {
                rail.s = target_s;
            }
        } else {
            rail.move_speed = 0.0;
        }

        // ── Límite de plano / handoff ─────────────────────────────────────────
        // Ref: collision.cpp:639-675 (sector handoff 0x80048fc4)
        if rail.s < 0.0 {
            if plane.ls > 0 {
                let dest_id = plane.ls as usize;
                if let Some(dest) = collision.get_plane(dest_id) {
                    rail.plane_id = dest_id;
                    rail.s = dest.length;
                } else {
                    rail.s = 0.0;
                }
            } else {
                rail.s = 0.0;
            }
        } else if rail.s > plane.length {
            if plane.le > 0 {
                let dest_id = plane.le as usize;
                if collision.get_plane(dest_id).is_some() {
                    rail.plane_id = dest_id;
                    rail.s = 0.0;
                } else {
                    rail.s = plane.length;
                }
            } else {
                rail.s = plane.length;
            }
        }

        // ── Proyección sobre el plano (X/Z) ──────────────────────────────────
        // Ref: f_ProjectActorOntoAreaPlane (0x80047778 / collision.cpp:678-716)
        // snapObjectToTerrain solo actualiza X/Z, nunca Y (collision.cpp:894-895).
        let unprojected = plane.point_at(rail.s);
        let (proj_x, proj_z, proj_s) = plane.project_actor_onto_plane(unprojected.x, unprojected.z);
        rail.world_pos.x = proj_x;
        rail.world_pos.z = proj_z;
        rail.s = proj_s;

        // ── 2. Junción (W/S) ─────────────────────────────────────────────────
        // Ref: Collision_GetFloorHeight.c:58, Entity_StateMain12.c:23-100
        if keyboard.just_pressed(KeyCode::KeyW) || keyboard.just_pressed(KeyCode::ArrowUp) {
            if let Some(junc) = collision.check_junction(rail.plane_id, rail.s, rail.y, "up") {
                if let Some(dest_plane) = collision.get_plane(junc.dest) {
                    let new_s = dest_plane.s_of(junc.pos[0], junc.pos[2]);
                    let target_look = Vec3::new(dest_plane.dir[0], 0.0, dest_plane.dir[1]).normalize_or_zero();
                    rail.action_state = PlayerActionState::TurnToJunction {
                        dest_plane: junc.dest,
                        dest_s: new_s,
                        target_look_dir: if target_look.length_squared() > 1e-4 { target_look } else { Vec3::Z },
                        timer: 0.0,
                    };
                    println!("-> Initiating UP turn to Plane {} at s={:.2}m", junc.dest, new_s);
                }
            }
        }
        if keyboard.just_pressed(KeyCode::KeyS) || keyboard.just_pressed(KeyCode::ArrowDown) {
            if let Some(junc) = collision.check_junction(rail.plane_id, rail.s, rail.y, "down") {
                if let Some(dest_plane) = collision.get_plane(junc.dest) {
                    let new_s = dest_plane.s_of(junc.pos[0], junc.pos[2]);
                    let target_look = Vec3::new(dest_plane.dir[0], 0.0, dest_plane.dir[1]).normalize_or_zero();
                    rail.action_state = PlayerActionState::TurnToJunction {
                        dest_plane: junc.dest,
                        dest_s: new_s,
                        target_look_dir: if target_look.length_squared() > 1e-4 { target_look } else { Vec3::Z },
                        timer: 0.0,
                    };
                    println!("-> Initiating DOWN turn to Plane {} at s={:.2}m", junc.dest, new_s);
                }
            }
        }

        // Re-fetch plano actual (puede haber cambiado por handoff)
        let plane = collision.get_plane(rail.plane_id).unwrap_or(plane);

        // ── 3. Salto ─────────────────────────────────────────────────────────
        // Ref: Entity_State_Idle.c:43 → velocity_y = 0xd800 = -0x2800 (PS1 Y-down → arriba).
        // Convertido a Bevy Y-up: +TOMBA_JUMP_SPEED (positivo = arriba).
        if (keyboard.just_pressed(KeyCode::Space) || keyboard.just_pressed(KeyCode::KeyK))
            && rail.is_grounded
            {
                rail.vertical_velocity = TOMBA_JUMP_SPEED; // positivo = arriba (Bevy Y-up)
                rail.is_grounded = false;
                rail.is_rising = true;
                if let Some(asset_server) = asset_server.as_ref() {
                    commands.spawn(AudioPlayer::new(asset_server.load("audio/sfx/00_025_hero jump0.wav")));
                }
            }

        // ── 4. Física vertical continua suave (ecuaciones auténticas de PS1) ──
        // Ref: Entity_State_Jump2.c (0x360 = 30.375 m/s^2) en ascenso,
        //      Entity_ApplyGravity.c (0x400 = 36.0 m/s^2) en descenso,
        //      Entity_ApplyVelocityMax.c (0x2800 = 12.0 m/s cap).
        if !rail.is_grounded {
            let grav = if rail.is_rising { TOMBA_JUMP_GRAVITY } else { TOMBA_GRAVITY };
            rail.vertical_velocity -= grav * dt;

            if rail.vertical_velocity <= 0.0 {
                rail.is_rising = false;
            }

            if rail.vertical_velocity < -TOMBA_TERMINAL_VELOCITY {
                rail.vertical_velocity = -TOMBA_TERMINAL_VELOCITY;
            }

            rail.y += rail.vertical_velocity * dt;

            // Detección de suelo al descender (Entity_CollisionGround.c / Entity_State_Walk.c case 2)
            if rail.vertical_velocity <= 0.0 {
                if let Some(floor_h) = plane.sample_floor(rail.s, rail.y) {
                    if rail.y <= floor_h {
                        rail.y = floor_h;
                        rail.vertical_velocity = 0.0;
                        rail.is_grounded = true;
                    }
                }
            }
        } else {
            // Grounded: snapear al contorno del suelo (pendientes, escalones)
            // Ref: Collision::snapObjectToTerrain (collision.cpp:786-788)
            if let Some(floor_h) = plane.sample_floor(rail.s, rail.y) {
                rail.y = floor_h;
            } else {
                rail.is_grounded = false;
            }
        }

            // ── 5. Actualizar Transform ───────────────────────────────────────────
            // Fórmula: origin.y = floor_y + TOMBA_PHYS_OFFSET_Y (1.25m)
            // Ref: Collision::snapObjectToTerrain (collision.cpp:770),
            //      f_ProjectActorOntoAreaPlane (0x80047778).
            rail.world_pos.y = rail.y;
            let world_pos = Vec3::new(
                rail.world_pos.x,
                rail.world_pos.y + TOMBA_PHYS_OFFSET_Y,
                rail.world_pos.z,
            );
            transform.translation = world_pos;

            // Rotación de orientación: a lo largo de la dirección del plano × signo de facing.
            let look_dir = Vec3::new(plane.dir[0] * rail.facing, 0.0, plane.dir[1] * rail.facing);
            if look_dir.length_squared() > 1e-4 {
                rail.current_look_dir = look_dir.normalize();
                transform.look_to(-rail.current_look_dir, Vec3::Y);
            }
    }
}

// ─── TESTS ───────────────────────────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_tomba_movement_input() {
        let mut app = App::new();
        app.add_plugins(MinimalPlugins);

        let collision = LevelCollision::load_from_file("assets/levels/area_04_collision.json")
        .expect("Failed to load collision");
        app.insert_resource(collision);
        app.init_resource::<ButtonInput<KeyCode>>();
        app.add_systems(Update, tomba_movement_system);

        let entity = app
        .world_mut()
        .spawn((
            Transform::from_xyz(39.68, 9.12 + TOMBA_PHYS_OFFSET_Y, 42.0),
                TombaPlayer,
                TombaRail::default(),
        ))
        .id();

        app.update();
        let (rail_before, transform_before) = (
            app.world().get::<TombaRail>(entity).unwrap().s,
                                               app.world().get::<Transform>(entity).unwrap().translation,
        );
        println!("Initial: s={}, pos={:?}", rail_before, transform_before);

        {
            let mut input = app.world_mut().resource_mut::<ButtonInput<KeyCode>>();
            input.press(KeyCode::KeyD);
        }
        {
            let mut time = app.world_mut().resource_mut::<Time>();
            time.advance_by(std::time::Duration::from_millis(50));
        }

        app.update();

        let (rail_after, transform_after) = (
            app.world().get::<TombaRail>(entity).unwrap().s,
                                             app.world().get::<Transform>(entity).unwrap().translation,
        );
        println!("After KeyD: s={}, pos={:?}", rail_after, transform_after);

        assert!(
            rail_after > rail_before,
            "Rail position s should increase when KeyD is pressed: before={}, after={}",
            rail_before,
            rail_after
        );
        assert!(
            transform_after.z > transform_before.z,
            "World Z should increase when KeyD is pressed: before={}, after={}",
            transform_before.z,
            transform_after.z
        );
    }
}
