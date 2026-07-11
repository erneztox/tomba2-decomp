// FUN_80116620

void FUN_80116620(void)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  undefined1 *unaff_s3;
  
  if (*(short *)(unaff_s1 + 0x2e) < 0x4877) {
    *(undefined2 *)(unaff_s0 + 0x60) = 0;
    *(undefined1 *)(unaff_s0 + 5) = 1;
    *(undefined2 *)(unaff_s0 + 0x48) = *(undefined2 *)(unaff_s0 + 0x2e);
    *(undefined2 *)(unaff_s0 + 0x4a) = *(undefined2 *)(unaff_s0 + 0x32);
    return;
  }
  iVar1 = func_0x80083e80((int)*(short *)(unaff_s0 + 0x58));
  *(short *)(unaff_s0 + 0x2e) = *(short *)(unaff_s0 + 0x48) + (short)(iVar1 * 0xc0 >> 0xc);
  iVar1 = func_0x80083f50((int)*(short *)(unaff_s0 + 0x58));
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x4a) - ((short)(iVar1 * 0xc0 >> 0xc) + -0xc0)
  ;
  func_0x80051d20();
  *(undefined2 *)(unaff_s3 + 0x2e) = *(undefined2 *)(unaff_s1 + 0xc0);
  *(undefined2 *)(unaff_s3 + 0x32) = *(undefined2 *)(unaff_s0 + 2);
  *(undefined2 *)(unaff_s3 + 0x36) = *(undefined2 *)(unaff_s0 + 4);
  *(undefined2 *)(unaff_s3 + 0x56) = *(undefined2 *)(unaff_s2 + 0x56);
  func_0x800517f8();
  if (((*(short *)(unaff_s3 + 0xe) == 5) && ((DAT_800bfa06 & 1) == 0)) &&
     (iVar1 = func_0x80072ddc(), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801236cc;
    *(undefined1 *)(iVar1 + 3) = 0;
    *unaff_s3 = 3;
  }
  return;
}

