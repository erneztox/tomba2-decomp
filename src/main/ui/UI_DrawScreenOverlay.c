/**
 * @brief Draws screen overlay: calls 0x800508A8 or 0x8005082C based on flag
 * @note Original: func_80050970 at 0x80050970
 */
// UI_DrawScreenOverlay



void FUN_80050970(void)

{
  if (g_ActionFlag == '\0') {
    FUN_800508a8();
  }
  else {
    FUN_8005082c(0,0,0);
  }
  return;
}
