// FUN_801218a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801218a0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  iVar4 = (int)(((uint)*(ushort *)(unaff_s4 + 10) - (uint)*(ushort *)(unaff_s3 + 0x36)) * 0x10000)
          >> 0x10;
  iVar2 = (int)(((uint)*(ushort *)(unaff_s4 + 2) - (uint)*(ushort *)(unaff_s3 + 0x2e)) * 0x10000) >>
          0x10;
  iVar1 = func_0x80085690(-iVar4,iVar2);
  uVar3 = iVar1 + ((int)*(short *)(*(int *)(unaff_s3 + 0xc0) + 0x16) >> (unaff_s2 & 0x1f)) & 0xfff;
  iVar1 = func_0x80084080(iVar2 * iVar2 + iVar4 * iVar4);
  if (iVar1 < 0x262) {
    iVar1 = iVar1 + 4;
  }
  iVar2 = func_0x80083f50(uVar3);
  iVar4 = func_0x80083e80(uVar3);
  *(short *)(unaff_s4 + 2) = *(short *)(unaff_s3 + 0x2e) + (short)(iVar2 * iVar1 >> 0xc);
  *(short *)(unaff_s4 + 10) = *(short *)(unaff_s3 + 0x36) - (short)(iVar4 * iVar1 >> 0xc);
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

