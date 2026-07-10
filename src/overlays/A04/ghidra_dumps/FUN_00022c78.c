// FUN_00022c78

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022c78(void)

{
  char in_v0;
  int unaff_s0;
  
  *(char *)(unaff_s0 + 0x5f) = in_v0 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

