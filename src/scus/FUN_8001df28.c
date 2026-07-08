
void FUN_8001df28(undefined4 param_1,undefined2 param_2,int param_3)

{
  *(undefined2 *)(DAT_80026d88 + 0x1a6) = param_2;
  FUN_8001dd04();
  *(ushort *)(DAT_80026d88 + 0x1aa) = *(ushort *)(DAT_80026d88 + 0x1aa) | 0x30;
  FUN_8001dd04();
  FUN_8001dcdc();
  *DAT_80026d8c = param_1;
  *DAT_80026d90 = param_3 << 0x10 | 0x10;
  DAT_80026dd8 = 1;
  *DAT_80026d94 = 0x1000200;
  return;
}

