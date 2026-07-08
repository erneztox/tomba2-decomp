
uint FUN_80014eac(int param_1,uint param_2,uint param_3)

{
  int in_v0;
  
  return in_v0 << 0xf | param_2 | 0xe2000000 |
         ((int)(-(int)*(short *)(param_1 + 6) & 0xffU) >> 3) << 5 | param_3;
}

