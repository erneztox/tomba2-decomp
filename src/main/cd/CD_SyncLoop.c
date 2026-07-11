/**
 * @brief CD sync loop: polls g_CD_Event, waits for completion
 * @note Original: func_8008C960 at 0x8008C960
 */
// CD_SyncLoop



s32 CD_SyncLoop(s32 param_1,s32 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (g_CD_Event != 0) {
    iVar1 = Timer_GetCounter(0xffffffff);
    do {
      if (g_CD_Event == 0) goto LAB_8008c9dc;
      iVar2 = Timer_GetCounter(0xffffffff);
    } while ((uint)(iVar2 - iVar1) < 0x79);
    CD_SetEventCallback(g_CD_Param);
    g_CD_Event = 0;
  }
LAB_8008c9dc:
  if ((param_3 & 0x30) == 0) {
    DAT_800ac2f4 = 0x200;
  }
  else if ((param_3 & 0x30) == 0x20) {
    DAT_800ac2f4 = 0x249;
  }
  else {
    DAT_800ac2f4 = 0x246;
  }
  DAT_800ac2f0 = param_3 | 0x20;
  DAT_800ac2e4 = param_1;
  DAT_800ac2e8 = param_2;
  g_CD_Param = CD_SetEventCallback(0);
  DAT_800ac310 = CD_SetErrorCallback(0);
  if ((DAT_800abf28 & 1) != 0) {
    DAT_800ac314 = CD_SetTimerCallback(0);
  }
  g_CD_SeekPos = Timer_GetCounter(0xffffffff);
  uVar3 = CD_GetMode();
  if ((uVar3 & 0xe0) != 0) {
    CD_CmdRetry(9,0,0);
  }
  iVar1 = CD_EventHandler(0);
  return 0 < iVar1;
}
