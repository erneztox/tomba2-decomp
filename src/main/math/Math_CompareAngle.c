/**
 * @brief Angle comparison: checks if (a-b-0x400)&0xFFF is in range, with direction flag
 * @note Original: func_80077768 at 0x80077768
 */
// Math_CompareAngle



s32 Math_CompareAngle(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (param_1 - param_2) - 0x400U & 0xfff;
  if (param_3 != 0) {
    return 0x7ff < uVar1;
  }
  return uVar1 < 0x800;
}
