// GAME_SequenceCleanup (GAME_SequenceCleanup) - Sequence cleanup: clears flags, resets to menu dispatch state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_SequenceCleanup(void)

{
  *(undefined1 *)(_DAT_1f800138 + 0x6b) = 0;
  DAT_1f800136 = 0;
  DAT_800bf819 = 8;
  func_0x00050970();
  return;
}

