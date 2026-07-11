/**
 * @brief Transitions entity to state 3 with 60-frame timer, clears global flag
 * @note Original: func_80058F24 at 0x80058F24
 */
// Entity_StateTransition



#include "tomba.h"
void Entity_StateTransition(u8 *param_1)

{
  if (g_CurrentOverlay == '\0') {
    g_ActionTrigger = 0;
    *param_1 = 3;
    param_1->timer_172 = 0x3c;
    param_1->state = 1;
  }
  return;
}
