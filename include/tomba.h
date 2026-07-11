#ifndef TOMBA_H
#define TOMBA_H

#include "types.h"

// ============================================================
// 3D Vector types (PS1 GTE-compatible)
// ============================================================
typedef struct Vector3 {
    s16 x, y, z;
} Vector3;

typedef struct SVECTOR {
    s16 x, y, z, pad;
} SVECTOR;

typedef struct VECTOR {
    s32 x, y, z;
} VECTOR;

// ============================================================
// Entity struct (0x1E0+ bytes)
// Mapped from extensive analysis of MAIN.EXE functions
// ============================================================
struct Entity;
typedef void (*EntityFunc)(struct Entity*);

typedef struct Entity {
    /* 0x00 */ u8  type;            // Entity type ID
    /* 0x01 */ u8  flags;           // Active/visible flags
    /* 0x02 */ u8  kind;            // Entity kind (player, npc, item, etc)
    /* 0x03 */ u8  sub_type;        // Sub-type variant
    /* 0x04 */ u8  state;           // Lifecycle state (0=init, 1=active, 2=finish, 3=dealloc)
    /* 0x05 */ u8  behavior_state;  // Behavior state machine
    /* 0x06 */ u8  action_state;    // Action/animation state
    /* 0x07 */ u8  sub_action;      // Sub-action state
    /* 0x08 */ u8  counter1;        // General counter
    /* 0x09 */ u8  counter2;        // General counter 2
    /* 0x0A */ u8  _pad0A;
    /* 0x0B */ u8  render_flags;    // Render/draw flags
    /* 0x0C */ u8  _pad0C;
    /* 0x0D */ u8  sprite_flags;    // Sprite rendering flags (blink, transparency, etc)
    /* 0x0E */ s16 anim_timer;      // Animation frame timer
    /* 0x10 */ struct Entity* parent;    // Parent entity pointer
    /* 0x14 */ u8*  script_ptr;     // Script bytecode pointer
    /* 0x18 */ u8*  script_data;    // Script data pointer
    /* 0x1C */ EntityFunc callback; // Update/draw callback function
    /* 0x20 */ struct Entity* prev; // Previous in linked list
    /* 0x24 */ struct Entity* next; // Next in linked list
    /* 0x28 */ u8   alloc_flags;    // Alloc flags (bit 7 = active)
    /* 0x29 */ u8   collision_state;// Collision state (0=ground, 1=air, etc)
    /* 0x2A */ u8   collision_dir;  // Collision direction
    /* 0x2B */ u8   move_mode;      // Movement mode
    /* 0x2C */ s16  pos_x;          // Position X
    /* 0x2E */ s16  pos_y;          // Position Y
    /* 0x30 */ s32  pos_y_fixed;    // Position Y (32-bit fixed point)
    /* 0x34 */ s16  _pad34;
    /* 0x36 */ s16  pos_z;          // Position Z
    /* 0x38 */ void* anim_data;     // Animation data pointer
    /* 0x3C */ u8*  sprite_data;    // Sprite/animation script data
    /* 0x40 */ s16  timer1;         // General timer
    /* 0x42 */ s16  timer2;         // General timer 2
    /* 0x44 */ s16  anim_counter;   // Animation counter
    /* 0x46 */ u8   anim_id;        // Animation ID
    /* 0x47 */ u8   sub_anim_id;    // Sub-animation ID
    /* 0x48 */ s16  normal_x;       // Surface normal X
    /* 0x4A */ s16  velocity_y;     // Velocity Y (vertical)
    /* 0x4C */ s16  normal_z;       // Surface normal Z
    /* 0x4E */ s16  _pad4E;
    /* 0x50 */ s16  angle_offset;   // Angle offset for animations
    /* 0x52 */ s16  _pad52;
    /* 0x54 */ s16  rot_x;          // Rotation X
    /* 0x56 */ s16  rot_y;          // Rotation Y (yaw)
    /* 0x58 */ s16  rot_z;          // Rotation Z
    /* 0x5A */ s16  target_rot_y;   // Target rotation Y
    /* 0x5C */ s16  _pad5C;
    /* 0x5E */ u8   flag_5E;        // Behavior flag
    /* 0x5F */ u8   input_flags;    // Input-related flags
    /* 0x60 */ s16  _pad60;
    /* 0x62 */ s16  angle_delta;    // Angle delta for rotation
    /* 0x64 */ s16  radius;         // Collision/radius
    /* 0x66 */ u8   camera_flags;   // Camera control flags
    /* 0x67 */ u8   _pad67;
    /* 0x68 */ s16  target_angle;   // Target angle for approach
    /* 0x6A */ s16  type_flags;     // Entity type flags
    /* 0x6C */ u8   sprite_cmd;     // Sprite command byte
    /* 0x6D */ u8   sprite_param1;  // Sprite param 1
    /* 0x6E */ u8   sprite_param2;  // Sprite param 2 (often camera angle)
    /* 0x6F */ u8   sprite_param3;  // Sprite param 3
    /* 0x70 */ u8   anim_check;     // Animation check flag
    /* 0x71 */ u8   _pad71;
    /* 0x72 */ u16  event_id;       // Event/trigger ID
    /* 0x74 */ s16  event_param;    // Event parameter
    /* 0x76 */ u8   camera_mode;    // Camera mode
    /* 0x77 */ u8   _pad77;
    /* 0x78 */ u8   sub_state;      // Sub-state machine counter
    /* 0x79 */ u8   sub_state2;     // Sub-state machine counter 2
    /* 0x7A */ u8   _pad7A;
    /* 0x7B */ u8   _pad7B;
    /* 0x7C */ u8   _pad7C[4];
    /* 0x80 */ s16  bounds_min_x;   // Collision bounds min X
    /* 0x82 */ s16  bounds_size;    // Collision bounds size / sprite scale
    /* 0x84 */ s16  bounds_min_y;   // Collision bounds min Y
    /* 0x86 */ s16  bounds_max_y;   // Collision bounds max Y
    /* 0x88 */ s16  _pad88;
    /* 0x8A */ u8   _pad8A[6];
    /* 0x90 */ s16  _pad90;
    /* 0x92 */ u8   _pad92[6];
    /* 0x98 */ u32  gte_transform;  // GTE transform flags
    /* 0x9C */ u32  _pad9C;
    /* 0xA0 */ u32  _padA0;
    /* 0xA4 */ u8   _padA4[0x3C];
    /* 0xE0 */ u8   _padE0[0x60];
    /* 0x140 */ s16 draw_angle;     // Draw rotation angle
    /* 0x142 */ u8  _pad142[2];
    /* 0x144 */ u8  state_flag144;  // State flag
    /* 0x145 */ u8  state_flag145;  // State flag (often checked for transitions)
    /* 0x146 */ u8  state_flag146;  // State flag
    /* 0x147 */ u8  direction;      // Direction (0=right, 1=left)
    /* 0x148 */ s32 _pad148;        // Often used as pointer or counter
    /* 0x14C */ s16 draw_pos_x;     // Draw position X (screen)
    /* 0x14E */ s16 draw_pos_y;     // Draw position Y (screen)
    /* 0x150 */ s16 draw_pos_z;     // Draw depth Z
    /* 0x152 */ u8  _pad152[2];
    /* 0x154 */ s16 speed;          // Movement speed
    /* 0x156 */ u8  _pad156[2];
    /* 0x158 */ void* state_ptr;    // State-specific data pointer
    /* 0x15C */ u8  _pad15C[8];
    /* 0x164 */ u8  action_flag;    // Action trigger flag
    /* 0x165 */ u8  _pad165[2];
    /* 0x167 */ u8  input_state;    // Input state
    /* 0x168 */ s16 _pad168;
    /* 0x16A */ u8  _pad16A;
    /* 0x16B */ u8  physics_flag;   // Physics/collision flag
    /* 0x16C */ u8  _pad16C[2];
    /* 0x16E */ s16 timer_main;     // Main timer
    /* 0x170 */ s16 _pad170;
    /* 0x172 */ s16 timer_172;      // Timer
    /* 0x174 */ u8  game_flags;     // Game state flags
    /* 0x175 */ u8  _pad175;
    /* 0x176 */ u8  behavior_type;  // Behavior type ID
    /* 0x177 */ u8  _pad177[3];
    /* 0x17A */ u8  flag_17A;
    /* 0x17B */ u8  flag_17B;
    /* 0x17C */ u8  _pad17C[2];
    /* 0x17E */ s16 entity_flags;   // Entity-level flags (bit 15 = facing, etc)
    /* 0x180 */ u8  _pad180[0x60];
} Entity; // Total size ~0x1E0

// ============================================================
// Global entity lists
// ============================================================
extern Entity* g_ActiveEntitiesList;     // 0x800F2624
// extern Entity* g_InactiveEntitiesList;   // 0x800FB168  -- already above
extern Entity* g_BackgroundEntitiesList; // 0x800F2738

// ============================================================
// Key global variables
// ============================================================
extern u8   g_GameState;            // 0x800BF870 - Game state machine (0=title, 5=level, etc)
extern u16  g_InputState;           // 0x800ECF54 - Current input button state
extern u16  g_PadState;             // 0x800E7E68 - Pad state flags
extern u8   g_ActionFlag;           // 0x800BF816 - Action trigger flag
extern u8   g_EventFlag;            // 0x800BF843 - Event flag
extern u32  g_EventFlags;           // 0x800BFE48 - Event bit flags
extern u8   g_FrameCounter;         // 0x800E7FEE - Frame counter? (inventory checks)
extern s16  g_EntityAngle;          // 0x800E7ED6 - Entity angle global
extern u8   g_EntityFlags;          // 0x800BF881 - Entity-related flags

// Scratchpad (0x1F800000 area) - GTE/CPU fast RAM
extern s32  g_GTE_Matrix[8];        // 0x1F800000 - GTE matrix scratchpad
extern s16  g_GTE_Translate[4];     // 0x1F800020 - GTE translation vector
extern s32  g_GTE_Result[8];        // 0x1F800080 - GTE result area
extern s16  g_AngleTarget;          // 0x1F80009C - Target angle
extern s16  g_CollisionNormalX;     // 0x1F8001A0 - Collision normal X
// extern s16  g_CollisionNormalY;  // 0x1F8001A2
extern s32* g_CollisionGrid;        // 0x1F8001C8 - Collision grid pointer
extern s16* g_CollisionResult;      // 0x1F8001E0 - Collision result data
extern s16  g_CameraY;              // 0x1F8000E0 - Camera Y position
extern s16  g_CameraZ;              // 0x1F8000E2 - Camera Z position
extern s16  g_CameraX;              // 0x1F8000DC - Camera X position
extern Entity* g_PlayerEntity;      // 0x1F800214 - Current player entity
extern s16  g_PlayerPosX;           // 0x1F800160 - Player position X
extern s16  g_PlayerPosY;           // 0x1F800162 - Player position Y
extern s16  g_PlayerPosZ;           // 0x1F800164 - Player position Z

// Entity pool globals
extern s32  g_EntityPoolCount;      // 0x800ED098 - Entity pool free count
extern void* g_EntityPoolFree;      // 0x800ED8C0 - Entity pool free list head

// OT (Ordering Table) / GPU
extern u32* g_OT_Buffer;            // 0x800BF544 - Current OT buffer pointer

// SPU / Audio
extern u16* g_SPU_Regs;             // 0x800AC604 - SPU register base

// Audio channel table (0xB0-byte entries)
extern u32* g_AudioChannels;        // 0x80104C30 - Audio channel struct table

// ============================================================
// Overlay function stubs - called from MAIN.EXE
// Defined in overlay aa0 (0x8010xxxx-0x8014xxxx)
// See include/overlay.h for full list
// ============================================================

// ============================================================
// Overlay function stubs - called from MAIN.EXE
// These are defined in overlay aa0 (0x8010xxxx-0x8014xxxx)
// ============================================================
extern void Overlay_InitGame(void);              // func_0x8010aecc
extern void Overlay_GameState0(void);            // func_0x8010c780
extern void Overlay_GameState5(void);            // func_0x80110cb8
extern void Overlay_GameState6(void);            // func_0x80113e3c
extern void Overlay_SpawnEntity(void*);          // func_0x8011740c
extern void Overlay_GameState1(void);            // func_0x8010aecc

#endif // TOMBA_H
