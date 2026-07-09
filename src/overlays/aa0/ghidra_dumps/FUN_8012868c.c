// FUN_8012868c

void FUN_8012868c(int param_1)

{
  int iVar1;
  uint in_v1;
  
  iVar1 = 1 << (in_v1 >> 8 & 0x1f);
  if ((ushort)((ushort)DAT_800bf9d2 & (ushort)iVar1) != 0) {
    *(undefined2 *)(*(int *)(param_1 + 200) + 0xc) = 0x800;
    FUN_8013166c();
    return;
  }
  *(undefined2 *)(*(int *)(param_1 + 200) + 0xc) = 0;
  if (((*(ushort *)(param_1 + 0x60) & 2) != 0) && (((int)*(short *)(param_1 + 0x62) & 0x8000U) == 0)
     ) {
    if (((uint)DAT_800bf9d2 & (iVar1 << 0x11) >> 0x10) != 0) {
      *(undefined2 *)(*(int *)(param_1 + 0xcc) + 0xc) = 0x800;
      return;
    }
    *(undefined2 *)(*(int *)(param_1 + 0xcc) + 0xc) = 0;
  }
  return;
}

