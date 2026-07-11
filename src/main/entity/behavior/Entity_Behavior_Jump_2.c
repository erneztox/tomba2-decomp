/**
 * @brief Entity jump behavior: entity->action_state=0 state, sets velocity, advances on ground contact
 * @note Original: func_800714C0 at 0x800714C0
 */
// Entity_Behavior_Jump



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800714c0(int param_1,s16 param_2)

{
  s16 sVar1;
  
  if (param_1->action_state == '\0') {
    param_1->velocity_y = param_2;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state == '\x01') {
    sVar1 = param_1->velocity_y + 0x100;
    param_1->velocity_y = sVar1;
    if (0x3000 < sVar1) {
      param_1->velocity_y = 0x3000;
    }
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
    if (_DAT_800bf82a < *(s16 *)(param_1 + 0x32)) {
      *(s16 *)(param_1 + 0x32) = _DAT_800bf82a;
      return 1;
    }
  }
  return 0;
}
