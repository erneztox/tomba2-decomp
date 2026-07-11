/**
 * @brief CD seek advance: increments DAT_800ac2ec by stride, decrements counter
 * @note Original: func_8008C508 at 0x8008C508
 */
// CD_AdvanceSeek



void CD_AdvanceSeek(void)

{
  DAT_800ac2ec = DAT_800ac2ec + DAT_800ac2f4 * 4;
  DAT_800ac2f8 = DAT_800ac2f8 + -1;
  g_CD_Counter = g_CD_Counter + 1;
  if (DAT_800ac2f8 == 0) {
    CD_SetErrorCallback(DAT_800ac310);
    if ((DAT_800abf28 & 1) != 0) {
      CD_SetTimerCallback(DAT_800ac314);
    }
    CD_SetEventCallback(CD_SetEvent);
    CD_SendCmdRetry2(9,0);
    g_CD_Event = 1;
    if (DAT_800abf24 != (code *)0x0) {
      (*DAT_800abf24)(2,DAT_800ac318);
    }
  }
  return;
}
