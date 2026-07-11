// FUN_80132944

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80132944(void)

{
  short in_v0;
  uint uVar1;
  int unaff_s0;
  int unaff_s1;
  
  *(ushort *)(unaff_s1 + 2) = in_v0 + 1U & 0xfffb;
  FUN_801406e4();
  *(undefined1 *)(unaff_s0 + 7) = 2;
  uVar1 = func_0x80078240((int)_DAT_1f800160 - (int)*(short *)(unaff_s0 + 0x2e),
                          (int)_DAT_1f800162 - (int)*(short *)(unaff_s0 + 0x32),
                          (int)_DAT_1f800164 - (int)*(short *)(unaff_s0 + 0x36));
  if (uVar1 < 0x3c0) {
    FUN_80144ac8();
    return;
  }
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  return;
}

