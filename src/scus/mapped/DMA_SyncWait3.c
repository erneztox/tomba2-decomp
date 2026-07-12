/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80014F8C at 0x80014F8C
 */
// DMA_SyncWait3



void DMA_SyncWait3(void)

{
  uint in_v0;
  uint uVar1;
  int iVar2;
  uint in_v1;
  
  uVar1 = in_v0 & in_v1;
  while ((uVar1 != 0 && (iVar2 = DMA_SyncWait3(), iVar2 == 0))) {
    uVar1 = *DAT_80025634 & 0x1000000;
  }
  return;
}
