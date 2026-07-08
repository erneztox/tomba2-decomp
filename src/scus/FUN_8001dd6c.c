
void FUN_8001dd6c(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint unaff_s0;
  uint unaff_s1;
  undefined2 *unaff_s2;
  ushort unaff_s3;
  
  do {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      if (0xf00 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(s___d__d____d__d__80010a40 + 4,s_ClearImage2_80010a64);
      }
    } while ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x400) != 0);
    do {
      unaff_s1 = unaff_s1 - unaff_s0;
      FUN_8001dd04();
      FUN_8001dd04();
      iVar2 = DAT_80026d88;
      if (unaff_s1 == 0) {
        *(ushort *)(DAT_80026d88 + 0x1aa) = *(ushort *)(DAT_80026d88 + 0x1aa) & 0xffcf;
        if ((*(ushort *)(iVar2 + 0x1ae) & 0x7ff) != unaff_s3) {
          uVar4 = 1;
          do {
            if (0xf00 < uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_8001e5ec(s___d__d____d__d__80010a40 + 4,s_LoadImage_80010a70 + 8);
            }
            uVar4 = uVar4 + 1;
          } while ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x7ff) != unaff_s3);
        }
        return;
      }
      unaff_s0 = 0x40;
      if (unaff_s1 < 0x41) {
        unaff_s0 = unaff_s1;
      }
      iVar3 = 0;
      if (0 < (int)unaff_s0) {
        do {
          uVar1 = *unaff_s2;
          unaff_s2 = unaff_s2 + 1;
          iVar3 = iVar3 + 2;
          *(undefined2 *)(iVar2 + 0x1a8) = uVar1;
        } while (iVar3 < (int)unaff_s0);
      }
      *(ushort *)(DAT_80026d88 + 0x1aa) = *(ushort *)(DAT_80026d88 + 0x1aa) & 0xffcf | 0x10;
      FUN_8001dd04();
    } while ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x400) == 0);
  } while( true );
}

