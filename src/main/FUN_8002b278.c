
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8002b278(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)*(short *)(param_1 + 0x2c) - (int)_DAT_1f8000d2;
  iVar4 = (int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f8000d6;
  iVar3 = (int)*(short *)(param_1 + 0x30) - (int)_DAT_1f8000da;
  uVar1 = FUN_80077fb0(iVar5 * iVar5 + iVar4 * iVar4 + iVar3 * iVar3);
  uVar1 = uVar1 & 0xffff;
  uVar2 = 0;
  if (0x1ff < uVar1) {
    if ((uVar1 < 0x1c01) &&
       ((int)(uVar1 * 0xd60) <=
        _DAT_1f8000e8 * iVar5 + _DAT_1f8000ea * iVar4 + _DAT_1f8000ec * iVar3)) {
      *(undefined1 *)(param_1 + 1) = 1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

