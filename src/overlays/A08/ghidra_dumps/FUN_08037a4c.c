// FUN_08037a4c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08037a4c(void)

{
  short in_v0;
  int unaff_s0;
  
  *(short *)(unaff_s0 + 0x32) = in_v0 + -0x46;
  *(char *)(unaff_s0 + 0x78) = *(char *)(unaff_s0 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

