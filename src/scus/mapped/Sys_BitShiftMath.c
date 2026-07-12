/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80014EAC at 0x80014EAC
 */
// Sys_BitShiftMath



uint Sys_BitShiftMath(int param_1,uint param_2,uint param_3)

{
  int in_v0;
  
  return in_v0 << 0xf | param_2 | 0xe2000000 |
         ((int)(-(int)*(short *)(param_1 + 6) & 0xffU) >> 3) << 5 | param_3;
}
