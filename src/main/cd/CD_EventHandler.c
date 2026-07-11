/**
 * @brief CD event handler: checks DAT_800abf28, dispatches events
 * @note Original: func_8008C5D8 at 0x8008C5D8
 */
// CD_EventHandler



#include "tomba.h"
s32 CD_EventHandler(int param_1)

{
  uint uVar1;
  s32 uVar2;
  int iVar3;
  uint uVar4;
  u8 local_18->counter1;
  
  CD_SetEventCallback(0);
  CD_SetErrorCallback(0);
  if ((DAT_800abf28 & 1) != 0) {
    CD_SetTimerCallback(0);
  }
  uVar1 = CD_GetMode();
  if ((uVar1 & 0x10) != 0) {
    uVar1 = Timer_GetCounter(0xffffffff);
    if ((uVar1 & 0x3f) == 0) {
      Debug_PrintString(s_CdRead__Shell_open____8001c588);
    }
    CD_SendCmdRetry2(1,0);
    g_CD_SeekPos = Timer_GetCounter(0xffffffff);
    DAT_800ac2f8 = 0xffffffff;
    return 0xffffffff;
  }
  if (param_1 != 0) {
    Debug_PrintString(s_CdRead__retry____8001c5a0);
    CD_SendCmdRetry(9,0,0);
    uVar2 = CD_GetParamPtr();
    iVar3 = CD_SendCmdRetry(2,uVar2,0);
    if (iVar3 == 0) {
      DAT_800ac2f8 = 0xffffffff;
      return 0xffffffff;
    }
  }
  CD_Cancel();
  local_18->type = (u8)DAT_800ac2f0;
  uVar4 = DAT_800ac2f0 & 0xff;
  uVar1 = CD_GetStatusByte();
  if (((uVar4 != uVar1) || (param_1 != 0)) && (iVar3 = CD_SendCmdRetry(0xe,local_18,0), iVar3 == 0)) {
    DAT_800ac2f8 = 0xffffffff;
    return 0xffffffff;
  }
  uVar2 = CD_GetParamPtr();
  g_CD_Counter = CD_DecodeTime(uVar2);
  CD_SetErrorCallback(CD_FileRead);
  if ((DAT_800abf28 & 1) != 0) {
    CD_SetTimerCallback(CD_AdvanceSeek);
  }
  DAT_800ac2ec = DAT_800ac2e8;
  CD_SendCmdRetry2(6,0);
  DAT_800ac2f8 = DAT_800ac2e4;
  DAT_800ac2fc = Timer_GetCounter(0xffffffff);
  return DAT_800ac2f8;
}
