// FUN_801332c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801332c4(void)

{
  int iVar1;
  int in_v1;
  int unaff_s1;
  undefined1 unaff_s2;
  
  if (in_v1 != 2) {
    FUN_8013c3dc();
    return;
  }
  iVar1 = func_0x80078240((int)_DAT_1f800160 - (int)*(short *)(unaff_s1 + 0x2e),
                          (int)_DAT_1f800162 - (int)*(short *)(unaff_s1 + 0x32),
                          (int)_DAT_1f800164 - (int)*(short *)(unaff_s1 + 0x36));
  if ((((iVar1 < 0x3e9) && (DAT_1f80027a == '\0')) && (DAT_800e7e80 != '\x06')) &&
     (DAT_800bf80d == '\0')) {
    *(undefined1 *)(unaff_s1 + 4) = unaff_s2;
    *(undefined1 *)(unaff_s1 + 5) = 0;
    *(undefined1 *)(unaff_s1 + 0x5e) = 0;
    FUN_8013c3dc();
    return;
  }
  return;
}

