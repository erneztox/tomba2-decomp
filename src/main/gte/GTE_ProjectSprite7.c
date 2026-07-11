/**
 * @brief GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=0, calls FUN_8007712c
 * @note Original: func_80077958 at 0x80077958
 */
// GTE_ProjectSprite7



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80077958(int param_1,int param_2,int param_3)

{
  _DAT_1f800080 = 0;
  _DAT_1f800084 = 0;
  FUN_8007712c(param_1,(int)((((uint)param_1->pos_y + param_2) - (uint)_DAT_1f8000d2) *
                            0x10000) >> 0x10,
               (int)((((uint)*(ushort *)(param_1 + 0x32) + param_3) - (uint)_DAT_1f8000d6) * 0x10000
                    ) >> 0x10,
               (int)(((uint)param_1->pos_z - (uint)_DAT_1f8000da) * 0x10000) >> 0x10);
  return;
}
