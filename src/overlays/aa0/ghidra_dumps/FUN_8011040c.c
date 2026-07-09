// FUN_8011040c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011040c(void)

{
  undefined1 in_v0;
  int unaff_s0;
  undefined1 *unaff_s2;
  
  unaff_s2[8] = in_v0;
  *(undefined2 *)(unaff_s2 + 0x88) = 0xffc8;
  *(undefined2 *)(unaff_s2 + 0x8a) = 0x20;
  *(undefined2 *)(unaff_s2 + 0x8c) = 0;
  if (*(short *)(*(int *)(unaff_s2 + 0x10) + 0x16) == 2) {
    *unaff_s2 = 2;
    FUN_801193e4();
    return;
  }
  *unaff_s2 = 1;
  if (*(char *)(unaff_s0 + 0x3f) != '\0') {
    unaff_s2[1] = 1;
    func_0x80077efc();
    func_0x80051d90();
    *(undefined2 *)(unaff_s2 + 0x2e) = _DAT_1f8000c0;
    *(undefined2 *)(unaff_s2 + 0x32) = _DAT_1f8000c2;
    *(undefined2 *)(unaff_s2 + 0x36) = _DAT_1f8000c4;
  }
  return;
}

