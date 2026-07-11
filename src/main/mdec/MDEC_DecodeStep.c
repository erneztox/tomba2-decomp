/**
 * @brief MDEC decode step: entity->anim_id state, processes macroblock
 * @note Original: func_80089508 at 0x80089508
 */
// MDEC_DecodeStep



#include "tomba.h"
void FUN_80089508(int param_1)

{
  u8 bVar1;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  if (param_1->anim_id == '\0') {
LAB_800895a0:
    if (**(char **)(param_1 + 0x3c) != -0xd) {
      **(u8 **)(param_1 + 0x30) = 0xff;
      *(u8 *)(param_1->pos_y_fixed + 1) = 0;
      *(u8 *)(param_1 + 0xe8) = 0;
      *(u8 *)(param_1 + 0x35) = 0;
    }
  }
  else {
    if (param_1->anim_id == '\x01') {
      bVar1 = *(u8 *)(param_1 + 0x4a);
      if (10 < bVar1) {
        *(u8 *)(param_1 + 0x49) = 2;
        param_1->anim_id = 0xff;
        return;
      }
    }
    else {
      bVar1 = *(u8 *)(param_1 + 0x4a);
      if (10 < bVar1) {
        if (*(s8*)(param_1 + 0x49) != '\0') {
          (*DAT_800abe3c)(param_1);
        }
        goto LAB_800895a0;
      }
    }
    *(u8 *)(param_1 + 0x4a) = bVar1 + 1;
  }
  return;
}
