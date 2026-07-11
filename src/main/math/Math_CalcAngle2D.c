/**
 * @brief Calculates angle between two 2D points using Math_Atan2
 * @note Original: func_800782B0 at 0x800782B0
 */
// Math_CalcAngle2D



int Math_CalcAngle2D(int param_1,s16 param_2,s16 param_3)

{
  s16 sVar1;
  
  sVar1 = Math_Atan2((int)*(s16 *)(param_1 + 10) - (int)param_3,
                       (int)param_2 - (int)*(s16 *)(param_1 + 2));
  return (int)sVar1;
}
