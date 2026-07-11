/**
 * @brief Returns CD mode u8 from 0x800ABFC8
 * @note Original: func_80089A00 at 0x80089A00
 */
// CD_GetMode



u8 FUN_80089a00(void)

{
  return (u8)DAT_800abfc8;
}
