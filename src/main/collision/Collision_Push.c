/**
 * @brief Collision push handler: reads _g_CollisionResult, applies push vector
 * @note Original: func_80045810 at 0x80045810
 */
// Collision_Push



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Collision_Push(u16 param_1,int param_2)

{
  u16 uVar1;
  int iVar2;
  s16 uVar3;
  int iVar4;
  s32 uVar5;
  
  uVar3 = _DAT_1f8001a4;
  if ((*_g_CollisionResult & 8) == 0) {
    iVar2 = (int)(s16)_g_CollisionData->kind * ((int)_g_CollisionFlag - (int)(s16)param_1);
    iVar4 = (int)(s16)(param_1 ^ 0x3f);
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    _DAT_1f8001a4 = _g_CollisionData->flags + (s16)(iVar2 / iVar4);
  }
  else {
    _DAT_1f8001a4 =
         _g_CollisionData->flags + (s16)((int)(s16)_g_CollisionData->kind * (int)_g_CollisionFlag >> 6);
  }
  if (_DAT_1f8001a4 + 0x80 < (int)_DAT_1f8001be) {
    uVar5 = 1;
    if (param_2 == 0) {
      _DAT_1f8001a4 = uVar3;
      _DAT_1f8001a6 = 0;
      return 0;
    }
    _DAT_1f8001c4 = _DAT_1f8001a4 - _DAT_1f8001be;
    _DAT_1f8001a6 = *_g_CollisionData;
    uVar1 = _g_CollisionData->sub_type;
  }
  else {
    uVar5 = 0xffffffff;
    if ((int)_DAT_1f8001a4 <= (int)_DAT_1f8001be) {
      _DAT_1f8001c4 = _DAT_1f8001a4 - _DAT_1f8001be;
      _DAT_1f8001a6 = *_g_CollisionData;
      _DAT_1f8001e8 = _DAT_1f8001dc + (uint)(u16)_g_CollisionData->sub_type * 3;
      return 1;
    }
    uVar1 = _g_CollisionData->sub_type;
  }
  _DAT_1f8001e8 = _DAT_1f8001dc + (uint)uVar1 * 3;
  return uVar5;
}
