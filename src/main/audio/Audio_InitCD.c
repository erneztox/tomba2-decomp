/**
 * @brief Audio CD init: calls Video_InitDecoder, sets volume, calls init sequence
 * @note Original: func_80075240 at 0x80075240
 */
// Audio_InitCD



void Audio_InitCD(void)

{
  Video_InitDecoder();
  DAT_800be222 = 0x7fff;
  DAT_800be224 = 0x7fff;
  DAT_800be226 = 0x1fff;
  DAT_800be228 = 0x1fff;
  DAT_800be1f8 = 0x300;
  DAT_800be210 = 0;
  DAT_800be20c = 0;
  Audio_SeqPlay(&DAT_800be1f8);
  CD_SPU_Main(&DAT_800be1f8);
  DAT_800be1f8 = 0;
  DAT_800be22a = 0;
  DAT_800be22b = 0;
  return;
}
