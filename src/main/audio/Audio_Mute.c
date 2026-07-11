/**
 * @brief Mutes audio output with SPU command
 * @note Original: func_80026470 at 0x80026470
 */
// Audio_Mute



void Audio_Mute(void)

{
  if (('\x01' < g_TimerFlag) || (DAT_800bf839 != '\0')) {
    Audio_ClampVolume(0);
  }
  return;
}
