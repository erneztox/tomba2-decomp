/**
 * @brief Audio CD init: calls Video_InitDecoder, sets volume, calls init sequence
 * @note Original: func_80075240 at 0x80075240
 */
// Audio_InitCD



void FUN_80075240(void)

{
  FUN_80075d58();
  DAT_800be222 = 0x7fff;
  DAT_800be224 = 0x7fff;
  DAT_800be226 = 0x1fff;
  DAT_800be228 = 0x1fff;
  DAT_800be1f8 = 0x300;
  DAT_800be210 = 0;
  DAT_800be20c = 0;
  FUN_80075824(&DAT_800be1f8);
  FUN_80099490(&DAT_800be1f8);
  DAT_800be1f8 = 0;
  DAT_800be22a = 0;
  DAT_800be22b = 0;
  return;
}
