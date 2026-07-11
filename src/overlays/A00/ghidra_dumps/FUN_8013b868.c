// FUN_8013b868

void FUN_8013b868(void)

{
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  if (*(byte *)(unaff_s0 + 7) < 2) {
    FUN_8014482c();
    return;
  }
  *(byte *)(unaff_s0 + 7) = *(byte *)(unaff_s0 + 7) - 1;
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  FUN_801448fc();
  return;
}

