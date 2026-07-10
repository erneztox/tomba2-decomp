// FUN_0000dbb4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000dbb4(undefined1 *param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = func_0x00051b70(param_1,0xc,7);
  if (iVar3 == 0) {
    param_1[0x29] = 0;
    param_1[0x5f] = 0;
    param_1[0x2b] = 0;
    param_1[0x5e] = 4;
    *(undefined2 *)(param_1 + 0x40) = 0;
    param_1[0xbf] = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    if (param_1[3] == '\0') {
      iVar3 = func_0x0004766c(param_1);
      if (iVar3 == 0) {
        param_1[4] = 3;
      }
      else {
        *param_1 = 1;
        param_1[4] = 1;
        func_0x00049760(param_1);
        uVar1 = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x60) = uVar1;
        *(undefined2 *)(param_1 + 100) = 300;
        *(undefined2 *)(param_1 + 0x62) = 0;
        *(undefined2 *)(param_1 + 0x84) = 0x8d;
        *(undefined2 *)(param_1 + 0x80) = 0x8d;
        *(undefined2 *)(param_1 + 0x82) = 0x11a;
        *(undefined2 *)(param_1 + 0x86) = 0x11a;
        *(undefined2 *)(param_1 + 0x6e) = 0x8d;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x80) = 0x15e;
    *(undefined2 *)(param_1 + 0x84) = 0x15e;
    param_1[4] = 1;
    *(undefined2 *)(param_1 + 0x82) = 700;
    *(undefined2 *)(param_1 + 0x86) = 700;
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    sVar2 = *(short *)(param_1 + 0x84) * 0x1d;
    *(short *)(param_1 + 0xbc) = sVar2;
    *(short *)(param_1 + 0xba) = sVar2;
    *(short *)(param_1 + 0xb8) = sVar2;
    func_0x000518fc(param_1);
    *(undefined2 *)(param_1 + 0x70) = 0;
    *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(param_1 + 0x36);
  }
  return;
}

