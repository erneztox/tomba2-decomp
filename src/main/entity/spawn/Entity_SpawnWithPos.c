/**
 * @brief Spawns a new entity and initializes its position from a Spawner structure.
 *        Copies upper 16 bits of 32-bit fixed-point coordinates to entity's 16-bit position.
 * @note Original: func_8003116C at 0x8003116C
 */
#include "tomba.h"

extern u8 g_EntityPool0_Count;

Entity* Entity_SpawnWithPos(int behavior_id, Spawner* spawner, s16 param_3)
{
    Entity* entity;

    if ((g_EntityPool0_Count < 7) || (entity = Entity_AllocByPoolId(0, 6, 1), entity == 0)) {
        return 0;
    }

    if (spawner != 0) {
        // PsyQ gcc optimizes x >> 16 to a 16-bit load from +2
        entity->pos.x = spawner->x >> 16;
        entity->pos.y = spawner->y >> 16;
        entity->pos.z = spawner->z >> 16;
    }

    entity->unknown_32 = param_3;
    Entity_InitBehavior(entity, behavior_id);
    return entity;
}
