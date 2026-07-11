// FUN_080215c8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080215c8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    uVar2 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar2;
    if ((*(char *)(param_1 + 1) == '\0') || ((int)((uint)uVar2 << 0x10) < 1)) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    else {
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x32) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
      *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + *(short *)(param_1 + 0x4e);
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) +
           (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
      sVar4 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x4a) = sVar4;
      *(int *)(param_1 + 0x34) =
           *(int *)(param_1 + 0x34) +
           (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
      if (*(char *)(param_1 + 3) == '\0') {
        if (*(short *)(param_1 + 0x60) < sVar4) {
          return;
        }
        func_0x0011a8b8(param_1);
      }
      else {
        if (sVar4 < *(short *)(param_1 + 0x60)) {
          return;
        }
        *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x60);
      }
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
      if (*(short *)(param_1 + 0x40) == 0) {
        uVar3 = func_0x0009a450();
        if ((*(char *)(param_1 + 3) == '\0') && ((_DAT_800bfe56 & 0x40) == 0)) {
          *(undefined2 *)(param_1 + 0x5c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x5c) = 0x75e7;
        *(undefined1 *)(param_1 + 0xb) = 0x12;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        *(undefined1 *)(param_1 + 8) = 0xc4;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        uVar2 = func_0x0009a450();
        *(ushort *)(param_1 + 0x40) = (uVar2 & 0x1f) + 0x1e;
        *(undefined2 *)(param_1 + 0x60) = 1;
        func_0x0004766c(param_1);
        func_0x00049760(param_1);
        func_0x0011a8b8(param_1);
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
        func_0x00077b38(param_1,0x8014cef0,uVar3 & 3 | 0xc);
      }
      else {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

