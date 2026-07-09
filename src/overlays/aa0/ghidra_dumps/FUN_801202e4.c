// FUN_801202e4

void FUN_801202e4(void)

{
  short sVar1;
  int unaff_s0;
  
  sVar1 = *(short *)(unaff_s0 + 0x94) + -8;
  *(short *)(unaff_s0 + 0x94) = sVar1;
  if (sVar1 < 0x41) {
    *(undefined2 *)(unaff_s0 + 0x94) = 0x40;
    *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
  }
  *(short *)(*(int *)(unaff_s0 + 0xc0) + 0xc) =
       *(short *)(*(int *)(unaff_s0 + 0xc0) + 0xc) + *(short *)(unaff_s0 + 0x94);
  func_0x800517f8();
  return;
}

