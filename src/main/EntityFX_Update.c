#include "tomba.h"

extern void func_8003D23C(void*);

/**
 * @brief Updates all active particle/FX slots.
 *
 * Iterates over 40 slots in the effects array at D_800EC188, calling
 * func_8003D23C on each non-null entry.
 *
 * @note Original address: 0x8003F024
 */
void EntityFX_Update(void) {
    int i;
    char *slot;

    i = 0;
    slot = (char*)0x800EC188;
    do {
        if (*slot != 0) {
            func_8003D23C(slot);
        }
        i++;
        slot += 0x40;
    } while (i < 0x28);
}
