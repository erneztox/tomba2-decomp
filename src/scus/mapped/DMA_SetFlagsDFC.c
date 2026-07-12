/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80015DFC at 0x80015DFC
 */
// DMA_SetFlagsDFC



undefined4 DMA_SetFlagsDFC(void)

{
  undefined4 uVar1;
  uint unaff_s0;
  
  *DAT_8002561c = 0x1000000;
  DMA_SetFlagsDFC(DAT_8002564c);
  uVar1 = 0;
  if ((unaff_s0 & 7) == 0) {
    uVar1 = DMA_SetFlagsDFC();
  }
  return uVar1;
}
