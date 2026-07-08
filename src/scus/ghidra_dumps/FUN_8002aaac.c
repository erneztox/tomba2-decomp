
/* WARNING: Control flow encountered bad instruction data */

void FUN_8002aaac(void)

{
  syscall(0x1400);
  syscall(0x1400);
  syscall(0x1400);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

