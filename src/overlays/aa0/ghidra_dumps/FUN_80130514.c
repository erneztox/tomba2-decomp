// FUN_80130514

void FUN_80130514(undefined1 param_1)

{
  int in_v0;
  int unaff_s0;
  
  if ((*(byte *)(in_v0 + -0x625) & 1) != 0) {
    *(undefined1 *)(unaff_s0 + 5) = 2;
    FUN_80139580();
    return;
  }
  *(undefined1 *)(unaff_s0 + 5) = param_1;
  FUN_80139580();
  return;
}

