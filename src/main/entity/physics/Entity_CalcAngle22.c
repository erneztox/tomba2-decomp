/**
 * @brief Entity angle calc variant 22: complex offset computation
 * @note Original: func_80021150 at 0x80021150
 */
// Entity_CalcAngle22



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80021150(int param_1,int param_2,int param_3,s32 param_4)

{
  s16 sVar1;
  s16 sVar2;
  s16 sVar3;
  s32 bVar4;
  u8 bVar5;
  uint uVar6;
  s32 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)(((uint)param_1->pos_y - (uint)param_3->pos_x) * 0x10000)
          >> 0x10;
  iVar8 = (int)(((uint)param_1->pos_z - (uint)*(u16 *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar6 = FUN_80084080(iVar9 * iVar9 + iVar8 * iVar8);
  bVar4 = false;
  if (((int)(uVar6 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x)
     && (bVar4 = false,
        (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_3 + 0x30)) +
              (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
        (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _g_AngleTarget = FUN_80085690(-iVar8,iVar9);
    bVar4 = true;
  }
  if (bVar4) {
    if (param_1->input_flags == '\x10') {
      bVar5 = param_1->anim_id >> 1;
      if (bVar5 < 2) {
        iVar8 = FUN_80083f50(param_1->target_angle + 0x800);
        sVar1 = param_1->bounds_min_x;
        sVar2 = param_2->bounds_min_x;
        iVar9 = FUN_80083e80(param_1->target_angle + 0x800);
        sVar3 = param_2->bounds_min_x;
        param_1->pos_y =
             param_3->pos_x + (s16)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
        param_1->pos_z =
             *(s16 *)(param_3 + 0x34) -
             (s16)(iVar9 * ((int)param_1->bounds_min_x + (int)sVar3) >> 0xc);
        *(s16 *)(param_1 + 0x32) = *(s16 *)(param_3 + 0x30);
      }
      else if (bVar5 < 4) {
        param_1->pos_y = param_3->pos_x;
        param_1->pos_z = *(s16 *)(param_3 + 0x34);
        *(s16 *)(param_1 + 0x32) =
             param_1->bounds_min_y +
             *(s16 *)(param_3 + 0x30) + (param_2->bounds_max_y - param_2->bounds_min_y);
      }
    }
    else {
      param_2->move_mode = 1;
    }
    uVar6 = FUN_8001e860(param_1,param_2,param_3,param_4);
    uVar7 = 1;
    if ((uVar6 & 0x80) == 0) {
      g_State182 = 0;
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
