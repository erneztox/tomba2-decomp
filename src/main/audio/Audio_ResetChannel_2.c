/**
 * @brief Resets audio channel: sends mute then re-enable SPU commands
 * @note Original: func_800264BC at 0x800264BC
 */
// Audio_ResetChannel



void Audio_ResetChannel(void)

{
  if (('\x01' < g_TimerFlag) || (DAT_800bf839 != '\0')) {
    Audio_ClampVolume(0xffffffff);
    Audio_ClampVolume(0x47ff);
  }
  return;
}
