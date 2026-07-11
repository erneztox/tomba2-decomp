/**
 * @brief CD file read: sets DAT_800ac318, checks counter, reads
 * @note Original: func_8008C294 at 0x8008C294
 */
// CD_FileRead



void CD_FileRead(s8 param_1,s32 param_2)

{
  int iVar1;
  s32 uVar2;
  u8 auStack_20 [16];
  
  DAT_800ac318 = param_2;
  if (param_1 == '\x01') {
    if (0 < DAT_800ac2f8) {
      if (DAT_800ac2f4 == 0x200) {
        if ((DAT_800abf28 & 1) == 0) {
          CD_CheckInit(auStack_20,3);
        }
        else {
          CD_SetTimerCallback(0);
          CD_CheckReady(auStack_20,3);
          CD_InitSub(0);
          CD_SetTimerCallback(CD_AdvanceSeek);
        }
        iVar1 = CD_DecodeTime(auStack_20);
        if (iVar1 != g_CD_Counter) {
          Debug_PrintString(s_CdRead__sector_error_8001c570);
          DAT_800ac2f8 = -1;
        }
      }
      if ((DAT_800abf28 & 1) == 0) {
        CD_CheckInit(DAT_800ac2ec,DAT_800ac2f4);
        DAT_800ac2ec = DAT_800ac2ec + DAT_800ac2f4 * 4;
        DAT_800ac2f8 = DAT_800ac2f8 + -1;
        g_CD_Counter = g_CD_Counter + 1;
      }
      else {
        CD_CheckReady(DAT_800ac2ec,DAT_800ac2f4);
      }
    }
  }
  else {
    DAT_800ac2f8 = -1;
  }
  DAT_800ac2fc = Timer_GetCounter(0xffffffff);
  if (DAT_800ac2f8 < 0) {
    CD_EventHandler(1);
  }
  iVar1 = Timer_GetCounter(0xffffffff);
  if (g_CD_SeekPos + 0x4b0 < iVar1) {
    DAT_800ac2f8 = -1;
  }
  if ((DAT_800ac2f8 == 0) || (iVar1 = Timer_GetCounter(0xffffffff), g_CD_SeekPos + 0x4b0 < iVar1)) {
    CD_SetErrorCallback(DAT_800ac310);
    if ((DAT_800abf28 & 1) != 0) {
      CD_SetTimerCallback(DAT_800ac314);
    }
    CD_SetEventCallback(CD_SetEvent);
    CD_SendCmdRetry2(9,0);
    g_CD_Event = 1;
    if (DAT_800abf24 != (code *)0x0) {
      uVar2 = 5;
      if (DAT_800ac2f8 == 0) {
        uVar2 = 2;
      }
      (*DAT_800abf24)(uVar2,param_2);
    }
  }
  return;
}
