#ifndef TOMBA_H
#define TOMBA_H

#include "types.h"

// Define a basic 3D Vector using shorts, common in PS1 games
typedef struct Vector3 {
    s16 x;
    s16 y;
    s16 z;
} Vector3;

// Define a generic Entity struct based on observed offsets
typedef struct Entity {
    u8 pad00[0x20]; // Padding up to 0x20
    struct Entity* prev; // 0x20
    struct Entity* next; // 0x24
    u8 flags;       // 0x28
    u8 pad29[3];    // Padding to 0x2c
    Vector3 pos;    // Position starts at 0x2C (0x2C, 0x2E, 0x30)
    s16 unknown_32; // Value at 0x32
    u8 pad34[0x14]; // Padding from 0x34 to 0x48
    Vector3 unknown_48; // Vector at 0x48 (0x48, 0x4A, 0x4C)
} Entity;

// Spawner Data containing 32-bit fixed point coordinates
typedef struct Spawner {
    s32 x;
    s32 y;
    s32 z;
} Spawner;

// External function signatures required by the engine
Entity* func_80079C3C(Entity* target, u8 param_2, int mode, int list_id);
Entity* func_80079DDC(Entity* target, u8 param_2, int mode, int list_id);
Entity* func_80079F90(Entity* target, u8 param_2, int mode, int list_id);
Entity* func_8007A12C(Entity* target, u8 param_2, int mode, int list_id);
Entity* func_8007A2C8(Entity* target, u8 param_2, int mode, int list_id);

Entity* func_8007A980(u8 param_1, u8 param_2, int param_3);
void func_80028E10(Entity* entity, int param_2);

#endif // TOMBA_H
