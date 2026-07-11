// FUN_0802f830

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802f830(void)

{
  char in_v0;
  int unaff_s0;
  
  *(char *)(unaff_s0 + 5) = in_v0 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

