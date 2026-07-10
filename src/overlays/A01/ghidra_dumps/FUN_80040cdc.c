// FUN_80040cdc

void FUN_80040cdc(int param_1,undefined4 param_2,ushort *param_3)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  *(undefined1 *)(param_1 + 0x46) = 0xff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  FUN_80040de0(param_1,param_3);
  *(undefined1 *)(param_1 + 0x71) = 0;
  if ((*param_3 & 0x1000) != 0) {
    *(undefined1 *)(param_1 + 0x71) = 2;
  }
  if ((*param_3 & 0x4000) != 0) {
    *(byte *)(param_1 + 0x71) = *(byte *)(param_1 + 0x71) | 4;
  }
  return;
}

