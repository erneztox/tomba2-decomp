// FUN_8013b024

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8013b04c) */

void FUN_8013b024(int param_1)

{
  if ((*(ushort *)(param_1 + 2) & 1) != 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

