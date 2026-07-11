/**
 * @brief Entity move to target: computes trajectory toward point
 * @note Original: func_80023A04 at 0x80023A04
 */
// Entity_MoveTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_MoveTarget(int param_1,int param_2,uint param_3)

{
  s16 sVar1;
  s16 sVar2;
  u16 uVar3;
  u16 uVar4;
  s8 cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  s32 uVar9;
  s16 sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar12 = (uint)param_1->pos_y - (uint)param_2->pos_y;
  iVar6 = iVar12 * 0x10000 >> 0x10;
  iVar11 = (uint)param_1->pos_z - (uint)param_2->pos_z;
  iVar7 = iVar11 * 0x10000 >> 0x10;
  uVar8 = Math_SqrtGTE(iVar6 * iVar6 + iVar7 * iVar7);
  uVar3 = param_1->bounds_min_x;
  uVar4 = param_2->bounds_min_x;
  if ((int)param_1->bounds_min_x + (int)param_2->bounds_min_x < (int)(uVar8 & 0xffff)) {
    return 0xffffffff;
  }
  iVar6 = (uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 0x32);
  iVar7 = ((uint)param_2->bounds_min_y + (uint)param_1->bounds_max_y) -
          (uint)param_1->bounds_min_y;
  if ((int)(s16)param_1->bounds_max_y + (int)param_2->bounds_max_y <
      (int)(iVar6 + iVar7 & 0xffffU)) {
    return 0xffffffff;
  }
  if (iVar6 * 0x10000 < 0) {
    iVar6 = -iVar6;
    iVar13 = -iVar7;
  }
  else {
    iVar7 = (uint)param_1->bounds_min_y +
            ((uint)param_2->bounds_max_y - (uint)param_2->bounds_min_y);
    iVar13 = iVar7;
  }
  _g_AngleTarget = Math_Atan2(-(int)(s16)iVar11,(int)(s16)iVar12);
  _g_GTE_Work8C = (int)(s16)uVar8;
  if ((int)((((uint)uVar3 + (uint)uVar4) - uVar8) * 0x10000) < (iVar7 - iVar6) * 0x10000) {
    iVar6 = Math_CosGTE();
    sVar10 = param_1->bounds_min_x;
    sVar1 = param_2->bounds_min_x;
    iVar7 = Math_Cos(_g_AngleTarget);
    sVar2 = param_2->bounds_min_x;
    param_1->pos_y =
         param_2->pos_y + (s16)(iVar6 * ((int)sVar10 + (int)sVar1) >> 0xc);
    param_1->pos_z =
         param_2->pos_z -
         (s16)(iVar7 * ((int)param_1->bounds_min_x + (int)sVar2) >> 0xc);
    if (*(s8*)(param_1 + 0xc) == '\x02') {
      cVar5 = Math_CompareAngle((int)_g_AngleTarget,(int)param_1->draw_x,1);
      param_1->input_flags = cVar5 + '\x02';
    }
    return 0;
  }
  uVar9 = 0;
  sVar10 = (s16)iVar13;
  switch(param_3 & 0xf) {
  case 0:
    uVar9 = 2;
    if (iVar13 << 0x10 < 1) {
      sVar10 = *(s16 *)(param_2 + 0x32) + sVar10;
    }
    else {
LAB_80023ccc:
      uVar9 = 3;
      sVar10 = *(s16 *)(param_2 + 0x32) + sVar10;
    }
    break;
  case 1:
    if (param_1->velocity_y < 0) {
      return 0xffffffff;
    }
  case 3:
    *(s16 *)(param_1 + 0x32) =
         *(s16 *)(param_2 + 0x32) -
         ((param_2->bounds_min_y + param_1->bounds_max_y) - param_1->bounds_min_y);
    return 2;
  case 2:
    if (0 < iVar13 << 0x10) {
      if (-1 < param_1->velocity_y) {
        return 0xffffffff;
      }
      goto LAB_80023ccc;
    }
    uVar9 = 2;
    if (param_1->velocity_y < 0) {
      return 0xffffffff;
    }
    sVar10 = *(s16 *)(param_2 + 0x32) + sVar10;
    break;
  case 4:
    uVar9 = 0xffffffff;
    if ((param_1->combat_flag & 1) == 0) {
      uVar9 = 2;
      *(s16 *)(param_1 + 0x32) =
           *(s16 *)(param_2 + 0x32) -
           ((param_2->bounds_min_y + param_1->bounds_max_y) - param_1->bounds_min_y);
    }
  default:
    goto switchD_80023c3c_default;
  }
  *(s16 *)(param_1 + 0x32) = sVar10;
switchD_80023c3c_default:
  return uVar9;
}
