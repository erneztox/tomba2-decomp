// FUN_00027058

/* WARNING: Control flow encountered bad instruction data */

void FUN_00027058(void)

{
  char in_v0;
  int unaff_s0;
  
  *(char *)(unaff_s0 + 6) = in_v0 + '\x01';
  func_0x00074590();
  func_0x0004bd64();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

