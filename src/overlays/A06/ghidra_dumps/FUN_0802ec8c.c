// FUN_0802ec8c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802ec8c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x00127928(param_1);
    if (param_1[1] != '\0') {
      func_0x000518fc(param_1);
    }
    param_1[0x2b] = 0;
    param_1[0x5f] = 0;
    param_1[0x29] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x80141f80);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x8014d014,0x800a3d18);
      *(undefined2 *)(param_1 + 0x80) = 0x78;
      *(undefined2 *)(param_1 + 0x82) = 0xf0;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0xe0;
      param_1[0xb] = 0;
      *param_1 = 1;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      param_1[0x7b] = 0x10;
      func_0x00041718(param_1,0x10,1);
      param_1[0x2a] = 0xe;
      *(undefined4 *)(param_1 + 0x2c) = 0x23800000;
      *(undefined4 *)(param_1 + 0x30) = 0xf3120000;
      *(undefined4 *)(param_1 + 0x34) = 0x34b80000;
      func_0x0004766c(param_1);
      *(undefined2 *)(param_1 + 0x56) = 0xc00;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      if (DAT_800bf9d3 == '\x01') {
        DAT_800bf9d3 = '\x02';
      }
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 != 0) {
      func_0x000518fc(param_1);
    }
    if (3 < (byte)param_1[5]) {
      return;
    }
    if ((byte)param_1[5] < 2) {
      return;
    }
    param_1[5] = 4;
    *(undefined2 *)(param_1 + 0x84) = 0x80;
    param_1[4] = 1;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x86) = 0xe0;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

