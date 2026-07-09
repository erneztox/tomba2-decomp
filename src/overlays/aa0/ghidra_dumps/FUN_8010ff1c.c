// FUN_8010ff1c

void FUN_8010ff1c(void)

{
  int iVar1;
  undefined2 in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x36) = in_v1;
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x4a) * 0x100;
  *(short *)(unaff_s0 + 0x4a) = *(short *)(unaff_s0 + 0x4a) + *(short *)(unaff_s0 + 0x50);
  func_0x8004766c();
  iVar1 = func_0x80049250();
  if (iVar1 != 0) {
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  }
  func_0x8007778c();
  if (*(char *)(unaff_s0 + 1) != '\0') {
    func_0x80077b5c();
  }
  return;
}

