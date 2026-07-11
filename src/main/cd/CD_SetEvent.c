/**
 * @brief CD event setter: calls FUN_80089b84 with g_CD_Param, zeros g_CD_Event
 * @note Original: func_8008C260 at 0x8008C260
 */
// CD_SetEvent



void FUN_8008c260(void)

{
  FUN_80089b84(g_CD_Param);
  g_CD_Event = 0;
  return;
}
