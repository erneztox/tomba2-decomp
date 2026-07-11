// FUN_801303f8

void FUN_801303f8(char param_1)

{
  undefined1 in_v0;
  int iVar1;
  int in_v1;
  int unaff_s0;
  
  *(undefined1 *)(in_v1 + 0x137) = in_v0;
  *(undefined1 *)(unaff_s0 + 5) = 2;
  *(char *)(unaff_s0 + 0x29) = param_1;
  DAT_800bf81f = (param_1 - *(char *)(unaff_s0 + 0x5f)) * '\x10';
  iVar1 = func_0x80073328();
  if (iVar1 != 0) {
    *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
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

