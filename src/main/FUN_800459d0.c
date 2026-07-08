
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800459d0(ushort param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)(short)_DAT_1f8001ec[2];
  if (iVar3 < 1) {
    iVar4 = (int)(short)_DAT_1f8001ec[1];
    iVar2 = iVar4 + iVar3;
  }
  else {
    iVar2 = (int)(short)_DAT_1f8001ec[1];
    iVar4 = iVar2 + iVar3;
  }
  if (_DAT_1f8001be <= iVar4) {
    if ((int)_DAT_1f8001be < iVar2 + -0x80) {
      return 0xffffffff;
    }
    if ((*_DAT_1f8001e0 & 8) == 0) {
      iVar3 = (int)(short)_DAT_1f8001ec[2] * ((int)_DAT_1f8001c2 - (int)(short)param_1);
      iVar2 = (int)(short)(param_1 ^ 0x3f);
      iVar4 = iVar3 / iVar2;
      if (iVar2 == 0) {
        trap(0x1c00);
      }
      if ((iVar2 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      uVar1 = _DAT_1f8001ec[1];
    }
    else {
      uVar1 = _DAT_1f8001ec[1];
      iVar4 = (int)(short)_DAT_1f8001ec[2] * (int)_DAT_1f8001c2 >> 6;
    }
    if ((int)_DAT_1f8001be <= (int)(((uint)uVar1 + iVar4) * 0x10000) >> 0x10) {
      _DAT_1f8001c4 = (short)((uint)uVar1 + iVar4) - _DAT_1f8001be;
      _DAT_1f8001a6 = *_DAT_1f8001ec;
      return 1;
    }
  }
  return 0;
}

