// FUN_08032ca8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032ca8(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      if (param_1[5] == '\0') {
        func_0x0007778c(param_1);
        if ((DAT_800bfa46 & 0x40) != 0) {
          func_0x00040d68(param_1,0x80145b34);
          param_1[0x70] = 2;
          param_1[5] = param_1[5] + '\x01';
          halt_baddata();
        }
      }
      else {
        if (param_1[5] != '\x01') {
          halt_baddata();
        }
        param_1[1] = 1;
        func_0x00077e7c(param_1);
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          param_1[3] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    else {
      if (param_1[3] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[5] == '\0') {
        func_0x0007778c(param_1);
        if (param_1[0x2b] == '\x03') {
          func_0x00042354(1,3);
          func_0x00040d68(param_1,0x800a3cf0);
          param_1[0x70] = 2;
          param_1[6] = 0;
          param_1[5] = 1;
          halt_baddata();
        }
      }
      else {
        if (param_1[5] != '\x01') {
          halt_baddata();
        }
        param_1[1] = 1;
        func_0x00077e7c(param_1);
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          if (param_1[6] == '\0') {
            param_1[0x7a] = 0x13;
            func_0x00040d68(param_1,0x80145b24);
            param_1[0x70] = 2;
            param_1[6] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (param_1[6] != '\x01') {
            halt_baddata();
          }
          param_1[5] = 0;
        }
      }
    }
    func_0x0004190c(param_1);
    if (param_1[1] != '\0') {
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
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x80145aac);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfe4;
      func_0x00040cdc(param_1,0x8001b4dc,0x800a3d18);
      param_1[0x7b] = 5;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x5a;
      *(undefined2 *)(param_1 + 0x82) = 0xb4;
      *(undefined2 *)(param_1 + 0x84) = 0x50;
      *(undefined2 *)(param_1 + 0x86) = 0x90;
      *(undefined2 *)(param_1 + 0xb8) = 0x800;
      *(undefined2 *)(param_1 + 0xba) = 0x800;
      *(undefined2 *)(param_1 + 0xbc) = 0x800;
      if ((DAT_800bfa46 & 0x40) == 0) {
        param_1[3] = 0;
        *(undefined2 *)(param_1 + 0x56) = 0x800;
        func_0x00041718(param_1,8,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      *(undefined2 *)(param_1 + 0x2e) = 0x4661;
      *(undefined2 *)(param_1 + 0x32) = 0xe4cc;
      *(undefined2 *)(param_1 + 0x36) = 0x10d0;
      func_0x00041718(param_1,5,0);
      param_1[3] = 1;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

