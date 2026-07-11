/**
 * @brief Collision result checker: computes normal + distance
 * @note Original: func_80048360 at 0x80048360
 */
// Collision_CheckResult



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
uint FUN_80048360(void)

{
  u16 uVar1;
  int iVar2;
  s16 sVar3;
  u16 uVar4;
  u16 uVar5;
  u16 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = _DAT_1f8001bc - _DAT_1f8001aa & 0x3f;
  uVar5 = _DAT_1f8001c0 - _DAT_1f8001ac & 0x3f;
  uVar1 = *_g_CollisionResult;
  uVar4 = uVar1 & 3;
  _g_CollisionFlag2 = uVar5;
  if (uVar4 == 2) {
    _g_CollisionFlag = uVar6 ^ 0x3f;
  }
  else {
    _g_CollisionFlag = uVar6;
    if (uVar4 < 3) {
      if (uVar4 == 1) {
LAB_80048404:
        _g_CollisionFlag2 = uVar5 ^ 0x3f;
      }
    }
    else if (uVar4 == 3) {
      _g_CollisionFlag = uVar6 ^ 0x3f;
      goto LAB_80048404;
    }
  }
  uVar4 = _g_CollisionFlag;
  if ((uVar1 & 4) != 0) {
    _g_CollisionFlag = _g_CollisionFlag2;
    _g_CollisionFlag2 = uVar4;
  }
  uVar7 = (uint)(_g_CollisionResult->sub_type >> 8);
  uVar8 = _g_CollisionResult->sub_type & 0xff;
  if ((uVar1 & 8) == 0) {
    iVar2 = uVar7 * ((int)(s16)_g_CollisionFlag - uVar8);
    uVar7 = uVar8 ^ 0x3f;
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    if ((uVar7 == 0xffffffff) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    sVar3 = (s16)(iVar2 / (int)uVar7);
  }
  else {
    sVar3 = (s16)uVar8 + (s16)((int)((uVar7 - uVar8) * (int)(s16)_g_CollisionFlag) >> 6);
  }
  _g_CollisionFlag2 = _g_CollisionFlag2 - sVar3;
  _g_CollisionFlag = 0;
  if ((uVar1 & 4) != 0) {
    _g_CollisionFlag = _g_CollisionFlag2;
    _g_CollisionFlag2 = 0;
  }
  uVar4 = uVar1 & 3;
  if (uVar4 == 1) {
    _g_CollisionFlag = -_g_CollisionFlag;
  }
  else if (uVar4 < 2) {
    if ((uVar1 & 3) == 0) {
      _g_CollisionFlag = -_g_CollisionFlag;
      _g_CollisionFlag2 = -_g_CollisionFlag2;
    }
  }
  else if (uVar4 == 2) {
    _g_CollisionFlag2 = -_g_CollisionFlag2;
  }
  _DAT_1f8001bc = _DAT_1f8001bc + _g_CollisionFlag;
  _DAT_1f8001c0 = _DAT_1f8001c0 + _g_CollisionFlag2;
  _g_CollisionFlag = uVar6 + _g_CollisionFlag;
  _g_CollisionFlag2 = uVar5 + _g_CollisionFlag2;
  uVar4 = uVar1 & 3;
  if (uVar4 == 2) {
    _g_CollisionFlag = _g_CollisionFlag ^ 0x3f;
  }
  else {
    if (uVar4 < 3) {
      if (uVar4 != 1) goto LAB_80048630;
    }
    else {
      if (uVar4 != 3) goto LAB_80048630;
      _g_CollisionFlag = _g_CollisionFlag ^ 0x3f;
    }
    _g_CollisionFlag2 = _g_CollisionFlag2 ^ 0x3f;
  }
LAB_80048630:
  uVar4 = _g_CollisionFlag;
  if ((uVar1 & 4) != 0) {
    _g_CollisionFlag = _g_CollisionFlag2;
    _g_CollisionFlag2 = uVar4;
  }
  return uVar8;
}
