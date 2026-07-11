#include "tomba.h"
)
/**
 * @brief Byte-matching decompilation
 * @note Original: func_8003B588 at 0x8003B588
 */
// EntityLoop_Player

extern Entity g_PlayerEntity; // D_800E7E80
extern u32 func_80083E80(u32);
extern void func_800597AC(Entity*);
extern void func_8003CCA4(Entity*);

/**
 * @brief Updates the player entity each frame: input, movement, and actions.
 * @note Original address: 0x8003B588
 */
void EntityLoop_Player(void) {
    u8 mode;
    u8 pad;
    u8 val;
    u8 pad04_4;
    u32 temp;
    u8* pEntity = (u8*)&g_PlayerEntity;

    mode = g_PlayerEntity.move_mode;

    if ((mode & 0xD0) == 0) {
        g_PlayerEntity.move_mode = 0;
    } else {
        mode = mode | 2;
        if ((mode & 0x20) == 0) {
            g_PlayerEntity.move_mode = mode;
            if ((mode & 0x10) == 0) {
                if ((mode & 0x80) != 0) {
                    pad = *(u8*)0x1F800247;
                    temp = func_80083E80((pad & 0xF) << 7);
                    val = ((s16)temp >> 6) + 0x10;
                } else {
                    val = 0;
                }
                val += 0x20;
                pEntity[0x18] = val;
                val = 0x20;
                pEntity[0x19] = val;
                pEntity[0x1A] = val;
            } else {
                pad = *(u8*)0x1F800247;
                if ((pad & 0x30) == 0 && (pad & 3) >= 2) {
                    val = 0xD0;
                    pEntity[0x18] = val;
                    pEntity[0x19] = val;
                    pEntity[0x1A] = val;
                } else {
                    if ((mode & 0x80) != 0) {
                        temp = func_80083E80((pad & 0xF) << 7);
                        val = ((s16)temp >> 6) + 0x30;
                        pEntity[0x18] = val;
                        val = 0x20;
                        pEntity[0x19] = val;
                        pEntity[0x1A] = val;
                    } else {
                        if ((mode & 0x40) != 0) {
                            val = 0x20;
                            pEntity[0x18] = val;
                            pEntity[0x19] = val;
                            pEntity[0x1A] = val;
                        } else {
                            val = 0x80;
                            pEntity[0x18] = val;
                            pEntity[0x19] = val;
                            pEntity[0x1A] = val;
                        }
                    }
                }
            }
        }
    }

    func_800597AC(&g_PlayerEntity);

    if (g_PlayerEntity.active_flag != 0) {
        pad04_4 = pEntity->counter1;
        if ((*(u16*)(pEntity + 0x17E) & 0x20) != 0 && *(u8*)(pEntity + 0x179) != 0) {
            pEntity->counter1 = pEntity->counter2;
        }
        func_8003CCA4(&g_PlayerEntity);
        pEntity->counter1 = pad04_4;
    }
}
