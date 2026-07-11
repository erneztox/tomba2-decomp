// FUN_0801c1fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c1fc(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
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
      if ((_DAT_800bfe56 & 0x20) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x8013b81c);
      uVar2 = _DAT_800ecf90;
      if (iVar3 != 0) {
        return;
      }
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x8c;
      *(undefined2 *)(param_1 + 0x82) = 0x118;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0x100;
      param_1[0xb] = 0;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0xfb00;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      param_1[4] = param_1[4] + '\x01';
      func_0x00077c40(param_1,0x80140f7c,0x10);
      if (DAT_800bf925 == '\0') {
        param_1[3] = 0;
      }
      else if (DAT_800bf925 == -1) {
        param_1[3] = 2;
      }
      else {
        param_1[3] = 1;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = param_1[3];
  if (bVar1 == 1) {
    func_0x00114f88(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00114cc8(param_1);
    }
  }
  else if (bVar1 == 2) {
    bVar1 = param_1[6];
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        if (param_1[0x2b] == '\x03') {
          param_1[6] = 1;
          func_0x00042354(1,1);
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 2) {
          halt_baddata();
        }
        func_0x00041098(param_1);
        if (param_1[0x70] == -1) {
          param_1[6] = 0;
          func_0x00042310();
        }
      }
      func_0x0007778c(param_1);
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
      param_1[0x2b] = 0;
      halt_baddata();
    }
    param_1[6] = 2;
    func_0x00040cdc(param_1,0x80140f7c,0x8013cab0);
    param_1[0x70] = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

