
/* WARNING: Control flow encountered bad instruction data */

void FUN_8002c4bc(void)

{
  trap(0x800);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

