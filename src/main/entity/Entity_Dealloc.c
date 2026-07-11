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
 * @brief Unlinks an entity from its list, cleans its fields, and returns it to
 * the appropriate free pool based on its flags.
 * @note Original address: 0x8007A624
 */
void Entity_Dealloc(Entity* entity)
{
    Entity** head_ptr;
    Entity** tail_ptr;
    u8 flags;
    Entity* free_next;

    if (((u8*)entity)[10] == 0) {
        head_ptr = &g_InactiveEntitiesList;
        tail_ptr = &D_800F23A8;
    } else {
        head_ptr = &g_ActiveEntitiesList;
        tail_ptr = &D_800F239C;
    }

    if (entity->prev != 0) {
        entity->prev->next = entity->next;
    } else {
        *head_ptr = entity->next;
        if (entity->next != 0) {
            entity->next->prev = 0;
        }
    }

    if (entity->next != 0) {
        entity->next->prev = entity->prev;
    } else {
        *tail_ptr = entity->prev;
        if (entity->prev != 0) {
            entity->prev->next = 0;
        }
    }

    flags = entity->flags & 0x7F;
    entity->flags = flags;

    if (flags == 0) {
        D_800E7E7C++;
        entity->next = D_800E8098;
        D_800E8098 = entity;
    } else if (flags == 1) {
        D_800E7E7D++;
        free_next = D_800E80A0;
        D_800E80A0 = entity;
        entity->next = free_next;
        func_8007ADDC(entity);
    } else if (flags == 2) {
        D_800ED8CC++;
        free_next = D_800F2398;
        D_800F2398 = entity;
        entity->next = free_next;
        func_8007ADDC(entity);
    } else if (flags == 3) {
        D_800ED8C5++;
        free_next = D_800ED8D4;
        D_800ED8D4 = entity;
        entity->next = free_next;
        func_8007ADDC(entity);
    } else if (flags == 4) {
        D_800ED8C4++;
        free_next = D_800ED8D0;
        D_800ED8D0 = entity;
        entity->next = free_next;
        func_8007ADDC(entity);
    }

    *(s32*)((u8*)entity + 0x00) = 0;
    *(s32*)((u8*)entity + 0x04) = 0;
    *(s32*)((u8*)entity + 0x08) = 0;
    *(s32*)((u8*)entity + 0x0C) = 0;
    *(s32*)((u8*)entity + 0x10) = 0;
    *(s32*)((u8*)entity + 0x14) = 0;
    *(s32*)((u8*)entity + 0x18) = 0;
    *(s32*)((u8*)entity + 0x38) = 0;
    ((u8*)entity)[0x2A] = 0;
    ((u8*)entity)[0x2B] = 0;
    ((u8*)entity)[0x29] = 0;
    ((u8*)entity)[0x5E] = 0;
}
