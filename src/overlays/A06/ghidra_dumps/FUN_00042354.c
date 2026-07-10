// FUN_00042354

/* WARNING: Control flow encountered bad instruction data */

void FUN_00042354(void)

{
  syscall(0x60eb6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

