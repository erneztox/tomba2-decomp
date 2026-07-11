// FUN_0803c6fc

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803c6fc(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x00121c70(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x00051b70(param_1,0xc,6);
      if (iVar2 != 0) {
        return;
      }
      param_1[0xb] = 0xf;
      param_1[0xd] = param_1[0xd] | 4;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xc;
      *(undefined2 *)(param_1 + 0x80) = 0x7f;
      *(undefined2 *)(param_1 + 0x82) = 0xfe;
      *(undefined2 *)(param_1 + 0x84) = 0xbe;
      *(undefined2 *)(param_1 + 0x86) = 0x114;
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[0x2a] = 0;
      param_1[4] = param_1[4] + '\x01';
      func_0x00041194(param_1,(int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84),0,0)
      ;
    }
  }
  else if (bVar1 == 2) {
    bVar1 = param_1[5];
    if (bVar1 == 2) {
      func_0x00135864(param_1);
      param_1[4] = 3;
    }
    else {
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
        iVar2 = func_0x00049250(param_1,0,
                                (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                      (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
        if (iVar2 != 0) {
          func_0x00135864(param_1);
          param_1[4] = 3;
          halt_baddata();
        }
      }
      iVar2 = func_0x0007778c(param_1);
      if (iVar2 == 0) {
        return;
      }
      func_0x000517f8(param_1);
    }
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

