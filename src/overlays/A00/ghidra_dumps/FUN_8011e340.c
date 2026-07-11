// FUN_8011e340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011e340(void)

{
  byte bVar1;
  int unaff_s0;
  
  bVar1 = 0x40;
  if (*(short *)(unaff_s0 + 0x68) == 0) {
    bVar1 = 4;
  }
  if ((DAT_800bf8f2 & bVar1) != 0) {
    if (((*(short *)(unaff_s0 + 0x68) != 0) &&
        (func_0x80040c00(0x3e), ((int)_DAT_800e7ffe & 0x8000U) != 0)) && (DAT_800bfb08 != '\0')) {
      *(undefined4 *)(*(int *)(unaff_s0 + 0x10) + 0x24) = 0x78;
    }
    *(int *)(*(int *)(unaff_s0 + 0x10) + 0x18) = *(int *)(*(int *)(unaff_s0 + 0x10) + 0x18) + -1;
    *(undefined1 *)(unaff_s0 + 4) = 3;
  }
  return;
}

