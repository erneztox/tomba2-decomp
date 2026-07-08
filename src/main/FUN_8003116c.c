#include "tomba.h"

// Define a placeholder variable used in the condition
extern u8 D_800E7E7C;

/**
 * @brief Spawns a new entity and initializes its position.
 * 
 * Allocates a new entity. If successful, copies the upper 16 bits of the 
 * Spawner's 32-bit X, Y, Z coordinates into the Entity's 16-bit position vector.
 * 
 * @param param_1 Unknown parameter passed to initialization.
 * @param spawner Pointer to the Spawner data containing 32-bit fixed point coordinates.
 * @param param_3 Unknown parameter assigned to entity offset 0x32.
 * @return Entity* Pointer to the newly spawned entity, or NULL if it failed.
 */
Entity* func_8003116C(int param_1, Spawner* spawner, s16 param_3)
{
    Entity* entity;

    if ((D_800E7E7C < 7) || (entity = func_8007A980(0, 6, 1), entity == 0)) {
        entity = 0;
    }
    else {
        if (spawner != 0) {
            // PsyQ gcc optimizes x >> 16 to a 16-bit load from +2
            entity->pos.x = spawner->x >> 16;
            entity->pos.y = spawner->y >> 16;
            entity->pos.z = spawner->z >> 16;
        }
        entity->unknown_32 = param_3;
        func_80028E10(entity, param_1);
    }
    return entity;
}
