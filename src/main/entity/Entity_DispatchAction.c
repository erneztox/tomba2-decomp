/**
 * @brief Dispatches entity action: calls overlay func or local handler based on flags
 * @note Original: func_8005A910 at 0x8005A910
 */
// Entity_DispatchAction



#include "tomba.h"
#include "overlay.h"
void Entity_DispatchAction(int param_1)

{
  if (((g_ActionFlag == '\0') && (*(s8*)(param_1 + 0x17c) != '\0')) &&
     ((param_1->entity_flags & 0x640) == 0)) {
    Overlay_80112b50();
  }
  else {
    Entity_State_Action2();
  }
  return;
}
