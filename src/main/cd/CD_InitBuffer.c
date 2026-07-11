/**
 * @brief CD buffer init: zeros 4 ptrs at 0x80102704-14, calls CD_ClearBuffer
 * @note Original: func_8008CCE0 at 0x8008CCE0
 */
// CD_InitBuffer



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CD_InitBuffer(void)

{
  _DAT_80102714 = 0;
  _DAT_80102710 = 0;
  _DAT_8010270c = 0;
  _DAT_80102704 = 0;
  CD_ClearBuffer(0,_DAT_8010272c);
  _DAT_801026f4 = 0;
  _DAT_801026ec = 0;
  _DAT_801026e8 = 0;
  return;
}
