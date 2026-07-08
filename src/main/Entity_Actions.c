#include "tomba.h"
#include "include_asm.h"

INCLUDE_ASM("asm/nonmatchings/main/Entity_Actions", func_8003C2D4);

INCLUDE_ASM("asm/nonmatchings/main/Entity_Actions", func_8003C464);

INCLUDE_ASM("asm/nonmatchings/main/Entity_Actions", func_8003C5F8);

INCLUDE_ASM("asm/nonmatchings/main/Entity_Actions", func_8003C788);

INCLUDE_ASM("asm/nonmatchings/main/Entity_Actions", func_8003C8F4);

// INCLUDE_ASM("asm/nonmatchings/main/Entity_Actions", func_8003CCA4);

extern u32* D_800BF544;
extern void func_8003CDD8(Entity* entity, s32 flag);
extern void func_8003F4C4(Entity* entity, u32* ot, u32* prims);
extern void func_8003F3F4(Entity* entity, u32* ot);
extern void func_8003D584(Entity* entity, u32* ot, u32* prims);
extern void func_8003F594(Entity* entity, u32* ot, u32* prims);
extern void func_8003F344(Entity* entity, u32* ot, u32* prims);

// Original address: 0x8003CCA4
void func_8003CCA4(Entity* entity) {
    s32 flag;
    u32* ot;

    ot = D_800BF544;
    flag = (entity->action_id == 0xF);
    
    *(Entity**)0x1F80028C = entity;

    switch (entity->move_mode & 0xB) {
        case 0:
        case 4:
            func_8003CDD8(entity, flag);
            break;
            
        case 1:
            func_8003CDD8(entity, flag);
            if (((u8*)entity)[0x1B] == 0) { // pad1B
                func_8003F4C4(entity, ot, D_800BF544);
            } else {
                func_8003F3F4(entity, ot);
            }
            break;
            
        case 2:
            func_8003CDD8(entity, flag);
            func_8003D584(entity, ot, D_800BF544);
            break;
            
        case 3:
            func_8003CDD8(entity, flag);
            func_8003F594(entity, ot, D_800BF544);
            break;
            
        case 8:
            func_8003CDD8(entity, flag);
            func_8003F344(entity, ot, D_800BF544);
            break;
    }
}

INCLUDE_ASM("asm/nonmatchings/main/Entity_Actions", func_8003CDD8);
