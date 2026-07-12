/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80015660 at 0x80015660
 */
// DMA_UpdateRegs



undefined4 DMA_UpdateRegs(void)

{
  undefined4 unaff_s2;
  int unaff_s4;
  
  *DAT_8002561c = 0x4000003;
  *DAT_80025620 = unaff_s2;
  *DAT_80025624 = unaff_s4 << 0x10 | 0x10;
  *DAT_80025628 = 0x1000200;
  return 0;
}
