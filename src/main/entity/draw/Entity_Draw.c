#include "tomba.h"
#include "include_asm.h"
#include "gte_inline.h"

extern u32* D_800BF544;
extern u32* D_800ED8C8;
extern void Entity_DrawChildren(Entity* entity, s32 flag);
extern void func_8003F4C4(Entity* entity, u32* ot, u32* prims);
extern void func_8003F3F4(Entity* entity, u32* ot);
extern void GPU_ModulateOTColors(Entity* entity, u32* ot, u32* prims);
extern void func_8003F594(Entity* entity, u32* ot, u32* prims);
extern void func_8003F344(Entity* entity, u32* ot, u32* prims);

extern void func_80051794(void*);
extern void func_80085050(s32, void*);
extern void func_80084110(void*, void*, void*);
extern void Entity_SubmitGTEVertices(Entity*, s32);

extern u32 D_1F800000;
extern u32 D_1F800020;
extern u32 D_1F800040;

/**
 * @brief Transforms child entity matrices via GTE and submits them for rendering.
 * @note Original address: 0x8003CDD8
 */
void Entity_DrawChildren(Entity* entity, s32 flag) {
    u32* scratchpad = (u32*)&D_1F800000;
    s32 i;
    Entity* target;
    u32 uVar3, uVar4, uVar5, uVar6, uVar7, uVar8, iVar1;
    
    if (entity->unknown_38 != 0 && ((u8*)entity)[9] != 0) {
        for (i = 0; i < ((u8*)entity)[9]; i++) {
            if (((u8*)entity)[8] <= i) return;
            
            target = *(Entity**)((u8*)entity + i*4 + 0xC0);
            
            if (*(u32*)((u8*)target + 0x40) != 0) {
                ((Vector3*)((u8*)scratchpad + 0xC0))->x = target->pos.y;
                ((Vector3*)((u8*)scratchpad + 0xC0))->y = target->unknown_32;
                ((Vector3*)((u8*)scratchpad + 0xC0))->z = ((u16*)target)[0x36/2];
                
                setCopControlWord(2, 0, scratchpad[0xF8/4]);
                setCopControlWord(2, 1, scratchpad[0xFC/4]);
                setCopControlWord(2, 2, scratchpad[0x100/4]);
                setCopControlWord(2, 3, scratchpad[0x104/4]);
                setCopControlWord(2, 4, scratchpad[0x108/4]);
                
                setCopReg(2, 9, (u32)((u16*)target)[0x18/2]);
                setCopReg(2, 10, (u32)((u16*)target)[0x1E/2]);
                setCopReg(2, 11, (u32)((u16*)target)[0x24/2]);
                copFunction(2, 0x49E012);
                
                uVar3 = getCopReg(2, 9);
                uVar5 = getCopReg(2, 10);
                uVar7 = getCopReg(2, 11);
                
                setCopReg(2, 9, (u32)((u16*)target)[0x1A/2]);
                setCopReg(2, 10, (u32)((u16*)target)[0x20/2]);
                setCopReg(2, 11, (u32)((u16*)target)[0x26/2]);
                copFunction(2, 0x49E012);
                
                uVar4 = getCopReg(2, 9);
                uVar6 = getCopReg(2, 10);
                uVar8 = getCopReg(2, 11);
                
                scratchpad[0x0/4] = ((uVar4 & 0xFFFF) << 16) | (uVar3 & 0xFFFF);
                scratchpad[0xC/4] = ((uVar8 & 0xFFFF) << 16) | (uVar7 & 0xFFFF);
                
                setCopReg(2, 9, (u32)((u16*)target)[0x1C/2]);
                setCopReg(2, 10, (u32)((u16*)target)[0x22/2]);
                setCopReg(2, 11, (u32)((u16*)target)[0x28/2]);
                copFunction(2, 0x49E012);
                
                uVar3 = getCopReg(2, 9);
                uVar4 = getCopReg(2, 10);
                uVar7 = getCopReg(2, 11);
                
                scratchpad[0x4/4] = ((uVar5 & 0xFFFF) << 16) | (uVar3 & 0xFFFF);
                scratchpad[0x8/4] = ((uVar4 & 0xFFFF) << 16) | (uVar6 & 0xFFFF);
                scratchpad[0x10/4] = (scratchpad[0x10/4] & 0xFFFF0000) | (uVar7 & 0xFFFF);
                
                setCopReg(2, 0, scratchpad[0xC0/4]);
                setCopReg(2, 1, scratchpad[0xC4/4]);
                copFunction(2, 0x486012);
                
                scratchpad[0x14/4] = getCopReg(2, 25) + scratchpad[0x10C/4];
                scratchpad[0x18/4] = getCopReg(2, 26) + scratchpad[0x110/4];
                scratchpad[0x1C/4] = getCopReg(2, 27) + scratchpad[0x114/4];
                
                setCopControlWord(2, 0, scratchpad[0x0/4]);
                setCopControlWord(2, 1, scratchpad[0x4/4]);
                setCopControlWord(2, 2, scratchpad[0x8/4]);
                setCopControlWord(2, 3, scratchpad[0xC/4]);
                setCopControlWord(2, 4, scratchpad[0x10/4]);
                setCopControlWord(2, 5, scratchpad[0x14/4]);
                setCopControlWord(2, 6, scratchpad[0x18/4]);
                setCopControlWord(2, 7, scratchpad[0x1C/4]);
                
                iVar1 = (u32)D_800ED8C8;
                if ((entity->move_mode & 0xF) == 4) {
                    iVar1 = (u32)D_800ED8C8 + ((u8*)target)[0x3F] * 4;
                }
                func_8003F698(*(u32*)((u8*)target + 0x40), iVar1, flag);
            }
        }
    }
}
