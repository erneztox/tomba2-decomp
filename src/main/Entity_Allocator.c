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
 * @brief Allocates an entity from Pool 0 and inserts it into the target list.
 * @note Original address: 0x80079C3C
 */
Entity* Entity_AllocPool0(Entity* target, u8 param_2, int mode, int list_id)
{
    Entity* entity = D_800E8098;
    Entity* next_free;
    Entity** tail_ptr;
    Entity** head_ptr;



    if (D_800E7E7C < 3) {
        return 0;
    }

    D_800E7E7C--;
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
                    D_800E8098 = next_free;
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
                D_800E8098 = next_free;
                goto initialize;
            }
            goto initialize;
        }
        
        if (mode == 0) {
            if (target->prev != 0) {
                tail_ptr = (Entity**)&entity->prev;
                D_800E8098 = next_free;
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
    D_800E8098 = next_free;

initialize:
    D_800E8098 = next_free;
    ((u8*)entity)[10] = (u8)list_id;
    ((u8*)entity)[0] = 2;
    ((u8*)entity)[0xC] = param_2;

    return entity;
}

extern u8 D_800E7E7D;
extern Entity* D_800E80A0;

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

/**
 * @brief Allocates an entity from Pool 2.
 * @note Original address: 0x80079F90
 */
Entity* Entity_AllocPool2(Entity* target, u8 param_2, int mode, int list_id)
{
    Entity* entity = D_800F2398;
    Entity* next_free;
    Entity** tail_ptr;
    Entity** head_ptr;



    if (D_800F2398 == 0) {
        return 0;
    }

    D_800ED8CC--;
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
                    D_800F2398 = next_free;
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
                D_800F2398 = next_free;
                goto initialize;
            }
            goto initialize;
        }
        
        if (mode == 0) {
            if (target->prev != 0) {
                tail_ptr = (Entity**)&entity->prev;
                D_800F2398 = next_free;
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
    D_800F2398 = next_free;

initialize:
    D_800F2398 = next_free;
    ((u8*)entity)[10] = (u8)list_id;
    ((u8*)entity)[0] = 2;
    ((u8*)entity)[0xC] = param_2;

    return entity;
}

extern u8 D_800ED8C5;
extern Entity* D_800ED8D4;

/**
 * @brief Allocates an entity from Pool 3.
 * @note Original address: 0x8007A12C
 */
Entity* Entity_AllocPool3(Entity* target, u8 param_2, int mode, int list_id)
{
    Entity* entity = D_800ED8D4;
    Entity* next_free;
    Entity** tail_ptr;
    Entity** head_ptr;



    if (D_800ED8D4 == 0) {
        return 0;
    }

    D_800ED8C5--;
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
                    D_800ED8D4 = next_free;
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
                D_800ED8D4 = next_free;
                goto initialize;
            }
            goto initialize;
        }
        
        if (mode == 0) {
            if (target->prev != 0) {
                tail_ptr = (Entity**)&entity->prev;
                D_800ED8D4 = next_free;
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
    D_800ED8D4 = next_free;

initialize:
    D_800ED8D4 = next_free;
    ((u8*)entity)[10] = (u8)list_id;
    ((u8*)entity)[0] = 2;
    ((u8*)entity)[0xC] = param_2;

    return entity;
}

extern u8 D_800ED8C4;
extern Entity* D_800ED8D0;

/**
 * @brief Allocates an entity from Pool 4.
 * @note Original address: 0x8007A2C8
 */
Entity* Entity_AllocPool4(Entity* target, u8 param_2, int mode, int list_id)
{
    Entity* entity = D_800ED8D0;
    Entity* next_free;
    Entity** tail_ptr;
    Entity** head_ptr;



    if (D_800ED8D0 == 0) {
        return 0;
    }

    D_800ED8C4--;
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
                    D_800ED8D0 = next_free;
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
                D_800ED8D0 = next_free;
                goto initialize;
            }
            goto initialize;
        }
        
        if (mode == 0) {
            if (target->prev != 0) {
                tail_ptr = (Entity**)&entity->prev;
                D_800ED8D0 = next_free;
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
    D_800ED8D0 = next_free;

initialize:
    D_800ED8D0 = next_free;
    ((u8*)entity)[10] = (u8)list_id;
    ((u8*)entity)[0] = 2;
    ((u8*)entity)[0xC] = param_2;

    return entity;
}

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
    next = D_80100690 + 1;
    entity = D_80100690;
    while (i < 4) {
        func_8009A420(entity, 0, 0x108);
        entity->next = next;
        next++;
        entity->flags = val_5;
        entity++;
        i++;
    }

    D_80100690[i - 1].next = 0;
    D_800F273C = D_80100690;
    D_800F2410 = 4;
}
/**
 * @brief Clears input-related flags in the scratchpad after a subsystem reset.
 * @note Original address: 0x8007A8E0
 */
void Entity_ClearInputFlags(void)
{
    register u16* ptr asm("v0");
    func_8007982C();
    ptr = (u16*)0x1F800000;
    ptr[0xBE] = 0;
}

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
