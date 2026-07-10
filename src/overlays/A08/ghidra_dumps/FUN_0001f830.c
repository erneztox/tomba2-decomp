// FUN_0001f830

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001f830(void)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  
  if (in_v1 != in_v0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_s0 + 1) = (char)in_v1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

