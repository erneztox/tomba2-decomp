pub mod ai;
pub mod animation;
mod camera;
mod collision;
pub mod events;
pub mod items;
mod player;
pub mod ui;

use ai::TombaAI;
use animation::TombaAnimVM;
use bevy::prelude::*;
use camera::{camera_controller, GameCamera};
use collision::{draw_collision_gizmos, CollisionDebugConfig, LevelCollision};
use events::TombaEvents;
use items::TombaInventory;
use player::{
    hook_tomba_animation_player, setup_tomba_animations, tomba_animation_control_system,
    tomba_movement_system, EntityPhysics, TombaPlayer, TombaRail,
};
use ui::TombaUI;

fn main() {
    App::new()
        .add_plugins(DefaultPlugins.set(WindowPlugin {
            primary_window: Some(Window {
                title: "Tomba! 2 — Bevy Reimplementation (2.5D Movement & Collision)".into(),
                resolution: (1280.0_f32, 720.0_f32).into(),
                ..default()
            }),
            ..default()
        }))
        .init_resource::<CollisionDebugConfig>()
        .init_resource::<TombaInventory>()
        .init_resource::<TombaEvents>()
        .init_resource::<TombaUI>()
        .init_resource::<TombaAnimVM>()
        .init_resource::<TombaAI>()
        .add_systems(Startup, (setup_collision_data, setup_scene, setup_tomba_animations))
        .add_systems(
            Update,
            (
                camera_controller,
                tomba_movement_system,
                hook_tomba_animation_player,
                tomba_animation_control_system,
                draw_collision_gizmos,
            ),
        )
        .run();
}

fn setup_collision_data(mut commands: Commands) {
    let candidate_paths = [
        "assets/levels/area_04_collision.json",
        "bevy_tomba2/assets/levels/area_04_collision.json",
        "levels/area_04_collision.json",
        "../assets/levels/area_04_collision.json",
    ];

    let mut loaded = None;
    for path in candidate_paths {
        if std::path::Path::new(path).exists() {
            if let Ok(col) = LevelCollision::load_from_file(path) {
                println!(
                    "=== Collision Loaded Successfully: {} planes (from '{}') ===",
                    col.planes.len(),
                    path
                );
                loaded = Some(col);
                break;
            }
        }
    }

    if let Some(col) = loaded {
        commands.insert_resource(col);
    } else {
        eprintln!("Failed to find collision file across known search paths!");
        commands.insert_resource(LevelCollision::default());
    }
}

fn setup_scene(mut commands: Commands, asset_server: Res<AssetServer>) {
    // 1. Ambient & Directional Lighting
    commands.insert_resource(AmbientLight {
        color: Color::WHITE,
        brightness: 900.0,
    });

    commands.spawn((
        DirectionalLight {
            illuminance: 4000.0,
            shadows_enabled: true,
            ..default()
        },
        Transform::from_xyz(50.0, 120.0, 50.0).looking_at(Vec3::ZERO, Vec3::Y),
    ));

    // 2. Spawn Level Geometry (Area 04 - Fisherman's Village)
    commands.spawn((
        SceneRoot(asset_server.load("levels/area_04_fishermen.glb#Scene0")),
        Transform::from_xyz(0.0, 0.0, 0.0),
    ));

    // 3. Spawn Tomba Player on the 2.5D Rail
    // Ref: tomba.glb bone hierarchy (-1.25m to foot soles), Collision::snapObjectToTerrain (collision.cpp:770)
    commands.spawn((
        SceneRoot(asset_server.load("models/tomba.glb#Scene0")),
        Transform::from_xyz(39.68, 9.12 + player::TOMBA_PHYS_OFFSET_Y, 42.0),
        TombaPlayer,
        TombaRail::default(),
        EntityPhysics::default(),
        TombaInventory::default(),
        TombaEvents::default(),
        TombaUI::default(),
        TombaAnimVM::default(),
        TombaAI::default(),
    ));

    // 4. Spawn Game Camera (Starts in Rail Follow mode, looking from the ocean side towards the pier)
    // Ref: Camera_Init.c:73, CutsceneCamera::followAxis
    commands.spawn((
        Camera3d::default(),
        Transform::from_xyz(
            39.68 - camera::CAM_FOLLOW_DISTANCE,
            9.12 + camera::CAM_FOLLOW_HEIGHT,
            42.0,
        )
        .looking_at(Vec3::new(39.68, 9.12 + player::TOMBA_PHYS_OFFSET_Y, 42.0), Vec3::Y),
        GameCamera::default(),
    ));

    // 5. Authentic Area BGM (Town of the Fishermen, Track 04_01)
    commands.spawn((
        AudioPlayer::new(asset_server.load("audio/bgm/04_01_Town of the Fishermen.wav")),
        PlaybackSettings::LOOP,
    ));

    println!("====================================================");
    println!("🎮 Tomba! 2 — Native Bevy 2.5D Engine Running!");
    println!("Controls:");
    println!("  A / D or Left / Right: Move along 2.5D rail");
    println!("  Space / K            : Jump (gravity & floor snapping)");
    println!("  W / Up (at junction) : Switch to connected lane (Up)");
    println!("  S / Down (at junc.)  : Switch to connected lane (Down)");
    println!("  F1                   : Toggle 2.5D Camera <-> Free Flight");
    println!("  F2                   : Toggle Collision Rail Gizmos (Cyan/Yellow)");
    println!("====================================================");
}
