/**
 * @brief Step 2: init child rotation/animation from data (stride 0x2C)
 * @note Original: func_80026DD8 at 0x80026DD8
 */
// Entity_InitChildRotation



#include "tomba.h"
int Entity_InitChildRotation(int param_1,int param_2,int param_3,int param_4)

{
  u8 *puVar1;
  
  if (param_4 < (int)(uint)*(u16 *)(param_2 + 2)) {
    puVar1 = (u8 *)(param_4 * 0x2c + param_3);
    *(u8 *)(param_1 + 0x33) = puVar1->sub_type & 2 | 0x24;
    *(u8 *)(param_1 + 0x34) = puVar1->counter1;
    *(u8 *)(param_1 + 0x35) = puVar1->counter2;
    *(u8 *)(param_1 + 0x38) = puVar1[0xc];
    *(u8 *)(param_1 + 0x39) = puVar1->sprite_flags;
    *(u8 *)(param_1 + 0x3c) = puVar1[0x10];
    *(u8 *)(param_1 + 0x3d) = puVar1[0x11];
    *(s16 *)(param_1 + 0x3a) = puVar1->anim_timer;
    param_1->pos_z = *(s16 *)(puVar1 + 10);
    *(u8 *)(param_1 + 0x30) = *puVar1;
    *(u8 *)(param_1 + 0x31) = puVar1->flags;
    *(u8 *)(param_1 + 0x32) = puVar1->kind;
    return 0;
  }
  return param_3 + (uint)*(u16 *)(param_2 + 2) * 0x2c;
}
