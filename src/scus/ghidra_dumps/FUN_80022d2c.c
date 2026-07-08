
/* WARNING: Control flow encountered bad instruction data */

void FUN_80022d2c(void)

{
  undefined8 uVar1;
  undefined8 *in_zero;
  
  uVar1 = getCopReg(2,0);
  *in_zero = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

