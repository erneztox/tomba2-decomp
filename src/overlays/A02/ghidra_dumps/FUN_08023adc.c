// FUN_08023adc

/* WARNING: Control flow encountered bad instruction data */

void FUN_08023adc(int param_1)

{
  byte bVar1;
  
  func_0x00041098();
  func_0x0004190c(param_1);
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    func_0x0011cbd4(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x0011cb20(param_1);
    }
  }
  else if (bVar1 == 2) {
    func_0x0011c710(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0011ccd0(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

