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
 * @brief Submits transformed GTE vertices to the ordering table for rendering.
 * @note Original address: 0x8003C8F4
 */
void Entity_SubmitGTEVertices(Entity* entity, s32 flag) {
    register Entity* entity_reg asm("s1") = entity;
    register s32 flag_reg asm("s6") = flag;
    s16* p38;
    s16* p16;
    register s32 count asm("s4");
    register int vertex_ptr asm("s3");
    register u32* sp_ptr asm("s0");
    register s32 neg_1 asm("s5");
    
    __asm__ volatile ("" : : "r"(flag_reg));
    
    if (entity_reg->unknown_38 != 0) {
        s16 local_50[24]; // Stack buffer to size stack to 0x60
        volatile s32* local_30_ptr = (volatile s32*)((s8*)local_50 + 0x20); // sp + 0x30
        
        p38 = (s16*)entity_reg->unknown_38;
        p16 = (s16*)(*(int*)((s8*)entity_reg + 0x3C) + (*p38) * 4);
        count = (s32)*p16;
        {
            register s32 temp_vertex_offset asm("a0") = p16->flags;
            vertex_ptr = *(int*)((s8*)entity_reg + 0x3C) + temp_vertex_offset;
        }
        sp_ptr = (u32*)0x1F800000;
        neg_1 = -1;
        
        do {
            u32 shift;
            
            func_8003B220((s16*)local_50, 0, vertex_ptr);
            
            // Load 3 vertices (Vertex 0, Vertex 2, Vertex 1) into GTE
            GTE_LoadV012((u32*)local_50);
            
            __asm__ volatile ("nop\n\tnop\n\tcop2 0x280030");
            {
                register u32 flag_val asm("t4");
                __asm__ volatile ("cfc2\t%0, $31\n\tnop" : "=r"(flag_val));
                local_30_ptr->type = flag_val;
            }
            
            if ((s32)local_30_ptr->type < 0) {
                local_30_ptr->kind = neg_1; // sp + 0x38
            } else {
                // Save SXY0, SXY1, SXY2 to scratchpad
                __asm__ volatile (
                    "swc2\t$12, 8(%0)\n\t"
                    "swc2\t$13, 16(%0)\n\t"
                    "swc2\t$14, 24(%0)"
                    : : "r"(sp_ptr)
                );
                
                // Normal clipping
                __asm__ volatile (
                    "nop\n\tnop\n\t"
                    "nclip\n\t"
                    "swc2\t$24, 0(%0)"
                    : : "r"(local_30_ptr)
                );
                
                // Load Vertex 3 into GTE V0 and do RTPS
                GTE_LoadV01((u32*)((s8*)local_50 + 24));
                __asm__ volatile ("nop\n\tnop\n\trtps");
                
                {
                    register u32 flag_val asm("t4");
                    __asm__ volatile ("cfc2\t%0, $31\n\tnop" : "=r"(flag_val));
                    local_30_ptr->type = flag_val;
                }
                
                if ((s32)local_30_ptr->type < 0) {
                    local_30_ptr->kind = neg_1;
                } else {
                    // Save SXY2 (which has the projected Vertex 3) to 0x1F800020 (SXY3)
                    __asm__ volatile (
                        "swc2\t$14, 32(%0)"
                        : : "r"(sp_ptr)
                    );
                    
                    __asm__ volatile ("nop\n\tavsz4");
                    __asm__ volatile ("swc2\t$7, 4(%0)" : : "r"(local_30_ptr)); // sp + 0x34
                    local_30_ptr->kind = local_30_ptr->flags;
                }
            }
            
            // Check boundary culling for projected coordinates
            if ((s32)local_30_ptr->kind >= 0) {
                if (((u16*)sp_ptr)[8/2] < 0x140 || 
                    ((u16*)sp_ptr)[0x10/2] < 0x140 || 
                    ((u16*)sp_ptr)[0x18/2] < 0x140 || 
                    ((u16*)sp_ptr)[0x20/2] < 0x140) {
                    
                    if (((u16*)sp_ptr)[0xA/2] < 0xF0 ||
                        ((u16*)sp_ptr)[0x12/2] < 0xF0 || 
                        ((u16*)sp_ptr)[0x1A/2] < 0xF0 || 
                        ((u16*)sp_ptr)[0x22/2] < 0xF0) {
                        
                        local_30_ptr->kind += (s32)entity_reg->count1;
                        shift = local_30_ptr->kind >> 10;
                        local_30_ptr->kind = (local_30_ptr->kind >> shift) + (shift << 9);
                        
                        if ((u32)(local_30_ptr->kind - 4) >= 0x7FC) {
                            local_30_ptr->kind = neg_1;
                        }
                        
                        if ((s32)local_30_ptr->kind >= 0) {
                            static const void* jtbl[] = {
                                &&case_0, &&case_1, &&case_2, &&case_3,
                                &&case_default, &&case_default, &&case_default, &&case_default,
                                &&case_default, &&case_default, &&case_default, &&case_default,
                                &&case_default, &&case_default, &&case_default, &&case_default,
                                &&case_default, &&case_default, &&case_default, &&case_default,
                                &&case_default, &&case_default, &&case_default, &&case_default,
                                &&case_default, &&case_default, &&case_default, &&case_default,
                                &&case_default, &&case_default, &&case_default, &&case_default,
                                &&case_20
                            };
                            const void** jtbl_ptr;
                            register u32* ot_entry asm("a1");
                            register u32* ot_ptr asm("a0");
                            
                            func_8003B054((u8*)sp_ptr, vertex_ptr, flag_reg);
                            
                            if (((s16*)entity_reg)[0x5C/2] != 0) {
                                ((s16*)sp_ptr)[0x0E/2] = ((s16*)entity_reg)[0x5C/2];
                            }
                            
                            if (entity_reg->move_mode <= 0x20) {
                                __asm__ volatile (
                                    "lui\t%0, %%hi(%1)\n\t"
                                    "addiu\t%0, %0, %%lo(%1)"
                                    : "=r"(jtbl_ptr) : "i"(jtbl)
                                );
                                goto *jtbl_ptr[entity_reg->move_mode];
                            }
                            goto case_default;
                            
                        case_0:
                            ((u8*)sp_ptr)[7] = 0x2D;
                            goto case_default;
                        case_1:
                            ((u8*)sp_ptr)[7] = 0x2F;
                            goto case_default;
                        case_2:
                            sp_ptr[4/4] = *(u32*)((u8*)entity_reg + 0x18);
                            ((u8*)sp_ptr)[7] = 0x2C;
                            goto case_default;
                        case_3:
                            sp_ptr[4/4] = *(u32*)((u8*)entity_reg + 0x18);
                            ((u8*)sp_ptr)[7] = 0x2E;
                            goto case_default;
                        case_20:
                            ((u8*)sp_ptr)[7] = 0x2D;
                            ((s16*)sp_ptr)[0x0E/2] = (((u8*)entity_reg)[0x18] == 0) ? 0x403B : 0x407B;
                            goto case_default;
                        case_default:
                            ;
                            
                            ot_entry = D_800ED8C8 + local_30_ptr->kind;
                            ot_ptr = D_800BF544;
                            ot_ptr->type = *ot_entry | 0x09000000;
                            *ot_entry = (u32)ot_ptr;
                            
                            ot_ptr++;
                            *ot_ptr = sp_ptr->flags;
                            ot_ptr++;
                            *ot_ptr = sp_ptr->kind;
                            ot_ptr++;
                            *ot_ptr = sp_ptr->sub_type;
                            ot_ptr++;
                            *ot_ptr = sp_ptr->state;
                            ot_ptr++;
                            *ot_ptr = sp_ptr->behavior_state;
                            ot_ptr++;
                            *ot_ptr = sp_ptr->action_state;
                            ot_ptr++;
                            *ot_ptr = sp_ptr->sub_action;
                            ot_ptr++;
                            *ot_ptr = sp_ptr->counter1;
                            ot_ptr++;
                            *ot_ptr = sp_ptr->counter2;
                            ot_ptr++;
                            
                            D_800BF544 = ot_ptr;
                        }
                    }
                }
            }
            
            count--;
            vertex_ptr += 0x10;
        } while (count != 0);
    }
}
