// FUN_08029440

/* WARNING: Control flow encountered bad instruction data */

void FUN_08029440(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 != 0) {
      func_0x00051844(param_1);
    }
    param_1[0x2b] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x00051b70(param_1,0xc,0x2c);
      if (iVar2 == 0) {
        *(undefined2 *)(param_1 + 0x80) = 0x50;
        *(undefined2 *)(param_1 + 0x82) = 0xa0;
        *(undefined2 *)(param_1 + 0x84) = 0xfa;
        *(undefined2 *)(param_1 + 0x86) = 0xfa;
        *param_1 = 1;
        param_1[0x2b] = 0;
        param_1[4] = param_1[4] + '\x01';
        if (((int)(uint)DAT_800bf9cb >> ((byte)param_1[3] & 0x1f) & 1U) != 0) {
          *(undefined2 *)(param_1 + 0xba) = 0x100;
          *param_1 = 2;
          param_1[0xd] = param_1[0xd] | 4;
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
          *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x10;
          halt_baddata();
        }
      }
      return;
    }
  }
  else if (bVar1 == 2) {
    func_0x0007778c(param_1);
    func_0x001222c4(param_1);
    func_0x00051844(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

