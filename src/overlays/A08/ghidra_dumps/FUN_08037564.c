// FUN_08037564

/* WARNING: Control flow encountered bad instruction data */

void FUN_08037564(int param_1)

{
  byte bVar1;
  
  func_0x0007778c();
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    func_0x00130424(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x0013036c(param_1);
    }
  }
  else if (bVar1 == 2) {
    func_0x00130484(param_1);
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x000518fc(param_1);
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

