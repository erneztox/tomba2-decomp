// FUN_80140464

/* WARNING: Control flow encountered bad instruction data */

void FUN_80140464(void)

{
  undefined8 uVar1;
  undefined4 in_t4;
  int unaff_s7;
  
  uVar1 = getCopReg(2,in_t4);
  *(undefined8 *)(unaff_s7 + 0x1e14) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

