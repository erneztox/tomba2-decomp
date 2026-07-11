// FUN_8011d2c4

/* WARNING: Control flow encountered bad instruction data */

void FUN_8011d2c4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int in_t0;
  int in_t1;
  uint in_t2;
  int unaff_s0;
  int unaff_s3;
  int unaff_s6;
  int unaff_s8;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
LAB_8012632c:
      if (unaff_s8 == unaff_s6) {
        trap(0x1c00);
      }
      if ((unaff_s8 - unaff_s6 == -1) && ((in_t0 - param_1 & 0xffffU) == 0x8000)) {
        trap(0x1800);
      }
      if (param_4 == 0) {
        trap(0x1c00);
      }
      if ((param_4 == -1) && ((in_t2 & 0xffff) == 0x8000)) {
        trap(0x1800);
      }
      if ((int)(-param_4 * in_t1 + in_t2 * param_3) < 1) {
        for (; param_2 < unaff_s6; param_2 = param_2 + 1) {
          if ((-1 < param_2) && (param_2 < *(short *)(unaff_s3 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        for (; param_2 <= unaff_s8; param_2 = param_2 + 1) {
          if ((-1 < param_2) && (param_2 < *(short *)(unaff_s3 + 10))) {
            FUN_8012f804();
            return;
          }
        }
      }
      else {
        for (; param_2 < unaff_s6; param_2 = param_2 + 1) {
          if ((-1 < param_2) && (param_2 < *(short *)(unaff_s3 + 10))) {
            FUN_8012f468();
            return;
          }
        }
        if (param_2 <= unaff_s8) {
          while ((param_2 < 0 || (*(short *)(unaff_s3 + 10) <= param_2))) {
            param_2 = param_2 + 1;
            if (unaff_s8 < param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      return;
    }
    if ((*(char *)(param_2 + 0x2a) == *(char *)(unaff_s0 + 0x2a)) &&
       (*(char *)(param_2 + 5) == '\0')) {
      *(char *)(unaff_s0 + 5) = (char)param_3;
      DAT_1f800137 = 2;
      FUN_80126328();
      return;
    }
  }
  else if (param_1 == 2) {
    iVar1 = func_0x80073328();
    if (iVar1 != 0) {
      *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
      FUN_80126328();
      return;
    }
  }
  else {
    if (param_1 != 3) goto LAB_8012632c;
    if (*(char *)(param_2 + 0x2a) != *(char *)(unaff_s0 + 0x2a)) {
      *(undefined1 *)(unaff_s0 + 5) = 0;
    }
  }
  if (DAT_800bf873 == '\0') {
    func_0x800735f4();
  }
  return;
}

