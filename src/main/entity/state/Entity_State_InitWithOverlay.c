/**
 * @brief Entity state: init + load anim 0x40, conditionally calls overlay Overlay_8010c780
 * @note Original: func_800653F4 at 0x800653F4
 */
// Entity_State_InitWithOverlay



#include "tomba.h"
#include "overlay.h"
void FUN_800653f4(int param_1)

{
  if (param_1->action_state == '\0') {
    FUN_80054198(param_1);
    FUN_80054d14(param_1,0x40,0);
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  if (g_GameState == '\0') {
    Overlay_8010c780(param_1);
  }
  return;
}
