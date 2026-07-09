#include "tomba.h"

extern void GPU_Render3DSprite(Entity*);

/**
 * @brief Updates all active particle/FX slots.
 *
 * Iterates over 40 slots in the effects array at D_800EC188, calling
 * GPU_Render3DSprite on each non-null entry.
 *
 * @note Original address: 0x8003F024
 */
void func_8003F024(void) {
    int i;
    char *slot;

    i = 0;
    slot = (char*)0x800EC188;
    do {
        if (*slot != 0) {
            GPU_Render3DSprite((Entity*)slot);
        }
        i++;
        slot += 0x40;
    } while (i < 0x28);
}

#include "gte_inline.h"

extern void func_8003F698(void*, u32, int);
extern u32 DAT_1f8000f8;
extern u32 D_800ED8C8;

#define SetRotMatrix(r) \
	__asm__ volatile ( \
		"lw	$12,0(%0)\n\t" \
		"lw	$13,4(%0)\n\t" \
		"ctc2	$12,$0\n\t" \
		"ctc2	$13,$1\n\t" \
		"lw	$12,8(%0)\n\t" \
		"lw	$13,12(%0)\n\t" \
		"lw	$14,16(%0)\n\t" \
		"ctc2	$12,$2\n\t" \
		"ctc2	$13,$3\n\t" \
		"ctc2	$14,$4" \
		: \
		: "r"(r) \
		: "$12", "$13", "$14" \
	)

#define SetTransMatrix(r) \
	__asm__ volatile ( \
		"lw	$12,20(%0)\n\t" \
		"lw	$13,24(%0)\n\t" \
		"ctc2	$12,$5\n\t" \
		"lw	$14,28(%0)\n\t" \
		"ctc2	$13,$6\n\t" \
		"ctc2	$14,$7" \
		: \
		: "r"(r) \
		: "$12", "$13", "$14" \
	)

void func_8003F07C(Entity *entity, int param_2) {
    int i;
    void **ptr_array;

    if (entity->count1 != 0) {
        SetRotMatrix(&DAT_1f8000f8);
        SetTransMatrix(&DAT_1f8000f8);

        i = 0;
        ptr_array = entity->ptr_array;
        if (entity->count2 != 0) {
            do {
                if (entity->count1 <= i) {
                    return;
                }
                func_8003F698(*(void**)((char*)*ptr_array++ + 0x40), D_800ED8C8, param_2);
                i++;
            } while (i < entity->count2);
        }
    }
}
