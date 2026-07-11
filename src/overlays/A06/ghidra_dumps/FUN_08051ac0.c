// FUN_08051ac0

/* WARNING: Control flow encountered bad instruction data */

void FUN_08051ac0(void)

{
  syscall(0x60eb6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

