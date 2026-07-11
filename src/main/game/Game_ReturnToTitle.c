/**
 * @brief Returns to title screen: plays SFX 0x7F, resets state, calls level cleanup
 * @note Original: func_80042310 at 0x80042310
 */
// Game_ReturnToTitle



s32 FUN_80042310(void)

{
  FUN_8001cf78();
  FUN_80074590(0x7f,0,0);
  g_CurrentOverlay = 0;
  FUN_80074f24(g_GameState);
  return 1;
}
