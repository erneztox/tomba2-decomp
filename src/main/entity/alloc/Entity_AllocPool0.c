#include "tomba.h"
#include "include_asm.h"

extern Entity* g_ActiveEntitiesList;       // 0x800F2624
extern Entity* D_800F239C;                 // Active Tail
extern Entity* g_InactiveEntitiesList;     // 0x800FB168
extern Entity* D_800F23A8;                 // Inactive Tail
extern Entity* g_BackgroundEntitiesList;   // 0x800F2738
extern Entity* D_800F23A0;                 // Background Tail


extern u8 D_800E7E7C;
extern Entity* D_800E8098;

extern u8 D_800E7E80[388];
extern Entity D_80100690[];
extern Entity* D_800F273C;
extern u8 D_800F2410;

extern void func_8007982C(void);
extern void func_8007ADDC(Entity* entity);
extern void func_8009A420(void* dest, int val, int len);

/**
 * @brief Dispatches entity allocation to the correct pool based on pool ID.
 * @note Original address: 0x8007A980
 */
Entity* Entity_AllocByPoolId(u8 pool_id, u8 param_2, int list_id)
{
    switch (pool_id) {
    case 0:
        return Entity_AllocPool0(0, param_2, 3, list_id);
    case 1:
        return Entity_AllocPool1(0, param_2, 3, list_id);
    case 2:
        return Entity_AllocPool2(0, param_2, 3, list_id);
    case 3:
        return Entity_AllocPool3(0, param_2, 3, list_id);
    case 4:
        return Entity_AllocPool4(0, param_2, 3, list_id);
    }
    return 0; // fallback in case switch doesn't cover all paths
}
