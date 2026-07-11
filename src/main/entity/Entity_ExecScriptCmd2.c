/**
 * @brief Executes script command variant with different data offset
 * @note Original: func_800439A4 at 0x800439A4
 */
// Entity_ExecScriptCmd2



#include "tomba.h"
void Entity_ExecScriptCmd2(int param_1)

{
  Entity_BehaviorDispatch_2((int)param_1->event_id,
               *(u8 *)(param_1->event_param + -0x7ff4074c),
               param_1->camera_mode);
  return;
}
