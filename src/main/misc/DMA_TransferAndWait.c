/**
 * @brief DMA transfer with wait: sets up DMA callback FUN_8001db38, polls until complete
 * @note Original: func_8001DB8C at 0x8001DB8C
 */
// DMA_TransferAndWait



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8001db8c(s32 param_1,s32 param_2,int param_3)

{
  FUN_80052010(1);
  _g_DMASize = param_3 + 3;
  if (_g_DMASize < 0) {
    _g_DMASize = param_3 + 6;
  }
  _g_DMASize = _g_DMASize >> 2;
  _g_DMADest = param_2;
  _g_DMASrc = param_1;
  FUN_80051f14(1,FUN_8001db38);
  while (_DAT_801fe070 != 0) {
    FUN_80051f80(1);
  }
  return param_3;
}
