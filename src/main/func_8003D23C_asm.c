#include "tomba.h"
#include "include_asm.h"
#include "gte_inline.h"

/* Scratchpad blocks declared as external symbols at fixed PS1 addresses */
extern u32 D_1F800000;   /* 0x1F800000 */
extern u32 D_1F800020;   /* 0x1F800020 */
extern u32 D_1F800040;   /* 0x1F800040 */
extern u32 D_1F8000C0;   /* 0x1F8000C0 */
extern u32 D_1F8000D0;   /* 0x1F8000D0 */
extern u32 D_1F8000F8;   /* 0x1F8000F8 */
extern u32 D_1F800054;   /* 0x1F800054 */
extern u32 D_1F80001C;   /* 0x1F80001C */

extern u32 D_8009D46C;
extern u32 *D_800BF544;
extern u32 *D_800ED8C8;

extern void func_800517BC(void*, s16, s16, s16);
extern void func_80051794(void*);
extern void func_800847F0(void*, void*);
extern void func_80084110(void*, void*, void*);

/**
 * @brief Render a single entity sprite into the Ordering Table via GTE.
 *
 * @note Original address: 0x8003D23C
 */
void func_8003D23C(Entity *entity) {
    u16 raw_sc;
    s16 scale;
    u32 vtx_idx;
    u32 *vtx;
    s32 otz, shift, z_index;
    u32 *ot_ptr;
    u32 *ot_entry;

    raw_sc = ((u16*)entity)[0xC / 2];
    scale  = (s16)(raw_sc * 5);

    func_800517BC(&D_1F800000, scale, scale, scale);
    func_80051794(&D_1F800020);
    func_800847F0((void*)((u8*)entity + 0x28), &D_1F800020);
    func_80084110(&D_1F800020, &D_1F800000, &D_1F800040);

    ((u16*)&D_1F8000C0)[0] = ((u16*)entity)[0x1E / 2];
    ((u16*)&D_1F8000C0)[1] = ((u16*)entity)[0x22 / 2];
    ((u16*)&D_1F8000C0)[2] = ((u16*)entity)[0x26 / 2];

    SetRotMatrix(&D_1F8000F8);
    GTE_LoadV01(&D_1F8000C0);
    GTE_MVMVA();
    GTE_StoreIR123(&D_1F800054);

    ((u32*)&D_1F800040)[0x14 / 4] += ((u32*)&D_1F8000D0)[0x3C / 4];
    ((u32*)&D_1F800040)[0x18 / 4] += ((u32*)&D_1F8000D0)[0x40 / 4];
    ((u32*)&D_1F800040)[0x1C / 4] += ((u32*)&D_1F8000D0)[0x44 / 4];

    SetRotMatrix(&D_1F800040);
    SetTransMatrix(&D_1F800054);

    vtx_idx = (u32)((u8*)entity)[7] * 0x18;
    vtx = (u32*)((u8*)&D_8009D46C + vtx_idx);
    GTE_LoadV012(vtx);

    GTE_RTPT();
    GTE_StoreSXY012(&D_1F80001C);
    GTE_AVSZ3();
    GTE_StoreOTZ(&D_1F800020);

    otz   = (s32)*((volatile u32*)&D_1F800020);
    shift = otz >> 10;
    otz   = (otz >> shift) + (shift << 9);
    *((volatile u32*)&D_1F800020) = (u32)otz;
    if ((u32)(otz - 4) >= 0x7FC) {
        *((volatile u32*)&D_1F800020) = (u32)-1;
    }

    z_index = (s32)*((volatile u32*)&D_1F800020);
    if (z_index < 0) {
        return;
    }

    ot_ptr = D_800BF544;

    ((u8*)&D_1F800000)[0x7]  = ((u8*)entity)[0xE];
    ((u8*)&D_1F800000)[0xC]  = ((u8*)entity)[0x34];
    ((u8*)&D_1F800000)[0xD]  = ((u8*)entity)[0x35];
    ((u8*)&D_1F800000)[0x14] = ((u8*)entity)[0x38];
    ((u8*)&D_1F800000)[0x15] = ((u8*)entity)[0x39];
    ((u8*)&D_1F800000)[0x1C] = ((u8*)entity)[0x3C];
    ((u8*)&D_1F800000)[0x1D] = ((u8*)entity)[0x3D];
    ((u16*)&D_1F800000)[0x16 / 2] = ((u16*)entity)[0x3A / 2];
    ((u16*)&D_1F800000)[0xE  / 2] = ((u16*)entity)[0x36 / 2];
    ((u8*)&D_1F800000)[0x4]  = ((u8*)entity)[0x30];
    ((u8*)&D_1F800000)[0x5]  = ((u8*)entity)[0x31];
    ((u8*)&D_1F800000)[0x6]  = ((u8*)entity)[0x32];

    D_800BF544 = ot_ptr + 8;

    ot_entry  = D_800ED8C8 + z_index;
    ot_ptr[0] = *ot_entry | 0x7000000;
    *ot_entry = (u32)ot_ptr;
    ot_ptr++;

    ot_ptr[0] = ((u32*)&D_1F800000)[0x4  / 4]; ot_ptr++;
    ot_ptr[0] = ((u32*)&D_1F800000)[0x8  / 4]; ot_ptr++;
    ot_ptr[0] = ((u32*)&D_1F800000)[0xC  / 4]; ot_ptr++;
    ot_ptr[0] = ((u32*)&D_1F800000)[0x10 / 4]; ot_ptr++;
    ot_ptr[0] = ((u32*)&D_1F800000)[0x14 / 4]; ot_ptr++;
    ot_ptr[0] = ((u32*)&D_1F800000)[0x18 / 4]; ot_ptr++;
    ot_ptr[1] = ((u32*)&D_1F800000)[0x1C / 4];
}

INCLUDE_ASM("asm/nonmatchings/main/func_8003D23C_asm", func_8003D584);
