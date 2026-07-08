
void FUN_80019174(uint *param_1)

{
  uint in_v1;
  int unaff_s0;
  uint unaff_s1;
  undefined4 *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  undefined4 *unaff_s5;
  
  do {
    *param_1 = in_v1;
    if ((code *)*unaff_s2 != (code *)0x0) {
      (*(code *)*unaff_s2)();
    }
    do {
      unaff_s1 = unaff_s1 >> 1;
      unaff_s0 = unaff_s0 + 1;
      unaff_s2 = unaff_s2 + 1;
      if (unaff_s1 != 0) goto LAB_80019148;
      do {
        do {
          unaff_s1 = *DAT_800267c4 >> 0x18 & 0x7f;
          if (unaff_s1 == 0) {
            if (((*DAT_800267c4 & 0xff000000) != 0x80000000) && ((*DAT_800267c4 & 0x8000) == 0)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_8001e5ec(&DAT_80010524,*DAT_800267c4);
          }
          unaff_s0 = 0;
          unaff_s2 = unaff_s5;
        } while (unaff_s1 == 0);
LAB_80019148:
      } while (6 < unaff_s0);
    } while ((unaff_s1 & 1) == 0);
    in_v1 = *DAT_800267c4 & (unaff_s4 << (unaff_s0 + 0x18U & 0x1f) | unaff_s3);
    param_1 = DAT_800267c4;
  } while( true );
}

