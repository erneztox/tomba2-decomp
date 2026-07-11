// FUN_8013c5c0

void FUN_8013c5c0(void)

{
  undefined1 in_v1;
  uint uVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  *(undefined1 *)(unaff_s2 + -0x40a2) = in_v1;
  uVar1 = *(ushort *)(unaff_s1 + 8) >> 8 & 0xf;
  if ((uVar1 == unaff_s3) || ((uVar1 == 2 && (0x500 < *(short *)(unaff_s0 + 0x4e))))) {
    in_stack_00000010._2_2_ = *(undefined2 *)(unaff_s0 + 0x2e);
    in_stack_00000014._2_2_ = *(undefined2 *)(unaff_s1 + 10);
    in_stack_00000018._2_2_ = *(undefined2 *)(unaff_s0 + 0x36);
    func_0x8003116c(8,&stack0x00000010,0xffffffb0);
    *(undefined1 *)(unaff_s2 + -0x40a2) = 10;
  }
  *(undefined2 *)(unaff_s1 + 8) = 0;
  func_0x80076d68();
  func_0x800518fc();
  if (*(char *)(unaff_s0 + 0x29) != '\0') {
    FUN_80145608();
    return;
  }
  *(byte *)(unaff_s0 + 0xb) = *(byte *)(unaff_s0 + 0xb) & 0x3f;
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  *(undefined1 *)(unaff_s0 + 0x5f) = 0;
  *(undefined1 *)(unaff_s4 + 7) = 0;
  FUN_80145654();
  return;
}

