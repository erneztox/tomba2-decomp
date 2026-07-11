/**
 * @brief Initializes CD-ROM read operation: sets up DMA, starts transfer
 * @note Original: func_80086230 at 0x80086230
 */
// CD_InitRead



undefined1 * FUN_80086230(void)

{
  *DAT_800abde4 = 0x100;
  DAT_800abde0 = 0;
  FUN_80086320(&DAT_800abdc0,8);
  FUN_80085b50(0,FUN_80086288);
  return &LAB_800862f4;
}
