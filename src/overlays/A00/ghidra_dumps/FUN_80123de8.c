// FUN_80123de8

void FUN_80123de8(void)

{
  short sVar1;
  uint in_v0;
  int unaff_s3;
  
  if ((in_v0 & 3) == 0) {
    func_0x80081218(&stack0x00000010,*(short *)(unaff_s3 + 0x42) * 0x20 + -0x7feb611c);
    sVar1 = *(short *)(unaff_s3 + 0x42) + 1;
    *(short *)(unaff_s3 + 0x42) = sVar1;
    if (2 < sVar1) {
      *(undefined2 *)(unaff_s3 + 0x42) = 0;
      FUN_8012cdfc();
      return;
    }
  }
  *(undefined1 *)(unaff_s3 + 1) = 1;
  FUN_8012ce0c();
  return;
}

