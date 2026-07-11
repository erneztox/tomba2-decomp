/**
 * @brief Entity attack state variant 2: entity->action_state state, different callback path
 * @note Original: func_800658E4 at 0x800658E4
 */
// Entity_State_Attack2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Attack2(int param_1)

{
  int iVar1;
  
  if (param_1->action_state == '\0') {
    g_ActionTrigger = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  iVar1 = Entity_AnimFrame(param_1);
  if (iVar1 == 1) {
    g_ActionTrigger = 1;
  }
  if (_g_ActionInput != 1) {
    if (_g_ActionInput != 2) {
      Entity_SetActionFlag(param_1,1);
      return;
    }
    Entity_PhysicsStep2(param_1);
  }
  param_1->angle_offset = 0;
  param_1->velocity_y = 0;
  return;
}
