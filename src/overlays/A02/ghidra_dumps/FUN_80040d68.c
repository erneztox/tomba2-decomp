// FUN_80040d68

void FUN_80040d68(int param_1,ushort *param_2)

{
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  FUN_80040de0();
  *(undefined1 *)(param_1 + 0x71) = 0;
  if ((*param_2 & 0x1000) != 0) {
    *(undefined1 *)(param_1 + 0x71) = 2;
  }
  if ((*param_2 & 0x4000) != 0) {
    *(byte *)(param_1 + 0x71) = *(byte *)(param_1 + 0x71) | 4;
  }
  return;
}

