/**
 * @brief Initializes MDEC video decoder: sets size params at 0x800BED7C from game config, calls init
 * @note Original: func_80075D58 at 0x80075D58
 */
// Video_InitDecoder



void FUN_80075d58(void)

{
  DAT_800be220 = (s16)(((uint)DAT_800fb164 * 0x7fff) / 9);
  if (DAT_800fb163 == '\0') {
    DAT_800bed7c = 0x80;
    DAT_800bed7d = 0;
    DAT_800bed7e = 0x80;
    DAT_800bed7f = 0;
    FUN_80096390();
  }
  else {
    DAT_800bed7c = 0x40;
    DAT_800bed7d = 0x40;
    DAT_800bed7e = 0x40;
    DAT_800bed7f = 0x40;
    FUN_80096380();
  }
  FUN_80089f68(&DAT_800bed7c);
  return;
}
