// FUN_8013b7bc

void FUN_8013b7bc(void)

{
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 7) = 0x1e;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  if (*(byte *)(unaff_s0 + 7) < 2) {
    FUN_80144788();
    return;
  }
  *(byte *)(unaff_s0 + 7) = *(byte *)(unaff_s0 + 7) - 1;
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  FUN_801448fc();
  return;
}

