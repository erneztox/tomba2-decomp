// FUN_08033870

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08033870(void)

{
  short sVar1;
  int iVar2;
  ushort unaff_s0;
  short unaff_s1;
  short unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  
  sVar1 = *(short *)(unaff_s3 + 0x56) + 0x40;
  *(short *)(unaff_s3 + 0x56) = sVar1;
  if (0x3ff < sVar1) {
    *(undefined2 *)(unaff_s3 + 0x56) = 0x400;
    *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 2) = 0;
    *(short *)(unaff_s3 + 0x4e) = *(short *)(unaff_s3 + 0x54) >> 3;
    *(char *)(unaff_s3 + 7) = *(char *)(unaff_s3 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s6 == 0) {
    if (*(short *)(unaff_s3 + 100) == 0) {
      iVar2 = func_0x0012d8e4();
      if (iVar2 != 0) {
        *(undefined2 *)(unaff_s3 + 100) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08033a8c;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(unaff_s3 + 0x14) + 0xc4);
    unaff_s0 = *(ushort *)(iVar2 + 8);
    if (0x7ff < *(short *)(iVar2 + 8)) {
      unaff_s0 = unaff_s0 | 0xf000;
    }
    iVar2 = func_0x0012d8e4();
    if ((iVar2 != 0) && (unaff_s6 == 2)) {
      if (*(int *)(unaff_s3 + 0x10) == _DAT_1f800240) {
        *(undefined4 *)(unaff_s3 + 0x10) = _DAT_1f800248;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined4 *)(unaff_s3 + 0x10) = _DAT_1f80024c;
      *(undefined2 *)(unaff_s3 + 0x66) = 3;
      *(undefined2 *)(unaff_s3 + 0x42) = 0x20;
      *(undefined1 *)(unaff_s3 + 7) = 0;
      *(char *)(unaff_s3 + 6) = *(char *)(unaff_s3 + 6) + '\x01';
    }
LAB_08033a8c:
    if (*(short *)(unaff_s3 + 100) == 0) goto LAB_0012ccd4;
  }
  *(ushort *)(unaff_s3 + 0x58) = unaff_s0;
LAB_0012ccd4:
  *(short *)(unaff_s3 + 0x2e) =
       *(short *)(unaff_s5 + 0x2c) + (short)((int)unaff_s1 * (int)*(short *)(unaff_s3 + 0x40) >> 6);
  *(short *)(unaff_s3 + 0x32) =
       *(short *)(unaff_s5 + 0x30) + (short)((int)unaff_s2 * (int)*(short *)(unaff_s3 + 0x40) >> 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

