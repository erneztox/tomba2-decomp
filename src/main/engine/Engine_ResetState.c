/**
 * @brief Engine state reset: zeros 5 globals, sets DAT_1f800235=2
 * @note Original: func_80050A0C at 0x80050A0C
 */
// Engine_ResetState



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80050a0c(void)

{
  _DAT_800e809c = 0;
  DAT_1f800235 = 2;
  DAT_1f800135 = 0;
  DAT_1f80019c = 0;
  DAT_1f80023b = 0;
  DAT_1f800233 = 0;
  DAT_1f800236 = 0;
  DAT_1f800234 = 0;
  DAT_1f80019b = 0;
  DAT_1f80027e = 0;
  FUN_8009a480(0x45);
  return;
}
