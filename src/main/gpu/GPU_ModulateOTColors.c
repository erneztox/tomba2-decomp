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
 * @brief Applies entity color modulation to sprite primitives in the OT.
 * @note Original address: 0x8003D584
 */
void GPU_ModulateOTColors(Entity *entity, u8 *ot_start, u8 *ot_end) {
    register u8 *col asm("a3");

    if (ot_start < ot_end) {
        col = ot_start + 6;
        do {
            u8 type = col->flags & 0xFC;
            
            if ((u32)(type - 0x20) < 0x1D) {
                switch (type) {
                case 0x34:
                    APPLY_COLOR_3(col, entity, 0x18, -2, 0xA, 0x16);
                    APPLY_COLOR_3(col, entity, 0x19, -1, 0xB, 0x17);
                    APPLY_COLOR_3(col, entity, 0x1A,  0, 0xC, 0x18);
                    col += 0x20;
                    ot_start += 0x20;
                    break;
                case 0x3C:
                    APPLY_COLOR_4(col, entity, 0x18, -2, 0xA, 0x16, 0x22);
                    APPLY_COLOR_4(col, entity, 0x19, -1, 0xB, 0x17, 0x23);
                    APPLY_COLOR_4(col, entity, 0x1A,  0, 0xC, 0x18, 0x24);
                    col += 0x34;
                    ot_start += 0x34;
                    break;
                case 0x24:
                    APPLY_COLOR_1(col, entity, 0x18, -2);
                    APPLY_COLOR_1(col, entity, 0x19, -1);
                    APPLY_COLOR_1(col, entity, 0x1A, 0);
                    col += 0x18;
                    ot_start += 0x18;
                    break;
                case 0x2C:
                    APPLY_COLOR_1(col, entity, 0x18, -2);
                    APPLY_COLOR_1(col, entity, 0x19, -1);
                    APPLY_COLOR_1(col, entity, 0x1A, 0);
                    col += 0x24;
                    ot_start += 0x24;
                    break;

                case 0x20:
                    col += 0x14;
                    ot_start += 0x14;
                    break;
                case 0x28:
                    col += 0x18;
                    ot_start += 0x18;
                    break;
                case 0x30:
                    col += 0x1C;
                    ot_start += 0x1C;
                    break;
                case 0x38:
                    col += 0x24;
                    ot_start += 0x24;
                    break;
                default:
                    col += 0x28;
                    ot_start += 0x28;
                    break;
                }
            }
        } while (ot_start < ot_end);
    }
}
