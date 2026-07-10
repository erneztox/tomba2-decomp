// FUN_0002313c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002313c(void)

{
  undefined1 in_v0;
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 5) = in_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

