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
 * @brief Iterates all active and inactive entities, clearing their active flag
 * and calling their update function.
 * @note Original address: 0x8007A904
 */
void Entity_UpdateAll(void)
{
    register Entity* entity asm("a0");

    entity = g_InactiveEntitiesList;
    while (entity != 0) {
        register Entity* next asm("s0") = entity->next;
        __asm__ volatile ("" : : : "memory");
        entity->active_flag = 0;
        entity->update_func(entity);
        entity = next;
    }

    entity = g_ActiveEntitiesList;
    while (entity != 0) {
        register Entity* next asm("s0") = entity->next;
        __asm__ volatile ("" : : : "memory");
        entity->active_flag = 0;
        entity->update_func(entity);
        entity = next;
    }
}
