// FUN_8010eb5c

void FUN_8010eb5c(void)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int unaff_s0;
  
  if (in_v0 < in_v1) {
    iVar1 = func_0x80083e80(0x300 - *(short *)(unaff_s0 + 0x58));
    *(short *)(unaff_s0 + 0x58) = *(short *)(unaff_s0 + 0x58) + (short)(iVar1 >> 5);
    FUN_80117b64();
    return;
  }
  *(undefined1 *)(unaff_s0 + 7) = 4;
  FUN_80117b64();
  return;
}

