/**
 * @brief Attack transition: entity->action_state state machine, calls FUN_80076d68 then branch on action flag
 * @note Original: func_8006585C at 0x8006585C
 */
// Entity_State_AttackTrans



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006585c(int param_1)

{
  if (param_1->action_state == '\0') {
    param_1->action_state = 1;
  }
  else if (param_1->action_state != '\x01') goto LAB_800658a8;
  FUN_80076d68(param_1);
  DAT_800bf80e = 1;
LAB_800658a8:
  if (_DAT_1f800184 == 2) {
    FUN_80055d5c(param_1);
    param_1->angle_offset = 0;
    param_1->velocity_y = 0;
  }
  else {
    FUN_80065478(param_1,0);
  }
  return;
}
