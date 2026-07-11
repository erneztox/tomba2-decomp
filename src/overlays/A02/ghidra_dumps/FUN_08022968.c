// FUN_08022968

/* WARNING: Control flow encountered bad instruction data */

void FUN_08022968(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_800bfa03 < 3) {
      if (param_1[5] == '\0') {
        iVar2 = func_0x0007778c(param_1);
        if (iVar2 == 0) {
          return;
        }
        if (param_1[0x2b] == '\0') {
          return;
        }
        func_0x00040cdc(param_1,0,0x800a3cd0);
        param_1[0x70] = 2;
        param_1[6] = 0;
        param_1[5] = param_1[5] + '\x01';
      }
      else if (param_1[5] == '\x01') {
        param_1[1] = 1;
        func_0x00077ebc(param_1);
        if (param_1[0x70] == -1) {
          if (param_1[6] == '\0') {
            func_0x00040d68(param_1,0x8012a1c8);
            param_1[0x70] = 2;
            param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          param_1[0x2b] = 0;
          param_1[5] = 0;
        }
        func_0x00041098(param_1);
      }
    }
    else {
      param_1[4] = 3;
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
      iVar2 = func_0x00051b70(param_1,0xc,0x3a);
      if (iVar2 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x3c;
      *(undefined2 *)(param_1 + 0x82) = 0x78;
      *(undefined2 *)(param_1 + 0x84) = 100;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x86) = 200;
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      param_1[4] = param_1[4] + '\x01';
      func_0x000517f8();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

