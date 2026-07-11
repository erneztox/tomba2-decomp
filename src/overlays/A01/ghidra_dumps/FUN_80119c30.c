// FUN_80119c30

void FUN_80119c30(int param_1,undefined2 param_2,int param_3)

{
  int in_v0;
  int in_v1;
  int in_t0;
  
  *(short *)(in_t0 + 0x72) = (short)(in_v1 + param_1 >> 1);
  *(undefined2 *)(in_t0 + 0x6a) = param_2;
  *(int *)(param_3 + 0x34) = in_v0 * 0x10000 + 0x100;
  return;
}

