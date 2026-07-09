// FUN_801303b0

void FUN_801303b0(int param_1,int param_2)

{
  int in_v0;
  int iVar1;
  int unaff_s0;
  
  if (param_1 == in_v0) {
    iVar1 = func_0x80073328();
    if (iVar1 != 0) {
      *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
      FUN_80139580();
      return;
    }
  }
  else {
    if (param_1 != 3) {
      FUN_80139580();
      return;
    }
    if (*(char *)(param_2 + 0x2a) != *(char *)(unaff_s0 + 0x2a)) {
      *(undefined1 *)(unaff_s0 + 5) = 0;
      FUN_80139580();
      return;
    }
  }
  if (*(char *)(unaff_s0 + 1) != '\0') {
    func_0x800517f8();
  }
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  *(undefined1 *)(unaff_s0 + 0x2b) = 0;
  func_0x8009a450();
  return;
}

