// FUN_080351f8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080351f8(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if (DAT_800bf809 == '\0') {
      bVar1 = param_1[3];
      if (bVar1 == 1) {
        *(short *)(param_1 + 0x32) =
             *(short *)(*(int *)(_DAT_800bf864 + 200) + 0x30) -
             ((*(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84)) + -500);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          func_0x0012d9b4(param_1);
          param_1[0x2b] = 0;
        }
      }
      else if (bVar1 == 2) {
        func_0x0012e048(param_1);
        if (param_1[1] != '\0') {
          func_0x0004190c(param_1);
          halt_baddata();
        }
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      iVar2 = func_0x000519e0(param_1,6,_DAT_800ecfa8,0x80141ff8);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfac;
      func_0x00077c40(param_1,0x8014d94c,0);
      *(undefined2 *)(param_1 + 0x80) = 0x8c;
      *(undefined2 *)(param_1 + 0x82) = 0x118;
      *(undefined2 *)(param_1 + 0x84) = 0x88;
      *(undefined2 *)(param_1 + 0x86) = 0xc4;
      bVar1 = param_1[3];
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[4] = param_1[4] + '\x01';
      if (bVar1 == 1) {
        *(undefined2 *)(param_1 + 0x56) = 0xfc00;
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        *param_1 = 1;
        param_1[0x2b] = 0;
        param_1[0xbe] = 0;
        func_0x00041194(param_1,(int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84),0,
                        0);
        func_0x0004130c(param_1,0);
        param_1[0x5e] = 0;
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    func_0x0007778c(param_1);
    func_0x0004190c(param_1);
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      param_1[8] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bVar1 != 0) && (bVar1 < 4)) {
      if (_DAT_800e7fee != 0) {
        func_0x00040b48(0x21);
        func_0x0004d4c4(0x31,1);
        func_0x0004b0d8(param_1);
      }
      param_1[4] = 3;
    }
  }
  func_0x000518fc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

