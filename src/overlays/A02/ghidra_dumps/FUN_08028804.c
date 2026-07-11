// FUN_08028804

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08028804(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
  if (param_1[3] == '\x01') {
    uVar1 = 3;
    if (DAT_800bf90e == -1) {
      uVar1 = 5;
    }
    param_1[0x5e] = uVar1;
    iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfb8,0x801292d0);
    if (iVar2 != 0) {
      return;
    }
    func_0x00040cdc(param_1,0x80139240,0x800a3cd0);
    func_0x00041718(param_1,0,0);
    *(undefined2 *)(param_1 + 0x56) = 0x600;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf90e == -1) {
    param_1[0x5e] = 4;
  }
  else if (DAT_800bf90f == -1) {
    param_1[0x5e] = 2;
  }
  else {
    if (DAT_800bf90e == '\0') {
      param_1[0x5e] = 0;
      if ((byte)param_1[0x5e] < 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfbc,0x801293c8);
      if (iVar2 != 0) {
        return;
      }
      func_0x00040cdc(param_1,0x80139240,0x800a3cd0);
      func_0x00041718(param_1,0x23,0);
      *(undefined2 *)(param_1 + 0x56) = 0;
      param_1[0xb] = 0x40;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x80) = 0x78;
      *(undefined2 *)(param_1 + 0x82) = 0xf0;
      *(undefined2 *)(param_1 + 0x84) = 0x78;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      param_1[4] = param_1[4] + '\x01';
      return;
    }
    param_1[0x5e] = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

