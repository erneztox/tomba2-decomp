
undefined4 FUN_8001ba64(void)

{
  byte bVar1;
  uint in_v0;
  int in_v1;
  int unaff_s0;
  byte *unaff_s1;
  int unaff_s3;
  int unaff_s4;
  byte *unaff_s5;
  int unaff_s6;
  
  while( true ) {
    unaff_s1 = unaff_s1 + in_v1;
    if (in_v0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&DAT_80010918,*(undefined4 *)(unaff_s0 + -0x7ffc5b18),
                   *(undefined4 *)(unaff_s0 + -0x7ffc5b20),*(undefined4 *)(unaff_s0 + -0x7ffc5b1c));
    }
    if (0x7f < unaff_s3) break;
    if ((unaff_s5 <= unaff_s1) || (*unaff_s1 == 0)) {
      if (unaff_s3 < 0x80) {
        *(undefined4 *)(unaff_s3 * 0x2c + -0x7ffc5b1c) = 0;
      }
      break;
    }
    unaff_s0 = unaff_s3 * 0x2c;
    *(undefined4 *)(unaff_s0 + unaff_s4) = *(undefined4 *)(unaff_s1 + 2);
    bVar1 = unaff_s1[6];
    unaff_s3 = unaff_s3 + 1;
    *(int *)(unaff_s0 + -0x7ffc5b20) = unaff_s3;
    *(uint *)(unaff_s0 + -0x7ffc5b1c) = (uint)bVar1;
    FUN_8001e44c(unaff_s0 + unaff_s6,unaff_s1 + 8,*unaff_s1);
    *(undefined1 *)(unaff_s0 + unaff_s6 + (uint)*unaff_s1) = 0;
    in_v1 = (uint)*unaff_s1 + (*unaff_s1 & 1) + 8;
    in_v0 = (uint)(DAT_800268d8 < 2);
  }
  DAT_80026be8 = 0;
  if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_8001092c,unaff_s3);
  }
  return 1;
}

