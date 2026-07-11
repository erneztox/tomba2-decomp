/**
 * @brief Ends current entity action: resets state, sets sub-state to 0x1E, calls cleanup
 * @note Original: func_800655A0 at 0x800655A0
 */
// Entity_EndAction



#include "tomba.h"
void Entity_EndAction(int param_1)

{
  param_1->rot_z = 0;
  g_ActionTrigger = 0;
  param_1->behavior_state = 0x1e;
  param_1->action_state = param_1->action_state + '\x01';
  Entity_RotateToTarget();
  return;
}
