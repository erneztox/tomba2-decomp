/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80015E70 at 0x80015E70
 */
// DMA_LoopWait2



undefined4 DMA_LoopWait2(void)

{
  int in_v0;
  undefined4 uVar1;
  int iVar2;
  
  if (in_v0 == 0) {
    if (DAT_8002563c != DAT_80025640) {
      uVar1 = DMA_LoopWait2();
      return uVar1;
    }
    do {
      if (((*DAT_80025628 & 0x1000000) == 0) && ((*DAT_8002561c & 0x4000000) != 0)) {
        uVar1 = DMA_LoopWait2();
        return uVar1;
      }
      iVar2 = DMA_LoopWait2();
    } while (iVar2 == 0);
  }
  return 0xffffffff;
}
