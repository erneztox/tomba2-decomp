/**
 * @brief Entity state end: entity->action_state state 0->1->2, cleanup at state 2
 * @note Original: func_800655DC at 0x800655DC
 */
// Entity_StateEnd



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800655dc(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1->behavior_state = 0;
        param_1->action_state = 0;
        param_1->sub_action = 0;
      }
      goto LAB_800656d4;
    }
    if (bVar1 != 0) goto LAB_800656d4;
    param_1->rot_z = 0;
    DAT_800bf80e = 0;
    param_1->action_state = param_1->action_state + '\x01';
    param_1->direction = DAT_1f800192 & 1;
    if ((DAT_1f800192 & 1) == 0) {
      _DAT_1f800192 = param_1->draw_angle;
    }
    else {
      _DAT_1f800192 = param_1->draw_angle - 0x800U & 0xfff;
    }
    FUN_80054d14(param_1,2,0);
  }
  uVar3 = (uint)_DAT_1f800192;
  sVar2 = FUN_800776f8(uVar3 & 0xfff,(int)param_1->rot_y,0x100);
  param_1->rot_y = sVar2;
  if ((int)sVar2 == (uVar3 & 0xfff)) {
    param_1->action_state = param_1->action_state + '\x01';
  }
LAB_800656d4:
  FUN_80076d68(param_1);
  FUN_80065478(param_1,1);
  return;
}
