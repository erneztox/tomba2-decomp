/**
 * @brief Specialized entity spawn with hardcoded flag assignment.
 *        Writes a type flag to entity offset 6 (0x10 or 0x18 based on param_3).
 *        Vectors are mapped with offset - param_4.x -> entity[0x4C], param_4.y -> entity[0x50].
 * @note Original: func_80031470 at 0x80031470
 */
#include "tomba.h"

extern u8 g_EntityPool0_Count;

Entity* Entity_SpawnSpecial(int behavior_id, Spawner* spawner, s16 type_flag, Vector3* param_4)
{
    Entity* entity;
    u8 flag_val = 0x18;

    if ((g_EntityPool0_Count < 7) || (entity = Entity_AllocByPoolId(0, 6, 1), entity == 0)) {
        return 0;
    }

    if (spawner != 0) {
        entity->pos.x = spawner->x >> 16;
        entity->pos.y = spawner->y >> 16;
        entity->pos.z = spawner->z >> 16;
    }

    entity->unknown_32 = 0xffb0;         // Hardcoded in original
    entity->unknown_48.x = 0;            // Hardcoded to 0 in original
    entity->unknown_48.y = param_4->x;   // Weird offset mapping in original
    entity->unknown_48.z = param_4->y;
    Entity_InitBehavior(entity, behavior_id);

    if (type_flag == 0) {
        flag_val = 0x10;
    }
    // Hardcoded write to entity offset 6 in original
    ((u8*)entity)[6] = flag_val;
    entity->flags |= 0x80;
    return entity;
}
