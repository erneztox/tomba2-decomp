// FUN_0803112c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803112c(undefined1 *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (byte)param_1[3] & 0x1f;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (uVar2 - 1 < 0x1f) {
    iVar3 = func_0x00133e8c(param_1,uVar2);
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 == 0) {
      uVar2 = 0;
      param_1[3] = param_1[3] & 0xe0;
    }
  }
  if (uVar2 != 0x18) {
    iVar3 = func_0x00051b70(param_1,0xc,0x24);
    if (iVar3 == 0) {
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x80) = 0xa0;
      *(undefined2 *)(param_1 + 0x82) = 0x140;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *(undefined2 *)(param_1 + 0x86) = 0x140;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
      iVar3 = func_0x0004766c(param_1);
      if (iVar3 != 0) {
        func_0x00049760(param_1);
        uVar1 = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x62) = 0;
        param_1[0xbe] = 0;
        *(undefined2 *)(param_1 + 0x60) = uVar1;
        func_0x0004130c(param_1,0);
        param_1[0x29] = 0;
        iVar3 = func_0x0012a244(param_1);
        uVar1 = _DAT_1f8001a2;
        if (iVar3 != 0) {
          *(undefined2 *)(param_1 + 0x62) = _DAT_1f8001a2;
          *(undefined2 *)(param_1 + 0x58) = uVar1;
        }
        func_0x000517f8(param_1);
        *(undefined2 *)(param_1 + 0x50) = 0;
        param_1[0x5f] = 0;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined2 *)(param_1 + 0x66) = 0;
        if ((_DAT_800bfe56 & 0x20) == 0) {
          param_1[4] = 1;
        }
        else {
          if (uVar2 != 0x18) {
            param_1[4] = 4;
            return;
          }
          param_1[4] = 1;
          *(undefined2 *)(param_1 + 0x66) = 1;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

