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
 * @brief Initializes the background entity pool with 4 pre-linked entities.
 * @note Original address: 0x8007A810
 */
void Entity_InitBackgroundPool(void)
{
    register s32 val_5 asm("s3");
    register Entity* next asm("s2");
    register s32 i asm("s1");
    register Entity* entity asm("s0");

    func_8009A420(D_800E7E80, 0, 0x184);
    g_BackgroundEntitiesList = 0;
    D_800F23A0 = 0;

    i = 0;
    val_5 = 5;
    entity = D_80100690;
    next = entity + 1;
    while (i < 4) {
        func_8009A420(entity, 0, 0x108);
        entity->next = next;
        next++;
        entity->flags = val_5;
        entity++;
        i++;
    }

    D_80100690->sub_type.next = 0;
    D_800F273C = D_80100690;
    D_800F2410 = 4;
}
