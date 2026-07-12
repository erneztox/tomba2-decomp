/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_8001598C at 0x8001598C
 */
// DMA_UpdateTable5FC



undefined4 DMA_UpdateTable5FC(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_v0;
  int iVar1;
  int in_v1;
  
  iVar1 = in_v1 * 0x60 + -0x7ffc79fc;
  *(int *)(&DAT_800385fc + in_v0 * 0x60) = iVar1;
  *(int *)(param_3 + 0x14) = iVar1;
  DMA_UpdateTable5FC(&DAT_800384a8);
  return 0;
}
