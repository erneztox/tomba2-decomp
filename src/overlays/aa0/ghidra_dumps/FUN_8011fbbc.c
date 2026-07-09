// FUN_8011fbbc

void FUN_8011fbbc(void)

{
  short sVar1;
  int unaff_s0;
  int unaff_s3;
  
  func_0x800440e4(&DAT_800e7e80,2,4);
  *(undefined1 *)(unaff_s0 + 0x70) = 2;
  *(undefined1 *)(unaff_s0 + 6) = 6;
  *(undefined2 *)(unaff_s0 + 2) = 6;
  func_0x80081218();
  sVar1 = *(short *)(unaff_s3 + 0x4c) + 1;
  *(short *)(unaff_s3 + 0x4c) = sVar1;
  if (5 < sVar1) {
    *(undefined2 *)(unaff_s3 + 0x4c) = 3;
    return;
  }
  return;
}

