/**
 * @brief Entity target calculator: computes position delta to target entity
 * @note Original: func_80021F34 at 0x80021F34
 */
// Entity_CalcTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80021f34(int param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
          >> 0x10;
  iVar4 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
          >> 0x10;
  uVar2 = FUN_80084080(iVar5 * iVar5 + iVar4 * iVar4);
  bVar1 = false;
  if (((int)(uint)uVar2 <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) &&
     (bVar1 = false,
     (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
           (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
     (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _DAT_1f80008c = (int)(short)uVar2;
    _DAT_1f80009c = FUN_80085690(-iVar4,iVar5);
    bVar1 = true;
  }
  if ((bVar1) && (uVar3 = FUN_8001dc9c(param_1,param_2,0,0), (uVar3 & 0x80) == 0)) {
    DAT_1f800182 = 0;
  }
  return;
}
