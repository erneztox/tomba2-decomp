/**
 * @brief Waits for flag: entity->sub_state state, polls DAT_800bf843 until zero then returns success
 * @note Original: func_800425FC at 0x800425FC
 */
// Entity_WaitForFlag



#include "tomba.h"
undefined4 FUN_800425fc(int param_1)

{
  if (param_1->sub_state == '\0') {
    FUN_80070798();
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  else {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    if (DAT_800bf843 == '\0') {
      return 1;
    }
  }
  return 0;
}
