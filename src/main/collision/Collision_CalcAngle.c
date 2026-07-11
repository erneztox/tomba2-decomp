/**
 * @brief Collision angle calc: atan2 on _DAT_1f8001b4-b8, stores at _g_CollisionNormalX
 * @note Original: func_80049760 at 0x80049760
 */
// Collision_CalcAngle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80049760(int param_1)

{
  int iVar1;
  int iVar2;
  
  _g_CollisionNormalX =
       FUN_80085690((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                    (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
  _g_CollisionNormalX = _g_CollisionNormalX & 0xfff;
  iVar1 = FUN_80083f50();
  iVar2 = FUN_80083e80((int)(s16)_g_CollisionNormalX);
  _g_CollisionNormalY = 0;
  param_1->normal_x = (s16)(iVar1 >> 4);
  param_1->normal_z = (s16)(iVar2 >> 4);
  _g_CollisionNormalX = -_g_CollisionNormalX & 0xfff;
  return;
}
