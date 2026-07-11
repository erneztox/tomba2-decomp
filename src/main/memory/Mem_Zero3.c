/**
 * @brief Memory zero variant 3: memset to 0 (duplicate)
 * @note Original: func_800865C8 at 0x800865C8
 */
// Mem_Zero3



void FUN_800865c8(s32 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}
