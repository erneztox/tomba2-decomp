/**
 * @brief Checks if asset is loaded by looking up sector table
 * @note Original: func_80045580 at 0x80045580
 */
// CD_CheckLoaded



s32 FUN_80045580(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_80044cd4(0x8018a000,DAT_800a3ec8,*(s32 *)(&DAT_800be11c + param_1 * 8));
  return iVar1 != 0;
}
