
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80048360(void)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = _DAT_1f8001bc - _DAT_1f8001aa & 0x3f;
  uVar5 = _DAT_1f8001c0 - _DAT_1f8001ac & 0x3f;
  uVar1 = *_DAT_1f8001e0;
  uVar4 = uVar1 & 3;
  _DAT_1f8001c6 = uVar5;
  if (uVar4 == 2) {
    _DAT_1f8001c2 = uVar6 ^ 0x3f;
  }
  else {
    _DAT_1f8001c2 = uVar6;
    if (uVar4 < 3) {
      if (uVar4 == 1) {
LAB_80048404:
        _DAT_1f8001c6 = uVar5 ^ 0x3f;
      }
    }
    else if (uVar4 == 3) {
      _DAT_1f8001c2 = uVar6 ^ 0x3f;
      goto LAB_80048404;
    }
  }
  uVar4 = _DAT_1f8001c2;
  if ((uVar1 & 4) != 0) {
    _DAT_1f8001c2 = _DAT_1f8001c6;
    _DAT_1f8001c6 = uVar4;
  }
  uVar7 = (uint)(_DAT_1f8001e0[3] >> 8);
  uVar8 = _DAT_1f8001e0[3] & 0xff;
  if ((uVar1 & 8) == 0) {
    iVar2 = uVar7 * ((int)(short)_DAT_1f8001c2 - uVar8);
    uVar7 = uVar8 ^ 0x3f;
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    if ((uVar7 == 0xffffffff) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    sVar3 = (short)(iVar2 / (int)uVar7);
  }
  else {
    sVar3 = (short)uVar8 + (short)((int)((uVar7 - uVar8) * (int)(short)_DAT_1f8001c2) >> 6);
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
  }
  else if (uVar4 < 2) {
    if ((uVar1 & 3) == 0) {
      _DAT_1f8001c2 = -_DAT_1f8001c2;
      _DAT_1f8001c6 = -_DAT_1f8001c6;
    }
  }
  else if (uVar4 == 2) {
    _DAT_1f8001c6 = -_DAT_1f8001c6;
  }
  _DAT_1f8001bc = _DAT_1f8001bc + _DAT_1f8001c2;
  _DAT_1f8001c0 = _DAT_1f8001c0 + _DAT_1f8001c6;
  _DAT_1f8001c2 = uVar6 + _DAT_1f8001c2;
  _DAT_1f8001c6 = uVar5 + _DAT_1f8001c6;
  uVar4 = uVar1 & 3;
  if (uVar4 == 2) {
    _DAT_1f8001c2 = _DAT_1f8001c2 ^ 0x3f;
  }
  else {
    if (uVar4 < 3) {
      if (uVar4 != 1) goto LAB_80048630;
    }
    else {
      if (uVar4 != 3) goto LAB_80048630;
      _DAT_1f8001c2 = _DAT_1f8001c2 ^ 0x3f;
    }
    _DAT_1f8001c6 = _DAT_1f8001c6 ^ 0x3f;
  }
LAB_80048630:
  uVar4 = _DAT_1f8001c2;
  if ((uVar1 & 4) != 0) {
    _DAT_1f8001c2 = _DAT_1f8001c6;
    _DAT_1f8001c6 = uVar4;
  }
  return uVar8;
}

