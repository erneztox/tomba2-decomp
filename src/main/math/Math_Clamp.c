/**
 * @brief Math clamp: clamps value to range [-param2, +param2]
 * @note Original: func_8006CE74 at 0x8006CE74
 */
// Math_Clamp



int FUN_8006ce74(short param_1,short param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (iVar1 < 0) {
    if (iVar1 < -(int)param_2) {
      param_1 = -param_2;
    }
  }
  else if (param_2 < iVar1) {
    param_1 = param_2;
  }
  return (int)param_1;
}
