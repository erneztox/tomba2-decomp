/**
 * @brief CD ready check: returns DAT_800ac638 != 1
 * @note Original: func_80099478 at 0x80099478
 */
// CD_IsReady



bool FUN_80099478(void)

{
  return DAT_800ac638 != 1;
}
