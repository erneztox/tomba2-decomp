// FUN_80116740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80116740(void)

{
  short in_v0;
  ushort uVar1;
  int iVar2;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  undefined1 *unaff_s3;
  
  *(ushort *)(unaff_s0 + 0x4c) = in_v0 + 1U;
  if ((in_v0 + 1U & 7) == 0) {
    _DAT_800bf844 = unaff_s0;
    *(char *)(unaff_s1 + 5) = *(char *)(unaff_s1 + 5) + '\x01';
    *(undefined2 *)(unaff_s1 + 0x36) = *(undefined2 *)(unaff_s0 + 4);
    *(undefined2 *)(unaff_s1 + 0x56) = *(undefined2 *)(unaff_s3 + 0x56);
    func_0x800517f8();
    return;
  }
  uVar1 = func_0x8009a450();
  *(ushort *)(unaff_s0 + 0x4a) = *(short *)(unaff_s0 + 0x4a) - (uVar1 & 7);
  iVar2 = func_0x80083e80((int)*(short *)(unaff_s0 + 0x58));
  *(short *)(unaff_s0 + 0x2e) = *(short *)(unaff_s0 + 0x48) + (short)(iVar2 * 0xc0 >> 0xc);
  iVar2 = func_0x80083f50((int)*(short *)(unaff_s0 + 0x58));
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x4a) - ((short)(iVar2 * 0xc0 >> 0xc) + -0xc0)
  ;
  func_0x80051d20();
  *(undefined2 *)(unaff_s3 + 0x2e) = *(undefined2 *)(unaff_s1 + 0xc0);
  *(undefined2 *)(unaff_s3 + 0x32) = *(undefined2 *)(unaff_s0 + 2);
  *(undefined2 *)(unaff_s3 + 0x36) = *(undefined2 *)(unaff_s0 + 4);
  *(undefined2 *)(unaff_s3 + 0x56) = *(undefined2 *)(unaff_s2 + 0x56);
  func_0x800517f8();
  if (((*(short *)(unaff_s3 + 0xe) == 5) && ((DAT_800bfa06 & 1) == 0)) &&
     (iVar2 = func_0x80072ddc(), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x801236cc;
    *(undefined1 *)(iVar2 + 3) = 0;
    *unaff_s3 = 3;
  }
  return;
}

