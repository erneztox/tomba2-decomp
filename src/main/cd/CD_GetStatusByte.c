/**
 * @brief Returns CD status u8 from 0x800ABFD8
 * @note Original: func_80089A10 at 0x80089A10
 */
// CD_GetStatusByte



u8 CD_GetStatusByte(void)

{
  return DAT_800abfd8;
}
