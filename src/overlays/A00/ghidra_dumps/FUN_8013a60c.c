// FUN_8013a60c

void FUN_8013a60c(int param_1)

{
  undefined2 in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x4e) = in_v1;
  if ((0 < param_1) && ((DAT_800e7e80 & 2) == 0)) {
    if ((*(ushort *)(unaff_s0 + 0x42) & 7) == 0) {
      func_0x8003116c(0,unaff_s0 + 0x2c,0xfffffffb);
    }
    *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
    FUN_801406e4();
    FUN_80143648();
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x42) = 0xf;
                    /* WARNING: Subroutine does not return */
  *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
  FUN_801402b8();
}

