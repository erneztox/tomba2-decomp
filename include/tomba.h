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
    /* 0x34 */ s32  scale_y;        // Scale/projection Y (copied from anim_data, used as s32 and 2x s16)
    /* 0x36 */ s16  pos_z;          // Position Z
    /* 0x38 */ void* anim_data;     // Animation data pointer (copied to 0x34)
    /* 0x3C */ u8*  sprite_data;    // Sprite/animation script data
    /* 0x40 */ s16  timer1;         // General timer
    /* 0x42 */ s16  timer2;         // General timer 2
    /* 0x44 */ s16  anim_counter;   // Animation counter
    /* 0x46 */ u8   anim_id;        // Animation ID
    /* 0x47 */ u8   sub_anim_id;    // Sub-animation ID
    /* 0x48 */ s16  normal_x;       // Surface normal X
    /* 0x4A */ s16  velocity_y;     // Velocity Y (vertical)
    /* 0x4C */ s16  normal_z;       // Surface normal Z
    /* 0x4E */ s16  sprite_x;       // Sprite/draw X offset (set to pos_x, 0, 1, 4, 0x240)
    /* 0x50 */ s16  angle_offset;   // Angle offset for animations
    /* 0x52 */ s16  sprite_y;       // Sprite/draw Y offset
    /* 0x54 */ s16  rot_x;          // Rotation X
    /* 0x56 */ s16  rot_y;          // Rotation Y (yaw)
    /* 0x58 */ s16  rot_z;          // Rotation Z
    /* 0x5A */ s16  target_rot_y;   // Target rotation Y
    /* 0x5C */ s16  draw_y;         // Draw Y position (copies from pos_y_fixed)
    /* 0x5E */ u8   flag_5E;        // Behavior flag
    /* 0x5F */ u8   input_flags;    // Input-related flags
    /* 0x60 */ s16  draw_x;         // Draw X position (used for sprite offsets)
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
    /* 0x71 */ u8   state_71;       // State-related byte (23 accesses)
    /* 0x72 */ u16  event_id;       // Event/trigger ID
    /* 0x74 */ s16  event_param;    // Event parameter
    /* 0x76 */ u8   camera_mode;    // Camera mode
    /* 0x78 */ u8   sub_state;      // Sub-state machine counter
    /* 0x79 */ u8   sub_state2;     // Sub-state machine counter 2
    /* 0x7A */ u8   state_7A;       // State byte
    /* 0x7B */ u8   state_7B;       // State byte 2
    /* 0x7C */ u8   _pad7C[4];
    /* 0x80 */ s16  bounds_min_x;   // Collision bounds min X
    /* 0x82 */ s16  bounds_size;    // Collision bounds size / sprite scale
    /* 0x84 */ s16  bounds_min_y;   // Collision bounds min Y / timer
    /* 0x86 */ s16  bounds_max_y;   // Collision bounds max Y
    /* 0x88 */ s16  gte_input[4];   // GTE input vector (XYZW: 0x88, 0x8A, 0x8C, 0x8E)
    /* 0x90 */ s16  move_speed;     // Movement speed parameter
    /* 0x92 */ s16  gte_offset_y;   // GTE input Y offset (added to 0x8A each frame)
    /* 0x94 */ s16  gte_offset_z;   // GTE input Z offset (added to 0x8C each frame)
    /* 0x96 */ s16  _unk96;         // (7 accesses, set to 1 or computed value)
    /* 0x98 */ s32  gte_result[4];   // GTE transform result matrix (3x3 rotation + translation)
    /* 0xA8 */ u8   _padA8[4];
    /* 0xAC */ s32  projected_x;     // Projected screen X (after GTE transform + pos)
    /* 0xB0 */ s32  projected_y;     // Projected screen Y
    /* 0xB4 */ s32  projected_z;     // Projected screen Z (depth)
    /* 0xB8 */ s16  scale_x;         // GTE scale X (default 0x1000 = 1.0)
    /* 0xBA */ s16  scale_y;         // GTE scale Y
    /* 0xBC */ s16  scale_z;         // GTE scale Z
    /* 0xBE */ u8   gte_flags;       // GTE-related flags (set to 0 or 1)
    /* 0xBF */ u8   combat_flag;     // Combat flag (checked for SFX)
    /* 0xC0 */ s32  sprite_ptr1;     // Sprite data pointer (array for trails/effects)
    /* 0xC4 */ s32  sprite_ptr2;     // Sprite data pointer 2
    /* 0xC8 */ s32  _unkC8;          // (between sprite ptrs and data ptr)
    /* 0xCC */ s32  anim_ptr;        // Animation data pointer (3 accesses)
    /* 0xD0 */ s32  target_ptr;      // Target entity/reference pointer (+0x2C/+0x30 accessed)
    /* 0xD4 */ u8   _padD4[8];
    /* 0xDC */ s32  data_ptr;        // Generic data pointer (offset +0x2C accessed)
    /* 0xE0 */ u8   _padE0[0x60];
    /* 0x140 */ s16 draw_angle;     // Draw rotation angle
    /* 0x142 */ s16 draw_scale;     // Draw scale (18 accesses)
    /* 0x144 */ u8  state_flag144;  // State flag
    /* 0x145 */ u8  state_flag145;  // State flag (often checked for transitions)
    /* 0x146 */ u8  state_flag146;  // State flag
    /* 0x147 */ u8  direction;      // Direction (0=right, 1=left)
    /* 0x148 */ s32 state_data;     // State-specific data (pointer or counter)
    /* 0x14A */ u8  behavior_flags; // Behavior flags (bit0=direction, bits 1-3=flags, 100+ accesses)
    /* 0x14B */ u8  sub_behavior;   // Sub-behavior flag (from config)
    /* 0x14C */ s16 draw_pos_x;     // Draw/screen position X
    /* 0x14E */ s16 draw_pos_y;     // Draw/screen position Y
    /* 0x150 */ s16 draw_pos_z;     // Draw depth Z
    /* 0x152 */ u8  _pad152[2];
    /* 0x154 */ s16 speed;          // Movement speed
    /* 0x156 */ s16 speed2;         // Secondary speed (54 accesses)
    /* 0x158 */ void* state_ptr;    // State-specific data pointer
    /* 0x15C */ s8   anim_param;     // Animation parameter (set from int)
    /* 0x15D */ u8   _unk15D;        // (6 accesses)
    /* 0x15E */ s16  angle_limit;    // Angle limit/rotation speed (compared for wrapping)
    /* 0x160 */ u8   anim_select;    // Animation selection parameter (passed to FUN_80054b34)
    /* 0x164 */ u8  action_flag;    // Action trigger flag
    /* 0x165 */ u8  state_165;      // State byte (set to 0 or 1)
    /* 0x166 */ u8  _pad166;
    /* 0x167 */ u8  input_state;    // Input state
    /* 0x168 */ s16 state_timer;    // State timer (75 accesses, set to 0 or 0xF)
    /* 0x16A */ u8  flag_16A;       // Flag byte
    /* 0x16B */ u8  physics_flag;   // Physics/collision flag
    /* 0x16C */ s16 _pad16C;        // (17 accesses, purpose unclear)
    /* 0x16E */ s16 timer_main;     // Main timer
    /* 0x170 */ s16 timer_170;      // Timer
    /* 0x172 */ s16 timer_172;      // Timer
    /* 0x174 */ u8  game_flags;     // Game state flags
    /* 0x175 */ u8  flag_175;       // Flag
    /* 0x176 */ u8  behavior_type;  // Behavior type ID
    /* 0x177 */ u8  flag_177;       // Flag
    /* 0x178 */ u8  _pad178[2];
    /* 0x17A */ u8  flag_17A;
    /* 0x17B */ u8  flag_17B;
    /* 0x17C */ s16 entity_param;   // Entity parameter (3 accesses)
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

// CD-ROM / DMA globals
extern u32  g_CD_Status;            // 0x800AD098 - CD status register
extern u32  g_CD_Control;           // 0x800AD078 - CD control register
extern u32  g_CD_IRQ;               // 0x800AD06C - CD IRQ register
extern u32  g_CD_Counter;           // 0x800AC304 - CD counter
extern u32  g_CD_Event;             // 0x800AC308 - CD event flag
extern u32  g_CD_Param;             // 0x800AC30C - CD parameter
extern u32  g_CD_SeekPos;           // 0x800AC300 - CD seek position

// Audio channel table (0xB0-byte entries)
extern u32* g_AudioChannels;        // 0x80104C30 - Audio channel struct table

// ============================================================
// Overlay function stubs - called from MAIN.EXE
// Defined in overlay aa0 (0x8010xxxx-0x8014xxxx)
// See include/overlay.h for full list
// ============================================================

// ============================================================
// Audio Channel struct (0xB0 bytes per channel)
// Array at g_AudioChannels (0x80104C30)
// ============================================================
typedef struct AudioChannel {
    /* 0x00 */ u8*  data_ptr;      // Audio data pointer (incremented on play)
    /* 0x04 */ u8   _pad04[0xC];
    /* 0x10 */ s16  pitch;         // Pitch/tone parameter
    /* 0x12 */ s16  _unk12;
    /* 0x14 */ u8   active;        // Channel active flag (set to 1 on enable)
    /* 0x15 */ u8   _unk15;
    /* 0x16 */ s16  _unk16;
    /* 0x17 */ u8   voice_index;   // Current voice index (0-?)
    /* 0x18 */ u8   key_on;        // Note-on value
    /* 0x19 */ u8   key_off;       // Note-off value
    /* 0x1A */ u8   _unk1A;
    /* 0x1B */ u8   cmd_type;      // Command type (0x14 = note, 0x1E = ?)
    /* 0x1C */ u8   _unk1C;
    /* 0x1D */ u8   _unk1D;
    /* 0x1E */ u8   note_count;    // Note counter (incremented per note)
    /* 0x1F */ u8   _unk1F;
    /* 0x20 */ u8   _pad20[6];
    /* 0x26 */ u8   program;       // Program/instrument number
    /* 0x27 */ u8   voice_vol;     // Voice volume (at voice_index offset)
    /* 0x28 */ u8   _pad28[0x0F];
    /* 0x37 */ u8   voice_param;   // Voice parameter (at voice_index offset)
    /* 0x38 */ s32  _unk38;
    /* 0x3C */ s32  _unk3C;
    /* 0x40 */ u8   _pad40[8];
    /* 0x48 */ s16  tone;          // Tone/pitch param (set by SetChannelParam)
    /* 0x4A */ s16  _unk4A;        // Zeroed alongside tone
    /* 0x4C */ u8   _pad4C[6];
    /* 0x52 */ s16  _unk52;
    /* 0x54 */ s16  voice_timer;   // Voice timer (compared with voice_ptr)
    /* 0x56 */ u8   _pad56[2];
    /* 0x58 */ s16  pan_left;       // Pan left
    /* 0x5A */ s16  pan_right;      // Pan right
    /* 0x5C */ u8   _pad5C[4];
    /* 0x60 */ s16  voice_data[16]; // Voice data array (16 entries, indexed by voice_index)
    /* 0x80 */ s16  voice_mask;    // Voice allocation bitmask
    /* 0x82 */ u8   _pad82[6];
    /* 0x88 */ s16  _unk88;
    /* 0x8A */ s16  _unk8A;
    /* 0x8C */ s16  _unk8C;
    /* 0x8E */ u8   _pad8E[2];
    /* 0x90 */ s32  voice_ptr;     // Voice allocation pointer (from AllocVoice)
    /* 0x94 */ s16  _unk94;
    /* 0x96 */ u8   _pad96[2];
    /* 0x98 */ s32  flags;         // State flags (bit0=active, bit2, bit3, bit4, bit5, bit8)
    /* 0x9C */ s32  voice_cb;      // Voice callback/data pointer
    /* 0xA0 */ s32  voice_data2;   // Secondary voice data (zeroed with tone)
    /* 0xA4 */ u8   _padA4[0xC];
} AudioChannel;  // 0xB0 bytes

// ============================================================
// GPU Primitive types (used in Ordering Table)
// ============================================================
typedef struct {
    u8   r, g, b, code;   // 0x00: Color + command code
    u16  x, y;             // 0x04: Position
    u16  u, v;             // 0x08: UV / CLUT coords
    u16  w, h;             // 0x0C: Width / Height (for SPRT) or CLUT (for TILE)
} GPUPrim;  // 0x10 bytes (standard prim)

// SPRT primitive (variable size, min 0x10)
typedef struct {
    u32  tag;             // 0x00: OT tag (next ptr + len)
    u8   r, g, b, code;   // 0x04: Color + SPRT code (0x64)
    s16  x0, y0;           // 0x08: Top-left
    u8   u0, v0;           // 0x0C: UV top-left
    u16  clut;             // 0x0E: CLUT
    s16  x1, y1;           // 0x10: Bottom-right (or width/height)
    u8   u1, v1;           // 0x14: UV bottom-right
    u16  tpage;            // 0x16: Texture page
} SprtPrim;  // 0x18 bytes

// ============================================================
// Collision result struct (in scratchpad at 0x1F8001E0)
// ============================================================
typedef struct {
    s16  flags;           // 0x00: Collision flags
    s16  normal_y;        // 0x02: Surface normal Y component
    s16  normal_x;        // 0x04: Surface normal X component
    s16  normal_z;        // 0x06: Surface normal Z component
    s16  dist;            // 0x08: Collision distance/penetration
} CollisionResult;  // 0x0A bytes

// ============================================================
// MDEC decoder context struct (~0xF4 bytes)
// ============================================================
typedef struct MDECContext {
    /* 0x00 */ u8   _pad00[4];
    /* 0x04 */ u8*  param_ptr;      // Parameter pointer (IQ table data)
    /* 0x08 */ u8   _pad08[4];
    /* 0x0C */ s32  dma_ptr;        // DMA pointer
    /* 0x10 */ u8   _pad10[4];
    /* 0x14 */ u8*  callback1;      // Callback function 1
    /* 0x18 */ u8*  callback2;      // Callback function 2
    /* 0x1C */ u8   _pad1C[0x10];
    /* 0x2C */ s32  _unk2C;
    /* 0x30 */ u8*  output_ptr;     // Output buffer (decoded pixels?)
    /* 0x34 */ u8   _pad34;
    /* 0x35 */ u8   status;         // Status byte (0 = idle, set during decode)
    /* 0x36 */ u8   _unk36;
    /* 0x37 */ u8   flags;          // Decoder flags
    /* 0x38 */ u8   _pad38[4];
    /* 0x3C */ u8*  bitstream;      // Bitstream data pointer
    /* 0x40 */ u8   _pad40[4];
    /* 0x44 */ u8   _unk44;
    /* 0x45 */ u8   _unk45;
    /* 0x46 */ u8   state;          // State (0=idle, 1=running, 2=reset, 3=setIQ, 4=setSize)
    /* 0x47 */ u8   sub_cmd;        // Sub-command
    /* 0x48 */ u8   _pad48;
    /* 0x49 */ u8   cmd;            // Command byte (2 = something)
    /* 0x4A */ u8   _unk4A;
    /* 0x4B */ u8   _pad4B;
    /* 0x4C */ s32  step_counter;   // Step counter (increments each decode step)
    /* 0x50 */ u8   _pad50[0x94];
    /* 0xE4 */ u8   iq_table;       // IQ table selector
    /* 0xE5 */ u8   _padE5[3];
    /* 0xE8 */ u8   iq_y;           // IQ table Y (checked for non-zero)
    /* 0xE9 */ u8   iq_cb;          // IQ table Cb
    /* 0xEA */ u8   iq_cr;          // IQ table Cr
    /* 0xEB */ u8   _unkEB;
    /* 0xEC */ s16  width;          // Frame width
    /* 0xEE */ s16  height;         // Frame height
    /* 0xF0 */ s32  _unkF0;
} MDECContext;  // ~0xF4 bytes

// ============================================================
// DMA Descriptor (used for GPU/CD DMA transfers)
// ============================================================
typedef struct {
    u32  addr;           // 0x00: Transfer address
    u32  length;         // 0x04: Transfer length (words)
    u32  control;        // 0x08: Control flags
    u32  next;           // 0x0C: Next descriptor pointer
} DMADescriptor;  // 0x10 bytes

// ============================================================
// Event/Callback entry (0x10 bytes, used in IRQ/callback tables)
// ============================================================
typedef struct {
    void (*callback)(void);  // 0x00: Callback function
    u32  param1;             // 0x04: Parameter 1
    u32  param2;             // 0x08: Parameter 2
    u32  flags;              // 0x0C: Flags
} EventEntry;  // 0x10 bytes

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
