
/* WARNING: Control flow encountered bad instruction data */

void FUN_8002ceb8(void)

{
  syscall(0xff800);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

