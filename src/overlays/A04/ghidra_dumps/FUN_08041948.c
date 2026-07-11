// FUN_08041948

/* WARNING: Control flow encountered bad instruction data */

void FUN_08041948(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 != 0) {
      func_0x000517f8(param_1);
    }
    func_0x0004766c(param_1);
    if (param_1[5] != '\0') {
      return;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
    iVar2 = func_0x00049250(param_1,0,0x32);
    if (iVar2 == 0) {
      return;
    }
    param_1[5] = param_1[5] + '\x01';
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x00051b70(param_1,0xc,0x36);
      if (iVar2 != 0) {
        return;
      }
      param_1[0xb] = 0xf;
      *(undefined2 *)(param_1 + 0x80) = 0x32;
      *(undefined2 *)(param_1 + 0x82) = 100;
      *(undefined2 *)(param_1 + 0x84) = 0x78;
      *(undefined2 *)(param_1 + 0x86) = 0x78;
      param_1[0x2a] = 4;
      *param_1 = 1;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0xa00;
      func_0x000517f8(param_1);
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x000517f8(param_1);
    if ((byte)param_1[5] < 2) {
      return;
    }
    if (3 < (byte)param_1[5]) {
      return;
    }
    func_0x0004d4c4(0x9d,1);
    func_0x0004b0d8(param_1);
    DAT_800bf9c8 = DAT_800bf9c8 + '\x01';
    param_1[4] = 3;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

