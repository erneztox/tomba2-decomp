// FUN_0801fa28

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801fa28(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x5e) != '\0') {
      return;
    }
    func_0x00118858(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x5e) == '\0') {
        func_0x0004bef4(param_1);
      }
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
  else if (bVar1 == 2) {
    func_0x0004b9c8(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

