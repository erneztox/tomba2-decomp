/**
 * @brief Spawns an entity with position and sets flag 0x80 on the entity's flags u8.
 * @note Original: func_800312D4 at 0x800312D4
 */
#include "tomba.h"

extern u8 g_EntityPool0_Count;

Entity* Entity_SpawnWithFlag(int behavior_id, Spawner* spawner, s16 param_3)
{
    Entity* entity;

    if ((g_EntityPool0_Count < 7) || (entity = Entity_AllocByPoolId(0, 6, 1), entity == 0)) {
        return 0;
    }

    if (spawner != 0) {
        entity->pos.x = spawner->x >> 16;
        entity->pos.y = spawner->y >> 16;
        entity->pos.z = spawner->z >> 16;
    }

    entity->unknown_32 = param_3;
    Entity_InitBehavior(entity, behavior_id);
    entity->flags |= 0x80;
    return entity;
}
