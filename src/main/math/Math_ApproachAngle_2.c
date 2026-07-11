/**
 * @brief Approaches target angle by max step with 12-bit wraparound handling
 * @note Original: func_8004139C at 0x8004139C
 */
// Math_ApproachAngle



s32 FUN_8004139c(s16 *param_1,s16 param_2,s16 param_3)

{
  s16 sVar1;
  int iVar2;
  
  iVar2 = (int)param_2 - (int)*param_1;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 <= param_3) {
    *param_1 = param_2;
    return 1;
  }
  sVar1 = param_3;
  if (0x7ff < (param_2 - *param_1 & 0xfffU)) {
    sVar1 = -param_3;
  }
  *param_1 = *param_1 + sVar1;
  if ((int)((int)param_2 - (int)*param_1 & 0xfffU) <= (int)param_3) {
    *param_1 = param_2;
    return 1;
  }
  return 0;
}
