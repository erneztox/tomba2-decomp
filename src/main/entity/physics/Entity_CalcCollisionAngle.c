/**
 * @brief Calculates collision angles: atan2 on surface normal, stores slope vectors at entity[0x48-4C]
 * @note Original: func_80048654 at 0x80048654
 */
// Entity_CalcCollisionAngle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_CalcCollisionAngle(int param_1)

{
  s8 cVar1;
  s16 sVar2;
  int iVar3;
  int iVar4;
  
  sVar2 = Math_Atan2((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                       (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
  _g_CollisionNormalX = -sVar2 & 0xfff;
  iVar3 = (int)*_DAT_1f8001e8;
  iVar4 = (int)_DAT_1f8001e8->kind;
  cVar1 = _DAT_1f8001e8->flags;
  sVar2 = Math_SqrtGTE(iVar3 * iVar3 + iVar4 * iVar4);
  _g_CollisionNormalY = Math_Atan2((int)(s16)cVar1,(int)sVar2);
  param_1->normal_x = (s16)(iVar3 << 2);
  param_1->velocity_y = (s16)cVar1 << 2;
  param_1->normal_z = (s16)(iVar4 << 2);
  return;
}
