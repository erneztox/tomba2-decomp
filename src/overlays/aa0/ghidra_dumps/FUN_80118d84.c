// FUN_80118d84

void FUN_80118d84(void)

{
  int in_v1;
  undefined1 *unaff_s0;
  undefined1 unaff_s1;
  
  if (in_v1 != 0) {
    FUN_80121e04();
    return;
  }
  *unaff_s0 = 9;
  *(undefined2 *)(unaff_s0 + 0x80) = 0x50;
  *(undefined2 *)(unaff_s0 + 0x82) = 0xa0;
  *(undefined2 *)(unaff_s0 + 0x84) = 0x80;
  unaff_s0[5] = unaff_s1;
  *(undefined2 *)(unaff_s0 + 0x86) = 0xe0;
  unaff_s0[0xb] = 0;
  func_0x80077cfc();
  FUN_80121e04();
  return;
}

