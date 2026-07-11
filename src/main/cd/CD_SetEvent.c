/**
 * @brief CD event setter: calls CD_SetEventCallback with g_CD_Param, zeros g_CD_Event
 * @note Original: func_8008C260 at 0x8008C260
 */
// CD_SetEvent



void CD_SetEvent(void)

{
  CD_SetEventCallback(g_CD_Param);
  g_CD_Event = 0;
  return;
}
