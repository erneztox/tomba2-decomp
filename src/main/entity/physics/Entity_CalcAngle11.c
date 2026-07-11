/**
 * @brief Entity angle calc variant 11: different entity offset computation
 * @note Original: func_80022AC8 at 0x80022AC8
 */
// Entity_CalcAngle11



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80022ac8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(((uint)param_1->pos_y - (uint)param_3->pos_x) * 0x10000)
          >> 0x10;
  iVar4 = (int)(((uint)param_1->pos_z - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar2 = FUN_80084080(iVar5 * iVar5 + iVar4 * iVar4);
  bVar1 = false;
  if (((int)(uVar2 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x)
     && (bVar1 = false,
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
              (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
        (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _DAT_1f80009c = FUN_80085690(-iVar4,iVar5);
    bVar1 = true;
  }
  if (bVar1) {
    uVar2 = FUN_8001e860(param_1,param_2,param_3,param_4);
    param_2->move_mode = 1;
    if ((uVar2 & 0x80) == 0) {
      DAT_1f800182 = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
