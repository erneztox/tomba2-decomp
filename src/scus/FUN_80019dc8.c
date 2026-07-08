
int FUN_80019dc8(int param_1,int param_2,uint param_3)

{
  return (param_2 + (param_3 >> 4) * 10 + (param_3 & 0xf)) * 0x4b +
         (uint)(*(byte *)(param_1 + 2) >> 4) * 10 + (*(byte *)(param_1 + 2) & 0xf) + -0x96;
}

