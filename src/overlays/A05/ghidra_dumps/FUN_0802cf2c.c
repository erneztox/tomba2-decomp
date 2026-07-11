// FUN_0802cf2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802cf2c(void)

{
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 100) = 1;
  func_0x00123880();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

