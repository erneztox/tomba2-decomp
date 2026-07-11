/**
 * @brief Camera mode 5: inits, conditionally sets entity->camera_flags bit 1, commits
 * @note Original: func_8006E3F4 at 0x8006E3F4
 */
// Camera_Mode5



#include "tomba.h"
void Camera_Mode5(int param_1,s32 param_2)

{
  int iVar1;
  
  iVar1 = Camera_SmoothX();
  if (iVar1 != 0) {
    param_1->camera_flags = param_1->camera_flags | 1;
  }
  iVar1 = Camera_SmoothY(param_1,param_2);
  if (iVar1 != 0) {
    param_1->camera_flags = param_1->camera_flags | 2;
  }
  Camera_Commit(param_1);
  return;
}
