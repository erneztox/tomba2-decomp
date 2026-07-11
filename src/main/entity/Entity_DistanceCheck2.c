/**
 * @brief Entity distance check variant 2: entity[0x2E/32/36] to entity2 pos
 * @note Original: func_8002300C at 0x8002300C
 */
// Entity_DistanceCheck2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_8002300c(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)param_2->pos_y - (uint)param_1->pos_y) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)param_2->pos_z - (uint)param_1->pos_z) * 0x10000)
          >> 0x10;
  uVar1 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
  uVar2 = 0;
  if ((int)(uint)uVar1 <= param_1->bounds_min_x + param_3) {
    if ((int)param_1->bounds_max_y + (int)param_2->bounds_max_y <
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
              (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff)) {
      uVar2 = 0;
    }
    else {
      _DAT_1f80008c = (int)(short)uVar1;
      _DAT_1f80009c = FUN_80085690(-iVar3,iVar4);
      uVar2 = 1;
    }
  }
  return uVar2;
}
