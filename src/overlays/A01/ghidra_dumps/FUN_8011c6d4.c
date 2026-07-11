// FUN_8011c6d4

void FUN_8011c6d4(void)

{
  undefined4 uVar1;
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  
  *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
  *(undefined1 *)(in_v1 + 0x137) = 2;
  func_0x80074590(0x17,0,0xf);
  uVar1 = func_0x80027a4c(*(undefined4 *)(unaff_s1 + 0x60),*(undefined4 *)(unaff_s1 + 0x70));
  *(undefined4 *)(unaff_s1 + 100) = uVar1;
  return;
}

