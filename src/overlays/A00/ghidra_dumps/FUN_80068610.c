// FUN_80068610

void FUN_80068610(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 7) == '\0') {
    iVar1 = (uint)*(ushort *)(param_1 + 0x4c) +
            ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x10) >> 0x12);
    *(short *)(param_1 + 0x4c) = (short)iVar1;
    if (0x500 < iVar1 * 0x10000 >> 0x10) {
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      return;
    }
  }
  else {
    iVar1 = (uint)*(ushort *)(param_1 + 0x4c) -
            ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x10) >> 0x12);
    *(short *)(param_1 + 0x4c) = (short)iVar1;
    if (iVar1 * 0x10000 >> 0x10 < -0x200) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
  }
  return;
}

