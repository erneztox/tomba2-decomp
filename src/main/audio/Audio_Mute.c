/**
 * @brief Mutes audio output with SPU command
 * @note Original: func_80026470 at 0x80026470
 */
// Audio_Mute



void FUN_80026470(void)

{
  if (('\x01' < g_TimerFlag) || (DAT_800bf839 != '\0')) {
    FUN_80075cec(0);
  }
  return;
}
