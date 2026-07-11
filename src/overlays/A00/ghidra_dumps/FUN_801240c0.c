// FUN_801240c0

void FUN_801240c0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x50) == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      iVar2 = func_0x80083f50((int)*(short *)(param_1 + 0x4a));
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x5a) + (short)((iVar2 << 7) >> 0xc);
      *(ushort *)(param_1 + 0x4a) =
           *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50) * 2 & 0xfff;
      if (*(short *)(param_1 + 0x4a) != 0) {
        return;
      }
      func_0x8009a450();
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x56) + 0x300;
  }
  iVar2 = func_0x80083f50((int)*(short *)(param_1 + 0x4a));
  *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x5a) + (short)((iVar2 << 8) >> 0xc);
  *(ushort *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50) & 0xfff;
  return;
}

