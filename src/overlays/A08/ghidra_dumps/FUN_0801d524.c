// FUN_0801d524

void FUN_0801d524(int param_1)

{
  short extraout_var;
  
  func_0x0007778c();
  *(ushort *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 0x40U & 0xfff;
  func_0x00083e80();
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x60) + extraout_var;
  func_0x0004b374(param_1,0);
  return;
}

