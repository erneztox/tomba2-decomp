
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80069858(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_800e7feb == '\0') {
    iVar1 = FUN_8004766c(param_1);
    if (iVar1 < 0) {
      FUN_80049760(param_1);
      return 1;
    }
    FUN_80049760(param_1);
  }
  else {
    iVar1 = FUN_80083f50((int)_DAT_1f80018c);
    iVar3 = (int)_DAT_1f80018c;
    *(short *)(param_1 + 0x48) = (short)(iVar1 >> 4);
    iVar1 = FUN_80083e80(iVar3);
    *(short *)(param_1 + 0x4c) = -(short)(iVar1 >> 4);
  }
  uVar2 = 0;
  if (param_3 == 0) {
    if ((param_2 == 0) && (*(char *)(param_1 + 0x2b) != '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      if (DAT_800e7feb == '\0') {
        uVar2 = FUN_800696c4(param_1,*(byte *)(param_1 + 2) - 2 < 2);
      }
    }
  }
  return uVar2;
}

