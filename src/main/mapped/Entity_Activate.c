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
 * @brief Removes an entity from Pool 0's free list and appends it to the active list.
 * @note Original address: 0x8007A5A8
 */
Entity* Entity_Activate(u8 param_1)
{
    Entity* entity = D_800E8098;

    if (entity != 0) {
        Entity* next_free = entity->next;
        Entity* tail;

        D_800E7E7C--;
        entity->next = 0;
        D_800E8098 = next_free;

        tail = D_800F239C;
        entity->prev = tail;
        if (tail != 0) {
            tail->next = entity;
        } else {
            g_ActiveEntitiesList = entity;
        }
        D_800F239C = entity;

        ((u8*)entity)[10] = 1;
        ((u8*)entity)[0] = 2;
        ((u8*)entity)[0xC] = param_1;
    }

    return entity;
}
