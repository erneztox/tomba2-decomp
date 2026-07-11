// GAME_SequenceCleanup (GAME_SequenceCleanup) - Sequence cleanup: clears flags, resets to menu dispatch state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_SequenceCleanup(void)

{
  *(u8 *)(g_OverlayEntity + 0x6b) = 0;
  g_PauseFlag = 0;
  g_NextState = 8;
  UI_DrawScreenOverlay();
  return;
}

