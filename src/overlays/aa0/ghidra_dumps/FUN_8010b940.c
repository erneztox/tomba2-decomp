// FUN_8010b940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8010b940(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 2;
  if (2 < (int)(*(byte *)(param_2 + 8) - 1)) {
    iVar4 = param_2 + 8;
    do {
      if (0 < *(short *)(*(int *)(iVar4 + 0xc0) + 0x16)) {
        return 0;
      }
      uVar2 = param_2;
      iVar1 = func_0x80024bd8(param_1);
      iVar3 = iVar3 + 1;
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x164) = 5;
        *(undefined1 *)(param_1 + 0x15c) = 1;
        DAT_1f800182 = 0;
        _DAT_1f800080 = param_2;
        iVar3 = func_0x8007a980(3,9,0);
        if (iVar3 == 0) {
          iVar3 = FUN_8011d974();
          return iVar3;
        }
        *(undefined1 *)(iVar3 + 2) = 6;
        *(char *)(iVar3 + 3) = (char)uVar2;
        *(undefined4 *)(iVar3 + 0x1c) = 0x8011d578;
        if ((uVar2 & 0xff) == 0) {
          *(int *)(iVar3 + 0x10) = iVar4 + 0x60;
        }
        return iVar3;
      }
      iVar4 = iVar4 + 4;
    } while (iVar3 < (int)(*(byte *)(param_2 + 8) - 1));
  }
  return 0;
}

