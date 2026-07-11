/**
 * @brief Initializes CD callback function pointers at 0x80102444-0x8010244C
 * @note Original: func_80086738 at 0x80086738
 */
// CD_InitCallbacks



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80086738(void)

{
  _DAT_80102444 = FUN_800867cc;
  _DAT_80102448 = FUN_80086764;
  _DAT_80102440 = 0;
  _DAT_8010244c = 0;
  return;
}
