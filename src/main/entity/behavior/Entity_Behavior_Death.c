/**
 * @brief Entity death behavior: plays SFX 0x24, sets timer, dealloc
 * @note Original: func_800678E8 at 0x800678E8
 */
// Entity_Behavior_Death



#include "tomba.h"
void FUN_800678e8(int param_1)

{
  s16 sVar1;
  
  if (param_1->action_state == '\0') {
    FUN_80074590(0x24,0,0);
    g_TimerFlag = 1;
    param_1->timer_main = 0;
    param_1->timer_170 = 0;
    FUN_80053d90(param_1);
    FUN_800521f4(0,0x81,0x81,0xf);
    param_1->timer1 = 3;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  sVar1 = param_1->timer1;
  if (param_1->timer1 == 0) {
    if (DAT_800bf80f == '\0') {
      FUN_8005245c();
      g_TimerFlag = 3;
      param_1->action_state = param_1->action_state + '\x01';
    }
  }
  else {
    param_1->timer1 = sVar1 + -1;
    if (sVar1 == 1) {
      FUN_800662d8(param_1,0);
      g_TimerFlag = 2;
      DAT_800bf80f = '\x02';
    }
  }
  FUN_80076d68(param_1);
  sVar1 = param_1->velocity_y + 0x360;
  param_1->velocity_y = sVar1;
  if (0x3e00 < sVar1) {
    param_1->velocity_y = 0x3e00;
  }
  param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
  return;
}
