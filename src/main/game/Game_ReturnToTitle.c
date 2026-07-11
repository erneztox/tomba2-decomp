/**
 * @brief Returns to title screen: plays SFX 0x7F, resets state, calls level cleanup
 * @note Original: func_80042310 at 0x80042310
 */
// Game_ReturnToTitle



s32 Game_ReturnToTitle(void)

{
  Sys_SetFlag10();
  Audio_PlaySoundEffect(0x7f,0,0);
  g_CurrentOverlay = 0;
  Engine_DispatchOverlay(g_GameState);
  return 1;
}
