// FUN_80127588

void FUN_80127588(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    iVar4 = *(int *)(param_1 + 0xc4);
    *(short *)(iVar4 + 10) = *(short *)(iVar4 + 10) + *(short *)(iVar4 + 0x12);
    iVar4 = *(int *)(param_1 + 0xc4);
    sVar3 = *(short *)(param_1 + 0x40);
    if (((int)*(short *)(param_1 + 0x70) + (int)*(short *)(param_1 + 0x40) <
         (int)*(short *)(iVar4 + 10)) ||
       ((int)*(short *)(iVar4 + 10) <
        (int)*(short *)(param_1 + 0x70) - (int)*(short *)(param_1 + 0x40))) {
      if (*(short *)(iVar4 + 0x12) < 1) {
        sVar3 = -sVar3;
      }
      *(short *)(iVar4 + 10) = *(short *)(param_1 + 0x70) + sVar3;
      *(short *)(*(int *)(param_1 + 0xc4) + 0x12) = -*(short *)(*(int *)(param_1 + 0xc4) + 0x12);
      uVar2 = *(short *)(param_1 + 0x40) - 0x10;
      *(ushort *)(param_1 + 0x40) = uVar2;
      if ((int)((uint)uVar2 << 0x10) < 1) {
        *(undefined2 *)(param_1 + 0x40) = 10;
        *(undefined1 *)(param_1 + 0x5e) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        FUN_80130758();
        return;
      }
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_80130758();
        return;
      }
      if ((*(byte *)(param_1 + 0x47) & 0x40) != 0) {
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x12) = 0x20;
        FUN_801305b0();
        return;
      }
      if ((*(byte *)(param_1 + 0x47) & 0x80) != 0) {
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x12) = 0x60;
        FUN_801305b0();
        return;
      }
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x12) = 0x40;
      *(undefined2 *)(param_1 + 0x40) = 0x40;
      iVar4 = func_0x80077768((uint)*(byte *)(param_1 + 0x46) << 4,
                              (int)*(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 +
                                                      0xc0) + 10),0);
      if (iVar4 != 0) {
        *(short *)(*(int *)(param_1 + 0xc4) + 0x12) = -*(short *)(*(int *)(param_1 + 0xc4) + 0x12);
      }
      *(undefined1 *)(param_1 + 0x5e) = 4;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      FUN_80130758();
      return;
    }
    if (bVar1 != 2) {
      FUN_80130758();
      return;
    }
    iVar4 = *(int *)(param_1 + 0xc4);
    sVar3 = *(short *)(iVar4 + 10) + -8;
    if (*(short *)(iVar4 + 10) <= *(short *)(param_1 + 0x70)) {
      sVar3 = *(short *)(iVar4 + 10) + 8;
    }
    *(short *)(iVar4 + 10) = sVar3;
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 == 1) {
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = *(undefined2 *)(param_1 + 0x70);
      if (*(short *)(param_1 + 0x78) != 0) {
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 6) = *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3e);
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3e) = 0;
        FUN_80130758();
        return;
      }
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined2 *)(param_1 + 0x76) = 0;
      *(undefined2 *)(param_1 + 0x48) = 0;
      *(undefined2 *)(param_1 + 0x4e) = 0;
    }
  }
  iVar4 = FUN_801308e0(param_1);
  if (iVar4 != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = *(undefined2 *)(param_1 + 0x70);
  }
  return;
}

