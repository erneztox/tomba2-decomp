/**
 * @brief Resets audio channel: sends mute then re-enable SPU commands
 * @note Original: func_800264BC at 0x800264BC
 */
// Audio_ResetChannel



void FUN_800264bc(void)

{
  if (('\x01' < DAT_800bf80d) || (DAT_800bf839 != '\0')) {
    FUN_80075cec(0xffffffff);
    FUN_80075cec(0x47ff);
  }
  return;
}
