// FUN_8011d82c

void FUN_8011d82c(void)

{
  undefined1 *unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x44) = 0x800;
  *unaff_s0 = 1;
  *(undefined2 *)(unaff_s0 + 0x80) = 0x1e;
  *(undefined2 *)(unaff_s0 + 0x82) = 0x3c;
  *(undefined2 *)(unaff_s0 + 0x84) = 0x3c;
  *(undefined2 *)(unaff_s0 + 0x86) = 0x5a;
  unaff_s0[5] = 2;
  unaff_s0[6] = 4;
  return;
}

