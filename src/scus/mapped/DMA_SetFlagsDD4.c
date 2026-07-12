/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80015DD4 at 0x80015DD4
 */
// DMA_SetFlagsDD4



undefined4 DMA_SetFlagsDD4(void)

{
  undefined4 uVar1;
  int in_v1;
  uint unaff_s0;
  
  **(uint **)(in_v1 + 0x5638) = **(uint **)(in_v1 + 0x5638) | 0x800;
  *DAT_8002561c = 0x2000000;
  *DAT_8002561c = 0x1000000;
  DMA_SetFlagsDD4(DAT_8002564c);
  uVar1 = 0;
  if ((unaff_s0 & 7) == 0) {
    uVar1 = DMA_SetFlagsDD4();
  }
  return uVar1;
}
