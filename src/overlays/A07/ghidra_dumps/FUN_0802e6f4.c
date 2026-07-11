// FUN_0802e6f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802e6f4(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[0x5e] == '\0') {
      if (DAT_800bf9d5 == '\x03') {
        param_1[5] = 0;
        param_1[0x5e] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[5] != '\0') {
        if (param_1[5] != '\x01') {
          halt_baddata();
        }
        param_1[1] = 1;
        func_0x00077e7c(param_1);
        func_0x0004190c(param_1);
        if (param_1[0x70] == -1) {
          param_1[5] = 0;
          param_1[0x5e] = 1;
          param_1[3] = 1;
        }
        func_0x00041098(param_1);
        halt_baddata();
      }
      iVar2 = func_0x00130cb0(param_1);
      if ((iVar2 != 0) && (param_1[0x2b] == '\x03')) {
        func_0x00042354(1,1);
        func_0x00040d68(param_1,0x80134e04);
        param_1[0x70] = 2;
        param_1[5] = param_1[5] + '\x01';
        halt_baddata();
      }
    }
    else {
      if (param_1[0x5e] != '\x01') {
        halt_baddata();
      }
      func_0x001274c8(param_1);
    }
    param_1[0x2b] = 0;
    if (param_1[1] == '\0') {
      return;
    }
    func_0x000518fc(param_1);
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
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfc8,0x80131a50);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x8014005c,0x800a3d18);
      param_1[0xb] = 0x40;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x80;
      *(undefined2 *)(param_1 + 0x82) = 0x100;
      *(undefined2 *)(param_1 + 0x84) = 0xc0;
      *(undefined2 *)(param_1 + 0x86) = 0x17a;
      param_1[3] = 1;
      if (DAT_800bf9d5 == '\0') {
        param_1[0x5e] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[0x5e] = 1;
      func_0x00130ba4(param_1);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      param_1[0x7b] = 0x35;
      func_0x00041718(param_1,0x35,0);
      param_1[0x2b] = 0;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

