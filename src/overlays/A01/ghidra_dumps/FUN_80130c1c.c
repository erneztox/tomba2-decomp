// FUN_80130c1c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80130c28) */

void FUN_80130c1c(void)

{
  syscall(0);
  trap(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

