// FUN_80055f48

void FUN_80055f48(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x174) & 0x30) == 0) {
    *(undefined2 *)(param_1 + 0x4a) =
         *(undefined2 *)(&DAT_800a457c + (uint)*(byte *)(param_1 + 0x6d) * 2);
  }
  else {
    *(undefined2 *)(param_1 + 0x4a) = DAT_800a4582;
  }
  if ((param_2 != 0) && ((*(ushort *)(param_1 + 0x17e) & 0x180) != 0)) {
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x1940;
  }
  return;
}

