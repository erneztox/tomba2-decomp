/**
 * @brief Executes script command via Entity_BehaviorDispatch_2 with entity[0x72-0x76] params
 * @note Original: func_80043964 at 0x80043964
 */
// Entity_ExecScriptCmd1



#include "tomba.h"
void Entity_ExecScriptCmd1(int param_1)

{
  Entity_BehaviorDispatch_2((int)param_1->event_id,
               *(u8 *)(param_1->event_param + -0x7ff4064c),
               param_1->camera_mode);
  return;
}
