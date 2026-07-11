/**
 * @brief Returns CD-ROM status u8 from 0x800AAD1A
 * @note Original: func_80085C74 at 0x80085C74
 */
// CD_GetStatus



s16 FUN_80085c74(void)

{
  return DAT_800aad1a;
}
