/**
 * @brief Random integer in range [min, max) using LCG generator
 * @note Original: func_80032A44 at 0x80032A44
 */
// Math_RandomRange



int FUN_80032a44(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_8009a450();
  return (iVar1 * (param_2 - param_1) >> 0xf) + param_1;
}
