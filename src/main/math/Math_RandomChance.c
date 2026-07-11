/**
 * @brief Random probability check: returns random value shifted by N bits (1 in 2^N chance)
 * @note Original: func_80032A88 at 0x80032A88
 */
// Math_RandomChance



int Math_RandomChance(uint param_1)

{
  int iVar1;
  
  iVar1 = Math_Random();
  return iVar1 + -0x4000 >> (param_1 & 0x1f);
}
