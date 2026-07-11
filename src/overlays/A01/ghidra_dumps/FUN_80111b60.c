// FUN_80111b60

void FUN_80111b60(undefined1 param_1)

{
  undefined4 uVar1;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 6) = param_1;
  uVar1 = 1;
  func_0x80042354(1,1);
  *(undefined2 *)(unaff_s0 + 0x80) = 200;
  *(undefined2 *)(unaff_s0 + 0x82) = 400;
  *(undefined2 *)(unaff_s0 + 0x84) = 0x2d0;
  *(undefined4 *)(unaff_s0 + 0x14) = uVar1;
  *(undefined2 *)(unaff_s0 + 0x86) = 0x310;
  *(undefined1 *)(unaff_s0 + 0x5e) = 0;
  return;
}

