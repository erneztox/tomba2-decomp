/**
 * @brief Entity move calculator: computes velocity + position
 * @note Original: func_80023D48 at 0x80023D48
 */
// Entity_CalcMove



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_CalcMove(int param_1,int param_2,int param_3,uint param_4)

{
  u16 uVar1;
  u16 uVar2;
  u16 uVar3;
  s8 cVar4;
  u16 uVar5;
  int iVar6;
  int iVar7;
  s32 uVar8;
  s16 sVar9;
  s16 sVar10;
  int iVar11;
  s16 sVar12;
  int iVar13;
  uint uVar14;
  s16 sVar15;
  int iVar16;
  u16 uVar17;
  s16 local_40;
  s16 local_38;
  s16 local_30;
  
  if ((param_4 & 1) == 0) {
    iVar11 = (uint)param_1->pos_y - (uint)param_3->pos_x;
    iVar6 = iVar11 * 0x10000 >> 0x10;
    iVar7 = (uint)param_1->pos_z - (uint)*(u16 *)(param_3 + 0x34);
    sVar9 = (s16)iVar7;
    iVar7 = iVar7 * 0x10000 >> 0x10;
    uVar17 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = (s16)iVar11;
    uVar5 = Math_SqrtGTE(iVar6 * iVar6 + iVar7 * iVar7);
    if (((int)param_1->bounds_size - (int)param_1->bounds_min_x) +
        (int)param_2->bounds_min_x < (int)(uint)uVar5) {
      return 0;
    }
    uVar14 = (uint)*(u16 *)(param_1 + 0x32);
    uVar1 = *(u16 *)(param_3 + 0x30);
    uVar2 = param_1->bounds_max_y;
    uVar3 = param_2->bounds_min_y;
  }
  else {
    iVar6 = Math_CosGTE((int)param_1->rot_y);
    iVar16 = iVar6 * *(s16 *)(param_1 + 0x7c) >> 0xc;
    iVar6 = Math_Cos((int)param_1->rot_y);
    iVar11 = ((uint)param_1->pos_y + iVar16) - (uint)param_3->pos_x;
    iVar7 = iVar11 * 0x10000 >> 0x10;
    iVar13 = iVar6 * *(s16 *)(param_1 + 0x7c) >> 0xc;
    iVar6 = ((uint)param_1->pos_z - iVar13) - (uint)*(u16 *)(param_3 + 0x34);
    sVar9 = (s16)iVar6;
    iVar6 = iVar6 * 0x10000 >> 0x10;
    local_40 = (s16)iVar16;
    local_30 = (s16)iVar11;
    local_38 = (s16)iVar13;
    uVar5 = Math_SqrtGTE(iVar7 * iVar7 + iVar6 * iVar6);
    if (((int)param_1->bounds_size - (int)param_1->bounds_min_x) +
        (int)param_2->bounds_min_x < (int)(uint)uVar5) {
      return 0;
    }
    uVar17 = *(u16 *)(param_1 + 0x7e);
    uVar1 = *(u16 *)(param_3 + 0x30);
    uVar2 = param_1->bounds_max_y;
    uVar3 = param_2->bounds_min_y;
    uVar14 = (uint)*(u16 *)(param_1 + 0x32) + (uint)uVar17;
  }
  iVar7 = uVar14 - uVar1;
  sVar12 = (s16)iVar7;
  iVar6 = (uint)uVar3 + ((uint)uVar2 - (uint)param_1->bounds_min_y);
  sVar10 = (s16)iVar6;
  if ((int)(s16)uVar2 + (int)param_2->bounds_max_y < (int)(iVar7 + iVar6 & 0xffffU)) {
    uVar8 = 0;
  }
  else {
    if (iVar7 * 0x10000 < 0) {
      sVar12 = -sVar12;
      sVar15 = -sVar10;
    }
    else {
      sVar10 = param_1->bounds_min_y +
               (param_2->bounds_max_y - param_2->bounds_min_y);
      sVar15 = sVar10;
    }
    _g_AngleTarget = Math_Atan2(-(int)sVar9,(int)local_30);
    if ((((int)param_1->bounds_size - (int)param_1->bounds_min_x) +
        (int)param_2->bounds_min_x) - (int)(s16)uVar5 < (int)sVar10 - (int)sVar12) {
      if (*(s8*)(param_1 + 0xc) == '\x02') {
        cVar4 = Math_CompareAngle((int)_g_AngleTarget,(int)param_1->draw_x,1);
        param_1->input_flags = cVar4 + '\x02';
      }
      iVar6 = Math_CosGTE(_g_AngleTarget);
      sVar9 = param_1->bounds_min_x;
      sVar12 = param_2->bounds_min_x;
      iVar7 = Math_Cos(_g_AngleTarget);
      sVar10 = param_2->bounds_min_x;
      uVar8 = 1;
      param_1->pos_y =
           (param_3->pos_x + (s16)(iVar6 * ((int)sVar9 + (int)sVar12) >> 0xc)) -
           local_40;
      param_1->pos_z =
           (*(s16 *)(param_3 + 0x34) -
           (s16)(iVar7 * ((int)param_1->bounds_min_x + (int)sVar10) >> 0xc)) - local_38;
    }
    else {
      iVar6 = (int)sVar15;
      uVar8 = 3;
      if (iVar6 < 1) {
        uVar8 = 2;
        iVar7 = param_3->pos_y_fixed;
        param_1->collision_state = 1;
        param_1->pos_y_fixed = ((iVar7 + iVar6) - (int)(s16)uVar17) * 0x10000;
      }
      else {
        param_1->pos_y_fixed =
             ((param_3->pos_y_fixed + iVar6) - (int)(s16)uVar17) * 0x10000;
      }
    }
  }
  return uVar8;
}
