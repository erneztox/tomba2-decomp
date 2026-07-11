// FUN_0802f830

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802f830(void)

{
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

