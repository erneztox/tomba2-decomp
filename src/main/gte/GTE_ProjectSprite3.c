/**
 * @brief GTE sprite projection: sets _g_GTE_Result[0]=0, _g_GTE_Work84=3, calls FUN_8007712c
 * @note Original: func_80077F3C at 0x80077F3C
 */
// GTE_ProjectSprite3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80077f3c(int param_1)

{
  _g_GTE_Result[0] = 0;
  _g_GTE_Work84 = 3;
  FUN_8007712c(param_1,(int)(((uint)param_1->pos_y - (uint)_DAT_1f8000d2) * 0x10000) >>
                       0x10,
               (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)_DAT_1f8000d6) * 0x10000) >> 0x10,
               (int)(((uint)param_1->pos_z - (uint)_DAT_1f8000da) * 0x10000) >> 0x10);
  return;
}
