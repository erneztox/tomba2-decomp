/**
 * @brief Entity angle to target variant 2: atan2 from entity pos to target pos
 * @note Original: func_80022E04 at 0x80022E04
 */
// Entity_AngleToTarget2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80022e04(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)param_1->pos_y - (uint)param_3->pos_x) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)param_1->pos_z - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar1 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
  uVar2 = 0;
  if ((int)(uVar1 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) {
    if ((int)param_1->bounds_max_y + (int)param_2->bounds_max_y <
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
              (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff)) {
      uVar2 = 0;
    }
    else {
      _DAT_1f80009c = FUN_80085690(-iVar3,iVar4);
      uVar2 = 1;
    }
  }
  return uVar2;
}
