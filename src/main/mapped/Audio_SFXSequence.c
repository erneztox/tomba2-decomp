/**
 * @brief SFX sequencer: DAT_800bf842 state machine, plays SFX 0x29/0x2A in sequence, decrements
 * @note Original: func_80077D8C at 0x80077D8C
 */
// Audio_SFXSequence



void FUN_80077d8c(void)

{
  if (DAT_800bf842 != 0) {
    if ((DAT_800bf842 & 0x7f) == 1) {
      FUN_80074590(0x29,2,0xffffffbf);
      DAT_800bf842 = 0x87;
    }
    else if ((DAT_800bf842 & 0x7f) == 2) {
      FUN_80074590(0x2a,2,0xffffffbf);
      DAT_800bf842 = 0;
    }
    else {
      DAT_800bf842 = DAT_800bf842 - 1;
    }
  }
  return;
}
