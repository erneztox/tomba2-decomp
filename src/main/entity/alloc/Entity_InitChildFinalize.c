/**
 * @brief Step 4: finalize child entity setup (stride 0x28)
 * @note Original: func_80026F88 at 0x80026F88
 */
// Entity_InitChildFinalize



#include "tomba.h"
int FUN_80026f88(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 < (int)(uint)*(ushort *)(param_2 + 6)) {
    puVar1 = (undefined1 *)(param_4 * 0x28 + param_3);
    *(byte *)(param_1 + 0x33) = puVar1->sub_type & 2 | 0x24;
    *(undefined1 *)(param_1 + 0x34) = puVar1->state;
    *(undefined1 *)(param_1 + 0x35) = puVar1->behavior_state;
    *(undefined1 *)(param_1 + 0x38) = puVar1->counter1;
    *(undefined1 *)(param_1 + 0x39) = puVar1->counter2;
    *(undefined1 *)(param_1 + 0x3c) = puVar1[0xc];
    *(undefined1 *)(param_1 + 0x3d) = puVar1->sprite_flags;
    *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(puVar1 + 10);
    param_1->pos_z = *(undefined2 *)(puVar1 + 6);
    *(undefined1 *)(param_1 + 0x30) = *puVar1;
    *(undefined1 *)(param_1 + 0x31) = puVar1->flags;
    *(undefined1 *)(param_1 + 0x32) = puVar1->kind;
    return 0;
  }
  return param_3 + (uint)*(ushort *)(param_2 + 6) * 0x28;
}
