// FUN_080299fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080299fc(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(byte *)(param_1 + 3) < 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00051b70(param_1,0xc,0x5d);
        *(undefined2 *)(param_1 + 0x80) = 0x53;
        *(undefined2 *)(param_1 + 0x82) = 0xa6;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x84) = 0;
        *(undefined2 *)(param_1 + 0x86) = 0x3f;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      }
    }
    else if (bVar1 == 2) {
      if (*(char *)(param_1 + 5) == '\0') {
        sVar2 = *(short *)(param_1 + 0x4a) + 0x300;
        *(short *)(param_1 + 0x4a) = sVar2;
        if (0x3e00 < sVar2) {
          *(undefined2 *)(param_1 + 0x4a) = 0x3e00;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        if (-0x137e < *(short *)(param_1 + 0x32)) {
          *(undefined2 *)(param_1 + 0x40) = 0x14;
          *(undefined2 *)(param_1 + 0x4a) = 0;
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
          _DAT_1f8001a4 = 0xec82;
          func_0x0011370c(param_1);
          halt_baddata();
        }
      }
      else {
        if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x4a) + 0x200;
        *(short *)(param_1 + 0x4a) = sVar2;
        if (0x3e00 < sVar2) {
          *(undefined2 *)(param_1 + 0x4a) = 0x3e00;
        }
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        if (sVar2 == 1) {
          *(undefined1 *)(param_1 + 4) = 3;
        }
      }
      iVar4 = func_0x0007778c(param_1);
      if (iVar4 == 0) {
        return;
      }
      func_0x000517f8(param_1);
    }
    else if (bVar1 == 3) {
      func_0x0007a624(param_1);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(byte *)(param_1 + 3) < 3) {
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar4 + 0x2e);
    *(short *)(param_1 + 0x32) = *(short *)(iVar4 + 0x32) - *(short *)(iVar4 + 0x84);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar4 + 0x36);
    if ((*(byte *)(param_1 + 3) + 1) * 2 == (uint)DAT_800bfa42) {
      *(undefined1 *)(param_1 + 4) = 2;
      *(undefined2 *)(param_1 + 0x4a) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar4 + 0x2e);
    *(short *)(param_1 + 0x32) = *(short *)(iVar4 + 0x32) - *(short *)(iVar4 + 0x84);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar4 + 0x36);
  }
  iVar3 = func_0x00083e80(((uint)*(byte *)(param_1 + 3) * 8 + (uint)_DAT_1f80017c) * 0x80);
  *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = (short)(iVar3 >> 7);
  if (*(char *)(iVar4 + 1) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077ebc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

