// FUN_8012d2a8

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012d2a8(void)

{
  syscall(0x1800);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

