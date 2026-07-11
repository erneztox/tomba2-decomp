/**
 * @brief Transitions entity to state 3 if input active and 0x164 flag set
 * @note Original: func_800588BC at 0x800588BC
 */
// Entity_StateTransition2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_StateTransition2(u8 *param_1)

{
  if ((g_CurrentOverlay != '\0') && (param_1->action_flag != '\0')) {
    *param_1 = 3;
    g_ActionTrigger = 1;
    param_1->state = 4;
    param_1[0x169] = 8;
    _DAT_1f800166 = 0;
    _DAT_1f800190 = 0;
  }
  return;
}
