// FUN_8011930c

void FUN_8011930c(void)

{
  short sVar1;
  int unaff_s1;
  
  sVar1 = *(short *)(unaff_s1 + 0x40);
  *(short *)(unaff_s1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    func_0x80074590(0x1b,0,0);
    func_0x800315d4(unaff_s1 + 0x2c);
    *(undefined1 *)(unaff_s1 + 4) = 3;
  }
  return;
}

