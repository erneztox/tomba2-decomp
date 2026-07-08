
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006dc38(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_80083f50((int)*(short *)(param_1 + 0x6e));
  iVar4 = iVar1 * *(short *)(param_1 + 0x6c) >> 0xc;
  iVar1 = FUN_80083f50((int)*(short *)(param_1 + 0x70));
  iVar3 = (int)_DAT_1f8000de;
  iVar2 = FUN_80083e80((int)*(short *)(param_1 + 0x70));
  _DAT_1f8000d0 = (iVar3 + (iVar1 * iVar4 >> 0xc)) * 0x10000;
  _DAT_1f8000d8 = ((int)_DAT_1f8000e6 - (iVar2 * iVar4 >> 0xc)) * 0x10000;
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 1;
  return;
}

