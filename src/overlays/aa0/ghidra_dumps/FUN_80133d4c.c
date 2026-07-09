// FUN_80133d4c

void FUN_80133d4c(void)

{
  int in_v0;
  int in_a3;
  int unaff_s0;
  
  if (-200 < in_v0) {
    *(short *)(in_a3 + 6) = *(short *)(in_a3 + 6) + -3;
    FUN_8013cd60();
    return;
  }
  DAT_800bf9e0 = 0x11;
  *(undefined1 *)(unaff_s0 + 5) = 9;
  *(undefined1 *)(in_a3 + 4) = 0x78;
  FUN_8013cd60();
  return;
}

