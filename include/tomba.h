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
    u8 pad00[0x2C]; // Padding up to 0x2C
    Vector3 pos;    // Position starts at 0x2C (0x2C, 0x2E, 0x30)
    s16 unknown_32; // Value at 0x32
} Entity;

// Spawner Data containing 32-bit fixed point coordinates
typedef struct Spawner {
    u32 x; // offset 0x00
    u32 y; // offset 0x04
    u32 z; // offset 0x08
} Spawner;

// External function signatures required by the engine
Entity* func_8007A980(int param_1, int param_2, int param_3);
void func_80028E10(Entity* entity, int param_2);

#endif // TOMBA_H
