/**
 * @brief Entity draw lifecycle variant 7: entity->state=1, different draw path
 * @note Original: func_80033450 at 0x80033450
 */
// Entity_DrawLifecycle7



#include "tomba.h"
void FUN_80033450(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624();
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(s32 *)(param_1 + 0x5c) = 0xc010c;
    param_1->state = 1;
    param_1->behavior_state = 0;
    *(s32 *)(param_1 + 0x58) = 0;
    *(s32 *)(param_1 + 0x60) = 0x1000;
  }
  bVar1 = param_1->behavior_state + 1;
  param_1->behavior_state = bVar1;
  *(s32 *)(param_1 + 100) = *(s32 *)(&DAT_800a2068 + (uint)bVar1 * 4);
  if (param_1->behavior_state < 4) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x300;
    iVar2 = *(int *)(param_1 + 0x58) + 0xcc;
  }
  else {
    if (0xf < param_1->behavior_state) {
      param_1->state = 2;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x58) + 0x174;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x200;
  }
  *(int *)(param_1 + 0x58) = iVar2;
  param_1->flags = 1;
  return;
}
