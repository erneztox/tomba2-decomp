// FUN_0803288c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803288c(void)

{
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 6) = 0;
  *(undefined1 *)(unaff_s0 + 5) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

