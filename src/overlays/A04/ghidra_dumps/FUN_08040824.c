// FUN_08040824

/* WARNING: Control flow encountered bad instruction data */

void FUN_08040824(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 == 0) {
      return;
    }
    func_0x000517f8(param_1);
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
      iVar2 = func_0x00051b70(param_1,0xc,0x2d);
      if (iVar2 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x1000;
      *(undefined2 *)(param_1 + 0x32) = 0xdbac;
      *(undefined2 *)(param_1 + 0x36) = 0x26cd;
      *(undefined2 *)(param_1 + 0x80) = 0x3e;
      *(undefined2 *)(param_1 + 0x82) = 0x77;
      *(undefined2 *)(param_1 + 0x84) = 100;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x86) = 200;
      param_1[4] = param_1[4] + '\x01';
      func_0x00041194(param_1,0,1,0);
      *(short *)(*(int *)(param_1 + 0xc0) + 10) = -*(short *)(param_1 + 0x56);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

