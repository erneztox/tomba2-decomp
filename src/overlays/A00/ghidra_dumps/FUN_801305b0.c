// FUN_801305b0

void FUN_801305b0(void)

{
  int in_v0;
  int unaff_s0;
  
  if ((*(byte *)(in_v0 + 0x7fc7) & 1) == *(byte *)(unaff_s0 + 0x5f)) {
    *(undefined1 *)(unaff_s0 + 6) = 0;
    FUN_80139580();
    return;
  }
  if (*(char *)(unaff_s0 + 1) != '\0') {
    func_0x800517f8();
  }
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  *(undefined1 *)(unaff_s0 + 0x2b) = 0;
  func_0x8009a450();
  return;
}

