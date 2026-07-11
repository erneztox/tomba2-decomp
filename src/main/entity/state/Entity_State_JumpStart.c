/**
 * @brief Jump start state: entity->action_state=0->1, calls damage/physics, branches on _g_ActionInput action
 * @note Original: func_80065990 at 0x80065990
 */
// Entity_State_JumpStart



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80065990(int param_1)

{
  int iVar1;
  
  if (param_1->action_state == '\0') {
    g_ActionTrigger = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  iVar1 = FUN_80076d68(param_1);
  if (iVar1 == 1) {
    FUN_80054d14(param_1,2,4);
    g_ActionTrigger = 1;
  }
  if (_g_ActionInput != 1) {
    if (_g_ActionInput != 2) {
      FUN_80065478(param_1,1);
      return;
    }
    FUN_80055d5c(param_1);
  }
  param_1->angle_offset = 0;
  param_1->velocity_y = 0;
  return;
}
