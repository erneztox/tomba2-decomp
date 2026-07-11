/**
 * @brief Entity destroy behavior: entity->state 0->1->2, cleanup
 * @note Original: func_8006AE28 at 0x8006AE28
 */
// Entity_Behavior_Destroy



#include "tomba.h"
void FUN_8006ae28(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1->state = 3;
        return;
      }
      if (bVar1 == 3) {
        FUN_8007ab44(param_1);
        return;
      }
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    uVar3 = 0x10;
    if (param_1->kind == '\x01') {
      uVar3 = 0x20;
    }
    param_1->input_flags = uVar3;
    FUN_8006acac(param_1);
    param_1->target_angle = param_1->rot_y;
    param_1->state = param_1->state + '\x01';
    *(undefined2 *)(param_1 + 0x66) = 0;
    param_1->type_flags = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *param_1 = 2;
    if (param_1->sub_type == '\0') {
      param_1->behavior_state = 1;
      FUN_80069688(param_1);
    }
    else {
      FUN_80031558(param_1,(byte)param_1->kind - 1);
    }
  }
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    FUN_8006a384(param_1);
    cVar2 = param_1->kind;
joined_r0x8006af70:
    if (cVar2 == '\x01') goto LAB_8006af94;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        param_1->flags = 1;
        return;
      }
      FUN_8006a900(param_1);
      cVar2 = param_1->kind;
      goto joined_r0x8006af70;
    }
    if (bVar1 != 2) {
      param_1->flags = 1;
      return;
    }
    FUN_8006a080(param_1);
  }
  FUN_800517f8(param_1);
LAB_8006af94:
  param_1->flags = 1;
  return;
}
