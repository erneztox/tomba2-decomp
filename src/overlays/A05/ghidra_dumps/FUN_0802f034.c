// FUN_0802f034

void FUN_0802f034(undefined1 *param_1)

{
  if (*(short *)(param_1 + 0x62) == 0) {
    *(undefined2 *)(param_1 + 0x62) = 1;
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x52);
    func_0x0003116c(0x24,param_1 + 0x2c,0xfffffff6);
  }
  param_1[0x2b] = 0;
  *param_1 = 1;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

