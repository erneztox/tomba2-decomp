/**
 * @brief Opens file on CD: looks up name, seeks to sector, returns success
 * @note Original: func_8008C1EC at 0x8008C1EC
 */
// CD_OpenFile



bool FUN_8008c1ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_18->counter1;
  
  FUN_8008a00c(param_2,auStack_18);
  FUN_80089bac(2,auStack_18,0);
  FUN_8008c960(param_1,param_3,0x80);
  iVar1 = FUN_8008cafc(0,0);
  return iVar1 == 0;
}
