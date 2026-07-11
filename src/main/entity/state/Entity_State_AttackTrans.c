/**
 * @brief Attack transition: entity->action_state state machine, calls Entity_AnimFrame then branch on action flag
 * @note Original: func_8006585C at 0x8006585C
 */
// Entity_State_AttackTrans



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_AttackTrans(int param_1)

{
  if (param_1->action_state == '\0') {
    param_1->action_state = 1;
  }
  else if (param_1->action_state != '\x01') goto LAB_800658a8;
  Entity_AnimFrame(param_1);
  g_ActionTrigger = 1;
LAB_800658a8:
  if (_g_ActionInput == 2) {
    Entity_PhysicsStep2(param_1);
    param_1->angle_offset = 0;
    param_1->velocity_y = 0;
  }
  else {
    Entity_SetActionFlag(param_1,0);
  }
  return;
}
