#ifndef TOMBA_H
#define TOMBA_H

#include "types.h"

// Define a basic 3D Vector using shorts, common in PS1 games
typedef struct Vector3 {
    s16 x;
    s16 y;
    s16 z;
} Vector3;

// Forward declaration for function pointers
struct Entity;

typedef void (*EntityActionFunc)(struct Entity*);

typedef struct BehaviorExtra {
    s16 unknown_44;
    s16 unknown_46;
    void* unknown_38;
} BehaviorExtra;

typedef struct BehaviorLink {
    EntityActionFunc update_func;
    EntityActionFunc draw_func;
    BehaviorExtra* extra_data;
} BehaviorLink;

// Define a generic Entity struct based on observed offsets
typedef struct Entity {
    u8 pad00;       // 0x00
    u8 active_flag; // 0x01
    u8 pad02;       // 0x02
    u8 unknown_03;  // 0x03
    u8 pad04[7];    // 0x04 - 0x0A
    u8 action_id;   // 0x0B
    u8 pad0C;       // 0x0C
    u8 move_mode;   // 0x0D  (low nibble = movement mode)
    u8 pad0E[10];  // 0x0E - 0x17
    EntityActionFunc draw_func;   // 0x18
    EntityActionFunc update_func; // 0x1C
    struct Entity* prev; // 0x20
    struct Entity* next; // 0x24
    u8 flags;       // 0x28
    u8 pad29[3];    // Padding to 0x2c
    Vector3 pos;    // Position starts at 0x2C (0x2C, 0x2E, 0x30)
    s16 unknown_32; // Value at 0x32
    u8 pad34[4];    // Padding from 0x34 to 0x38
    void* unknown_38; // 0x38 (set from BehaviorExtra)
    u8 pad3C[8];    // Padding up to 0x44
    s16 unknown_44; // 0x44 (set from BehaviorExtra)
    s16 unknown_46; // 0x46 (set from BehaviorExtra)
    Vector3 unknown_48; // Vector at 0x48 (0x48, 0x4A, 0x4C)
} Entity;

// Spawner Data containing 32-bit fixed point coordinates
typedef struct Spawner {
    s32 x;
    s32 y;
    s32 z;
} Spawner;

// External function signatures required by the engine
extern Entity* g_ActiveEntitiesList;       // 0x800F2624
extern Entity* g_InactiveEntitiesList;     // 0x800FB168
extern Entity* g_BackgroundEntitiesList;   // 0x800F2738

void EntityLoop_Active(void);              // 0x8003C048
void Engine_ExecuteGameLoop(void);         // 0x8003F9A8

Entity* func_80079C3C(Entity* target, u8 param_2, int mode, int list_id);
Entity* func_80079DDC(Entity* target, u8 param_2, int mode, int list_id);
Entity* func_80079F90(Entity* target, u8 param_2, int mode, int list_id);
Entity* func_8007A12C(Entity* target, u8 param_2, int mode, int list_id);
Entity* func_8007A2C8(Entity* target, u8 param_2, int mode, int list_id);

Entity* func_8007A980(u8 param_1, u8 param_2, int param_3);
void func_80028E10(Entity* entity, u32 id);

#endif // TOMBA_H
