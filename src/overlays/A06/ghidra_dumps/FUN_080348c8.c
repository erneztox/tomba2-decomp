// FUN_080348c8

void FUN_080348c8(undefined1 *param_1)

{
  *(undefined2 *)(param_1 + 0x2e) = 0x2380;
  *(undefined2 *)(param_1 + 0x36) = 0x4b1a;
  *(undefined2 *)(param_1 + 0x32) = 0xf268;
  **(undefined2 **)(param_1 + 0xc0) = 0x8c;
  func_0x00041194(param_1,(int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84),0,0);
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x32) = 0xf268;
  *(undefined2 *)(param_1 + 0x60) = 0;
  param_1[5] = 3;
  param_1[6] = 0;
  return;
}

