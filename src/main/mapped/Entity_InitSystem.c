/**
 * @brief Entity system init: calls InitGlobals2, resets flags at 0x800BF4FA/ECF4A-E
 * @note Original: func_800520E0 at 0x800520E0
 */
// Entity_InitSystem



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800520e0(void)

{
  FUN_8007b328();
  _DAT_800bf4fa = 0xffff;
  _DAT_800ecf4a = 0;
  DAT_800ecf4c = 0;
  DAT_800ecf4d = 0;
  DAT_800ecf4e = 0;
  DAT_800ecf4f = 0;
  FUN_80088b00(&DAT_800bf4f8,0x800bf51a);
  FUN_80086620(1);
  FUN_80087a60();
  return;
}
