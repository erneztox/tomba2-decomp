// FUN_80116294

void FUN_80116294(void)

{
  int unaff_s0;
  
  if (*(char *)(unaff_s0 + 0x70) == -1) {
    if (*(int *)(unaff_s0 + 0x14) != 0) {
      *(undefined1 *)(*(int *)(unaff_s0 + 0x14) + 4) = 3;
    }
    *(undefined1 *)(unaff_s0 + 4) = 3;
    DAT_800bfa01 = DAT_800bfa01 | 2;
  }
  *(undefined1 *)(unaff_s0 + 1) = 1;
  func_0x80077e7c();
  func_0x80041098();
  func_0x8004190c();
  return;
}

