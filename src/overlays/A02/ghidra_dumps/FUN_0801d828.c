// FUN_0801d828

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d828(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  iVar1 = func_0x00083f50((int)*(short *)(param_1 + 10));
  iVar3 = (int)_DAT_1f8000ee;
  iVar4 = *(int *)(param_1 + 0x58);
  iVar2 = func_0x00083f50((int)param_2);
  iVar3 = (int)(short)(-(iVar1 * (iVar3 + iVar4)) >> 0xc);
  sVar5 = _DAT_800e7eae + (short)(iVar2 * iVar3 >> 0xc);
  iVar1 = func_0x00083e80((int)param_2);
  _DAT_1f8000da = _DAT_800e7eb6 - (short)(iVar1 * iVar3 >> 0xc);
  _DAT_1f8000d2 = sVar5;
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 1;
  return;
}

