// FUN_80133240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80133240(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar2 = func_0x8007778c(param_1);
    if (iVar2 != 0) {
      FUN_8013c0bc(1);
      func_0x80051844(param_1);
    }
    bVar1 = *(byte *)(param_1 + 0x5e);
    if (bVar1 == 1) {
      FUN_8013bab0(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      FUN_8013c3dc();
      return;
    }
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_8013bcc8(param_1,0x8014ac08);
        *(undefined1 *)(param_1 + 0x29) = 0;
        FUN_8013c3dc();
        return;
      }
      *(undefined1 *)(param_1 + 0x29) = 0;
      FUN_8013c3dc();
      return;
    }
    if (bVar1 == 0) {
      FUN_8013b868(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      FUN_8013c3dc();
      return;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    FUN_8013c3dc();
    return;
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        FUN_8013c3dc();
        return;
      }
      func_0x8007a624(param_1);
    }
    return;
  }
  if (bVar1 != 0) {
    FUN_8013c3dc();
    return;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        FUN_8013c3dc();
        return;
      }
      iVar2 = func_0x80078240((int)_DAT_1f800160 - (int)*(short *)(param_1 + 0x2e),
                              (int)_DAT_1f800162 - (int)*(short *)(param_1 + 0x32),
                              (int)_DAT_1f800164 - (int)*(short *)(param_1 + 0x36));
      if (1000 < iVar2) {
        return;
      }
      if (DAT_1f80027a != '\0') {
        return;
      }
      if (DAT_800e7e80 == '\x06') {
        return;
      }
      if (DAT_800bf80d != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      FUN_8013c3dc();
      return;
    }
    if (bVar1 != 0) {
      FUN_8013c3dc();
      return;
    }
    FUN_8013c0bc(0);
    *(undefined1 *)(param_1 + 0xbf) = 0xe0;
    *(undefined2 *)(param_1 + 0x7e) = 0x1b;
    *(undefined2 *)(param_1 + 0x7c) = 0x400;
    *(undefined2 *)(param_1 + 0x7a) = 0xb;
    *(undefined2 *)(param_1 + 0x78) = 0x30;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  FUN_8013b70c(param_1,&DAT_8014abe8);
  FUN_8013c3dc();
  return;
}

