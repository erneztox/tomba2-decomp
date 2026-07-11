// FUN_0802fad4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802fad4(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
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
      iVar3 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x80141f08);
      if (iVar3 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x8014d014,0x800a3d18);
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x60;
      *(undefined2 *)(param_1 + 0x82) = 0xc0;
      *(undefined2 *)(param_1 + 0x84) = 0xc0;
      *(undefined2 *)(param_1 + 0x86) = 0x160;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0x800;
      param_1[0xb] = param_1[0xb] & 0xc0 | 0x80;
      if (DAT_800bf912 != -1) {
        func_0x000416a8(param_1,0xffffffff,0);
        uVar2 = 0xe1;
        if (DAT_800bf912 == '\0') {
          uVar2 = 0xbd;
        }
        param_1[0x7b] = uVar2;
        param_1[0x5e] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[0x7b] = 0;
      param_1[0x5e] = 1;
      func_0x00041718(param_1,param_1[0x7b],0);
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      param_1[4] = param_1[4] + '\x01';
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[0x5e] == '\0') {
    func_0x00128794(param_1);
  }
  else if (param_1[0x5e] == '\x01') {
    if (param_1[5] == '\0') {
      iVar3 = func_0x0007778c(param_1);
      if ((iVar3 != 0) && (param_1[0x2b] == '\x03')) {
        func_0x00041768(param_1,param_1[0x7b],4);
        func_0x00042354(1,3);
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
          param_1[0x7a] = 5;
          func_0x00040d68(param_1,0x8014801c);
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

