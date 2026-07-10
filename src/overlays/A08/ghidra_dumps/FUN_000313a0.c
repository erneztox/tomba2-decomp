// FUN_000313a0

/* WARNING: Control flow encountered bad instruction data */

void FUN_000313a0(void)

{
  int unaff_s1;
  
  FUN_00040d68();
  *(undefined1 *)(unaff_s1 + 6) = 1;
  *(undefined1 *)(unaff_s1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

