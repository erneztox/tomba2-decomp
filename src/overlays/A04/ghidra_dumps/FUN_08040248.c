// FUN_08040248

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08040248(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        func_0x0007778c(param_1);
        if (param_1[6] == '\0') {
          DAT_800bf9b4 = DAT_800bf9b4 | 2;
          param_1[4] = 3;
          func_0x0003116c(0x504,param_1 + 0x2c,0xffffffce);
          func_0x0003116c(0x503,param_1 + 0x2c,0xffffffce);
          iVar2 = func_0x00072ddc(0,0,4,0x37);
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 0x1c) = 0x80121a58;
            *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
            *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
            *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
            halt_baddata();
          }
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      if (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) == 0) {
        iVar2 = func_0x00051b70(param_1,0xc,DAT_80141ab7);
        if (iVar2 != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x80) = 0x6e;
        *(undefined2 *)(param_1 + 0x82) = 0xdc;
        *(undefined2 *)(param_1 + 0x84) = 0x50;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x86) = 0x80;
        param_1[0x29] = 0;
        param_1[0x2b] = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        param_1[4] = param_1[4] + '\x01';
        func_0x000517f8();
      }
      else {
        param_1[4] = 3;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

