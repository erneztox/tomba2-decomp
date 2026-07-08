
/* WARNING: Control flow encountered bad instruction data */

void FUN_80028708(void)

{
  trap(0xfe400);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

