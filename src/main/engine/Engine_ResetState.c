/**
 * @brief Engine state reset: zeros 5 globals, sets g_State235=2
 * @note Original: func_80050A0C at 0x80050A0C
 */
// Engine_ResetState



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Engine_ResetState(void)

{
  _DAT_800e809c = 0;
  g_State235 = 2;
  DAT_1f800135 = 0;
  DAT_1f80019c = 0;
  DAT_1f80023b = 0;
  DAT_1f800233 = 0;
  g_GameMode = 0;
  DAT_1f800234 = 0;
  g_DMAFlag = 0;
  g_PadFlag = 0;
  Game_SetGlobal(0x45);
  return;
}
