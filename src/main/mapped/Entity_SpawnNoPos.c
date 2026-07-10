/**
 * @brief Spawns an entity without setting position from spawner data.
 *        Allocates entity from pool 0 and initializes its behavior via the dispatch table.
 * @note Original: func_800310F4 at 0x800310F4
 */
#include "tomba.h"

extern u8 g_EntityPool0_Count;

Entity* Entity_SpawnNoPos(int behavior_id, s16 param_2)
{
    Entity* entity;

    if ((g_EntityPool0_Count < 7) || (entity = Entity_AllocByPoolId(0, 6, 1), entity == 0)) {
        return 0;
    }

    entity->unknown_32 = param_2;
    Entity_InitBehavior(entity, behavior_id);
    return entity;
}
