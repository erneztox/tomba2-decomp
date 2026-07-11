/**
 * @brief Initializes CD-ROM seek operation: configures parameters, starts seek
 * @note Original: func_80086350 at 0x80086350
 */
// CD_InitSeek



u8 * CD_InitSeek(void)

{
  Mem_Zero3(&DAT_800abdf4,8);
  *DAT_800abdf0 = 0;
  CD_Dispatch08(3,CD_ProcessInterrupt);
  return &LAB_8008651c;
}
