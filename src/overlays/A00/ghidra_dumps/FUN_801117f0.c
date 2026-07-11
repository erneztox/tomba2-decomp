// FUN_801117f0

void FUN_801117f0(undefined2 param_1)

{
  short extraout_var;
  int unaff_s0;
  undefined2 in_stack_0000001c;
  undefined4 uStack00000020;
  
  *(undefined1 *)(unaff_s0 + 6) = 1;
  uStack00000020 = 1;
  *(undefined2 *)(unaff_s0 + 0x2e) = param_1;
  *(undefined2 *)(unaff_s0 + 0x32) = in_stack_0000001c;
  *(undefined2 *)(unaff_s0 + 0x36) = 1;
  if (0 < *(short *)(unaff_s0 + 100)) {
    *(short *)(unaff_s0 + 100) = *(short *)(unaff_s0 + 100) + -1;
  }
  *(undefined2 *)(unaff_s0 + 0x60) = 0;
  if (*(short *)(unaff_s0 + 0x62) < 0x101) {
    *(short *)(unaff_s0 + 0x62) = *(short *)(unaff_s0 + 0x62) + 0xc;
  }
  func_0x80083f50((int)*(short *)(unaff_s0 + 0x42));
  *(short *)(unaff_s0 + 0x62) = *(short *)(unaff_s0 + 0x62) + extraout_var;
  *(short *)(unaff_s0 + 0x42) = *(short *)(unaff_s0 + 0x42) + 0x199;
  FUN_80123c14();
  return;
}

