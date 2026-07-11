// FUN_801304a8

void FUN_801304a8(void)

{
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 0x2a) = 0x26;
  if (DAT_800bf8bc == -1) {
    *(undefined1 *)(unaff_s0 + 0x5f) = 0;
    FUN_80139580();
    return;
  }
  *(undefined1 *)(unaff_s0 + 0x5f) = 1;
  FUN_80139580();
  return;
}

