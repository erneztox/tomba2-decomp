/**
 * @brief Memory zero: memset param_2 bytes to 0 starting at param_1
 * @note Original: func_800861BC at 0x800861BC
 */
// Mem_Zero



void Mem_Zero(s32 *param_1,int param_2)

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
