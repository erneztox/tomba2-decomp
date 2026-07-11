// FUN_08033670

/* WARNING: Control flow encountered bad instruction data */

void FUN_08033670(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_800bf816 == '\0') {
      if (param_1[0x5e] == '\0') {
        func_0x0012c16c(param_1);
      }
      else if (param_1[0x5e] == '\x01') {
        func_0x0012c340(param_1);
        iVar2 = func_0x0007778c(param_1);
        if (iVar2 != 0) {
          func_0x00051844(param_1);
        }
        param_1[0x2b] = 0;
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[0x5e] != '\0') {
      return;
    }
    if (DAT_800bf8d9 == -1) {
      param_1[4] = 3;
    }
    else {
      param_1[5] = 0;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar2 = func_0x00051b70(param_1,0xc,0x28);
      if (iVar2 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 100;
      *(undefined2 *)(param_1 + 0x82) = 200;
      *(undefined2 *)(param_1 + 0xe) = 0;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x84) = 0x8c;
      *(undefined2 *)(param_1 + 0x86) = 0x8c;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0xe) = 0;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

