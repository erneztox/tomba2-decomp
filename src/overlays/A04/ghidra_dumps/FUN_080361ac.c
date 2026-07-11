// FUN_080361ac

void FUN_080361ac(undefined1 *param_1)

{
  func_0x0012f41c(param_1,0,8);
  *param_1 = 1;
  func_0x0012f690(param_1,0xffffffff,0x28,0x3c);
  *(undefined2 *)(param_1 + 0x44) = 0x1400;
  *(undefined2 *)(param_1 + 0x4a) = 0xff00;
  param_1[5] = 4;
  param_1[6] = 6;
  param_1[4] = 1;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x78) = 0;
  param_1[7] = 0;
  param_1[0x1b] = param_1[0x1b] & 0xbf;
  *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x32) - *(short *)(param_1 + 0x70);
  return;
}

