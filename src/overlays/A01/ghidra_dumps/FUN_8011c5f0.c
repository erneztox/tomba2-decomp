// FUN_8011c5f0

void FUN_8011c5f0(void)

{
  undefined4 uVar1;
  undefined1 *unaff_s0;
  int unaff_s1;
  
  if (DAT_800bf871 == ' ') {
    *(undefined2 *)(unaff_s0 + 0x40) = 0xf;
    *unaff_s0 = 2;
    *(undefined2 *)(unaff_s0 + 0x50) = 0x400;
    unaff_s0[5] = unaff_s0[5] + '\x01';
    func_0x80072efc();
  }
  else {
    unaff_s0[5] = 3;
  }
  uVar1 = func_0x80027a4c(*(undefined4 *)(unaff_s1 + 0x60),*(undefined4 *)(unaff_s1 + 0x70));
  *(undefined4 *)(unaff_s1 + 100) = uVar1;
  return;
}

