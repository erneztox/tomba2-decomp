/**
 * @brief Sets unpause request flag (0x800BF80F = 1)
 * @note Original: func_800269EC at 0x800269EC
 */
// Game_SetUnpause



void Game_SetUnpause(void)

{
  DAT_800bf80f = 1;
  return;
}
