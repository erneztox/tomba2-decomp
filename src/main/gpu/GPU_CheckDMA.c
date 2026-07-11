/**
 * @brief GPU DMA check: reads timer, sets timeout at DAT_800a5adc, returns status
 * @note Original: func_800834A0 at 0x800834A0
 */
// GPU_CheckDMA



void GPU_CheckDMA(void)

{
  int iVar1;
  
  iVar1 = Timer_GetCounter(0xffffffff);
  DAT_800a5adc = iVar1 + 0xf0;
  DAT_800a5ae0 = 0;
  return;
}
