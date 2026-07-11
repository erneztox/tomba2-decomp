/**
 * @brief Collision full checker: reads collision result, validates hit
 * @note Original: func_80048B30 at 0x80048B30
 */
// Collision_CheckFull



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80048b30(void)

{
  u16 uVar1;
  int iVar2;
  s32 bVar3;
  u16 uVar4;
  int iVar5;
  int iVar6;
  s16 unaff_s1;
  
  bVar3 = true;
  uVar4 = FUN_80048360();
  iVar5 = 0;
  _g_CollisionData = (u16 *)(_DAT_1f8001d8 + (uint)_g_CollisionResult->flags * 8);
  if (_g_CollisionResult->kind != 0) {
    iVar6 = (int)(s16)(uVar4 ^ 0x3f);
    do {
      if ((*_g_CollisionData & 1) != 0) {
        if ((*_g_CollisionResult & 8) == 0) {
          iVar2 = (int)(s16)_g_CollisionData->kind * ((int)_g_CollisionFlag - (int)(s16)uVar4);
          _DAT_1f8001a4 = (s16)(iVar2 / iVar6);
          if (iVar6 == 0) {
            trap(0x1c00);
          }
          if ((iVar6 == -1) && (iVar2 == -0x80000000)) {
            trap(0x1800);
          }
          uVar1 = _g_CollisionData->flags;
        }
        else {
          uVar1 = _g_CollisionData->flags;
          _DAT_1f8001a4 = (s16)((int)(s16)_g_CollisionData->kind * (int)_g_CollisionFlag >> 6);
        }
        _DAT_1f8001a4 = uVar1 + _DAT_1f8001a4;
        if (_DAT_1f8001a4 + 0x80 < (int)_DAT_1f8001be) {
          if (bVar3) {
            _DAT_1f8001a6 = *_g_CollisionData;
            _DAT_1f8001e8 = _DAT_1f8001dc + (uint)_g_CollisionData->sub_type * 3;
            return true;
          }
          _DAT_1f8001a4 = unaff_s1;
          return true;
        }
        bVar3 = false;
        _DAT_1f8001a6 = *_g_CollisionData;
        _DAT_1f8001e8 = _DAT_1f8001dc + (uint)_g_CollisionData->sub_type * 3;
        unaff_s1 = _DAT_1f8001a4;
      }
      iVar5 = iVar5 + 1;
      _g_CollisionData = _g_CollisionData + 4;
    } while (iVar5 < (int)(uint)_g_CollisionResult->kind);
  }
  if (bVar3) {
    _DAT_1f8001a6 = 0;
    _DAT_1f8001a4 = 0;
  }
  return !bVar3;
}
