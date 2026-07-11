/**
 * @brief Clears audio channel: sends mute SPU command
 * @note Original: func_80026510 at 0x80026510
 */
// Audio_ClearChannel



void Audio_ClearChannel(void)

{
  if (('\x01' < g_TimerFlag) || (DAT_800bf839 != '\0')) {
    Audio_ClampVolume(0xffffffff);
  }
  return;
}
