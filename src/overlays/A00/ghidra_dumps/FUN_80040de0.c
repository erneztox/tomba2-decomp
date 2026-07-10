// FUN_80040de0

void FUN_80040de0(int param_1,ushort *param_2)

{
  *(ushort **)(param_1 + 0x6c) = param_2;
  *(ushort *)(param_1 + 0x72) = param_2[1];
  *(ushort *)(param_1 + 0x74) = param_2[2];
  *(ushort *)(param_1 + 0x76) = param_2[3];
  if ((*param_2 & 0x2000) != 0) {
    *(ushort *)(param_1 + 100) = param_2[4];
    *(ushort *)(param_1 + 0x66) = param_2[5];
    *(ushort *)(param_1 + 0x68) = param_2[6];
    *(ushort *)(param_1 + 0x6a) = param_2[7];
  }
  return;
}

