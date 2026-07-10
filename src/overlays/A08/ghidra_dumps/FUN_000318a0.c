// FUN_000318a0

/* WARNING: Control flow encountered bad instruction data */

void FUN_000318a0(void)

{
  undefined1 in_v0;
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 6) = in_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

