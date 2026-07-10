// FUN_00022f04

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022f04(void)

{
  int unaff_s0;
  undefined1 unaff_s2;
  
  *(undefined1 *)(unaff_s0 + 6) = 0;
  *(undefined1 *)(unaff_s0 + 5) = unaff_s2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

