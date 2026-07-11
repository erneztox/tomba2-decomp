/**
 * @brief Camera mode 4: init, smooth Y, conditionally updates delta, commit
 * @note Original: func_8006E228 at 0x8006E228
 */
// Camera_Mode4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Camera_Mode4(int param_1,s32 param_2)

{
  Camera_SmoothX();
  Camera_SmoothY(param_1,param_2);
  param_1->anim_timer = _g_CameraZ;
  if (param_1->camera_mode == '\0') {
    Camera_CalcDelta(param_1);
    Camera_SmoothMove(param_1);
  }
  Camera_Commit(param_1);
  return;
}
