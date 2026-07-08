
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80043858(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_8006ff10(param_1,(int)*(short *)(param_1 + 0x72));
  uVar2 = _DAT_800e7eb4;
  uVar1 = _DAT_800e7eb0;
  _DAT_800bf844 = iVar3;
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x2c) = _DAT_800e7eac;
    *(undefined4 *)(iVar3 + 0x30) = uVar1;
    *(undefined4 *)(iVar3 + 0x34) = uVar2;
  }
  return iVar3 != 0;
}

