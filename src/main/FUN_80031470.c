#include "tomba.h"

extern u8 D_800E7E7C;

/**
 * @brief Spawns an entity, sets position, sets a secondary vector, and assigns specific flags.
 */
Entity* func_80031470(int param_1, Spawner* spawner, s16 param_3, Vector3* param_4)
{
    Entity* entity;
    u8 flag_val = 0x18;

    if ((D_800E7E7C < 7) || (entity = func_8007A980(0, 6, 1), entity == 0)) {
        return 0;
    }
    
    if (spawner != 0) {
        entity->pos.x = spawner->x >> 16;
        entity->pos.y = spawner->y >> 16;
        entity->pos.z = spawner->z >> 16;
    }
    entity->unknown_32 = 0xffb0; // Hardcoded in original
    entity->unknown_48.x = 0; // Hardcoded to 0 in original
    entity->unknown_48.y = param_4->x; // Weird offset mapping in original
    entity->unknown_48.z = param_4->y;
    func_80028E10(entity, param_1);
    
    if (param_3 == 0) {
        flag_val = 0x10;
    }
    // Hardcoded write to entity offset 6 in original
    ((u8*)entity)[6] = flag_val;
    entity->flags |= 0x80;
    return entity;
}

