/**
 * @brief Collision wall checker: computes wall normal, push
 * @note Original: func_80048134 at 0x80048134
 */
// Collision_CheckWall



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80048134(void)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  
  _DAT_1f8001c2 = _DAT_1f8001bc - _DAT_1f8001aa & 0x3f;
  uVar1 = *_DAT_1f8001e0;
  _DAT_1f8001c6 = _DAT_1f8001c0 - _DAT_1f8001ac & 0x3f;
  uVar4 = uVar1 & 3;
  if (uVar4 == 2) {
    _DAT_1f8001c2 = _DAT_1f8001c2 ^ 0x3f;
  }
  else {
    if (uVar4 < 3) {
      if (uVar4 != 1) goto LAB_800481dc;
    }
    else {
      if (uVar4 != 3) goto LAB_800481dc;
      _DAT_1f8001c2 = _DAT_1f8001c2 ^ 0x3f;
    }
    _DAT_1f8001c6 = _DAT_1f8001c6 ^ 0x3f;
  }
LAB_800481dc:
  uVar4 = _DAT_1f8001c2;
  if ((uVar1 & 4) != 0) {
    _DAT_1f8001c2 = _DAT_1f8001c6;
    _DAT_1f8001c6 = uVar4;
  }
  uVar5 = (uint)(_DAT_1f8001e0[3] >> 8);
  uVar6 = _DAT_1f8001e0[3] & 0xff;
  if ((uVar1 & 8) == 0) {
    iVar2 = uVar5 * ((int)(short)_DAT_1f8001c2 - uVar6);
    uVar6 = uVar6 ^ 0x3f;
    if (uVar6 == 0) {
      trap(0x1c00);
    }
    if ((uVar6 == 0xffffffff) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    sVar3 = (short)(iVar2 / (int)uVar6);
  }
  else {
    sVar3 = (short)uVar6 + (short)((int)((uVar5 - uVar6) * (int)(short)_DAT_1f8001c2) >> 6);
  }
  _DAT_1f8001c6 = _DAT_1f8001c6 - sVar3;
  _DAT_1f8001c2 = 0;
  if ((uVar1 & 4) != 0) {
    _DAT_1f8001c2 = _DAT_1f8001c6;
    _DAT_1f8001c6 = 0;
  }
  uVar4 = uVar1 & 3;
  if (uVar4 == 1) {
    _DAT_1f8001c2 = -_DAT_1f8001c2;
    return;
  }
  if (1 < uVar4) {
    if (uVar4 == 2) {
      _DAT_1f8001c6 = -_DAT_1f8001c6;
      return;
    }
    return;
  }
  if ((uVar1 & 3) == 0) {
    _DAT_1f8001c2 = -_DAT_1f8001c2;
    _DAT_1f8001c6 = -_DAT_1f8001c6;
    return;
  }
  return;
}
