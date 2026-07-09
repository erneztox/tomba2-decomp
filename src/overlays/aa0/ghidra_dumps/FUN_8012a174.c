// FUN_8012a174

void FUN_8012a174(void)

{
  undefined2 in_v0;
  short sVar1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x6c) = in_v0;
  sVar1 = FUN_80133700();
  if (sVar1 != 0) {
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x38) = *(undefined2 *)(unaff_s0 + 100);
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) = *(undefined2 *)(unaff_s0 + 0x66);
    FUN_80133610();
    *(undefined1 *)(unaff_s0 + 6) = 0;
    *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  }
  if (0x20 < *(short *)(unaff_s0 + 0x50)) {
    *(short *)(unaff_s0 + 0x50) = *(short *)(unaff_s0 + 0x50) + -1;
  }
  FUN_80133774();
  return;
}

