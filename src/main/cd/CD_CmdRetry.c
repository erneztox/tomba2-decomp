/**
 * @brief CD command with retry: tries cmd up to 3 times with callback fallback
 * @note Original: func_80089E1C at 0x80089E1C
 */
// CD_CmdRetry



s32 CD_CmdRetry(u8 param_1,int param_2,s32 param_3)

{
  s32 uVar1;
  s32 bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_800abfbc;
  iVar5 = 3;
  do {
    DAT_800abfbc = 0;
    if ((param_1 != 1) && (((u8)DAT_800abfc8 & 0x10) != 0)) {
      CD_Control(1,0,0,0);
    }
    if (((param_2 == 0) || (*(int *)(&DAT_800abf34 + (uint)param_1 * 4) == 0)) ||
       (iVar3 = CD_Control(2,param_2,param_3,0), iVar3 == 0)) {
      DAT_800abfbc = uVar1;
      iVar3 = CD_Control(param_1,param_2,param_3,0);
      iVar4 = 0;
      if (iVar3 == 0) break;
    }
    iVar5 = iVar5 + -1;
    iVar4 = -1;
    DAT_800abfbc = uVar1;
  } while (iVar5 != -1);
  if (iVar4 == 0) {
    iVar5 = CD_Sync(0,param_3);
    bVar2 = iVar5 == 2;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}
