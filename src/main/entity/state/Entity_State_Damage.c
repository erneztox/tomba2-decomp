/**
 * @brief Entity damage state: entity->action_state=0->1, sets timer, applies knockback
 * @note Original: func_8006B9DC at 0x8006B9DC
 */
// Entity_State_Damage



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006b9dc(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  
  if (param_1->action_state == '\0') {
    param_1->action_state = 1;
    param_1->timer1 = 1;
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  sVar3 = param_1->timer1;
  param_1->timer1 = sVar3 + -1;
  if (sVar3 == 1) {
    if (DAT_800e7f3e == '\0') {
      FUN_80074590(9,0,0);
      uVar2 = 0x12;
    }
    else {
      FUN_80074590(10,0,0);
      uVar2 = 10;
    }
    param_1->timer1 = uVar2;
  }
  if ((DAT_800e7f3e != '\0') && (param_1->flag_5E == '\0')) {
    param_1->flag_5E = 1;
    FUN_8006a8c8(param_1);
  }
  if ((DAT_800e7fc4 == '\x02') || (DAT_800e7fc6 == '\0')) {
    param_1->behavior_state = 0;
    param_1->state = param_1->state + '\x01';
  }
  else if (DAT_800e7fc6 == '\x03') {
    param_1->anim_id = DAT_800e7fca;
    sVar3 = _DAT_800e7ed6;
    if (DAT_800e7e85 == '\t') {
      sVar3 = _DAT_800e7ed6 + -0x800;
    }
    param_1->target_angle = sVar3;
    uVar1 = DAT_800e7eaa;
    param_1->behavior_state = 1;
    param_1->collision_dir = uVar1;
    FUN_8006b124(param_1);
    FUN_80069688(param_1);
    param_1->action_state = 1;
  }
  FUN_8006b020(param_1,0);
  return;
}
