// FUN_0802ec3c

void FUN_0802ec3c(void)

{
  undefined2 in_v0;
  short sVar1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x6c) = in_v0;
  sVar1 = func_0x00127f18();
  if (sVar1 != 0) {
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x38) = *(undefined2 *)(unaff_s0 + 100);
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) = *(undefined2 *)(unaff_s0 + 0x66);
    func_0x00127e30();
    *(undefined1 *)(unaff_s0 + 6) = 0;
    *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  }
  if (0x20 < *(short *)(unaff_s0 + 0x50)) {
    *(short *)(unaff_s0 + 0x50) = *(short *)(unaff_s0 + 0x50) + -1;
  }
  func_0x00127f7c();
  return;
}

