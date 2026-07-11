/**
 * @brief CD slot release: checks slot < 0x10, calls FUN_80097d90, clears, decrements counter
 * @note Original: func_800963D0 at 0x800963D0
 */
// CD_ReleaseSlot



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800963d0(u16 param_1)

{
  int iVar1;
  
  if (param_1 < 0x10) {
    iVar1 = (int)(s16)param_1;
    if ((*(u8 *)(iVar1 + -0x7fefa2e8) < 3) && (*(u8 *)(iVar1 + -0x7fefa2e8) != 0)) {
      FUN_80097d90(*(s32 *)(iVar1 * 4 + -0x7fefa288));
      *(u8 *)(iVar1 + -0x7fefa2e8) = 0;
      _DAT_80105d70 = _DAT_80105d70 + -1;
      iVar1 = FUN_80099478();
      if (iVar1 == 1) {
        FUN_80099450(0);
      }
    }
  }
  return;
}
