/**
 * @brief Divide by 8 with rounding: (param+7)>>3 + param
 * @note Original: func_8004D7EC at 0x8004D7EC
 */
// Math_Div8Round



uint FUN_8004d7ec(int param_1,s8 param_2)

{
  s16 sVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 < 0) {
    iVar2 = param_1 + 7;
  }
  param_1 = param_1 + (iVar2 >> 3) * -8;
  sVar1 = (s16)(iVar2 >> 3);
  if (param_2 != '\0') {
    return (uint)*(u8 *)(sVar1 + -0x7ff402cc) & 1 << (param_1 * 0x10000 >> 0x10 & 0x1fU);
  }
  return (uint)*(u8 *)(sVar1 + -0x7ff4034c) & 1 << (param_1 * 0x10000 >> 0x10 & 0x1fU);
}
