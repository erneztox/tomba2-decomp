/**
 * @brief Dispatches overlay call by game state: 0, 5, 6 each call different overlay functions
 * @note Original: func_80065374 at 0x80065374
 */
// Game_DispatchOverlayCall



void FUN_80065374(void)

{
  if (g_GameState == 5) {
    func_0x80110cb8();
  }
  else if (g_GameState < 6) {
    if (g_GameState == 0) {
      func_0x8010aecc();
    }
  }
  else if (g_GameState == 6) {
    func_0x80113e3c();
  }
  return;
}
