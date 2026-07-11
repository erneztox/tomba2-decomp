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
 * @brief Allocates an entity from the background free list and inserts it at the
 * specified position (head, tail, before, after) in the background entity list.
 * @note Original address: 0x8007A464
 */
Entity* Entity_AllocBackground(Entity* target, int mode)
{
    Entity* entity = D_800F273C;

    if (entity != 0) {
        Entity* next_free = entity->next;
        Entity** head_ptr = &g_BackgroundEntitiesList;
        Entity** tail_ptr = &D_800F23A0;

        D_800F2410--;
        D_800F273C = next_free;

        if (mode == 0) {
            if (target->prev != 0) {
                entity->prev = target->prev;
                target->prev->next = entity;
                target->prev = entity;
                entity->next = target;
                goto initialize;
            }
            goto insert_head;
        }
        if (mode == 1) {
            goto insert_head;
        }
        if (mode == 2) {
            if (target->next != 0) {
                entity->next = target->next;
                target->next->prev = entity;
                target->next = entity;
                entity->prev = target;
                goto initialize;
            }
            goto insert_tail;
        }
        if (mode == 3) {
            goto insert_tail;
        }
        goto insert_tail;

    insert_head:
        entity->prev = 0;
        entity->next = *head_ptr;
        if (*head_ptr == 0) {
            *tail_ptr = entity;
        } else {
            (*head_ptr)->prev = entity;
        }
        *head_ptr = entity;
        goto initialize;

    insert_tail:
        entity->next = 0;
        entity->prev = *tail_ptr;
        if (*tail_ptr == 0) {
            *head_ptr = entity;
        } else {
            (*tail_ptr)->next = entity;
        }
        *tail_ptr = entity;

    initialize:
        ((u8*)entity)[10] = 1;
        ((u8*)entity)[0] = 2;
        ((u8*)entity)[0xC] = 1;
    }

    return entity;
}
