/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80014F00 at 0x80014F00
 */
// DMA_SyncWait



int DMA_SyncWait(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  *DAT_80025638 = *DAT_80025638 | 0x8000000;
  *DAT_80025634 = 0;
  *DAT_8002562c = param_1 + param_2 * 4 + -4;
  *DAT_80025630 = param_2;
  *DAT_80025634 = 0x11000002;
  DMA_SyncWait();
  uVar1 = *DAT_80025634;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return param_2;
    }
    iVar2 = DMA_SyncWait();
    if (iVar2 != 0) break;
    uVar1 = *DAT_80025634;
  }
  return -1;
}
