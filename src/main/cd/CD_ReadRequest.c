/**
 * @brief CD-ROM read request: initiates read with retry loop via FUN_80089ce8/80089b44
 * @note Original: func_8001CE04 at 0x8001CE04
 */
// CD_ReadRequest



undefined4 FUN_8001ce04(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_80089ce8(param_1);
  while( true ) {
    iVar1 = FUN_80089b44(1,param_3);
    if (iVar1 == 2) {
      return 0;
    }
    if (iVar1 == 5) break;
    FUN_80051f80(1);
  }
  FUN_80051f80(1);
  return 1;
}
