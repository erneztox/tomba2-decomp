/**
 * @brief Sets event bit flag: _g_EventFlags |= 1 << (param_1 & 0x1F)
 * @note Original: func_8006F00C at 0x8006F00C
 */
// Game_SetEventFlag



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Game_SetEventFlag(uint param_1)

{
  _g_EventFlags = _g_EventFlags | 1 << (param_1 & 0x1f);
  return;
}
