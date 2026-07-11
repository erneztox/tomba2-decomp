/**
 * @brief Heightmap/floor collision: looks up ground height from world grid at entity position
 * @note Original: func_80047CBC at 0x80047CBC
 */
// Collision_GetFloorHeight



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80047cbc(void)

{
  u16 *puVar1;
  u16 uVar2;
  u16 *puVar3;
  int iVar4;
  u16 uVar5;
  int iVar6;
  int iVar7;
  u16 *puVar8;
  u16 *puVar9;
  uint uVar10;
  
  iVar6 = (int)(s16)_DAT_1f8001bc - (int)_DAT_1f8001aa >> 6;
  puVar8 = (u16 *)(_DAT_1f8001cc + iVar6 * 4);
  iVar7 = (int)(s16)_DAT_1f8001c0 - (int)_DAT_1f8001ac >> 6;
  if ((iVar7 < (int)(uint)*puVar8) ||
     ((uVar10 = ((uint)puVar8->flags + iVar7) - (uint)*puVar8, iVar6 < (int)((_DAT_1f8001ae >> 6) - 2)
      && ((uint)puVar8->sub_type <= (uVar10 & 0xffff))))) {
    return 0;
  }
  _g_GTE_Work8C = uVar10 & 0xffff;
  puVar8 = (u16 *)(_DAT_1f8001d0 + _g_GTE_Work8C * 8);
  uVar2 = *puVar8;
  _DAT_1f8001e4 = puVar8;
  _DAT_1f8001a8 = uVar2;
  if ((uVar2 & 0xc000) != 0xc000) {
    _DAT_1f8001a8 = 0;
  }
  do {
    while( true ) {
      if ((uVar2 & 0x8000) == 0) {
        _g_CollisionResult = puVar8;
        return 1;
      }
      if ((uVar2 & 0x4000) == 0) break;
      _g_CollisionResult = (u16 *)(_DAT_1f8001d4 + (uint)puVar8->flags * 8);
      uVar10 = 1;
      if ((uVar2 & 1) != 0) {
        if (1 < puVar8->kind) {
          do {
            puVar3 = _g_CollisionResult + 4;
            puVar9 = _g_CollisionResult + 6;
            puVar1 = _g_CollisionResult + 7;
            _g_CollisionResult = puVar3;
            if ((u16)(*puVar9 - (_DAT_1f8001be + -0x20)) < *puVar1) break;
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)(uint)puVar8->kind);
        }
        if (((uVar10 == (puVar8->sub_type & 0xff)) || (uVar10 == puVar8->sub_type >> 8)) || (uVar10 == puVar8->kind))
        {
          _g_CollisionResult = (u16 *)(_DAT_1f8001d4 + (uint)puVar8->flags * 8);
        }
      }
      uVar2 = *_g_CollisionResult;
      puVar8 = _g_CollisionResult;
    }
    uVar5 = uVar2 & 3;
    if ((uVar2 & 4) == 0) {
      if (_DAT_1f8001ae < _DAT_1f8001b0) {
        if ((uVar2 & 2) == 0) {
LAB_80047f88:
          iVar6 = iVar6 + -1;
          _DAT_1f8001bc = (_DAT_1f8001bc & 0xffc0) - 1;
        }
        else {
          iVar6 = iVar6 + 1;
          _DAT_1f8001bc = _DAT_1f8001bc + 0x40 & 0xffc0;
        }
      }
      else if ((uVar2 & 1) == 0) {
LAB_80047f54:
        iVar7 = iVar7 + -1;
        _DAT_1f8001c0 = (_DAT_1f8001c0 & 0xffc0) - 1;
      }
      else {
LAB_80047f3c:
        iVar7 = iVar7 + 1;
        _DAT_1f8001c0 = _DAT_1f8001c0 + 0x40 & 0xffc0;
      }
LAB_80047f9c:
      iVar4 = iVar6 << 0x10;
    }
    else {
      if (uVar5 == 1) {
        iVar6 = iVar6 + 1;
        _DAT_1f8001bc = _DAT_1f8001bc + 0x40 & 0xffc0;
        goto LAB_80047f9c;
      }
      if (uVar5 < 2) {
        if (uVar5 == 0) goto LAB_80047f88;
        iVar4 = iVar6 << 0x10;
      }
      else {
        if (uVar5 == 2) goto LAB_80047f54;
        if (uVar5 == 3) goto LAB_80047f3c;
        iVar4 = iVar6 << 0x10;
      }
    }
    puVar9 = (u16 *)(_DAT_1f8001cc + (iVar4 >> 0xe));
    uVar10 = (uint)*puVar9;
    if (uVar10 == 0xffff) {
      _g_CollisionResult = puVar8;
      return 0;
    }
    if ((int)(s16)iVar7 < (int)uVar10) {
      _g_CollisionResult = puVar8;
      return 0;
    }
    uVar10 = ((uint)puVar9->flags + iVar7) - uVar10 & 0xffff;
    if (puVar9->sub_type <= uVar10) {
      _g_CollisionResult = puVar8;
      return 0;
    }
    puVar8 = (u16 *)(_DAT_1f8001d0 + uVar10 * 8);
    uVar2 = *puVar8;
    _g_GTE_Work8C = uVar10;
    _DAT_1f8001e4 = puVar8;
    _DAT_1f8001a8 = uVar2;
  } while( true );
}
