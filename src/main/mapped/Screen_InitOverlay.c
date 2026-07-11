/**
 * @brief Initializes screen overlay: sets GTE offset, calls render setup functions
 * @note Original: func_800509B4 at 0x800509B4
 */
// Screen_InitOverlay



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800509b4(void)

{
  _DAT_800e7e70 = 0;
  _DAT_800e7e72 = 8;
  FUN_80083ff8();
  FUN_800846d0(0xa0,0x78);
  _DAT_801003f8 = 0x15e;
  FUN_800846f0();
  FUN_80050738();
  return;
}
