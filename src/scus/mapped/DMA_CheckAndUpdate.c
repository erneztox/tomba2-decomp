/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80016168 at 0x80016168
 */
// DMA_CheckAndUpdate



undefined4 DMA_CheckAndUpdate(void)

{
  int in_v0;
  undefined4 uVar1;
  
  if (in_v0 != 0) {
    *DAT_8002561c = 0x9000001;
    uVar1 = DMA_CheckAndUpdate();
    return uVar1;
  }
  return 1;
}
