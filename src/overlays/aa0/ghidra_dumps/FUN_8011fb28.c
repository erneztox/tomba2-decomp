// FUN_8011fb28

void FUN_8011fb28(void)

{
  short sVar1;
  int unaff_s0;
  int unaff_s3;
  
  sVar1 = *(short *)(unaff_s0 + 0x40);
  *(short *)(unaff_s0 + 0x40) = sVar1 + -1;
  if (sVar1 != 1) {
    func_0x80041098();
    func_0x80070e60();
    func_0x8004190c();
    return;
  }
  func_0x80040c00(4);
  func_0x800440e4(&DAT_800e7e80,0xbe,4);
  sVar1 = *(byte *)(unaff_s0 + 6) + 1;
  *(char *)(unaff_s0 + 6) = (char)sVar1;
  *(short *)(unaff_s0 + 2) = sVar1;
  func_0x80081218();
  sVar1 = *(short *)(unaff_s3 + 0x4c) + 1;
  *(short *)(unaff_s3 + 0x4c) = sVar1;
  if (5 < sVar1) {
    *(undefined2 *)(unaff_s3 + 0x4c) = 3;
    return;
  }
  return;
}

