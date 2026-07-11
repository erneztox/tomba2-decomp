/**
 * @brief Entity distance check: computes 2D distance between two entity positions
 * @note Original: func_8002313C at 0x8002313C
 */
// Entity_DistanceCheck



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_8002313c(int param_1,int param_2,int param_3)

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
  if (((int)(uVar1 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x)
     && (uVar2 = 0,
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
              (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
        (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _DAT_1f80009c = FUN_80085690(-iVar3,iVar4);
    uVar2 = 1;
  }
  return uVar2;
}
