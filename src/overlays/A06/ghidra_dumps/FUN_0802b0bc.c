// FUN_0802b0bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802b0bc(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x00123e30(param_1);
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
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (param_1[5] == '\0') {
      iVar2 = func_0x00051b70(param_1,0xc,0x37);
      if (iVar2 == 0) {
        *(undefined2 *)(param_1 + 0x80) = 300;
        *(undefined2 *)(param_1 + 0x82) = 600;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x84) = 0;
        *(undefined2 *)(param_1 + 0x86) = 0x40;
        param_1[5] = param_1[5] + '\x01';
        func_0x0004766c(param_1);
        func_0x00048750(param_1);
        *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
        halt_baddata();
      }
      return;
    }
    if (param_1[5] != '\x01') {
      halt_baddata();
    }
    iVar2 = func_0x00123c64(param_1);
    if (iVar2 != 0) {
      param_1[4] = 1;
      param_1[5] = 0;
      param_1[6] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x0007778c(param_1);
  func_0x000517f8(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

