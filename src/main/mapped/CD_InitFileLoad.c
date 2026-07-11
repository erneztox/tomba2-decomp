/**
 * @brief CD file load init: calls FUN_8008a110, allocates via FUN_8008a00c
 * @note Original: func_8008CE4C at 0x8008CE4C
 */
// CD_InitFileLoad



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8008ce4c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (_DAT_80102760 == 0) {
    iVar1 = FUN_8008a110(&DAT_80104b68);
    FUN_8008a00c(iVar1 + 1,param_1);
    uVar2 = _DAT_80104b6c;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
