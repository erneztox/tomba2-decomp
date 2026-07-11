/**
 * @brief Initializes screen overlay: sets GTE offset, calls render setup functions
 * @note Original: func_800509B4 at 0x800509B4
 */
// Screen_InitOverlay



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Screen_InitOverlay(void)

{
  _DAT_800e7e70 = 0;
  _DAT_800e7e72 = 8;
  GTE_Init();
  GTE_SetScaleZ(0xa0,0x78);
  _DAT_801003f8 = 0x15e;
  GTE_SetReg_D000();
  Screen_InitDisplay();
  return;
}
