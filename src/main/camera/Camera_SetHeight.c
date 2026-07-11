/**
 * @brief Sets camera height: param2=0 uses entity[0x26], else cosentity->sprite_param2*radius
 * @note Original: func_8006DF88 at 0x8006DF88
 */
// Camera_SetHeight



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Camera_SetHeight(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    _DAT_1f8000d6 = _g_CameraZ + *(s16 *)(param_1 + 0x26) + -0x140;
  }
  else {
    iVar1 = Math_Cos((int)*(s16 *)(param_1 + 0x6e));
    _DAT_1f8000d6 = _g_CameraZ - (s16)(iVar1 * *(s16 *)(param_1 + 0x6c) >> 0xc);
  }
  param_1->camera_flags = param_1->camera_flags | 2;
  return;
}
