// FUN_0802f054

void FUN_0802f054(int param_1)

{
  uint in_v0;
  
  if ((in_v0 & 1) != 0) {
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) -
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) -
         (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
    return;
  }
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
  return;
}

