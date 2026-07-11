/**
 * @brief Camera mode 4: init, smooth Y, conditionally updates delta, commit
 * @note Original: func_8006E228 at 0x8006E228
 */
// Camera_Mode4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006e228(int param_1,undefined4 param_2)

{
  FUN_8006d960();
  FUN_8006da54(param_1,param_2);
  param_1->anim_timer = _DAT_1f8000e2;
  if (param_1->camera_mode == '\0') {
    FUN_8006dad8(param_1);
    FUN_8006def0(param_1);
  }
  FUN_8006d02c(param_1);
  return;
}
