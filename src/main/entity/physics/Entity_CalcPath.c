/**
 * @brief Entity path calculator: complex route computation toward target
 * @note Original: func_80021AB0 at 0x80021AB0
 */
// Entity_CalcPath



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80021ab0(int param_1,u8 *param_2,int param_3)

{
  s16 sVar1;
  s16 sVar2;
  s32 bVar3;
  u8 bVar4;
  u16 uVar5;
  uint uVar6;
  uint uVar7;
  s16 sVar8;
  s32 uVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
           >> 0x10;
  iVar10 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
           >> 0x10;
  uVar5 = FUN_80084080(iVar11 * iVar11 + iVar10 * iVar10);
  bVar3 = false;
  if (((int)(uint)uVar5 <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) &&
     (bVar3 = false,
     (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 0x32)) +
           (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
     (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _g_GTE_Work8C = (int)(s16)uVar5;
    _g_AngleTarget = FUN_80085690(-iVar10,iVar11);
    bVar3 = true;
  }
  if (!bVar3) {
    return 0;
  }
  if ((*param_2 & 8) != 0) {
    uVar6 = FUN_8001e860(param_1,param_2,0,0);
    goto LAB_80021dbc;
  }
  if (((*param_2 == 1) && (param_1->kind == '\x02')) &&
     (param_1->input_flags == '\x10')) {
    bVar4 = param_1->anim_id >> 1;
    if (bVar4 == 2) {
      iVar10 = (uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 0x32);
      sVar8 = (s16)iVar10;
      if (iVar10 * 0x10000 < 0) {
        uVar7 = (uint)param_2->bounds_min_y;
        uVar6 = (uint)param_1->bounds_min_y;
        sVar8 = -sVar8;
      }
      else {
        uVar7 = (uint)param_2->bounds_max_y - (uint)param_2->bounds_min_y;
        uVar6 = (uint)param_1->bounds_max_y - (uint)param_1->bounds_min_y;
      }
      if (((int)param_1->bounds_min_x + (int)param_2->bounds_min_x) - _g_GTE_Work8C <
          ((int)((uVar7 + uVar6) * 0x10000) >> 0x10) - (int)sVar8) goto LAB_80021cc8;
LAB_80021d3c:
      param_1->pos_y = param_2->pos_y;
      param_1->pos_z = param_2->pos_z;
      *(s16 *)(param_1 + 0x32) =
           param_1->bounds_min_y +
           *(s16 *)(param_2 + 0x32) + (param_2->bounds_max_y - param_2->bounds_min_y);
    }
    else if (bVar4 < 3) {
LAB_80021cc8:
      iVar10 = FUN_80083f50(param_1->target_angle + 0x800);
      sVar8 = param_1->bounds_min_x;
      sVar1 = param_2->bounds_min_x;
      iVar11 = FUN_80083e80(param_1->target_angle + 0x800);
      sVar2 = param_2->bounds_min_x;
      param_1->pos_y =
           param_2->pos_y + (s16)(iVar10 * ((int)sVar8 + (int)sVar1) >> 0xc);
      param_1->pos_z =
           param_2->pos_z -
           (s16)(iVar11 * ((int)param_1->bounds_min_x + (int)sVar2) >> 0xc);
    }
    else if (bVar4 == 3) goto LAB_80021d3c;
    uVar9 = 0x1100;
  }
  else if (param_3 == 0) {
    uVar9 = 0x800;
  }
  else {
    uVar9 = 0;
  }
  uVar6 = FUN_8001dc9c(param_1,param_2,0,uVar9);
LAB_80021dbc:
  if ((uVar6 & 0x80) == 0) {
    g_State182 = 0;
  }
  return 1;
}
