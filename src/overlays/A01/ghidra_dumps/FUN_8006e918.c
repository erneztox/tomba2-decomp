// FUN_8006e918

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006e918(int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = -_DAT_1f8000ee;
  if (_DAT_800e7fc0 == _DAT_800e7ed6) {
    sVar1 = *(short *)(param_1 + 0x56);
  }
  else {
    sVar1 = -*(short *)(param_1 + 0x56);
  }
  iVar2 = FUN_80083f50((int)_DAT_800e7fc0 + (int)*(short *)(param_1 + 0x52) + (int)sVar1);
  sVar3 = _DAT_800e7eae + (short)(iVar2 * sVar4 >> 0xc);
  iVar2 = FUN_80083e80((int)_DAT_800e7fc0 + (int)*(short *)(param_1 + 0x52) + (int)sVar1);
  _DAT_1f8000d2 = sVar3;
  _DAT_1f8000da = _DAT_800e7eb6 - (short)(iVar2 * sVar4 >> 0xc);
  return;
}

