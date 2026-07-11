/**
 * @brief Collision angle calc: atan2 on _DAT_1f8001b4-b8, stores at _DAT_1f8001a0
 * @note Original: func_80049760 at 0x80049760
 */
// Collision_CalcAngle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80049760(int param_1)

{
  int iVar1;
  int iVar2;
  
  _DAT_1f8001a0 =
       FUN_80085690((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                    (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
  _DAT_1f8001a0 = _DAT_1f8001a0 & 0xfff;
  iVar1 = FUN_80083f50();
  iVar2 = FUN_80083e80((int)(short)_DAT_1f8001a0);
  _DAT_1f8001a2 = 0;
  param_1->normal_x = (short)(iVar1 >> 4);
  param_1->normal_z = (short)(iVar2 >> 4);
  _DAT_1f8001a0 = -_DAT_1f8001a0 & 0xfff;
  return;
}
