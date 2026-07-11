// FUN_80117d6c

void FUN_80117d6c(void)

{
  ushort uVar1;
  int unaff_s0;
  
  uVar1 = *(short *)(unaff_s0 + 0x40) - 1;
  *(ushort *)(unaff_s0 + 0x40) = uVar1;
  if (0 < (int)((uint)uVar1 << 0x10)) {
    return;
  }
  if (*(char *)(unaff_s0 + 1) != '\0') {
    func_0x8009a450();
    return;
  }
  func_0x8009a450();
  return;
}

