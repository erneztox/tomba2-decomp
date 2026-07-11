/**
 * @brief Entity timed SFX: decrements timer, plays SFX based on entity[0x16E] counter
 * @note Original: func_8006625C at 0x8006625C
 */
// Entity_Behavior_TimedSFX



#include "tomba.h"
void FUN_8006625c(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_800bfe55 == '\0') {
    FUN_80022c0c(param_1,1);
    uVar1 = 0x23;
    if (param_1->timer_main == 0) {
      uVar1 = 0x24;
    }
    FUN_80074590(uVar1,0,0);
    FUN_800521f4(0,0x81,0x81,0xf);
    param_1->timer_170 = param_1->timer_main;
    FUN_80058304(param_1,0xb);
  }
  return;
}
