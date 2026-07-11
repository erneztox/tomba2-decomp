/**
 * @brief Dispatches level-specific update function from table at 0x8009D1D4 by game state
 * @note Original: func_80022A80 at 0x80022A80
 */
// Engine_DispatchLevel



void Engine_DispatchLevel(void)

{
  if (g_GameState != 3) {
    (**(code **)(&DAT_8009d1d4 + (uint)g_GameState * 4))();
  }
  return;
}
