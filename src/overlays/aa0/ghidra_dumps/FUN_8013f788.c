// FUN_8013f788

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8013f798) */

void FUN_8013f788(void)

{
  (*(code *)0x0)();
  syscall(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

