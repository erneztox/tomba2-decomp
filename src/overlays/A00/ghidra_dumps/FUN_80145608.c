// FUN_80145608

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8014560c) */

void FUN_80145608(void)

{
  syscall(0);
  trap(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

