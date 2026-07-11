/**
 * @brief CD-ROM read request: initiates read with retry loop via CD_SendCmdRetry2/80089b44
 * @note Original: func_8001CE04 at 0x8001CE04
 */
// CD_ReadRequest



s32 CD_ReadRequest(u8 param_1,s32 param_2,s32 param_3)

{
  int iVar1;
  
  CD_SendCmdRetry2(param_1);
  while( true ) {
    iVar1 = CD_SyncSimple(1,param_3);
    if (iVar1 == 2) {
      return 0;
    }
    if (iVar1 == 5) break;
    Sys_TriggerIRQ(1);
  }
  Sys_TriggerIRQ(1);
  return 1;
}
