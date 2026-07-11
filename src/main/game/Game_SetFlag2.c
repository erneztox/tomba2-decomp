/**
 * @brief Sets bit flag 2: _DAT_800bfe34 |= 1 << (param_1 & 0x1F)
 * @note Original: func_8006F02C at 0x8006F02C
 */
// Game_SetFlag2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Game_SetFlag2(uint param_1)

{
  _DAT_800bfe34 = _DAT_800bfe34 | 1 << (param_1 & 0x1f);
  return;
}
