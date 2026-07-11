/**
 * @brief Sets camera field of view from param array
 * @note Original: func_8006D934 at 0x8006D934
 */
// Camera_SetFOV



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006d934(s32 param_1,s32 *param_2)

{
  _g_CameraX = *param_2;
  _DAT_1f8000e4 = param_2->kind;
  return;
}
