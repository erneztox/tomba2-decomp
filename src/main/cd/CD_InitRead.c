/**
 * @brief Initializes CD-ROM read operation: sets up DMA, starts transfer
 * @note Original: func_80086230 at 0x80086230
 */
// CD_InitRead



u8 * CD_InitRead(void)

{
  *DAT_800abde4 = 0x100;
  DAT_800abde0 = 0;
  Mem_Zero2(&DAT_800abdc0,8);
  CD_Dispatch08(0,IRQ_Dispatch);
  return &LAB_800862f4;
}
