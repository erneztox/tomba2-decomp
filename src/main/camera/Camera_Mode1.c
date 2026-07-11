/**
 * @brief Camera mode 1: init + conditionally calls Camera_UpdatePosition/Camera_SetHeight + commit
 * @note Original: func_8006E294 at 0x8006E294
 */
// Camera_Mode1



#include "tomba.h"
void Camera_Mode1(int param_1,s32 param_2)

{
  Camera_SetFOV();
  Camera_SetRoll(param_1,param_2);
  if (param_1->camera_mode == '\0') {
    Camera_UpdatePosition(param_1);
    Camera_SetHeight(param_1,1);
  }
  Camera_Commit(param_1);
  return;
}
