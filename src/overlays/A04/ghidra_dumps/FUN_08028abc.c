// FUN_08028abc

/* WARNING: Control flow encountered bad instruction data */

void FUN_08028abc(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x80) = 0x76;
      *(undefined2 *)(param_1 + 0x82) = 0xec;
      *(undefined2 *)(param_1 + 0x84) = 200;
      param_1[4] = 1;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x86) = 400;
      param_1[0x29] = 0;
      param_1[0x2b] = 0;
    }
  }
  else if (bVar1 == 2) {
    func_0x0007778c(param_1);
    func_0x001217f8(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

