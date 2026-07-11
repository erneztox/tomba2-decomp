/**
 * @brief Step 1: init child position from data (stride 0x24)
 * @note Original: func_80026D08 at 0x80026D08
 */
// Entity_InitChildPosition



#include "tomba.h"
int Entity_InitChildPosition(int param_1,u16 *param_2,int param_3,int param_4)

{
  u8 *puVar1;
  
  if (param_4 < (int)(uint)*param_2) {
    puVar1 = (u8 *)(param_4 * 0x24 + param_3);
    *(u8 *)(param_1 + 0x33) = puVar1->sub_type & 2 | 0x24;
    *(u8 *)(param_1 + 0x34) = puVar1->counter1;
    *(u8 *)(param_1 + 0x35) = puVar1->counter2;
    *(u8 *)(param_1 + 0x38) = puVar1[0xc];
    *(u8 *)(param_1 + 0x39) = puVar1->sprite_flags;
    *(u8 *)(param_1 + 0x3c) = puVar1[0x22];
    *(u8 *)(param_1 + 0x3d) = puVar1[0x23];
    *(s16 *)(param_1 + 0x3a) = puVar1->anim_timer;
    param_1->pos_z = *(s16 *)(puVar1 + 10);
    *(u8 *)(param_1 + 0x30) = *puVar1;
    *(u8 *)(param_1 + 0x31) = puVar1->flags;
    *(u8 *)(param_1 + 0x32) = puVar1->kind;
    return 0;
  }
  return param_3 + (uint)*param_2 * 0x24;
}
