/**
 * @brief Camera mode 6: full sequence init + pos + calc + smoothY + commit
 * @note Original: func_8006E0F0 at 0x8006E0F0
 */
// Camera_Mode6



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Camera_Mode6(int param_1)

{
  Camera_UpdateMain();
  Camera_SmoothX(param_1,param_1 + 8);
  Camera_ModeMain(param_1);
  Camera_SmoothY(param_1,param_1 + 8);
  Camera_Border(param_1);
  if ((param_1->camera_mode == '\0') && (DAT_800e7ffa == '\0')) {
    Camera_Update(param_1);
  }
  Camera_Commit(param_1);
  if (*(s8*)(param_1 + 0x77) == '\0') {
    Camera_Config(param_1);
  }
  _g_GTE_Work114 = _g_GTE_Work114 - (*(int *)(param_1 + 0x28) + param_1->scale_y);
  return;
}
