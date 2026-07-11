/**
 * @brief Processes collision result: extracts surface normal and contact point from hit data
 * @note Original: func_80048034 at 0x80048034
 */
// Collision_ProcessResult



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80048034(void)

{
  s32 bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = true;
  _g_CollisionData = (u16 *)(_DAT_1f8001d8 + (uint)*(u16 *)(_g_CollisionResult + 2) * 8);
  iVar3 = 0;
  if (*(u16 *)(_g_CollisionResult + 4) != 0) {
    do {
      if ((*_g_CollisionData & 1) != 0) {
        iVar2 = (uint)_g_CollisionData->flags << 0x10;
        if (0 < (s16)_g_CollisionData->kind) {
          iVar2 = ((uint)_g_CollisionData->flags + (uint)_g_CollisionData->kind) * 0x10000;
        }
        if ((iVar2 >> 0x10) + 0x80 < (int)_DAT_1f8001be) {
          if (!bVar1) {
            return;
          }
          _DAT_1f8001e8 = _DAT_1f8001dc + (uint)_g_CollisionData->sub_type * 3;
          return;
        }
        bVar1 = false;
        _DAT_1f8001e8 = _DAT_1f8001dc + (uint)_g_CollisionData->sub_type * 3;
      }
      iVar3 = iVar3 + 1;
      _g_CollisionData = _g_CollisionData + 4;
    } while (iVar3 < (int)(uint)*(u16 *)(_g_CollisionResult + 4));
  }
  return;
}
