/**
 * @brief DMA transfer with wait: sets up DMA callback Sys_GPUSync, polls until complete
 * @note Original: func_8001DB8C at 0x8001DB8C
 */
// DMA_TransferAndWait



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int DMA_TransferAndWait(s32 param_1,s32 param_2,int param_3)

{
  Sys_SetEvent(1);
  _g_DMASize = param_3 + 3;
  if (_g_DMASize < 0) {
    _g_DMASize = param_3 + 6;
  }
  _g_DMASize = _g_DMASize >> 2;
  _g_DMADest = param_2;
  _g_DMASrc = param_1;
  Sys_SetCallback(1,Sys_GPUSync);
  while (_DAT_801fe070 != 0) {
    Sys_TriggerIRQ(1);
  }
  return param_3;
}
