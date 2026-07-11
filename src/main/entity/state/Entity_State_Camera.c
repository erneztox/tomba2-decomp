/**
 * @brief Entity camera state: entity->action_state=0->1, sets camera target
 * @note Original: func_8006C328 at 0x8006C328
 */
// Entity_State_Camera



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006c328(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  if (param_1->action_state == '\0') {
    param_1->action_state = 1;
    param_1->timer1 = 1;
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  sVar1 = param_1->timer1;
  param_1->timer1 = sVar1 + -1;
  if (sVar1 == 1) {
    param_1->timer1 = 0x12;
    if (DAT_800e7f3e == '\0') {
      uVar3 = 6;
    }
    else {
      uVar3 = 3;
    }
    FUN_80074590(6,uVar3,0);
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
    param_1->pos_y = _DAT_800e7eae;
    *(undefined2 *)(param_1 + 0x32) = _DAT_800e7eb2;
    param_1->pos_z = _DAT_800e7eb6;
    param_1->anim_id = DAT_800e7fca;
    uVar2 = DAT_800e7eaa;
    param_1->behavior_state = 1;
    param_1->collision_dir = uVar2;
    FUN_8006bdf0(param_1);
    param_1->action_state = 1;
  }
  return;
}
