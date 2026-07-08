
/* WARNING: Control flow encountered bad instruction data */

void FUN_80023e30(void)

{
  getCopReg(2,0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

