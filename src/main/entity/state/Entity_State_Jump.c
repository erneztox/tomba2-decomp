/**
 * @brief Entity jump state: entity->action_state=2, calls Entity_StateCheck, sets velocity, advances
 * @note Original: func_80064524 at 0x80064524
 */
// Entity_State_Jump



#include "tomba.h"
void Entity_State_Jump(int param_1)

{
  param_1->action_state = 2;
  param_1->sub_action = 0;
  Entity_StateCheck();
  param_1->rot_z = 0;
  param_1->timer1 = 8;
  Audio_PlaySoundEffect(0x1d,0,0);
  Entity_PhysicsUpdate(param_1,0);
  if ((param_1->behavior_flags & 2) == 0) {
    param_1->direction = param_1->behavior_flags & 1;
    *(u8 *)(param_1 + 0x149) = param_1->behavior_flags & 1;
  }
  else {
    param_1->direction = *(u8 *)(param_1 + 0x149) & 1;
  }
  Entity_UpdateAngle(param_1);
  Entity_LoadAnimIfChanged(param_1,0x14,0);
  return;
}
