#include "tomba.h"

extern u8 D_800E7E7C;

/**
 * @brief Spawns an entity without setting its position.
 */
Entity* func_800310F4(int param_1, s16 param_2)
{
    Entity* entity;

    if ((D_800E7E7C < 7) || (entity = func_8007A980(0, 6, 1), entity == 0)) {
        return 0;
    }
    
    entity->unknown_32 = param_2;
    func_80028E10(entity, param_1);
    return entity;
}

