/**
 * @brief Audio volume init: sets stereo/pan values at 0x800BE1FC-0A, calls init, clears
 * @note Original: func_80075A30 at 0x80075A30
 */
// Audio_InitVolume



void FUN_80075a30(void)

{
  DAT_800be20a = 0x7fff;
  DAT_800be208 = 0x7fff;
  DAT_800be1fe = 0x3fff;
  DAT_800be1fc = 0x3fff;
  DAT_800be1f8 = DAT_800be1f8 | 0xc3;
  FUN_80099490();
  DAT_800be1f8 = 0;
  return;
}
