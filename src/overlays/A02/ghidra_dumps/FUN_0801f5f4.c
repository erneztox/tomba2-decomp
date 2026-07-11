// FUN_0801f5f4

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801f5f4(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 != 0) {
      if (param_1[0x2b] == '\x01') {
        uVar3 = (uint)DAT_800bf9c7;
        func_0x0004ed94((int)*(short *)((uVar3 & 0x7f) * 2 + -0x7fed62ac),0x41);
        iVar2 = (uVar3 & 0x7f) + 1;
        *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar2 * 2 + -0x7fed62b4);
        DAT_800bf9c7 = DAT_800bf9c7 + 1;
        func_0x000517f8(param_1);
        param_1[0x2b] = 0;
        if (iVar2 == 3) {
          func_0x00040c00(0xc);
          DAT_800bf9c7 = DAT_800bf9c7 | 0x80;
          param_1[4] = 2;
          *param_1 = 3;
          param_1[5] = 0x80;
        }
      }
      if (param_1[5] == '\0') {
        bVar1 = param_1[6];
        if (bVar1 == 1) {
          if (param_1[0x70] == -1) {
            func_0x00040d68(param_1,0x80129d5c);
            param_1[0x70] = 1;
            param_1[6] = param_1[6] + '\x01';
            halt_baddata();
          }
        }
        else if (bVar1 < 2) {
          if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (param_1[0x29] != '\0') {
            param_1[0x70] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if (bVar1 != 2) {
            halt_baddata();
          }
          if (param_1[0x70] == -1) {
            DAT_800bf9c7 = DAT_800bf9c7 | 0x80;
            param_1[5] = param_1[5] + '\x01';
          }
        }
        func_0x00041098(param_1);
      }
    }
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      iVar2 = func_0x00051b70(param_1,0xc,0x3b);
      if (iVar2 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0xbb;
      *(undefined2 *)(param_1 + 0x82) = 0x180;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x84) = 400;
      *(undefined2 *)(param_1 + 0x86) = 400;
      param_1[0x29] = 0;
      param_1[0x2b] = 0;
      param_1[4] = param_1[4] + '\x01';
      func_0x00040cdc(param_1,0,0x800a3cc0);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)((DAT_800bf9c7 & 0x7f) * 2 + -0x7fed62b4);
      if (DAT_800bf8c0 == -1) {
        param_1[4] = 2;
        *param_1 = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 2) {
        if (bVar1 == 3) {
          func_0x0007a624(param_1);
          return;
        }
        halt_baddata();
      }
      iVar2 = func_0x0007778c(param_1);
      if (iVar2 == 0) {
        return;
      }
    }
    func_0x000517f8(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

