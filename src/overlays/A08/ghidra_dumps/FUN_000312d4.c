// FUN_000312d4

/* WARNING: Control flow encountered bad instruction data */

void FUN_000312d4(void)

{
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 0x70) = 2;
  *(undefined1 *)(unaff_s1 + 6) = 0;
  *(undefined1 *)(unaff_s1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

