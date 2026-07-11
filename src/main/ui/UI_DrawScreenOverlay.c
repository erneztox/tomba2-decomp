/**
 * @brief Draws screen overlay: calls 0x800508A8 or 0x8005082C based on flag
 * @note Original: func_80050970 at 0x80050970
 */
// UI_DrawScreenOverlay



void UI_DrawScreenOverlay(void)

{
  if (g_ActionFlag == '\0') {
    Screen_SetMode();
  }
  else {
    Game_InitSaveData(0,0,0);
  }
  return;
}
