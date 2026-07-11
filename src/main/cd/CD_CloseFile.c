/**
 * @brief CD file close: dispatches on DAT_800abfdc flag, calls close or event handlers
 * @note Original: func_8008CD40 at 0x8008CD40
 */
// CD_CloseFile



void CD_CloseFile(void)

{
  BIOS_Syscall0();
  if (DAT_800abfdc == 1) {
    Sys_RegisterEvent3(0);
    Game_SwapGlobal(0);
  }
  else {
    CD_SetTimerCallback(0);
    CD_SetErrorCallback(0);
  }
  *DAT_800ac334 = 0;
  *DAT_800ac340 = 0;
  BIOS_Syscall0_2();
  return;
}
