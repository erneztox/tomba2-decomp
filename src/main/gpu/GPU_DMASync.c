/**
 * @brief GPU DMA sync: waits for DMA channel completion, handles timeout
 * @note Original: func_80083364 at 0x80083364
 */
// GPU_DMASync



uint GPU_DMASync(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    GPU_CheckDMA();
    do {
      if (DAT_800a5ac8 == DAT_800a5acc) {
        while (((*DAT_800a5ab4 & 0x1000000) != 0 || ((*DAT_800a5aa8 & 0x4000000) == 0))) {
          iVar1 = GPU_CheckTimeout();
          if (iVar1 != 0) {
            return 0xffffffff;
          }
        }
        return 0;
      }
      GPU_DMACallback();
      iVar1 = GPU_CheckTimeout();
    } while (iVar1 == 0);
    return 0xffffffff;
  }
  uVar2 = DAT_800a5ac8 - DAT_800a5acc & 0x3f;
  if (uVar2 != 0) {
    GPU_DMACallback();
  }
  if (((*DAT_800a5ab4 & 0x1000000) == 0) && ((*DAT_800a5aa8 & 0x4000000) != 0)) {
    return uVar2;
  }
  if (uVar2 != 0) {
    return uVar2;
  }
  return 1;
}
