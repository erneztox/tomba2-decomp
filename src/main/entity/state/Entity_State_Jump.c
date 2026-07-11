/**
 * @brief Entity jump state: entity->action_state=2, calls FUN_80053d0c, sets velocity, advances
 * @note Original: func_80064524 at 0x80064524
 */
// Entity_State_Jump



#include "tomba.h"
void FUN_80064524(int param_1)

{
  param_1->action_state = 2;
  param_1->sub_action = 0;
  FUN_80053d0c();
  param_1->rot_z = 0;
  param_1->timer1 = 8;
  FUN_80074590(0x1d,0,0);
  FUN_80055e28(param_1,0);
  if ((param_1->behavior_flags & 2) == 0) {
    param_1->direction = param_1->behavior_flags & 1;
    *(byte *)(param_1 + 0x149) = param_1->behavior_flags & 1;
  }
  else {
    param_1->direction = *(byte *)(param_1 + 0x149) & 1;
  }
  FUN_80055284(param_1);
  FUN_80054d14(param_1,0x14,0);
  return;
}
