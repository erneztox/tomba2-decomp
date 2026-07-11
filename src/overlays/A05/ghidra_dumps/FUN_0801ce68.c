// FUN_0801ce68

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ce68(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
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
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x8013b6ac);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x80140f7c,0x800a3d18);
      param_1[0xb] = 0x80;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x60;
      *(undefined2 *)(param_1 + 0x82) = 0xc0;
      *(undefined2 *)(param_1 + 0x84) = 0xc0;
      *(undefined2 *)(param_1 + 0x86) = 0x158;
      param_1[0x7b] = 4;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      if (DAT_800bf911 != -1) {
        func_0x000416a8(param_1,0xffffffff,0);
        func_0x00041718(param_1,0xdf,0);
        param_1[0x1a] = 0x30;
        param_1[0x19] = 0x30;
        param_1[0x18] = 0x30;
        param_1[0x5e] = 0;
        param_1[0xd] = param_1[0xd] | 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00041718(param_1,4,0);
      param_1[0x5e] = 1;
      param_1[4] = param_1[4] + '\x01';
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[0x5e] == '\0') {
    func_0x00115b48(param_1);
  }
  else if (param_1[0x5e] == '\x01') {
    if (param_1[5] == '\0') {
      iVar2 = func_0x0007778c(param_1);
      if ((iVar2 != 0) && (param_1[0x2b] == '\x03')) {
        func_0x00041768(param_1,param_1[0x7b],4);
        func_0x00042354(1,1);
        func_0x00040d68(param_1,0x800a3d70);
        param_1[0x70] = 2;
        param_1[6] = 0;
        param_1[5] = param_1[5] + '\x01';
        halt_baddata();
      }
    }
    else {
      if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[1] = 1;
      func_0x00077e7c(param_1);
      if (param_1[0x70] == -1) {
        if (param_1[6] == '\0') {
          param_1[0x7a] = 4;
          func_0x00040d68(param_1,0x8013cedc);
          param_1[0x70] = 2;
          param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_1[6] != '\x01') {
          halt_baddata();
        }
        param_1[5] = 0;
      }
      func_0x00041098(param_1);
    }
    func_0x0004190c(param_1);
    if (param_1[1] != '\0') {
      func_0x000518fc(param_1);
    }
    param_1[0x2b] = 0;
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

