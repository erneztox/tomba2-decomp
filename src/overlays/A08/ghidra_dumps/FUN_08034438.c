// FUN_08034438

/* WARNING: Control flow encountered bad instruction data */

void FUN_08034438(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      iVar2 = func_0x00051b70(param_1,0xc,0x60);
      if (iVar2 == 0) {
        *(undefined2 *)(param_1 + 0x80) = 0x7f;
        *(undefined2 *)(param_1 + 0x82) = 0xfe;
        *(undefined2 *)(param_1 + 0x84) = 0xbe;
        *(undefined2 *)(param_1 + 0x86) = 0x114;
        param_1[0xb] = 0;
        *param_1 = 1;
        param_1[0x29] = 0;
        param_1[0x2a] = 0x2b;
        param_1[4] = param_1[4] + '\x01';
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        func_0x0007a624(param_1);
        return;
      }
      halt_baddata();
    }
    bVar1 = param_1[5];
    if (bVar1 == 2) {
      func_0x0012d560(param_1);
      param_1[4] = 3;
      halt_baddata();
    }
    if (2 < bVar1) {
      if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x200;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x20;
      iVar2 = func_0x0004766c(param_1);
      if (iVar2 == 0) {
        return;
      }
      if ((param_1[0x29] != '\0') ||
         (iVar2 = func_0x00049250(param_1,0,
                                  (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                        (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10),
         iVar2 != 0)) {
        func_0x0012d560(param_1);
        param_1[4] = 3;
        halt_baddata();
      }
    }
  }
  iVar2 = func_0x0007778c(param_1);
  if (iVar2 != 0) {
    func_0x000517f8(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

