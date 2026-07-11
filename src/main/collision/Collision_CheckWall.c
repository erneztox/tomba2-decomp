/**
 * @brief Collision wall checker: computes wall normal, push
 * @note Original: func_80048134 at 0x80048134
 */
// Collision_CheckWall



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80048134(void)

{
  u16 uVar1;
  int iVar2;
  s16 sVar3;
  u16 uVar4;
  uint uVar5;
  uint uVar6;
  
  _g_CollisionFlag = _DAT_1f8001bc - _DAT_1f8001aa & 0x3f;
  uVar1 = *_g_CollisionResult;
  _g_CollisionFlag2 = _DAT_1f8001c0 - _DAT_1f8001ac & 0x3f;
  uVar4 = uVar1 & 3;
  if (uVar4 == 2) {
    _g_CollisionFlag = _g_CollisionFlag ^ 0x3f;
  }
  else {
    if (uVar4 < 3) {
      if (uVar4 != 1) goto LAB_800481dc;
    }
    else {
      if (uVar4 != 3) goto LAB_800481dc;
      _g_CollisionFlag = _g_CollisionFlag ^ 0x3f;
    }
    _g_CollisionFlag2 = _g_CollisionFlag2 ^ 0x3f;
  }
LAB_800481dc:
  uVar4 = _g_CollisionFlag;
  if ((uVar1 & 4) != 0) {
    _g_CollisionFlag = _g_CollisionFlag2;
    _g_CollisionFlag2 = uVar4;
  }
  uVar5 = (uint)(_g_CollisionResult->sub_type >> 8);
  uVar6 = _g_CollisionResult->sub_type & 0xff;
  if ((uVar1 & 8) == 0) {
    iVar2 = uVar5 * ((int)(s16)_g_CollisionFlag - uVar6);
    uVar6 = uVar6 ^ 0x3f;
    if (uVar6 == 0) {
      trap(0x1c00);
    }
    if ((uVar6 == 0xffffffff) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    sVar3 = (s16)(iVar2 / (int)uVar6);
  }
  else {
    sVar3 = (s16)uVar6 + (s16)((int)((uVar5 - uVar6) * (int)(s16)_g_CollisionFlag) >> 6);
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
    return;
  }
  if (1 < uVar4) {
    if (uVar4 == 2) {
      _g_CollisionFlag2 = -_g_CollisionFlag2;
      return;
    }
    return;
  }
  if ((uVar1 & 3) == 0) {
    _g_CollisionFlag = -_g_CollisionFlag;
    _g_CollisionFlag2 = -_g_CollisionFlag2;
    return;
  }
  return;
}
