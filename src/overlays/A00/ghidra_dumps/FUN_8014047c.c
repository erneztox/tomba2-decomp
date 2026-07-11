// FUN_8014047c

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Control flow encountered bad instruction data */

void FUN_8014047c(int param_1)

{
  undefined8 uVar1;
  int in_t6;
  int in_t7;
  int unaff_s1;
  undefined4 unaff_s4;
  int in_t8;
  undefined8 in_f24_25;
  
  uVar1 = getCopReg(2,unaff_s4);
  *(undefined8 *)(param_1 + 0x21ca) = uVar1;
  uVar1 = getCopReg(2,param_1);
  *(undefined8 *)(unaff_s1 + 0x238c) = uVar1;
  func_0x8e03e570();
  *(undefined8 *)(in_t6 + 0x2454) = in_f24_25;
  if (in_t7 != in_t8) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

