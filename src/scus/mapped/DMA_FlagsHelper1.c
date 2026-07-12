/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80015E0C at 0x80015E0C
 */
// DMA_FlagsHelper1



undefined4 DMA_FlagsHelper1(void)

{
  undefined4 uVar1;
  uint unaff_s0;
  
  DMA_FlagsHelper1(DAT_8002564c);
  uVar1 = 0;
  if ((unaff_s0 & 7) == 0) {
    uVar1 = DMA_FlagsHelper1();
  }
  return uVar1;
}
