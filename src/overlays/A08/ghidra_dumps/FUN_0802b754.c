// FUN_0802b754

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802b754(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar2 = func_0x0013900c(param_1);
    if (iVar2 == 0) {
      return;
    }
    func_0x00051844(param_1);
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
      func_0x00051b70(param_1,0xc,0x68);
      *(undefined2 *)(param_1 + 0x82) = 0x80;
      *(undefined2 *)(param_1 + 0x80) = 0x40;
      *(undefined2 *)(param_1 + 0x86) = 0x40;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x84) = 0;
      *(undefined2 *)(param_1 + 0xba) = 0x800;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

