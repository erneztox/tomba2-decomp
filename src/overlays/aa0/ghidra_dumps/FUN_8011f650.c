// FUN_8011f650

void FUN_8011f650(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(param_1 + 0x6c);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (0x3c < iVar2) {
    sVar1 = *(short *)(param_1 + 0x6e) + -0x80;
    if (*(short *)(param_1 + 0x6e) < 1) {
      sVar1 = *(short *)(param_1 + 0x6e) + 0x80;
    }
    *(short *)(param_1 + 0x6e) = sVar1;
  }
  sVar1 = *(short *)(param_1 + 0x6c);
  if (0 < sVar1) {
    if (0x10e < sVar1) {
      FUN_8012868c();
      return;
    }
    FUN_8012868c();
    return;
  }
  if (sVar1 < -0x10e) {
    FUN_8012868c();
    return;
  }
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + 0x200;
  if (0x3200 < *(short *)(param_1 + 0x6e)) {
    FUN_801286b4();
    return;
  }
  if (*(short *)(param_1 + 0x6e) < -0x3200) {
    *(undefined2 *)(param_1 + 0x6e) = 0xce00;
  }
  iVar2 = (uint)*(ushort *)(param_1 + 0x6c) +
          ((int)((uint)*(ushort *)(param_1 + 0x6e) << 0x10) >> 0x18);
  *(short *)(param_1 + 0x6c) = (short)iVar2;
  iVar2 = iVar2 * 0x10000 >> 0x10;
  if (iVar2 != 0) {
    if (299 < iVar2) {
      if (((uint)DAT_fffffafe & (param_2 << 0x11) >> 0x10) != 0) {
        *(undefined2 *)(*(int *)(param_1 + 0xcc) + 0xc) = 0x800;
        return;
      }
      *(undefined2 *)(*(int *)(param_1 + 0xcc) + 0xc) = 0;
      return;
    }
    if (iVar2 < -299) {
      *(undefined2 *)(param_1 + 0x6c) = 0xfed4;
    }
  }
  iVar2 = func_0x80083e80((int)*(short *)(param_1 + 0x6c));
  *(short *)(param_1 + 0x60) =
       *(short *)(param_1 + 0x66) + (short)(iVar2 * *(short *)(param_1 + 0x7c) >> 0xc);
  iVar2 = func_0x80083f50((int)*(short *)(param_1 + 0x6c));
  *(short *)(param_1 + 0x62) =
       *(short *)(param_1 + 0x68) + (short)(iVar2 * *(short *)(param_1 + 0x7c) >> 0xc);
  return;
}

