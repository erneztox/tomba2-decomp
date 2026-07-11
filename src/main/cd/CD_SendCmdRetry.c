/**
 * @brief CD command with 3 retries: calls FUN_8008ac34 with fallback, restores callback on fail
 * @note Original: func_80089BAC at 0x80089BAC
 */
// CD_SendCmdRetry



undefined4 FUN_80089bac(byte param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_800abfbc;
  iVar3 = 3;
  while( true ) {
    DAT_800abfbc = 0;
    if ((param_1 != 1) && (((byte)DAT_800abfc8 & 0x10) != 0)) {
      FUN_8008ac34(1,0,0,0);
    }
    if ((((param_2 == 0) || (*(int *)(&DAT_800abf34 + (uint)param_1 * 4) == 0)) ||
        (iVar2 = FUN_8008ac34(2,param_2,param_3,0), iVar2 == 0)) &&
       (DAT_800abfbc = uVar1, iVar2 = FUN_8008ac34(param_1,param_2,param_3,0), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      DAT_800abfbc = uVar1;
      return 0;
    }
  }
  return 1;
}
