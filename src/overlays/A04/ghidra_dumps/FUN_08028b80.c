// FUN_08028b80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08028b80(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((0x300c < _DAT_1f800164) && (_DAT_1f8000f2 < 0x400)) {
      func_0x0007703c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0007778c(param_1);
    if (param_1[1] == '\0') {
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
      iVar2 = func_0x00051b70(param_1,0xc,7);
      if (iVar2 != 0) {
        return;
      }
      param_1[0xb] = 0xf;
      *(undefined2 *)(param_1 + 0x80) = 0x96;
      *(undefined2 *)(param_1 + 0x82) = 300;
      *(undefined2 *)(param_1 + 0x86) = 0x78;
      *(undefined2 *)(param_1 + 0x84) = 0x78;
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[0x2a] = 0;
      param_1[4] = param_1[4] + '\x01';
      func_0x00041194(param_1,(int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84),0,0)
      ;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x28;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

