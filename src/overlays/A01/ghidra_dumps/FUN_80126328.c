// FUN_80126328

/* WARNING: Control flow encountered bad instruction data */

void FUN_80126328(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int in_t0;
  int in_t1;
  int in_t2;
  int unaff_s3;
  int unaff_s6;
  int unaff_s8;
  int iStack00000014;
  int iStack00000018;
  
  iVar1 = (in_t0 - param_1) * 0x10000;
  iVar2 = unaff_s8 - unaff_s6;
  iStack00000014 = iVar1 / iVar2;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  iStack00000018 = (in_t2 << 0x10) / param_4;
  if (param_4 == 0) {
    trap(0x1c00);
  }
  if ((param_4 == -1) && (in_t2 << 0x10 == -0x80000000)) {
    trap(0x1800);
  }
  if (-param_4 * in_t1 + in_t2 * param_3 < 1) {
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

