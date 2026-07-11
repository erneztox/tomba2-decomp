// FUN_8013c0bc

void FUN_8013c0bc(int param_1)

{
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  
  if (in_v0 != 0) {
    FUN_8014507c(param_1 << 4);
    return;
  }
  *(ushort *)(unaff_s1 + 2) = *(ushort *)(unaff_s1 + 2) | 1;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0xe000;
  *(undefined2 *)(unaff_s0 + 0x50) = 0xffd8;
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  *(undefined1 *)(unaff_s0 + 6) = 1;
  func_0x80074590(0x88,0,0);
  return;
}

