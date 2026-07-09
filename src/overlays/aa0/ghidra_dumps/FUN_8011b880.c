// FUN_8011b880

void FUN_8011b880(void)

{
  undefined1 uVar1;
  uint in_v0;
  int unaff_s0;
  int unaff_s1;
  
  if ((in_v0 & 0xf) == 0) {
    func_0x8003116c(8,unaff_s0 + 0x2c,0xffffffb0);
  }
  *(short *)(unaff_s0 + 0x2e) =
       *(short *)(unaff_s1 + 0x2c) + *(short *)(&stack0x00000010 + *(short *)(unaff_s0 + 0x60) * 2);
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s1 + 0x30) + -0x20;
  *(undefined2 *)(unaff_s0 + 0x36) = *(undefined2 *)(unaff_s1 + 0x34);
  func_0x80077b5c();
  uVar1 = func_0x8007778c();
  *(undefined1 *)(unaff_s0 + 0x1a) = uVar1;
  *(undefined1 *)(unaff_s0 + 0x19) = uVar1;
  *(undefined1 *)(unaff_s0 + 0x18) = uVar1;
  *(undefined1 *)(unaff_s0 + 0xd) = 2;
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  FUN_8012d9e8();
  return;
}

