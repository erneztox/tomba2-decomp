// FUN_80121918

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80121918(void)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  if (in_v0 < 0x262) {
    in_v0 = in_v0 + 4;
  }
  iVar1 = func_0x80083f50();
  iVar2 = func_0x80083e80();
  *(short *)(unaff_s4 + 2) = *(short *)(unaff_s3 + 0x2e) + (short)(iVar1 * in_v0 >> 0xc);
  *(short *)(unaff_s4 + 10) = *(short *)(unaff_s3 + 0x36) - (short)(iVar2 * in_v0 >> 0xc);
  iVar1 = (uint)*(ushort *)(unaff_s4 + 6) -
          ((int)((uint)*(ushort *)(*(int *)(unaff_s3 + 0xc0) + 0x16) << 0x10) >> 0x16);
  *(short *)(unaff_s4 + 6) = (short)iVar1;
  if (iVar1 * 0x10000 >> 0x10 <
      (int)*(short *)(unaff_s3 + 0x32) + (int)*(short *)(*(int *)(unaff_s3 + 0xc0) + 2) + -300) {
    *(short *)(unaff_s4 + 6) =
         *(short *)(unaff_s3 + 0x32) + *(short *)(*(int *)(unaff_s3 + 0xc0) + 2) + -300;
  }
  if (unaff_s5 != 0) {
    _DAT_1f800184 = 1;
  }
  return;
}

