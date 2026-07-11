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
 * @brief Allocates an entity from Pool 1, falling back to Pool 2 if empty.
 * @note Original address: 0x80079DDC
 */
Entity* Entity_AllocPool1(Entity* target, u8 param_2, int mode, int list_id)
{
    Entity* entity = D_800E80A0;
    Entity* next_free;
    Entity** tail_ptr;
    Entity** head_ptr;

    if (D_800E80A0 == 0) {
        return Entity_AllocPool2(target, param_2, mode, list_id);
    }


    if (D_800E80A0 == 0) {
        return 0;
    }

    D_800E7E7D--;
    next_free = entity->next;

    if (list_id == 1) {
        head_ptr = &g_ActiveEntitiesList;
        tail_ptr = &D_800F239C;
    } else if (list_id < 2 || list_id != 2) {
        head_ptr = &g_InactiveEntitiesList;
        tail_ptr = &D_800F23A8;
    } else {
        head_ptr = &g_BackgroundEntitiesList;
        tail_ptr = &D_800F23A0;
    }

    if (mode != 1) {
        if (mode > 1) {
            if (mode == 2) {
                if (target->next != 0) {
                    tail_ptr = (Entity**)&entity->next;
                    D_800E80A0 = next_free;
                    *tail_ptr = target->next;
                    target->next->prev = entity;
                    target->next = entity;
                    entity->prev = target;
                    goto initialize;
                }
            } else if (mode == 3) {
                entity->next = 0;
                entity->prev = *tail_ptr;
                
                if (*tail_ptr == 0) {
                    *head_ptr = entity;
                } else {
                    (*tail_ptr)->next = entity;
                }
                *tail_ptr = entity;
                D_800E80A0 = next_free;
                goto initialize;
            }
            goto initialize;
        }
        
        if (mode == 0) {
            if (target->prev != 0) {
                tail_ptr = (Entity**)&entity->prev;
                D_800E80A0 = next_free;
                *tail_ptr = target->prev;
                target->prev->next = entity;
                target->prev = entity;
                entity->next = target;
                goto initialize;
            }
        }
        goto initialize;
    }

    entity->prev = 0;
    entity->next = *head_ptr;
    
    if (*head_ptr == 0) {
        *tail_ptr = entity;
    } else {
        (*head_ptr)->prev = entity;
    }
    *head_ptr = entity;
    D_800E80A0 = next_free;

initialize:
    D_800E80A0 = next_free;
    ((u8*)entity)[10] = (u8)list_id;
    ((u8*)entity)[0] = 2;
    ((u8*)entity)[0xC] = param_2;

    return entity;
}

extern u8 D_800ED8CC;
extern Entity* D_800F2398;
