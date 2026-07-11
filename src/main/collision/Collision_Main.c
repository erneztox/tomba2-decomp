/**
 * @brief Collision main: full collision detection pipeline
 * @note Original: func_800462E4 at 0x800462E4
 */
// Collision_Main



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800462e4(int param_1,u16 param_2,s16 param_3,s16 param_4)

{
  u16 uVar1;
  s32 bVar2;
  int iVar3;
  int iVar4;
  s32 uVar5;
  u16 uVar6;
  int iVar7;
  u16 uVar8;
  
  bVar2 = false;
  if ((s16)_g_CollisionData->kind < 1) {
    uVar8 = _g_CollisionData->flags;
    _DAT_1f8001a4 = uVar8 + _g_CollisionData->kind;
  }
  else {
    _DAT_1f8001a4 = _g_CollisionData->flags;
    uVar8 = _DAT_1f8001a4 + _g_CollisionData->kind;
  }
  uVar1 = *_g_CollisionData;
  uVar6 = (u16)param_1;
  if ((uVar1 & 0x80) == 0) {
    if ((s16)uVar8 < _DAT_1f8001be) {
      return 0;
    }
    if (_DAT_1f8001be < (s16)_DAT_1f8001a4) {
      return 0xffffffff;
    }
    if ((uVar1 & 0x20) == 0) {
      if ((uVar1 & 0x40) == 0) {
        if ((*_g_CollisionResult & 8) == 0) {
          _g_CollisionFlag2 = 0;
          _g_CollisionFlag = uVar6;
        }
        else {
          _g_CollisionFlag = 0;
          _g_CollisionFlag2 = uVar6;
        }
      }
      else {
        _g_CollisionFlag = 0x3f;
        _g_CollisionFlag2 = param_2;
      }
      uVar5 = 1;
    }
    else {
      if ((uVar1 & 0x40) == 0) {
        if ((*_g_CollisionResult & 8) == 0) {
          _g_CollisionFlag = uVar6 - 1;
          if (param_2 == 0) {
            _g_CollisionFlag2 = 0;
          }
          else {
            _g_CollisionFlag2 = 0xffff;
          }
        }
        else {
          _g_CollisionFlag = 0xffff;
          _g_CollisionFlag2 = uVar6 - 1;
        }
      }
      else {
        _g_CollisionFlag = 0x40;
        _g_CollisionFlag2 = param_2 + 1;
      }
      uVar5 = 2;
    }
    _DAT_1f8001a6 = *_g_CollisionData;
    uVar8 = _g_CollisionData->sub_type;
    goto LAB_80046740;
  }
  if ((uVar1 & 0x40) == 0) {
    if ((s16)uVar8 < _DAT_1f8001be) {
      return 0;
    }
    if ((s16)_DAT_1f8001a4 <= _DAT_1f8001be) {
      if ((*_g_CollisionResult & 8) == 0) {
        iVar4 = (int)(s16)_g_CollisionData->kind * ((int)(s16)_g_CollisionFlag - (int)(s16)uVar6);
        iVar7 = (int)(s16)(uVar6 ^ 0x3f);
        iVar3 = iVar4 / iVar7;
        if (iVar7 == 0) {
          trap(0x1c00);
        }
        if ((iVar7 == -1) && (iVar4 == -0x80000000)) {
          trap(0x1800);
        }
        uVar8 = _g_CollisionData->flags;
      }
      else {
        uVar8 = _g_CollisionData->flags;
        iVar3 = (int)(s16)_g_CollisionData->kind * (int)(s16)_g_CollisionFlag >> 6;
      }
      if ((int)(((uint)uVar8 + iVar3) * 0x10000) >> 0x10 < (int)_DAT_1f8001be) goto LAB_80046530;
      goto LAB_80046538;
    }
  }
  else {
    if ((s16)uVar8 < _DAT_1f8001be) {
      return 0;
    }
    if ((s16)_DAT_1f8001a4 <= _DAT_1f8001be) {
      if ((*_g_CollisionResult & 8) == 0) {
        iVar4 = (int)(s16)_g_CollisionData->kind * ((int)(s16)_g_CollisionFlag - (int)(s16)uVar6);
        iVar7 = (int)(s16)(uVar6 ^ 0x3f);
        iVar3 = iVar4 / iVar7;
        if (iVar7 == 0) {
          trap(0x1c00);
        }
        if ((iVar7 == -1) && (iVar4 == -0x80000000)) {
          trap(0x1800);
        }
        uVar8 = _g_CollisionData->flags;
      }
      else {
        uVar8 = _g_CollisionData->flags;
        iVar3 = (int)(s16)_g_CollisionData->kind * (int)(s16)_g_CollisionFlag >> 6;
      }
      if ((int)_DAT_1f8001be < (int)(((uint)uVar8 + iVar3) * 0x10000) >> 0x10) {
LAB_80046530:
        if (param_4 == 0) {
          return 0;
        }
      }
LAB_80046538:
      bVar2 = true;
    }
  }
  if (!bVar2) {
    return 0xffffffff;
  }
  if (((param_3 == 0) || ((_DAT_1f8001a6 & 0x400) == 0)) ||
     ((int)(s16)_DAT_1f8001a4 <= _DAT_1f8001be + -0x20)) {
    _DAT_1f8001c4 = _DAT_1f8001be - _g_CollisionData->flags;
  }
  else {
    _DAT_1f8001c4 = _DAT_1f8001a4 - _g_CollisionData->flags;
  }
  if ((*_g_CollisionResult & 8) == 0) {
    iVar7 = (int)(s16)(uVar6 ^ 0x3f);
    iVar4 = (int)(s16)_g_CollisionData->kind;
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (_DAT_1f8001c4 * iVar7 == -0x80000000)) {
      trap(0x1800);
    }
    param_1 = param_1 + (_DAT_1f8001c4 * iVar7) / iVar4;
    iVar4 = (int)(s16)param_2 * (param_1 * 0x10000 >> 0x10);
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if ((iVar7 == -1) && (iVar4 == -0x80000000)) {
      trap(0x1800);
    }
    _g_CollisionFlag = (u16)param_1;
    _g_CollisionFlag2 = (u16)(iVar4 / iVar7);
  }
  else {
    iVar4 = (int)(s16)_g_CollisionData->kind;
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && ((int)_DAT_1f8001c4 << 6 == -0x80000000)) {
      trap(0x1800);
    }
    _g_CollisionFlag = (u16)(((int)_DAT_1f8001c4 << 6) / iVar4);
    _g_CollisionFlag2 =
         uVar6 + (s16)(((int)(s16)param_2 - (int)(s16)uVar6) * (int)(s16)_g_CollisionFlag >> 6)
    ;
  }
  uVar5 = 1;
  _DAT_1f8001a6 = *_g_CollisionData;
  uVar8 = _g_CollisionData->sub_type;
LAB_80046740:
  _DAT_1f8001e8 = _DAT_1f8001dc + (uint)uVar8 * 3;
  return uVar5;
}
