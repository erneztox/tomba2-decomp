// FUN_80114e3c

void FUN_80114e3c(void)

{
  undefined2 uVar1;
  int in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x2e) = *(undefined2 *)(in_v1 + 0x42);
  *(undefined2 *)(unaff_s0 + 0x32) = *(undefined2 *)(in_v1 + 0x44);
  uVar1 = *(undefined2 *)(in_v1 + 0x46);
  *(undefined2 *)(unaff_s0 + 0x60) = 0xb;
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(undefined2 *)(unaff_s0 + 100) = 4;
  *(undefined2 *)(unaff_s0 + 0x36) = uVar1;
  func_0x8009a450();
  return;
}

