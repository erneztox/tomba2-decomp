
uint FUN_80017fc4(int param_1,uint param_2)

{
  return (param_2 & 0x3ff) << 6 | param_1 >> 4 & 0x3fU;
}

