// FUN_080370d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080370d4(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      func_0x0007778c(param_1);
      func_0x00041098(param_1);
      func_0x0004190c(param_1);
      bVar1 = param_1[5];
      if (bVar1 == 1) {
        func_0x00130424(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        func_0x0013036c(param_1);
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      func_0x00130484(param_1);
      if (param_1[1] != '\0') {
        halt_baddata();
      }
    }
    else {
      if (param_1[3] != '\x01') {
        param_1[0x2b] = 0;
        halt_baddata();
      }
      param_1[1] = 1;
      func_0x00077e7c(param_1);
      func_0x00041098(param_1);
      func_0x0004190c(param_1);
      bVar1 = param_1[5];
      if (bVar1 == 1) {
        func_0x00130644(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        func_0x001305ac(param_1);
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      func_0x001306a4(param_1);
      func_0x000518fc(param_1);
    }
    param_1[0x2b] = 0;
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
      if (param_1[3] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = func_0x000519e0(param_1,0xb,_DAT_800ecf94,0x8014168c);
      uVar3 = _DAT_800ecfa8;
      if (iVar2 != 0) {
        return;
      }
      *param_1 = 9;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      param_1[4] = param_1[4] + '\x01';
      if (param_1[3] == '\0') {
        func_0x0012fdec(param_1);
      }
      else if (param_1[3] == '\x01') {
        uVar3 = func_0x00124a48(param_1);
        *(undefined4 *)(param_1 + 0x14) = uVar3;
        func_0x00040cdc(param_1,0x80148e68,0x800a3d40);
        func_0x00041718(param_1,1,0);
        *(undefined2 *)(param_1 + 0x56) = 0x140;
        if (DAT_800bf8f8 == -1) {
          param_1[0x5e] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (DAT_800bf8f8 == '\0') {
          param_1[0x5e] = 0;
        }
        else {
          if (DAT_800bfad7 == '\0') {
            param_1[0x5e] = 1;
            *param_1 = 2;
            *(undefined2 *)(param_1 + 0x80) = 0xae;
            *(undefined2 *)(param_1 + 0x82) = 0x15c;
            *(undefined2 *)(param_1 + 0x84) = 0x96;
            *(undefined2 *)(param_1 + 0x86) = 300;
            halt_baddata();
          }
          param_1[0x5e] = 2;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

