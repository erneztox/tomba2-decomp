// FUN_08019fdc

void FUN_08019fdc(int param_1)

{
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  undefined2 local_e;
  
  local_16 = (undefined2)
             ((*(int *)(*(int *)(param_1 + 0xe8) + 0x2c) + *(int *)(*(int *)(param_1 + 0xf8) + 0x2c)
              ) / 2);
  local_12 = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x84);
  local_e = (undefined2)
            ((*(int *)(*(int *)(param_1 + 0xe8) + 0x34) + *(int *)(*(int *)(param_1 + 0xf8) + 0x34))
            / 2);
  func_0x0003116c(0x35,auStack_18,0xffffffa6);
  return;
}

