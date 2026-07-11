// FUN_8011276c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011276c(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int unaff_s0;
  uint unaff_s1;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  *(char *)(unaff_s0 + 6) = (char)unaff_s1;
  func_0x8003116c(0x24,unaff_s0 + 0x2c,0xffffffce);
  if (*(byte *)(unaff_s0 + 3) == unaff_s1) {
    in_stack_00000010._2_2_ = *(undefined2 *)(unaff_s0 + 0x2e);
    in_stack_00000014._2_2_ = *(short *)(unaff_s0 + 0x32) + -200;
    in_stack_00000018._2_2_ = *(undefined2 *)(unaff_s0 + 0x36);
    func_0x8003116c(0x24,&stack0x00000010,0xffffffce);
    in_stack_00000014._2_2_ = *(short *)(unaff_s0 + 0x32) + -400;
    func_0x8003116c(0x24,&stack0x00000010,0xffffffce);
    in_stack_00000014._2_2_ = *(short *)(unaff_s0 + 0x32) + -600;
    func_0x8003116c(0x24,&stack0x00000010,0xffffffce);
    in_stack_00000014._2_2_ = *(short *)(unaff_s0 + 0x32) + -800;
    func_0x8003116c(0x24,&stack0x00000010,0xffffffce);
  }
  *(undefined1 *)(unaff_s0 + 0x5e) = 1;
  *(undefined2 *)(unaff_s0 + 0x40) = 4;
  *(undefined2 *)(unaff_s0 + 0xe) = 0;
  func_0x80074590(0x93,0,0);
  func_0x80040c00(9);
  func_0x80040b48(10);
  if (*(int *)(unaff_s0 + 0x10) != 0) {
    *(undefined1 *)(*(int *)(unaff_s0 + 0x10) + 4) = 3;
    *(undefined4 *)(unaff_s0 + 0x10) = 0;
  }
  thunk_FUN_80123f10();
  uVar3 = *(ushort *)(unaff_s0 + 0xe) + 1 & 7;
  *(short *)(unaff_s0 + 0xe) = (short)uVar3;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x38) = *(undefined2 *)(uVar3 * 6 + -0x7fec9ef4);
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) =
       *(undefined2 *)(*(short *)(unaff_s0 + 0xe) * 6 + -0x7fec9ef2);
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3c) =
       *(undefined2 *)(*(short *)(unaff_s0 + 0xe) * 6 + -0x7fec9ef0);
  if ((*(short *)(unaff_s0 + 0xe) == 0) &&
     (sVar1 = *(short *)(unaff_s0 + 0x40), *(short *)(unaff_s0 + 0x40) = sVar1 + -1, sVar1 == 1)) {
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    FUN_8011b8d8();
    return;
  }
  iVar2 = func_0x800778e4();
  if (iVar2 != 0) {
    func_0x80051844();
  }
  return;
}

