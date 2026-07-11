/**
 * @brief Step 4: finalize child entity setup (stride 0x28)
 * @note Original: func_80026F88 at 0x80026F88
 */
// Entity_InitChildFinalize



#include "tomba.h"
int Entity_InitChildFinalize(int param_1,int param_2,int param_3,int param_4)

{
  u8 *puVar1;
  
  if (param_4 < (int)(uint)*(u16 *)(param_2 + 6)) {
    puVar1 = (u8 *)(param_4 * 0x28 + param_3);
    *(u8 *)(param_1 + 0x33) = puVar1->sub_type & 2 | 0x24;
    *(u8 *)(param_1 + 0x34) = puVar1->state;
    *(u8 *)(param_1 + 0x35) = puVar1->behavior_state;
    *(u8 *)(param_1 + 0x38) = puVar1->counter1;
    *(u8 *)(param_1 + 0x39) = puVar1->counter2;
    *(u8 *)(param_1 + 0x3c) = puVar1[0xc];
    *(u8 *)(param_1 + 0x3d) = puVar1->sprite_flags;
    *(s16 *)(param_1 + 0x3a) = *(s16 *)(puVar1 + 10);
    param_1->pos_z = *(s16 *)(puVar1 + 6);
    *(u8 *)(param_1 + 0x30) = *puVar1;
    *(u8 *)(param_1 + 0x31) = puVar1->flags;
    *(u8 *)(param_1 + 0x32) = puVar1->kind;
    return 0;
  }
  return param_3 + (uint)*(u16 *)(param_2 + 6) * 0x28;
}
