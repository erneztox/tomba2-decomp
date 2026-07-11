// FUN_8010c124

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010c124(void)

{
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 1) = 1;
  if (DAT_800bf9fa == '\x16') {
    *(short *)(unaff_s1 + 0x2e) =
         (short)((*(int *)(_DAT_800e7f50 + 0x2c) + *(int *)(_DAT_800e7f5c + 0x2c)) / 2);
    *(short *)(unaff_s1 + 0x32) =
         (short)((*(int *)(_DAT_800e7f50 + 0x30) + *(int *)(_DAT_800e7f5c + 0x30)) / 2);
    *(short *)(unaff_s1 + 0x36) =
         (short)((*(int *)(_DAT_800e7f50 + 0x34) + *(int *)(_DAT_800e7f5c + 0x34)) / 2);
    FUN_80115248();
    return;
  }
  *(undefined4 *)(unaff_s1 + 0x2c) = 0x4bf60000;
  *(undefined4 *)(unaff_s1 + 0x30) = 0xe53e0000;
  *(undefined4 *)(unaff_s1 + 0x34) = 0x23400000;
  *(undefined1 *)(unaff_s1 + 6) = 0;
  *(char *)(unaff_s1 + 5) = *(char *)(unaff_s1 + 5) + '\x01';
  FUN_80115248();
  return;
}

