/**
 * @brief Validated setter: clamps param to [1,0x18), sets DAT_80105cec, returns value or -1
 * @note Original: func_800963A0 at 0x800963A0
 */
// CD_SetValidatedParam



int FUN_800963a0(s8 param_1)

{
  int iVar1;
  
  if ((u8)(param_1 - 1U) < 0x18) {
    iVar1 = (int)param_1;
    DAT_80105cec = param_1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}
