// FUN_8004a2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8004a2a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    if (_DAT_800e7fee < 1) {
      return 0;
    }
    iVar1 = FUN_800310f4(0x1f,0xffffff74);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
      *(undefined2 *)(iVar1 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)(param_1 + 0x36);
    }
    FUN_80074590(0x28,0,0);
    if ((DAT_800bf91e == -1) || (uVar2 = 0x16, DAT_800bf87d < 8)) {
      uVar2 = 0xc;
    }
    FUN_8004ed94(uVar2,0x41);
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    DAT_800ed061 = DAT_800ed061 | 2;
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return 0;
  }
  iVar1 = FUN_80049f80(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_800ed061 = DAT_800ed061 & 0xfd;
  return 1;
}

