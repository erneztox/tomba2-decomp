// FUN_80121cf8

void FUN_80121cf8(void)

{
  short sVar1;
  int unaff_s1;
  
  sVar1 = *(short *)(unaff_s1 + 0x40);
  *(short *)(unaff_s1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    *(char *)(unaff_s1 + 5) = *(char *)(unaff_s1 + 5) + '\x01';
    func_0x80074590(7,0,0);
    return;
  }
  return;
}

