/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80014F44 at 0x80014F44
 */
// DMA_SyncWait2



void DMA_SyncWait2(int param_1)

{
  int in_v0;
  uint uVar1;
  int iVar2;
  undefined4 unaff_s0;
  
  *DAT_8002562c = param_1 + in_v0;
  *DAT_80025630 = unaff_s0;
  *DAT_80025634 = 0x11000002;
  DMA_SyncWait2();
  uVar1 = *DAT_80025634;
  while (((uVar1 & 0x1000000) != 0 && (iVar2 = DMA_SyncWait2(), iVar2 == 0))) {
    uVar1 = *DAT_80025634;
  }
  return;
}
