// FUN_00029664

/* WARNING: Control flow encountered bad instruction data */

void FUN_00029664(void)

{
  int unaff_s1;
  
  *(char *)(unaff_s1 + 0x78) = *(char *)(unaff_s1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

