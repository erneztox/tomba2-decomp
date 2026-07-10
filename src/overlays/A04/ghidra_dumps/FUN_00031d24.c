// FUN_00031d24

/* WARNING: Control flow encountered bad instruction data */

void FUN_00031d24(void)

{
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

