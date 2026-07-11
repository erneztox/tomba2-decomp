/**
 * @brief Entity special state: entity->action_state state 0->1->2, SFX
 * @note Original: func_800620D0 at 0x800620D0
 */
// Entity_State_Special



#include "tomba.h"
void FUN_800620d0(int param_1)

{
  byte bVar1;
  short sVar2;
  
  FUN_80076d68();
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        DAT_800bf80e = 0;
        param_1->state_flag146 = 0;
        FUN_80053d90(param_1);
        FUN_80054198(param_1);
        FUN_80054d14(param_1,0xe1,4);
        FUN_80074590(0x39,0,0);
        param_1->timer1 = 0x1e;
        param_1->action_state = param_1->action_state + '\x01';
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_800551c4(param_1);
      sVar2 = param_1->timer1;
      param_1->timer1 = sVar2 + -1;
      if (sVar2 != 1) {
        return;
      }
      DAT_800bf80e = 1;
      param_1->state = 4;
      param_1->behavior_state = 0x20;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->state_flag146 = 0;
    FUN_80053d90(param_1);
    FUN_80054198(param_1);
    FUN_80054d14(param_1,0xe1,4);
    FUN_80074590(0x39,0,0);
    param_1->timer1 = 0x1e;
    param_1->action_state = param_1->action_state + '\x01';
    FUN_800551c4(param_1);
  }
  FUN_80055d5c(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  FUN_8005444c(param_1);
  FUN_80056c00(param_1,1);
  if (param_1->timer1 == 0) {
    if (param_1->collision_state == '\0') {
      FUN_80056d44(param_1,0);
    }
    else {
      param_1->behavior_state = 0;
      param_1->action_state = 0;
    }
  }
  else {
    param_1->timer1 = param_1->timer1 + -1;
  }
  return;
}
