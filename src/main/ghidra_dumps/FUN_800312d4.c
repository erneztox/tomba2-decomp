#include "tomba.h"

extern u8 D_800E7E7C;

/**
 * @brief Spawns an entity and sets flag 0x80 on offset 0x28.
 */
Entity* func_800312D4(int param_1, Spawner* spawner, s16 param_3)
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
    func_80028E10(entity, param_1);
    entity->flags |= 0x80;
    return entity;
}

