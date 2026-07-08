
/* WARNING: Control flow encountered bad instruction data */

void FUN_800286f8(void)

{
  trap(0xfe400);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

