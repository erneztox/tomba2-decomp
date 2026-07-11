// FUN_801422b4

/* WARNING: Control flow encountered bad instruction data */

void FUN_801422b4(void)

{
  int in_zero;
  undefined4 unaff_retaddr;
  
  setCopReg(2,unaff_retaddr,*(undefined8 *)(in_zero + -0x27f1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

