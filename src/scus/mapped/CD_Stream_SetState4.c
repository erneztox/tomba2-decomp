/**
 * @brief CD/XA stream helper: sets state 4
 * @note Original: func_8001CEA8 at 0x8001CEA8
 */
// CD_Stream_SetState4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8001cea8(void)

{
  _DAT_80039e80 = _DAT_80039e80 + 1;
  DAT_80026d00 = 4;
  FUN_8001cea8();
  return;
}
