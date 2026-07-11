/**
 * @brief Spin attack: accelerates entity[0x154] speed, rotates, plays SFX 0x1B at threshold
 * @note Original: func_80063098 at 0x80063098
 */
// Entity_Behavior_SpinAttack



#include "tomba.h"
void Entity_Behavior_SpinAttack(int param_1)

{
  s16 sVar1;
  
  sVar1 = param_1->speed + 0x20;
  param_1->speed = sVar1;
  if (0x200 < sVar1) {
    param_1->speed = 0x200;
  }
  param_1->timer2 = param_1->timer2 + param_1->speed;
  if (param_1->anim_param == param_1->direction) {
    sVar1 = param_1->rot_y - param_1->speed;
  }
  else {
    sVar1 = param_1->rot_y + param_1->speed;
  }
  param_1->rot_y = sVar1;
  if (0x400 < param_1->timer2) {
    Audio_PlaySoundEffect(0x1b,0,0);
    g_SFXState = 0x88;
    param_1->sub_action = param_1->sub_action + '\x01';
  }
  return;
}
