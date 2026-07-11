// FUN_0803ed00

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803ed00(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x001379d4(param_1);
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
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x80141e18);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x8014d014,0x800a3d18);
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x60;
      *(undefined2 *)(param_1 + 0x82) = 0xc0;
      *(undefined2 *)(param_1 + 0x84) = 0xc0;
      *(undefined2 *)(param_1 + 0x86) = 0x160;
      param_1[0x2a] = 5;
      *(undefined2 *)(param_1 + 0x56) = 0xdb6;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      param_1[0x7b] = 0x17;
      param_1[0xb] = param_1[0xb] & 0xc0 | 0x40;
      if (DAT_800bf8d3 != -1) {
        func_0x000416a8(param_1,0xffffffff,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00041718(param_1,0x17,0);
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

