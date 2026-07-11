/**
 * @brief Memory zero variant 2: memset to 0 (duplicate)
 * @note Original: func_80086320 at 0x80086320
 */
// Mem_Zero2



void FUN_80086320(s32 *param_1,int param_2)

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
