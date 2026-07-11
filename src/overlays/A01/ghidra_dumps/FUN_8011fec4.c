// FUN_8011fec4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80120148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011fec4(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_s0;
  short *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  int unaff_s6;
  int unaff_s8;
  short in_stack_00000010;
  short in_stack_00000018;
  
  do {
    if ((DAT_800e7fc7 & 1) == 0) {
      _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x82) - (*(short *)(unaff_s3 + 0x80) + (short)unaff_s0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x80) + (short)unaff_s0;
    do {
      do {
        do {
          iVar3 = unaff_s2;
          FUN_80128864();
          iVar2 = func_0x80133f38();
          if (iVar2 != 0) {
            unaff_s1[1] = unaff_s1[1] + -0xa0;
            unaff_s1[5] = unaff_s1[5] + -0xa0;
            *unaff_s5 = (int)((ushort)unaff_s1[0xd] - 0xa0) >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          unaff_s1[1] = unaff_s1[1] + -0x50;
          unaff_s1[5] = unaff_s1[5] + -0x50;
          unaff_s1[9] = unaff_s1[9] + -0x50;
          unaff_s2 = iVar3 + 1;
          unaff_s1[0xd] = unaff_s1[0xd] + -0x50;
          if (unaff_s8 + 2 < unaff_s2) {
            func_0x80133f38();
            FUN_801290e4();
            return;
          }
        } while (*(short *)(unaff_s3 + 0x7e) == 0);
        iVar2 = func_0x80083e80((int)*(short *)(unaff_s3 + 0x7c));
        iVar3 = (iVar3 + 2) * 0x800;
        if (unaff_s6 == 0) {
          trap(0x1c00);
        }
        if ((unaff_s6 == -1) && (iVar3 == -0x80000000)) {
          trap(0x1800);
        }
        sVar1 = *(short *)(unaff_s3 + 0x7e);
        iVar3 = func_0x80083e80(iVar3 / unaff_s6);
        if (unaff_s6 == 0) {
          trap(0x1c00);
        }
        if ((unaff_s6 == -1) && (unaff_s2 * 0x800 == -0x80000000)) {
          trap(0x1800);
        }
        iVar4 = (int)(short)(sVar1 * iVar2 >> 0xc);
        sVar1 = (short)(iVar4 * iVar3 >> 0xc);
        *unaff_s1 = sVar1 + in_stack_00000018;
        unaff_s1[4] = sVar1 + in_stack_00000010;
        iVar2 = func_0x80083e80((unaff_s2 * 0x800) / unaff_s6);
        unaff_s0 = iVar4 * iVar2 >> 0xc;
        unaff_s1[8] = (short)unaff_s0 + in_stack_00000018;
        unaff_s1[0xc] = (short)unaff_s0 + in_stack_00000010;
      } while (*(char *)(unaff_s3 + 0x29) == '\0');
    } while (((int)_DAT_1f800162 < *(int *)(unaff_s4 + 0x30) + (int)unaff_s1[1]) ||
            (*(int *)(unaff_s4 + 0x30) + (int)unaff_s1[9] <= (int)_DAT_1f800162));
  } while( true );
}

