#include "gte_inline.h"
/**
 * @brief Standalone GTE depth/Z-sort check: RTPS projection + OT z-index calculation
 * @note Original: func_800317CC at 0x800317CC
 */
// GTE_DepthCheck



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_800317cc(s16 param_1)

{
  copFunction(2,0x180001);
  _g_GTE_Result[0] = getCopControlWord(2,0xf800);
  if (-1 < _g_GTE_Result[0]) {
    _g_GTE_Result[0] = getCopReg(2,0x13);
    if (0 < _g_GTE_Result[0]) {
      _g_GTE_Result[0] = (_g_GTE_Result[0] >> 2) + (int)param_1;
      if (_g_GTE_Result[0] < 4) {
        _g_GTE_Result[0] = 4;
      }
      _g_GTE_Result[0] =
           (_g_GTE_Result[0] >> (_g_GTE_Result[0] >> 10 & 0x1fU)) + (_g_GTE_Result[0] >> 10) * 0x200;
      if (0x7fb < _g_GTE_Result[0] - 4U) {
        _g_GTE_Result[0] = -1;
      }
      if (-1 < _g_GTE_Result[0]) {
        _g_GTE_Work8C = getCopReg(2,0xe);
        _g_GTE_Work84 = getCopReg(2,0x18);
        return 0;
      }
      return 1;
    }
  }
  return 1;
}
