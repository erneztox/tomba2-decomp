// FUN_801322a8

void FUN_801322a8(undefined4 param_1)

{
  int unaff_s0;
  
  *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
  *(short *)(unaff_s0 + 0x44) = *(short *)(unaff_s0 + 0x44) + -0x80;
  func_0x8003116c(param_1,unaff_s0 + 0x2c,0xffffffe0);
  FUN_8013b2d0();
  return;
}

