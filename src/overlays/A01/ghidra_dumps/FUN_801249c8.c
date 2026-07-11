// FUN_801249c8

/* WARNING: Control flow encountered bad instruction data */

void FUN_801249c8(void)

{
  int in_v1;
  int unaff_s1;
  
  if (in_v1 < 2) {
    if (in_v1 == 0) {
      FUN_8012ce5c();
      *(undefined1 *)(unaff_s1 + 0x29) = 0;
    }
    else {
      *(undefined1 *)(unaff_s1 + 0x29) = 0;
    }
  }
  else if (in_v1 == 2) {
    FUN_8012d2bc();
    *(undefined1 *)(unaff_s1 + 0x29) = 0;
  }
  else {
    *(undefined1 *)(unaff_s1 + 0x29) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

