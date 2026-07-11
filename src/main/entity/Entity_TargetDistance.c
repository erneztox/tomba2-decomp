/**
 * @brief Entity target distance: computes DX/DY from entity[0x14C/14E/150] to target
 * @note Original: func_80024338 at 0x80024338
 */
// Entity_TargetDistance



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80024338(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)param_1->draw_pos_x - (uint)param_2->pos_y) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)param_1->draw_pos_z - (uint)param_2->pos_z) * 0x10000)
          >> 0x10;
  uVar1 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
  uVar2 = 0;
  if (((int)(uVar1 & 0xffff) <= param_2->bounds_min_x + _DAT_1f800088) &&
     (uVar2 = 0,
     (int)(((uint)param_1->draw_pos_y - (uint)*(ushort *)(param_2 + 0x32)) +
           (uint)param_2->bounds_min_y + (uint)param_1->target_angle & 0xffff) <=
     (int)param_2->bounds_max_y + ((int)((uint)param_1->target_angle << 0x10) >> 0xf))) {
    _DAT_1f80008c = FUN_80085690(-iVar3,iVar4);
    uVar2 = 1;
    _DAT_1f800084 = 0;
    param_1->speed2 = *(short *)(param_1 + 0x32) - *(short *)(param_2 + 0x32);
  }
  return uVar2;
}
