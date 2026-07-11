// FUN_08037768

void FUN_08037768(void)

{
  uint in_v0;
  int unaff_s0;
  
  if (*(byte *)(unaff_s0 + 0x46) != in_v0) {
    func_0x000416a8();
    func_0x00041718();
  }
  *(undefined1 *)(unaff_s0 + 4) = 1;
  *(undefined1 *)(unaff_s0 + 6) = 0;
  *(undefined1 *)(unaff_s0 + 5) = 0;
  DAT_800bf929 = DAT_800bf929 | 2;
  func_0x00042310();
  return;
}

