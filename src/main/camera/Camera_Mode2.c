/**
 * @brief Camera mode 2: init + conditionally calls Camera_CalcDelta/Camera_SmoothMove + commit
 * @note Original: func_8006E2FC at 0x8006E2FC
 */
// Camera_Mode2



#include "tomba.h"
void Camera_Mode2(int param_1,s32 param_2)

{
  Camera_SetFOV();
  Camera_SetRoll(param_1,param_2);
  if (param_1->camera_mode == '\0') {
    Camera_CalcDelta(param_1);
    Camera_SmoothMove(param_1);
  }
  Camera_Commit(param_1);
  return;
}
