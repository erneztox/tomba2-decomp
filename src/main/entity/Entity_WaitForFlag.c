/**
 * @brief Waits for flag: entity->sub_state state, polls g_EventFlag until zero then returns success
 * @note Original: func_800425FC at 0x800425FC
 */
// Entity_WaitForFlag



#include "tomba.h"
s32 Entity_WaitForFlag(int param_1)

{
  if (param_1->sub_state == '\0') {
    Entity_SetStateCombat();
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  else {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    if (g_EventFlag == '\0') {
      return 1;
    }
  }
  return 0;
}
