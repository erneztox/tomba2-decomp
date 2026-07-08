#include "tomba.h"

extern u8 D_800E7E7C;

/**
 * @brief Spawns an entity, sets position, and sets a secondary vector at 0x48.
 */
Entity* func_800313A0(int param_1, Spawner* spawner, s16 param_3, Vector3* param_4)
{
    Entity* entity;

    if ((D_800E7E7C < 7) || (entity = func_8007A980(0, 6, 1), entity == 0)) {
        return 0;
    }
    
    if (spawner != 0) {
        entity->pos.x = spawner->x >> 16;
        entity->pos.y = spawner->y >> 16;
        entity->pos.z = spawner->z >> 16;
    }
    entity->unknown_32 = param_3;
    entity->unknown_48.x = param_4->x;
    entity->unknown_48.y = param_4->y;
    entity->unknown_48.z = param_4->z;
    func_80028E10(entity, param_1);
    entity->flags |= 0xC0; // 0x80 | 0x40
    return entity;
}

