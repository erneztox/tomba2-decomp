/**
 * @brief Sets CD timer callback via 0x80085B80 with mode 3
 * @note Original: func_80089FC8 at 0x80089FC8
 */
// CD_SetTimerCallback



void CD_SetTimerCallback(s32 param_1)

{
  CD_Dispatch04(3,param_1);
  return;
}
