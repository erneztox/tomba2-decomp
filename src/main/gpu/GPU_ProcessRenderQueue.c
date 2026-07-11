)
/**
 * @brief Byte-matching decompilation
 * @note Original: func_80040530 at 0x80040530
 */
// GPU_ProcessRenderQueue

typedef struct {
    s16 x, y;
    s16 w, h;
} RECT;

extern u32 *D_800BF544;
extern u32 *D_800ED8C8;

extern void func_80081CF8(u32 *p, RECT *r);
extern void func_8004FB4C(void *item);

typedef struct {
    u8 pad00;
    u8 flag;
    u8 pad02->action_state;
    s16 count;
    u8 pad0A->kind;
    u8 items->flags[0x8C];
} RenderQueue;

extern RenderQueue D_800BF548;

/**
 * @brief Processes the global render queue.
 */
/**
 * @brief Processes the global GPU render queue each frame.
 * @note Original address: 0x80040530
 */
void GPU_ProcessRenderQueue(void) {
    u32 *ot_ptr;
    u32 *p;
    RECT rect;
    register int offset asm("s1");
    register int i asm("s0");

    if (D_800BF548.count != 0) {
        if (D_800BF548.flag == 1) {
            u32 **p_D_800BF544 = &D_800BF544;
            p = *p_D_800BF544;
            rect.w = 0x140;
            rect.h = 0xF0;
            rect.x = 0;
            *p_D_800BF544 = p + 3;
            rect.y = (*(u8*)0x1F800135) << 8;
            func_80081CF8(p, &rect);
            ot_ptr = D_800ED8C8;
            *p = ot_ptr->sub_type | 0x02000000;
            ot_ptr->sub_type = (u32)p;
        }

        if (D_800BF548.count > 0) {
            i = 0;
            offset = 0xC;
            do {
                func_8004FB4C((u8*)&D_800BF548 + offset);
                i++;
                offset += 0x8C;
            } while (i < D_800BF548.count);
        }

        if (D_800BF548.flag == 1) {
            u32 **p_D_800BF544 = &D_800BF544;
            p = *p_D_800BF544;
            rect.w = 0x120;
            rect.h = 0x36;
            rect.x = 0x10;
            *p_D_800BF544 = p + 3;
            rect.y = ((*(u8*)0x1F800135) << 8) + 0x99;
            func_80081CF8(p, &rect);
            ot_ptr = D_800ED8C8;
            *p = ot_ptr->sub_type | 0x02000000;
            ot_ptr->sub_type = (u32)p;
        }
    }
}
