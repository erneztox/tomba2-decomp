// FUN_08022c70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022c70(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 3) == '\0') {
    if (DAT_800bf9fa == 2) {
      *(undefined2 *)(param_1 + 0x58) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (2 < DAT_800bf9fa) {
      if (DAT_800bf9fa != 3) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 4) = 3;
      halt_baddata();
    }
    if (DAT_800bf9fa != 1) {
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 3) != '\x01') {
      halt_baddata();
    }
    if (DAT_800bf9fa == 4) {
      iVar3 = *(int *)(param_1 + 0x10);
      *(undefined2 *)(param_1 + 0x56) = 0xa00;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(short *)(param_1 + 0x2e) =
           (short)((*(int *)(*(int *)(iVar3 + 0xd0) + 0x2c) +
                   *(int *)(*(int *)(iVar3 + 0xdc) + 0x2c)) / 2);
      iVar2 = func_0x00083f50((int)*(short *)(iVar3 + 0x56));
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)((iVar2 << 6) >> 0xc);
      *(short *)(param_1 + 0x36) =
           (short)((*(int *)(*(int *)(iVar3 + 0xd0) + 0x34) +
                   *(int *)(*(int *)(iVar3 + 0xdc) + 0x34)) / 2);
      iVar2 = func_0x00083e80((int)*(short *)(iVar3 + 0x56));
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - (short)((iVar2 << 6) >> 0xc);
      *(short *)(param_1 + 0x32) =
           (short)((*(int *)(*(int *)(iVar3 + 0xd0) + 0x30) +
                   *(int *)(*(int *)(iVar3 + 0xdc) + 0x30)) / 2) + 0x60;
      halt_baddata();
    }
    if (4 < DAT_800bf9fa) {
      if (DAT_800bf9fa != 5) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 5) != '\0') {
        if (*(char *)(param_1 + 5) != '\x01') {
          halt_baddata();
        }
        sVar1 = *(short *)(param_1 + 0x58) + 0xa0;
        *(short *)(param_1 + 0x58) = sVar1;
        if (0x3ff < sVar1) {
          *(undefined2 *)(param_1 + 0x58) = 0x400;
          DAT_800bf9fa = 6;
          DAT_800bf9fe = 1;
          _DAT_800bf844 = param_1;
        }
        return;
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x2788;
      *(undefined2 *)(param_1 + 0x32) = 0xf8d7;
      *(undefined2 *)(param_1 + 0x36) = 0x216d;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      halt_baddata();
    }
    if (DAT_800bf9fa != 3) {
      halt_baddata();
    }
  }
  func_0x0011bacc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

