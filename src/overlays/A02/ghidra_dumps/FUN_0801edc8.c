// FUN_0801edc8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801edc8(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar3 = func_0x0007778c(param_1);
    if (iVar3 == 0) {
      return;
    }
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        param_1[0x2b] = 2;
        *param_1 = 2;
        param_1[5] = param_1[5] + '\x01';
      }
      *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + -0x1d0;
    }
    else if (((bVar1 < 2) && (bVar1 == 0)) && (param_1[0x2b] != '\0')) {
      *param_1 = 3;
      *(undefined2 *)(param_1 + 0x40) = 8;
      param_1[5] = param_1[5] + '\x01';
      func_0x00074590(0x88,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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
      param_1[8] = 1;
      if (_DAT_800ed098 < 1) {
        param_1[4] = 3;
      }
      else {
        *(undefined2 *)(param_1 + 0x80) = 0x50;
        *(undefined2 *)(param_1 + 0x82) = 0xa0;
        param_1[9] = 1;
        *param_1 = 1;
        param_1[0xd] = 0;
        param_1[0xb] = 0;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x84) = 0xc4;
        *(undefined2 *)(param_1 + 0x86) = 0xc4;
        param_1[4] = param_1[4] + '\x01';
        iVar3 = func_0x0007aae8();
        *(int *)(param_1 + 0xc0) = iVar3;
        *(undefined2 *)(iVar3 + 6) = 0xffff;
        **(undefined2 **)(param_1 + 0xc0) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
        *(undefined2 *)(param_1 + 0xb8) = 0x1000;
        *(undefined2 *)(param_1 + 0xba) = 0x1000;
        *(undefined2 *)(param_1 + 0xbc) = 0x1000;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = 0x1000;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x1000;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) = 0x1000;
        param_1[0x2b] = 0;
        *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x32);
        if (param_1[3] == '\0') {
          param_1[5] = 2;
          func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0xe);
        }
        else {
          func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x27);
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

