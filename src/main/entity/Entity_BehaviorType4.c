/**
 * @brief Entity behavior type variant 4: entity->state=1, complex
 * @note Original: func_800683B8 at 0x800683B8
 */
// Entity_BehaviorType4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800683b8(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->state = 1;
  }
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data == 0) {
    *(undefined **)(param_1 + 0x38) = &DAT_800a0d50;
    *(undefined **)(param_1 + 0x34) = &DAT_800a0d50;
  }
  switch(param_1->behavior_state) {
  case 0:
    cVar4 = param_1->collision_dir + -1;
    param_1->collision_dir = cVar4;
    if (cVar4 != '\0') goto LAB_800685bc;
    goto LAB_8006853c;
  case 1:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x24;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 7;
    _DAT_800e7efa = param_1->rot_x;
    _DAT_800e7efc = 7;
    sVar2 = param_1->target_angle;
    param_1->target_angle = sVar2 + -1;
    if (sVar2 != 1) goto LAB_800685bc;
    param_1->target_angle = 0x1e;
    param_1->behavior_state = param_1->behavior_state + '\x01';
    break;
  case 2:
    sVar2 = param_1->target_angle;
    param_1->target_angle = sVar2 + -1;
    if (sVar2 != 1) goto LAB_800685bc;
    param_1->behavior_state = param_1->behavior_state + '\x01';
    _DAT_800e7efe = 1;
    break;
  case 4:
    if (_DAT_800e7efe == 0) goto LAB_800685bc;
LAB_8006853c:
    param_1->behavior_state = param_1->behavior_state + '\x01';
    param_1->target_angle = 0x40;
    break;
  case 5:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x3c;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -7;
    sVar2 = param_1->target_angle;
    param_1->target_angle = sVar2 + -1;
    if (sVar2 != 1) goto LAB_800685bc;
    DAT_1f800137 = 0;
    DAT_1f800236 = 0;
    DAT_800e806c = 0;
    param_1->state = 3;
  }
LAB_800685bc:
  param_1->pos_x = _DAT_1f800160;
  sVar3 = _DAT_800e7ee2;
  *(undefined2 *)(param_1 + 0x30) = _DAT_1f800164;
  sVar2 = _DAT_1f800162;
  param_1->flags = 1;
  param_1->pos_y = sVar2 + sVar3 * 2;
  return;
}
