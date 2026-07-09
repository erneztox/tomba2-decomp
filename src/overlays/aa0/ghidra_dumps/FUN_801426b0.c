// FUN_801426b0

/* WARNING: Control flow encountered bad instruction data */

void FUN_801426b0(int param_1)

{
  undefined8 uVar1;
  int unaff_s4;
  undefined4 unaff_s6;
  undefined8 in_f22_23;
  
  *(undefined8 *)(unaff_s4 + 0x6e82) = in_f22_23;
  uVar1 = getCopReg(2,unaff_s6);
  *(undefined8 *)(param_1 + 0x6e82) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

