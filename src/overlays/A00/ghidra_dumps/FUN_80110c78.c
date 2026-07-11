// FUN_80110c78

void FUN_80110c78(void)

{
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 0x70) = 1;
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  func_0x80070724(1,0,99);
  func_0x80070888(0x801486a0);
  FUN_80119d04();
  return;
}

