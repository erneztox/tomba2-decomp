/**
 * @brief Sets game flag bit 7 (0x80) on global at 0x800BF842
 * @note Original: func_80077D64 at 0x80077D64
 */
// Game_SetFlag842



void FUN_80077d64(void)

{
  if ((g_SFXCounter & 0x80) == 0) {
    g_SFXCounter = 0x81;
  }
  return;
}
