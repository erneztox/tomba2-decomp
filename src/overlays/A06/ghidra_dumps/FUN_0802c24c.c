// FUN_0802c24c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802c24c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x00125010(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00124ed4(param_1);
    }
  }
  else if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

