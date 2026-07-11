/**
 * @brief CD register bit set/clear: toggles bit 0x08000000 on param_1 based on param_2
 * @note Original: func_8009C784 at 0x8009C784
 */
// CD_SetRegBit



void FUN_8009c784(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = *param_1 | 0x8000000;
  }
  else {
    uVar1 = *param_1 & 0xf7ffffff;
  }
  *param_1 = uVar1;
  if ((param_2 & 2) == 0) {
    uVar1 = *param_1 & 0xfdffffff;
  }
  else {
    uVar1 = *param_1 | 0x2000000;
  }
  *param_1 = uVar1;
  FUN_8009c9d0(param_1,(short)*param_1);
  return;
}
