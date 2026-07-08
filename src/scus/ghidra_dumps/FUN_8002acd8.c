
/* WARNING: Control flow encountered bad instruction data */

void FUN_8002acd8(void)

{
  syscall(0xc00);
  syscall(0xc00);
  syscall(0xc00);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

