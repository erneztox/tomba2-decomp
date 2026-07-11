// FUN_080321b0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080321b0(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0012ad3c(param_1);
    if (((param_1[1] != '\0') && (func_0x000518fc(param_1), param_1[0x46] == '\x1b')) &&
       ((_DAT_1f80017c & 0x1f) == 0)) {
      func_0x00074590(2,7,0);
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
      iVar2 = func_0x000519e0(param_1,0x10,_DAT_800ecf94,0x80141d98);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x8014d014,0x800a3d18);
      *(undefined1 *)(*(int *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0) + 0x3f) = 0xf;
      *(undefined2 *)(param_1 + 0x56) = 0x1a3;
      param_1[0xd] = 4;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x60;
      *(undefined2 *)(param_1 + 0x82) = 0xc0;
      *(undefined2 *)(param_1 + 0x84) = 0x100;
      param_1[0xb] = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x160;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      param_1[0x7b] = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0xe3e00000;
      param_1[0xb] = param_1[0xb] & 0xc0 | 0x40;
      iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x2e) = 0x5d2a - (short)(iVar2 * 0xc0 >> 0xc);
      iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x36) = 0x4122 - (short)(iVar2 * -0xc0 >> 0xc);
      func_0x00041718(param_1,0x1b,0);
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

