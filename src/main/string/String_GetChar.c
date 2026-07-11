/**
 * @brief Gets character from string table at 0x800A4F88 by index and position
 * @note Original: func_80078770 at 0x80078770
 */
// String_GetChar



u8 String_GetChar(uint param_1,uint param_2)

{
  return (&DAT_800a4f88)[(param_1 & 0xff) * 4 + (param_2 & 0xff)];
}
