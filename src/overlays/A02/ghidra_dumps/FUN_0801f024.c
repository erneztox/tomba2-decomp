// FUN_0801f024

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f024(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_800bf816 != '\0') {
      iVar4 = func_0x0007778c(param_1);
      if (iVar4 == 0) {
        return;
      }
      bVar1 = param_1[5];
      if (bVar1 == 1) {
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        if (sVar2 == 1) {
          param_1[0x2b] = 2;
          param_1[5] = param_1[5] + '\x01';
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        if (param_1[0x2b] != '\0') {
          *param_1 = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if (bVar1 == 2) {
        if (param_1[0x2b] == '\0') {
          *(undefined2 *)(param_1 + 0x40) = 8;
          param_1[5] = param_1[5] + '\x01';
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        if (sVar2 == 1) {
          param_1[5] = 0;
          param_1[0x2b] = 0;
          *param_1 = 1;
        }
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0xf;
      }
      func_0x000517f8(param_1);
      halt_baddata();
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
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[8] = 1;
    if (0 < _DAT_800ed098) {
      param_1[9] = 1;
      *param_1 = 1;
      param_1[4] = param_1[4] + '\x01';
      iVar4 = _DAT_800ecfc8;
      param_1[0xd] = 4;
      *(undefined2 *)(param_1 + 0x80) = 0x3c;
      *(undefined2 *)(param_1 + 0x82) = 0x78;
      param_1[0xb] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x84) = 0xc4;
      *(undefined2 *)(param_1 + 0x86) = 0xc4;
      iVar3 = func_0x0007aae8();
      *(int *)(param_1 + 0xc0) = iVar3;
      *(undefined2 *)(iVar3 + 6) = 0xffff;
      **(undefined2 **)(param_1 + 0xc0) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
      *(int *)(*(int *)(param_1 + 0xc0) + 0x40) = iVar4 + *(int *)(iVar4 + 0x4c);
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 8;
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x32);
      if (param_1[3] != 'e') {
        return;
      }
      if ((DAT_800bfa0b & 1) != 0) {
        *param_1 = 3;
        param_1[0x2b] = 2;
        param_1[5] = 2;
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x78;
        halt_baddata();
      }
      return;
    }
  }
  param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

