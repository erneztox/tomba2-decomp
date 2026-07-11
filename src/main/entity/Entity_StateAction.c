/**
 * @brief Entity action state: entity->action_state state 0->1->2, sets g_ActionTrigger
 * @note Original: func_800656FC at 0x800656FC
 */
// Entity_StateAction



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800656fc(u8 *param_1)

{
  u8 bVar1;
  s16 sVar2;
  uint uVar3;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        g_ActionTrigger = 0;
        DAT_800bf809 = 0;
        *param_1 = 3;
        param_1->timer_172 = 0x1e;
        param_1->state = 1;
        param_1->behavior_state = 0;
        param_1->action_state = 0;
        param_1->sub_action = 0;
        param_1->velocity_y = 0;
        FUN_80055d5c(param_1);
        param_1[0x180] = 6;
      }
      goto LAB_80065834;
    }
    if (bVar1 != 0) goto LAB_80065834;
    FUN_80054d14(param_1,2,6);
    param_1->action_state = param_1->action_state + '\x01';
    bVar1 = FUN_80055e28(param_1,0);
    param_1->direction = bVar1 & 1;
    FUN_80054198(param_1);
    if (param_1->direction == '\0') {
      _g_AngleInput = param_1->draw_angle;
    }
    else {
      _g_AngleInput = param_1->draw_angle - 0x800U & 0xfff;
    }
  }
  uVar3 = (uint)_g_AngleInput;
  sVar2 = FUN_800776f8(uVar3 & 0xfff,(int)param_1->rot_y,0x100);
  param_1->rot_y = sVar2;
  if ((int)sVar2 == (uVar3 & 0xfff)) {
    param_1->action_state = param_1->action_state + '\x01';
  }
LAB_80065834:
  FUN_80076d68(param_1);
  FUN_80065478(param_1,1);
  return;
}
