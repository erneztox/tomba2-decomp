// FUN_8010e408

void FUN_8010e408(void)

{
  int in_v0;
  undefined1 unaff_s0;
  int unaff_s1;
  undefined1 unaff_s2;
  
  if (-1 < in_v0) {
    func_0x80040b48(7);
    func_0x8004d4c4(0x29,1);
    func_0x8004b0d8();
    *(undefined1 *)(unaff_s1 + 0x5e) = unaff_s0;
    *(undefined1 *)(unaff_s1 + 4) = unaff_s2;
    *(undefined1 *)(unaff_s1 + 5) = 0;
    *(undefined1 *)(unaff_s1 + 6) = 0;
    DAT_800bf9e5 = 6;
    FUN_801173f0();
    return;
  }
  return;
}

