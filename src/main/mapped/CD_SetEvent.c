/**
 * @brief CD event setter: calls FUN_80089b84 with DAT_800ac30c, zeros DAT_800ac308
 * @note Original: func_8008C260 at 0x8008C260
 */
// CD_SetEvent



void FUN_8008c260(void)

{
  FUN_80089b84(DAT_800ac30c);
  DAT_800ac308 = 0;
  return;
}
