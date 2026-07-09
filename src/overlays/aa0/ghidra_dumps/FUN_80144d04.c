// FUN_80144d04

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80144d0c) */

void FUN_80144d04(void)

{
  syscall(0);
  trap(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

