/**
 * @brief Controller init/reset: resets pad state, waits for acknowledge from hardware
 * @note Original: func_8001CF2C at 0x8001CF2C
 */
// Pad_InitReset



void Pad_InitReset(void)

{
  int iVar1;
  
  Sys_SetEvent(2);
  DAT_800be0e4 = 0;
  Sys_Call(0);
  do {
    iVar1 = CD_CmdRetry(9,0,0);
  } while (iVar1 == 0);
  return;
}
