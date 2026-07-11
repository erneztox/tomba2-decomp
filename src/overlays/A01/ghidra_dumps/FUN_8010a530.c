// FUN_8010a530

void FUN_8010a530(void)

{
  short sVar1;
  int unaff_s0;
  
  sVar1 = *(short *)(unaff_s0 + 0x4a) + 0x300;
  *(short *)(unaff_s0 + 0x4a) = sVar1;
  if (0x3000 < sVar1) {
    *(undefined2 *)(unaff_s0 + 0x4a) = 0x3000;
  }
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x4a) * 0x100;
  if (*(char *)(unaff_s0 + 0x29) == '\0') {
    func_0x8004766c();
    func_0x80049250();
  }
  func_0x8007778c();
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  return;
}

