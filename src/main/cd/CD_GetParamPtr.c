/**
 * @brief Returns pointer to CD parameter area at 0x800ABFD4
 * @note Original: func_80089A30 at 0x80089A30
 */
// CD_GetParamPtr



u8 * CD_GetParamPtr(void)

{
  return &DAT_800abfd4;
}
