/**
 * @brief Loads CD sectors to RAM: calculates sector count, aligns to 4-byte boundary
 * @note Original: func_8001DC40 at 0x8001DC40
 */
// CD_LoadSectors



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8001dc40(undefined4 param_1,undefined4 param_2,int param_3)

{
  _DAT_1f8001f4 = param_3 + 3;
  if (_DAT_1f8001f4 < 0) {
    _DAT_1f8001f4 = param_3 + 6;
  }
  _DAT_1f8001f4 = _DAT_1f8001f4 >> 2;
  _DAT_1f8001f0 = param_2;
  _DAT_1f8001f8 = param_1;
  FUN_8001d940(_DAT_1f800138);
  return param_3;
}
