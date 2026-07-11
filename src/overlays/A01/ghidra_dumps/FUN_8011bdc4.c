// FUN_8011bdc4

void FUN_8011bdc4(void)

{
  int in_v1;
  undefined1 *unaff_s0;
  undefined1 unaff_s2;
  
  if (in_v1 == 6) {
    *unaff_s0 = 2;
    unaff_s0[5] = unaff_s2;
    *(undefined2 *)(unaff_s0 + 0x50) = 0x400;
    func_0x80072efc();
    FUN_80124efc();
    return;
  }
  unaff_s0[5] = 2;
  FUN_80124efc();
  return;
}

