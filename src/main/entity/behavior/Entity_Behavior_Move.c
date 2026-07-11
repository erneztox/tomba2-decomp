/**
 * @brief Entity move behavior: entity->move_mode=0, uses timer entity[0x40]
 * @note Original: func_80068A94 at 0x80068A94
 */
// Entity_Behavior_Move



#include "tomba.h"
void FUN_80068a94(undefined1 *param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1->move_mode == '\0') {
    sVar1 = param_1->timer1;
    param_1->timer1 = sVar1 + -1;
    if (sVar1 == 1) {
      param_1->move_mode = 2;
      *param_1 = 2;
      param_1->state = 3;
    }
  }
  else {
    *param_1 = 2;
    param_1->state = 2;
    param_1->behavior_state = 0;
  }
  param_1->rot_z = param_1->rot_z + 0x200;
  iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0xbe));
  param_1->pos_y_fixed = param_1->pos_y_fixed + iVar3 * param_1->anim_counter * 0x10;
  iVar3 = FUN_80083f50((int)*(short *)(param_1 + 0xbe));
  iVar4 = iVar3 * param_1->anim_counter >> 4;
  iVar3 = param_1->normal_z * iVar4;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * iVar4;
  param_1->scale_y = param_1->scale_y + iVar3;
  if ((param_1->anim_id & 8) == 0) {
    uVar2 = FUN_80085690(-iVar3);
    param_1->rot_y = uVar2;
  }
  iVar3 = FUN_80069858(param_1,0,0);
  if (iVar3 != 0) {
    param_1->move_mode = 2;
    FUN_80074590(0xe,0,0);
    FUN_80031470(2,param_1 + 0x2c,0,param_1 + 0x68);
  }
  return;
}
