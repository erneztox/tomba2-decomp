/**
 * @brief Game event flag setter 2: sets bit at _DAT_800bfe50 via table lookup
 * @note Original: func_800782F0 at 0x800782F0
 */
// Game_SetEventFlag2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800782f0(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  if (param_1 < 9) {
    _DAT_800bfe50 =
         _DAT_800bfe50 |
         1 << ((uint)(u8)(&DAT_800a55b0)[param_1] +
               ((*(u16 *)((&PTR_DAT_800a54a8)[param_1] + (param_2 & 0xff) * 8 + 6) & 0x600) >> 9)
              & 0x1f);
  }
  if (g_GameState == '\x05') {
    DAT_800bf9db = DAT_800bf9db | 2;
    return;
  }
  if (g_GameState == '\x06') {
    DAT_800bf9db = DAT_800bf9db | 4;
    return;
  }
  if (g_GameState == '\a') {
    DAT_800bf9db = DAT_800bf9db | 8;
    return;
  }
  if (g_GameState == '\b') {
    DAT_800bf9db = DAT_800bf9db | 0x10;
  }
  return;
}
