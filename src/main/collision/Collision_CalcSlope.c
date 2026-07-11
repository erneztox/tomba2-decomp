/**
 * @brief Collision slope calculator: atan2 on surface normal, sqrt on XZ components
 * @note Original: func_80049674 at 0x80049674
 */
// Collision_CalcSlope



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80049674(int param_1)

{
  s8 cVar1;
  s16 sVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = _DAT_1f8001e8->flags;
  iVar4 = (int)_DAT_1f8001e8->kind;
  iVar3 = (int)*_DAT_1f8001e8;
  sVar2 = FUN_80085690(iVar4,iVar3);
  _g_CollisionNormalX = -sVar2 & 0xfff;
  sVar2 = FUN_80084080(iVar3 * iVar3 + iVar4 * iVar4);
  _g_CollisionNormalY = FUN_80085690((int)(s16)cVar1,(int)sVar2);
  param_1->normal_x = (s16)(iVar3 << 2);
  param_1->velocity_y = (s16)cVar1 << 2;
  param_1->normal_z = (s16)(iVar4 << 2);
  return;
}
