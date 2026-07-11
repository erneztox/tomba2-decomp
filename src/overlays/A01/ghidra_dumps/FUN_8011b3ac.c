// FUN_8011b3ac

void FUN_8011b3ac(void)

{
  short in_v0;
  int unaff_s0;
  
  *(short *)(unaff_s0 + 0x42) = in_v0 + -1;
  if ((short)(in_v0 + -1) == -1) {
    *(undefined2 *)(unaff_s0 + 0x52) = 0xffa0;
    *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
    func_0x800310f4(0x207,0xfffffff6);
    func_0x80074590(0x99,0,0);
    FUN_801244d4();
    return;
  }
  return;
}

