
/* WARNING: Control flow encountered bad instruction data */

void FUN_8002c59c(void)

{
  trap(0x800);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

