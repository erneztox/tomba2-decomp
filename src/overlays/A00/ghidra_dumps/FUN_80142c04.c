// FUN_80142c04

/* WARNING: Control flow encountered bad instruction data */

void FUN_80142c04(int param_1)

{
  undefined8 uVar1;
  int in_t4;
  int unaff_gp;
  undefined8 in_f0_1;
  
  uVar1 = getCopReg(2,0);
  *(undefined8 *)(unaff_gp + -0x7f80) = uVar1;
  uVar1 = getCopReg(2,0);
  *(undefined8 *)(in_t4 + -0x7f80) = uVar1;
  *(undefined8 *)(param_1 + -0x7f80) = in_f0_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

