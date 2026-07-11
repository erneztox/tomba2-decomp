/**
 * @brief Collision move variant 2: reads _g_CollisionData, updates position
 * @note Original: func_800459D0 at 0x800459D0
 */
// Collision_Move2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Collision_Move2(u16 param_1)

{
  u16 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)(s16)_g_CollisionData->kind;
  if (iVar3 < 1) {
    iVar4 = (int)(s16)_g_CollisionData->flags;
    iVar2 = iVar4 + iVar3;
  }
  else {
    iVar2 = (int)(s16)_g_CollisionData->flags;
    iVar4 = iVar2 + iVar3;
  }
  if (_DAT_1f8001be <= iVar4) {
    if ((int)_DAT_1f8001be < iVar2 + -0x80) {
      return 0xffffffff;
    }
    if ((*_g_CollisionResult & 8) == 0) {
      iVar3 = (int)(s16)_g_CollisionData->kind * ((int)_g_CollisionFlag - (int)(s16)param_1);
      iVar2 = (int)(s16)(param_1 ^ 0x3f);
      iVar4 = iVar3 / iVar2;
      if (iVar2 == 0) {
        trap(0x1c00);
      }
      if ((iVar2 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      uVar1 = _g_CollisionData->flags;
    }
    else {
      uVar1 = _g_CollisionData->flags;
      iVar4 = (int)(s16)_g_CollisionData->kind * (int)_g_CollisionFlag >> 6;
    }
    if ((int)_DAT_1f8001be <= (int)(((uint)uVar1 + iVar4) * 0x10000) >> 0x10) {
      _DAT_1f8001c4 = (s16)((uint)uVar1 + iVar4) - _DAT_1f8001be;
      _DAT_1f8001a6 = *_g_CollisionData;
      return 1;
    }
  }
  return 0;
}
