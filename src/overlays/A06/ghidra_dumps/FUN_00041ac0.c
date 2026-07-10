// FUN_00041ac0

/* WARNING: Control flow encountered bad instruction data */

void FUN_00041ac0(void)

{
  syscall(0x60eb6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

