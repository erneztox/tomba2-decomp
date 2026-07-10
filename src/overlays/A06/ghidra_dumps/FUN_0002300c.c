// FUN_0002300c

void FUN_0002300c(void)

{
  short sVar1;
  int in_v1;
  int unaff_s0;
  
  *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + in_v1 * *(short *)(unaff_s0 + 0x48);
  *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + in_v1 * *(short *)(unaff_s0 + 0x4c);
  *(short *)(*(int *)(unaff_s0 + 0xc0) + 2) = *(short *)(*(int *)(unaff_s0 + 0xc0) + 2) + -4;
  sVar1 = *(short *)(unaff_s0 + 0x54) + 0x40;
  *(short *)(unaff_s0 + 0x54) = sVar1;
  if (0x4ff < sVar1) {
    *(undefined2 *)(unaff_s0 + 0x54) = 0x500;
    *(undefined1 *)(unaff_s0 + 5) = 1;
    *(undefined1 *)(unaff_s0 + 6) = 0;
    DAT_800bf841 = 0;
    func_0x0006e1e4();
    FUN_00040b48(0x6b);
  }
  return;
}

