use bevy::input::mouse::MouseMotion;
use bevy::prelude::*;

fn main() {
    App::new()
        .add_plugins(DefaultPlugins.set(WindowPlugin {
            primary_window: Some(Window {
                title: "Tomba! 2 — Bevy Reimplementation".into(),
                resolution: (1280.0_f32, 720.0_f32).into(),
                ..default()
            }),
            ..default()
        }))
        .add_systems(Startup, setup_scene)
        .add_systems(Update, (camera_controller, rotate_tomba))
        .run();
}

#[derive(Component)]
struct FreeCamera {
    speed: f32,
    sensitivity: f32,
}

#[derive(Component)]
struct TombaPlayer;

fn setup_scene(mut commands: Commands, asset_server: Res<AssetServer>) {
    // 1. Ambient & Directional Lighting
    commands.insert_resource(AmbientLight {
        color: Color::WHITE,
        brightness: 800.0,
    });

    commands.spawn((
        DirectionalLight {
            illuminance: 3500.0,
            shadows_enabled: true,
            ..default()
        },
        Transform::from_xyz(50.0, 100.0, 50.0).looking_at(Vec3::ZERO, Vec3::Y),
    ));

    // 2. Spawn Level Geometry (Area 04 - Fisherman's Village)
    commands.spawn((
        SceneRoot(asset_server.load("levels/area_04_fishermen.glb#Scene0")),
        Transform::from_xyz(0.0, 0.0, 0.0),
    ));

    // 3. Spawn Tomba Character Model
    commands.spawn((
        SceneRoot(asset_server.load("models/tomba.glb#Scene0")),
        Transform::from_xyz(0.0, 5.0, 0.0).with_scale(Vec3::splat(1.0)),
        TombaPlayer,
    ));

    // 4. Spawn 3D Camera overlooking the level
    commands.spawn((
        Camera3d::default(),
        Transform::from_xyz(0.0, 30.0, 80.0).looking_at(Vec3::new(0.0, 10.0, 0.0), Vec3::Y),
        FreeCamera {
            speed: 50.0,
            sensitivity: 0.003,
        },
    ));

    println!("=== Tomba! 2 Scene Loaded ===");
    println!("Controls:");
    println!("  WASD        : Move camera horizontally");
    println!("  Q / E       : Move camera Down / Up");
    println!("  Right Click + Mouse: Look around");
    println!("  Left/Right Arrows  : Rotate Tomba manually");
}

/// Flight and mouse-look camera controls for exploring the level
fn camera_controller(
    time: Res<Time>,
    keyboard: Res<ButtonInput<KeyCode>>,
    mouse_button: Res<ButtonInput<MouseButton>>,
    mut mouse_motion: EventReader<MouseMotion>,
    mut query: Query<(&FreeCamera, &mut Transform)>,
) {
    for (cam, mut transform) in &mut query {
        // 1. Mouse rotation (while Right Click is held)
        if mouse_button.pressed(MouseButton::Right) {
            for motion in mouse_motion.read() {
                let yaw = -motion.delta.x * cam.sensitivity;
                let pitch = -motion.delta.y * cam.sensitivity;

                transform.rotate_y(yaw);
                transform.rotate_local_x(pitch);
            }
        } else {
            // Drain mouse motion events so they don't accumulate
            mouse_motion.clear();
        }

        // 2. Keyboard flight translation
        let mut direction = Vec3::ZERO;
        let forward = transform.forward().as_vec3();
        let right = transform.right().as_vec3();
        let up = Vec3::Y;

        if keyboard.pressed(KeyCode::KeyW) {
            direction += forward;
        }
        if keyboard.pressed(KeyCode::KeyS) {
            direction -= forward;
        }
        if keyboard.pressed(KeyCode::KeyA) {
            direction -= right;
        }
        if keyboard.pressed(KeyCode::KeyD) {
            direction += right;
        }
        if keyboard.pressed(KeyCode::KeyE) {
            direction += up;
        }
        if keyboard.pressed(KeyCode::KeyQ) {
            direction -= up;
        }

        if direction != Vec3::ZERO {
            transform.translation += direction.normalize() * cam.speed * time.delta_secs();
        }
    }
}

/// Demo rotation for Tomba model
fn rotate_tomba(
    time: Res<Time>,
    keyboard: Res<ButtonInput<KeyCode>>,
    mut query: Query<&mut Transform, With<TombaPlayer>>,
) {
    for mut transform in &mut query {
        let mut rot = 0.0;
        if keyboard.pressed(KeyCode::ArrowLeft) {
            rot += 2.0;
        }
        if keyboard.pressed(KeyCode::ArrowRight) {
            rot -= 2.0;
        }
        if rot == 0.0 {
            rot = 0.5; // slow idle spin
        }
        transform.rotate_y(rot * time.delta_secs());
    }
}
