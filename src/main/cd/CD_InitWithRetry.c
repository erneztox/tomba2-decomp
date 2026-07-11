/**
 * @brief CD init with 4 retries: sets callbacks at 0x800ABF24 on success, prints error on fail
 * @note Original: func_800898A0 at 0x800898A0
 */
// CD_InitWithRetry



s32 CD_InitWithRetry(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    iVar1 = CD_InitAttempt();
    if (iVar1 == 1) {
      DAT_800abf24 = CD_Cmd_40b;
      DAT_800abf28 = 0;
      DAT_800abfbc = CD_Cmd_20;
      DAT_800abfc0 = CD_Cmd_40;
      return 1;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  Debug_Printf(s_CdInit__Init_failed_8001c0f0);
  return 0;
}
