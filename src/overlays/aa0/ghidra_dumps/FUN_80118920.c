// FUN_80118920

void FUN_80118920(void)

{
  int in_v0;
  undefined4 uVar1;
  int unaff_s0;
  
  if (in_v0 != 0) {
    *(undefined **)(in_v0 + 0x1c) = &DAT_8011d988;
    *(undefined1 *)(in_v0 + 3) = *(undefined1 *)(unaff_s0 + 3);
    *(undefined2 *)(in_v0 + 0x6c) = *(undefined2 *)(unaff_s0 + 8);
    *(int *)(unaff_s0 + 0xc) = in_v0;
    uVar1 = 0x546;
    if (*(char *)(unaff_s0 + 3) == '\x03') {
      uVar1 = 0x1e;
    }
    *(undefined4 *)(unaff_s0 + 0x10) = uVar1;
  }
  return;
}

