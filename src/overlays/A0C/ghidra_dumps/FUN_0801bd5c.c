// FUN_0801bd5c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801bd5c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_1f800137 == '\0') {
      func_0x000778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                   0x10000) >> 0x10);
    }
    else {
      func_0x0007778c(param_1);
    }
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
      iVar2 = func_0x00051b70(param_1,0xc,1);
      if (iVar2 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x20;
      *(undefined2 *)(param_1 + 0x82) = 0x40;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x84) = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x87c;
      param_1[4] = param_1[4] + '\x01';
      func_0x000517f8();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

