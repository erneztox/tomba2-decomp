/**
 * @brief Entity timed SFX: decrements timer, plays SFX based on entity[0x16E] counter
 * @note Original: func_8006625C at 0x8006625C
 */
// Entity_Behavior_TimedSFX



#include "tomba.h"
void Entity_Behavior_TimedSFX(int param_1)

{
  s32 uVar1;
  
  if (DAT_800bfe55 == '\0') {
    Entity_DecrementTimer(param_1,1);
    uVar1 = 0x23;
    if (param_1->timer_main == 0) {
      uVar1 = 0x24;
    }
    Audio_PlaySoundEffect(uVar1,0,0);
    Sys_CallWithParams(0,0x81,0x81,0xf);
    param_1->timer_170 = param_1->timer_main;
    Entity_ActionDispatch(param_1,0xb);
  }
  return;
}
