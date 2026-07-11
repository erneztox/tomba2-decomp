/**
 * @brief Sets up VRAM texture transfer: callback setup, address calc, event trigger
 * @note Original: func_80044CD4 at 0x80044CD4
 */
// Texture_TransferToVRAM



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 Texture_TransferToVRAM(s32 param_1,int param_2,int param_3)

{
  s32 uVar1;
  
  g_DMAFlag = 0;
  Sys_SetEvent(2);
  uVar1 = 0;
  if (_DAT_801fe070 == 0) {
    _g_DMASize = param_3 + 3;
    _g_DMADest = DAT_800be100 + param_2;
    if (_g_DMASize < 0) {
      _g_DMASize = param_3 + 6;
    }
    _g_DMASize = _g_DMASize >> 2;
    DAT_801fe0dc = 1;
    _g_DMASrc = param_1;
    Sys_SetCallback(1,Sys_GPUSync);
    uVar1 = 1;
  }
  return uVar1;
}
