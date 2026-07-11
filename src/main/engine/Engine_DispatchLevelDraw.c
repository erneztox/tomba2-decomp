/**
 * @brief Dispatches level-specific draw function from table at 0x8009D22C by game state
 * @note Original: func_80024CF4 at 0x80024CF4
 */
// Engine_DispatchLevelDraw



void Engine_DispatchLevelDraw(void)

{
  (**(code **)(&DAT_8009d22c + (uint)g_GameState * 4))();
  return;
}
