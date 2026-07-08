#include "tomba.h"

extern u8 D_800E7E7C; // Available count
extern Entity* D_800E8098; // Free list head

extern Entity* D_800F2624;
extern Entity* D_800F239C;
extern Entity* D_800FB168;
extern Entity* D_800F23A8;
extern Entity* D_800F2738;
extern Entity* D_800F23A0;

/**
 * @brief Allocates an entity from pool 0 and inserts it into a doubly-linked list.
 * param_1: target entity for relative insertion
 * param_2: some ID or initialization parameter
 * param_3: insertion mode (1=head, 3=tail, etc)
 * param_4: list ID (0, 1, 2)
 */
Entity* func_80079C3C(Entity* target, u8 param_2, int mode, int list_id)
{
    Entity* entity = D_800E8098;
    Entity* next_free;
    Entity** tail_ptr;
    Entity** head_ptr;

    if (D_800E7E7C < 3) {
        return 0;
    }

    D_800E7E7C--;
    next_free = D_800E8098->next;

    if (list_id == 1) {
        head_ptr = &D_800F2624;
        tail_ptr = &D_800F239C;
    } else if (list_id != 2) {
        head_ptr = &D_800FB168;
        tail_ptr = &D_800F23A8;
    } else {
        head_ptr = &D_800F2738;
        tail_ptr = &D_800F23A0;
    }

    if (mode != 1) {
        if (mode > 1) {
            if (mode == 2) {
                if (target->next != 0) {
                    target->next->prev = entity;
                    entity->next = target->next;
                    target->next = entity;
                    entity->prev = target;
                    
                    D_800E8098 = next_free;
                    goto initialize;
                }
            } else if (mode != 3) {
                goto initialize;
            }
            
            // mode == 3 (Insert Tail)
            entity->next = 0;
            entity->prev = *tail_ptr;
            
            if (*tail_ptr == 0) {
                *head_ptr = entity;
            } else {
                (*tail_ptr)->next = entity;
            }
            *tail_ptr = entity;
            
            D_800E8098 = next_free;
            goto initialize;
        }
        
        // mode == 0 (Insert Before target)
        if (mode == 0) {
            if (target->prev != 0) {
                target->prev->next = entity;
                entity->prev = target->prev;
                target->prev = entity;
                entity->next = target;
                
                D_800E8098 = next_free;
                goto initialize;
            }
        } else {
            goto initialize;
        }
    }

    // mode == 1 (Insert Head)
    entity->prev = 0;
    entity->next = *head_ptr;
    
    if (*head_ptr == 0) {
        *tail_ptr = entity;
    } else {
        (*head_ptr)->prev = entity;
    }
    *head_ptr = entity;
    D_800E8098 = next_free;

initialize:
    D_800E8098 = next_free;
    
    // puVar2[10] = (char)param_4;
    // *puVar2 = 2;
    // puVar2[0xc] = param_2;
    ((u8*)entity)[10] = (u8)list_id;
    ((u8*)entity)[0] = 2;
    ((u8*)entity)[0xC] = param_2;

    return entity;
}

