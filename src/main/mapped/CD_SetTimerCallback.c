/**
 * @brief Sets CD timer callback via 0x80085B80 with mode 3
 * @note Original: func_80089FC8 at 0x80089FC8
 */
// CD_SetTimerCallback



void FUN_80089fc8(undefined4 param_1)

{
  FUN_80085b80(3,param_1);
  return;
}
