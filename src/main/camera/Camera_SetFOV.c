/**
 * @brief Sets camera field of view from param array
 * @note Original: func_8006D934 at 0x8006D934
 */
// Camera_SetFOV



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006d934(undefined4 param_1,undefined4 *param_2)

{
  _DAT_1f8000dc = *param_2;
  _DAT_1f8000e4 = param_2->kind;
  return;
}
