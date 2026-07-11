/**
 * @brief GTE sprite projection variant 9: _DAT_1f800080=1, _DAT_1f800084=0
 * @note Original: func_80077A4C at 0x80077A4C
 */
// GTE_ProjectSprite9



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80077a4c(int param_1,int param_2,int param_3,int param_4)

{
  _DAT_1f800080 = 1;
  _DAT_1f800084 = 0;
  FUN_8007712c(param_1,(int)((((uint)param_1->pos_y + param_2) - (uint)_DAT_1f8000d2) *
                            0x10000) >> 0x10,
               (int)((((uint)*(ushort *)(param_1 + 0x32) + param_3) - (uint)_DAT_1f8000d6) * 0x10000
                    ) >> 0x10,
               (int)((((uint)param_1->pos_z + param_4) - (uint)_DAT_1f8000da) * 0x10000
                    ) >> 0x10);
  return;
}
