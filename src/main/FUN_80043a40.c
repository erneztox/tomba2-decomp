
undefined4 FUN_80043a40(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  
  FUN_80074eec();
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    uVar2 = *(short *)(param_1 + 0x76) - 1;
    *(ushort *)(param_1 + 0x76) = uVar2;
    if (0 < (int)((uint)uVar2 << 0x10)) {
      return 0;
    }
    DAT_1f800233 = 0;
    return 1;
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      return 0;
    }
    sVar3 = *(short *)(param_1 + 0x72) + 1;
    *(short *)(param_1 + 0x72) = sVar3;
    if (sVar3 < 0x3c) {
      if ((DAT_800be0e4 & 0x80) != 0) {
        return 0;
      }
      return 1;
    }
    return 1;
  }
  if (bVar1 != 0) {
    return 0;
  }
  sVar3 = *(short *)(param_1 + 0x72);
  if (sVar3 != 1) {
    if (sVar3 < 2) {
      if (sVar3 != 0) {
        return 0;
      }
      goto LAB_80043ad0;
    }
    if (sVar3 == 2) {
      DAT_1f800233 = 0;
      *(undefined2 *)(param_1 + 0x72) = 0;
      *(undefined1 *)(param_1 + 0x78) = 2;
      return 0;
    }
    if (sVar3 != 3) {
      return 0;
    }
  }
  DAT_1f800233 = 1;
LAB_80043ad0:
  FUN_8001d71c((int)*(short *)(param_1 + 0x74));
  if (*(short *)(param_1 + 0x72) == 3) {
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    return 0;
  }
  return 1;
}

