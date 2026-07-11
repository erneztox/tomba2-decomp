/**
 * @brief Clears audio channel: sends mute SPU command
 * @note Original: func_80026510 at 0x80026510
 */
// Audio_ClearChannel



void FUN_80026510(void)

{
  if (('\x01' < g_TimerFlag) || (DAT_800bf839 != '\0')) {
    FUN_80075cec(0xffffffff);
  }
  return;
}
