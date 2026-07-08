
/* WARNING: Control flow encountered bad instruction data */

void FUN_8002b3bc(void)

{
  syscall(0xff400);
  syscall(0xff400);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

