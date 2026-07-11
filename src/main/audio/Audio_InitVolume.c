/**
 * @brief Audio volume init: sets stereo/pan values at 0x800BE1FC-0A, calls init, clears
 * @note Original: func_80075A30 at 0x80075A30
 */
// Audio_InitVolume



void Audio_InitVolume(void)

{
  DAT_800be20a = 0x7fff;
  DAT_800be208 = 0x7fff;
  DAT_800be1fe = 0x3fff;
  DAT_800be1fc = 0x3fff;
  DAT_800be1f8 = DAT_800be1f8 | 0xc3;
  CD_SPU_Main();
  DAT_800be1f8 = 0;
  return;
}
