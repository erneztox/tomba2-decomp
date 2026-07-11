/**
 * @brief Sets event bit flag: _DAT_800bfe48 |= 1 << (param_1 & 0x1F)
 * @note Original: func_8006F00C at 0x8006F00C
 */
// Game_SetEventFlag



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006f00c(uint param_1)

{
  _DAT_800bfe48 = _DAT_800bfe48 | 1 << (param_1 & 0x1f);
  return;
}
