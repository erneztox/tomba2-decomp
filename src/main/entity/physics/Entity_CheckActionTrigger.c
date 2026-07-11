/**
 * @brief Checks if action trigger conditions met: sets sub-state to 0xB
 * @note Original: func_80055C30 at 0x80055C30
 */
// Entity_CheckActionTrigger



#include "tomba.h"
s32 FUN_80055c30(int param_1)

{
  if ((param_1->timer_main == 0) || (g_CurrentOverlay != '\0')) {
    return 0;
  }
  if (((param_1->collision_state & 0x80) != 0) && ((param_1->type_flags & 0x10) != 0)) {
    param_1->behavior_state = 0xb;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    return 1;
  }
  return 0;
}
