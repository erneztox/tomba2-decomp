/**
 * @brief Spawns an entity with position and an additional 3D vector at offset 0x48.
 *        Sets flags 0xC0 (0x80 | 0x40) on the entity.
 * @note Original: func_800313A0 at 0x800313A0
 */
#include "tomba.h"

extern u8 g_EntityPool0_Count;

Entity* Entity_SpawnWithVector(int behavior_id, Spawner* spawner, s16 param_3, Vector3* extra_vec)
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
    entity->unknown_48.x = extra_vec->x;
    entity->unknown_48.y = extra_vec->y;
    entity->unknown_48.z = extra_vec->z;
    Entity_InitBehavior(entity, behavior_id);
    entity->flags |= 0xC0;
    return entity;
}
