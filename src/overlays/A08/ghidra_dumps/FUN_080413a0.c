// FUN_080413a0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080413a0(void)

{
  int unaff_s1;
  
  func_0x00040d68();
  *(undefined1 *)(unaff_s1 + 6) = 1;
  *(undefined1 *)(unaff_s1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

