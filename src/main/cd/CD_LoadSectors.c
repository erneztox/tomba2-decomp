/**
 * @brief Loads CD sectors to RAM: calculates sector count, aligns to 4-u8 boundary
 * @note Original: func_8001DC40 at 0x8001DC40
 */
// CD_LoadSectors



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8001dc40(s32 param_1,s32 param_2,int param_3)

{
  _g_DMASize = param_3 + 3;
  if (_g_DMASize < 0) {
    _g_DMASize = param_3 + 6;
  }
  _g_DMASize = _g_DMASize >> 2;
  _g_DMADest = param_2;
  _g_DMASrc = param_1;
  FUN_8001d940(_g_CurrentEntity);
  return param_3;
}
