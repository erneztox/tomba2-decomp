// FUN_80122468

void FUN_80122468(void)

{
  undefined1 in_v0;
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 5) = in_v0;
  if (*(char *)(unaff_s0 + 0x29) == '\0') {
    if (*(byte *)(*(int *)(unaff_s0 + 0x14) + 4) < 2) {
      *(undefined1 *)(*(int *)(unaff_s0 + 0x14) + 4) = 2;
    }
    *(undefined1 *)(unaff_s0 + 5) = 0;
  }
  func_0x8007778c();
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  FUN_8012b454();
  return;
}

