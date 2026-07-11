/**
 * @brief CD command retry variant 2: same as SendCmdRetry but 4th param=1
 * @note Original: func_80089CE8 at 0x80089CE8
 */
// CD_SendCmdRetry2



s32 CD_SendCmdRetry2(u8 param_1,int param_2)

{
  s32 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_800abfbc;
  iVar3 = 3;
  while( true ) {
    DAT_800abfbc = 0;
    if ((param_1 != 1) && (((u8)DAT_800abfc8 & 0x10) != 0)) {
      CD_Control(1,0,0,0);
    }
    if ((((param_2 == 0) || (*(int *)(&DAT_800abf34 + (uint)param_1 * 4) == 0)) ||
        (iVar2 = CD_Control(2,param_2,0,0), iVar2 == 0)) &&
       (DAT_800abfbc = uVar1, iVar2 = CD_Control(param_1,param_2,0,1), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      DAT_800abfbc = uVar1;
      return 0;
    }
  }
  return 1;
}
