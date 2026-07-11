/**
 * @brief Initializes CD-ROM seek operation: configures parameters, starts seek
 * @note Original: func_80086350 at 0x80086350
 */
// CD_InitSeek



u8 * FUN_80086350(void)

{
  FUN_800865c8(&DAT_800abdf4,8);
  *DAT_800abdf0 = 0;
  FUN_80085b50(3,FUN_8008639c);
  return &LAB_8008651c;
}
