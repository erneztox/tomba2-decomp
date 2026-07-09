// FUN_80140f80

/* WARNING: Control flow encountered bad instruction data */

void FUN_80140f80(void)

{
  undefined4 uVar1;
  int in_zero;
  
  uVar1 = getCopReg(2,0);
  *(undefined4 *)(in_zero + -0xa98) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

