
/* WARNING: Control flow encountered bad instruction data */

void FUN_8002a628(void)

{
  syscall(0xfe800);
  syscall(0xfe800);
  syscall(0xfe800);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

