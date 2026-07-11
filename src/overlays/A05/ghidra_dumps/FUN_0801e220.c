// FUN_0801e220

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e220(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if (param_1[5] == '\0') {
      func_0x001169d0(param_1);
    }
    else if (param_1[5] == '\x01') {
      if (param_1[6] == '\0') {
        if (DAT_800bfa15 == '\x04') {
          DAT_800bf9eb = 0;
          func_0x00040d68(param_1,0x8013d174);
          param_1[7] = 0;
          param_1[0x70] = 2;
          param_1[6] = param_1[6] + '\x01';
          halt_baddata();
        }
      }
      else {
        if (param_1[6] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          param_1[4] = 3;
        }
      }
      func_0x0004190c(param_1);
      iVar2 = func_0x0007778c(param_1);
      if (iVar2 != 0) {
        func_0x000518fc(param_1);
      }
      param_1[0x2b] = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
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
    iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfa8,0x8013b24c);
    if (iVar2 != 0) {
      return;
    }
    param_1[0xb] = 0;
    *param_1 = 9;
    *(undefined2 *)(param_1 + 0x80) = 0x55;
    *(undefined2 *)(param_1 + 0x82) = 0xaa;
    *(undefined2 *)(param_1 + 0x84) = 0x80;
    *(undefined2 *)(param_1 + 0x86) = 0x100;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    param_1[0xb] = param_1[0xb] & 0xc0 | 0x80;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
    DAT_800bf9eb = 0;
    func_0x00040cdc(param_1,0x80140f7c,0x800a3d18);
    param_1[0x7b] = 5;
    func_0x00041718(param_1,5,0);
    *(undefined2 *)(param_1 + 0x56) = 0;
    if (DAT_800bf929 == '\0') {
      param_1[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[5] = 2;
    param_1[6] = 0;
    param_1[4] = param_1[4] + '\x01';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

