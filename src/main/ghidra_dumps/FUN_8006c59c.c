
void FUN_8006c59c(undefined1 *param_1)

{
  *(undefined2 *)(param_1 + 0x44) = 0x1000;
  *(undefined2 *)(param_1 + 0x80) = 0x3c;
  *(undefined2 *)(param_1 + 0x82) = 0x78;
  *(undefined2 *)(param_1 + 0x84) = 100;
  *(undefined2 *)(param_1 + 0x86) = 200;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x40) = 0xd;
  param_1[0xb] = 0x20;
  param_1[0x5f] = 0;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(code **)(param_1 + 0x18) = FUN_8002c138;
  *(undefined2 *)(param_1 + 0x60) = 0;
  param_1[4] = param_1[4] + '\x01';
  return;
}

