/**
 * @brief SFX sequencer: g_SFXCounter state machine, plays SFX 0x29/0x2A in sequence, decrements
 * @note Original: func_80077D8C at 0x80077D8C
 */
// Audio_SFXSequence



void Audio_SFXSequence(void)

{
  if (g_SFXCounter != 0) {
    if ((g_SFXCounter & 0x7f) == 1) {
      Audio_PlaySoundEffect(0x29,2,0xffffffbf);
      g_SFXCounter = 0x87;
    }
    else if ((g_SFXCounter & 0x7f) == 2) {
      Audio_PlaySoundEffect(0x2a,2,0xffffffbf);
      g_SFXCounter = 0;
    }
    else {
      g_SFXCounter = g_SFXCounter - 1;
    }
  }
  return;
}
