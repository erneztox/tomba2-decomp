// FUN_8012674c

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012674c(void)

{
  int unaff_s2;
  int unaff_s3;
  int unaff_s6;
  int unaff_s8;
  
  do {
    unaff_s2 = unaff_s2 + 1;
    if (unaff_s6 <= unaff_s2) {
      while( true ) {
        if (unaff_s8 < unaff_s2) {
          return;
        }
        if ((-1 < unaff_s2) && (unaff_s2 < *(short *)(unaff_s3 + 10))) break;
        unaff_s2 = unaff_s2 + 1;
      }
      FUN_8012f804();
      return;
    }
  } while ((unaff_s2 < 0) || (*(short *)(unaff_s3 + 10) <= unaff_s2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

