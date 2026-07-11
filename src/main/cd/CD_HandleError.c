/**
 * @brief CD error handler: on FUN_800977c0=-1, sets flag, decrements counter DAT_80105d70
 * @note Original: func_800964B4 at 0x800964B4
 */
// CD_HandleError



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_800964b4(s32 param_1,s32 param_2,s16 param_3)

{
  int iVar1;
  
  iVar1 = FUN_800977c0();
  if (iVar1 == -1) {
    *(u8 *)(param_3 + -0x7fefa2e8) = 0;
    FUN_80099450(0);
    iVar1 = -1;
    _DAT_80105d70 = _DAT_80105d70 + -1;
  }
  return iVar1;
}
