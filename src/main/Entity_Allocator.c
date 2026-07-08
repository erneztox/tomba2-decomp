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

Entity* func_80079DDC(Entity* target, u8 param_2, int mode, int list_id)
{
    Entity* entity = D_800E80A0;
    Entity* next_free;
    Entity** tail_ptr;
    Entity** head_ptr;

    if (D_800E80A0 == 0) {
        return func_80079F90(target, param_2, mode, list_id);
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

Entity* func_80079F90(Entity* target, u8 param_2, int mode, int list_id)
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

Entity* func_8007A12C(Entity* target, u8 param_2, int mode, int list_id)
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

Entity* func_8007A2C8(Entity* target, u8 param_2, int mode, int list_id)
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

Entity* func_8007A980(u8 param_1, u8 param_2, int param_3)
{
    switch (param_1) {
    case 0:
        return func_80079C3C(0, param_2, 3, param_3);
    case 1:
        return func_80079DDC(0, param_2, 3, param_3);
    case 2:
        return func_80079F90(0, param_2, 3, param_3);
    case 3:
        return func_8007A12C(0, param_2, 3, param_3);
    case 4:
        return func_8007A2C8(0, param_2, 3, param_3);
    }
    return 0; // fallback in case switch doesn't cover all paths
}

INCLUDE_ASM("asm/nonmatchings/main/Entity_Allocator", func_8007A464);
INCLUDE_ASM("asm/nonmatchings/main/Entity_Allocator", func_8007A5A8);
INCLUDE_ASM("asm/nonmatchings/main/Entity_Allocator", func_8007A624);
INCLUDE_ASM("asm/nonmatchings/main/Entity_Allocator", func_8007A810);
INCLUDE_ASM("asm/nonmatchings/main/Entity_Allocator", func_8007A8E0);
INCLUDE_ASM("asm/nonmatchings/main/Entity_Allocator", func_8007A904);
