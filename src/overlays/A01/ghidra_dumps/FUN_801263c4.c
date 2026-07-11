// FUN_801263c4

/* WARNING: Control flow encountered bad instruction data */

void FUN_801263c4(undefined4 param_1,int param_2)

{
  int unaff_s3;
  int unaff_s6;
  int unaff_s8;
  
  while( true ) {
    if (unaff_s6 <= param_2) {
      if (unaff_s8 < param_2) {
        return;
      }
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
    if ((-1 < param_2) && (param_2 < *(short *)(unaff_s3 + 10))) break;
    param_2 = param_2 + 1;
  }
  FUN_8012f468();
  return;
}

