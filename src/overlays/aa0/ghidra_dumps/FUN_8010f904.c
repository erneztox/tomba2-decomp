// FUN_8010f904

void FUN_8010f904(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 3;
  func_0x8004d4c4(0x78,1);
  func_0x8004b0d8(param_1);
  DAT_800bf9ea = DAT_800bf9ea & ~(byte)(1 << ((int)*(short *)(param_1 + 0x60) & 0x1fU)) &
                 ~(byte)(1 << ((int)*(short *)(param_1 + 0x60) + 4U & 0x1f));
  func_0x80040c00(0x4e);
  return;
}

