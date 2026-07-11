// FUN_08019954

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019954(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[3];
    if (bVar1 == 1) {
      if (param_1[5] == '\0') {
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 != 0) {
          param_1[0x2a] = *(undefined1 *)(iVar2 + 0x2a);
          *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar2 + 0x2e);
          *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar2 + 0x32);
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar2 + 0x36);
          if ((iVar2 != 0) && (*(byte *)(iVar2 + 4) < 2)) goto LAB_08019c38;
        }
        param_1[5] = param_1[5] + '\x01';
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        if (DAT_800bf816 != '\0') {
          if (param_1[0x5e] == '\0') {
            *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x2e);
            *(short *)(param_1 + 0x32) = *(short *)(*(int *)(param_1 + 0x10) + 0x32) + -100;
            *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x36);
          }
          else if (param_1[0x5e] == '\x01') {
            if (param_1[5] == '\0') {
              *(undefined2 *)(param_1 + 0x80) = 0x20;
              param_1[5] = 1;
              *param_1 = 1;
              *(undefined2 *)(param_1 + 0x82) = 0x40;
              *(undefined2 *)(param_1 + 0x84) = 0x40;
              *(undefined2 *)(param_1 + 0x86) = 0x80;
              func_0x00041194(param_1,(int)((0x40 - (uint)*(ushort *)(param_1 + 0x80)) * 0x10000) >>
                                      0x10,0,0);
              *(undefined2 *)(param_1 + 0x5a) = 0x400;
            }
            func_0x0007778c(param_1);
            func_0x0004b374(param_1,0);
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_08019cf8;
      }
      if ((bVar1 != 2) && (bVar1 != 3)) {
        halt_baddata();
      }
    }
LAB_08019c38:
    func_0x0007778c(param_1);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      bVar1 = param_1[3];
      if (bVar1 == 1) {
        *(undefined2 *)(param_1 + 0x82) = 0x50;
        *(undefined2 *)(param_1 + 0x86) = 0x50;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
          func_0x00077b38(param_1,0x80140e40,0);
          param_1[0xd] = 0;
          *(undefined2 *)(param_1 + 0x5c) = 0;
          param_1[0xb] = 0x10;
          *(undefined2 *)(param_1 + 0x5a) = 0;
          param_1[0x47] = 0;
          param_1[8] = 0;
          func_0x0004b354(param_1,0);
        }
      }
      else {
        if (bVar1 == 2) {
          *(undefined2 *)(param_1 + 0x82) = 0x50;
          *(undefined2 *)(param_1 + 0x86) = 0x50;
          halt_baddata();
        }
        if (bVar1 == 3) {
          *(undefined2 *)(param_1 + 0x82) = 0x50;
          *(undefined2 *)(param_1 + 0x86) = 0x50;
          *param_1 = 1;
          param_1[0x47] = 0;
          *(undefined2 *)(param_1 + 0x5a) = 0;
          *(undefined2 *)(param_1 + 0x5c) = 0;
          *(undefined2 *)(param_1 + 0x80) = 0x28;
          *(undefined2 *)(param_1 + 0x84) = 0x28;
          *(undefined2 *)(param_1 + 0x68) = 0x86;
          param_1[4] = param_1[4] + '\x01';
          halt_baddata();
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    bVar1 = param_1[3];
    if (bVar1 == 1) {
      func_0x00112778(param_1);
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x0004d4c4(0x4e,1);
      func_0x0004b0d8(param_1);
      DAT_800bf9ba = DAT_800bf9ba | 2;
      func_0x00040b48(0x7a);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      DAT_800bfa08 = DAT_800bfa08 | 8;
      func_0x0004a3d4(param_1);
      param_1[4] = 3;
      halt_baddata();
    }
    iVar2 = func_0x00040b48(0x1a);
    if (-1 < iVar2) {
      DAT_800bfa08 = DAT_800bfa08 | 4;
      func_0x0004a3d4(param_1);
    }
LAB_08019cf8:
    param_1[4] = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

