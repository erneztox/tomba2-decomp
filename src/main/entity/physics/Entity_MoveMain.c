/**
 * @brief Entity move main: trajectory + collision + position
 * @note Original: func_8001EC3C at 0x8001EC3C
 */
// Entity_MoveMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_MoveMain(u8 *param_1,int param_2)

{
  s16 sVar1;
  s16 sVar2;
  s8 cVar3;
  u16 uVar4;
  s16 sVar5;
  s16 sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  s16 sVar10;
  int iVar11;
  
  iVar11 = (uint)param_1->pos_y - (uint)param_2->pos_y;
  iVar7 = iVar11 * 0x10000 >> 0x10;
  iVar9 = (uint)param_1->pos_z - (uint)param_2->pos_z;
  iVar8 = iVar9 * 0x10000 >> 0x10;
  uVar4 = Math_SqrtGTE(iVar7 * iVar7 + iVar8 * iVar8);
  if ((int)param_1->bounds_min_x + (int)param_2->bounds_min_x < (int)(uint)uVar4) {
    return 0xffffffff;
  }
  iVar7 = (uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 0x32);
  sVar10 = (s16)iVar7;
  iVar8 = (uint)param_2->bounds_min_y + (uint)param_1->bounds_min_y;
  sVar6 = (s16)iVar8;
  if ((int)param_1->bounds_max_y + (int)param_2->bounds_max_y <
      (int)(iVar7 + iVar8 & 0xffffU)) {
    return 0xffffffff;
  }
  if (iVar7 * 0x10000 < 0) {
    sVar10 = -sVar10;
    sVar5 = -sVar6;
  }
  else {
    sVar5 = (param_2->bounds_max_y - param_2->bounds_min_y) +
            (param_1->bounds_max_y - param_1->bounds_min_y);
    sVar6 = sVar5;
  }
  _g_AngleTarget = Math_Atan2(-(int)(s16)iVar9,(int)(s16)iVar11);
  if ((sVar5 < 0) && ((int)sVar6 - (int)sVar10 < 0x1a)) {
    if ((param_1->state_flag145 & 1) != 0) {
      return 0xffffffff;
    }
    sVar10 = *(s16 *)(param_2 + 0x32);
    param_2->collision_state = 1;
    param_1->collision_state = 1;
    param_1->state_flag145 = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x148] = 0;
    param_1->pos_y_fixed = ((int)sVar10 + (int)sVar5) * 0x10000;
    if (param_1->sub_state != 0) {
      return 2;
    }
    if (g_ActionFlag != '\0') {
      return 2;
    }
    if (-1 < param_1->entity_flags) {
      sVar10 = param_1->bounds_min_y;
      if (param_1->bounds_min_y == 0x8c) {
        return 2;
      }
      sVar6 = *(s16 *)(param_1 + 0x32) + -0x8c;
      goto LAB_8001efc8;
    }
  }
  else {
    if (((int)param_1->bounds_min_x + (int)param_2->bounds_min_x) - (int)(s16)uVar4 <
        (int)sVar6 - (int)sVar10) {
      if ((*param_1 & 4) == 0) {
        iVar7 = Math_CosGTE(_g_AngleTarget);
        sVar5 = param_1->bounds_min_x;
        sVar1 = param_2->bounds_min_x;
        iVar8 = Math_Cos(_g_AngleTarget);
        sVar2 = param_2->bounds_min_x;
        param_1->pos_y =
             param_2->pos_y + (s16)(iVar7 * ((int)sVar5 + (int)sVar1) >> 0xc);
        param_1->pos_z =
             param_2->pos_z -
             (s16)(iVar8 * ((int)param_1->bounds_min_x + (int)sVar2) >> 0xc);
      }
      if (0x91 < (int)sVar6 - (int)sVar10) {
        param_1[0x60] = 1;
      }
      cVar3 = Math_CompareAngle((int)_g_AngleTarget,(int)param_1->draw_angle,1);
      param_1->input_flags = cVar3 + 2;
      return 1;
    }
    iVar7 = (int)sVar5;
    if (0 < iVar7) {
      if (_DAT_1f800098 != 0) {
        return 3;
      }
      g_State253 = 4;
      param_1->pos_y_fixed = (*(s16 *)(param_2 + 0x32) + iVar7) * 0x10000;
      if (param_1->state_flag145 == 1) {
        if (param_1->velocity_y < 0) {
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
          return 3;
        }
        return 3;
      }
      return 3;
    }
    if ((param_1->state_flag145 & 1) != 0) {
      return 0xffffffff;
    }
    sVar10 = *(s16 *)(param_2 + 0x32);
    param_2->collision_state = 1;
    param_1->collision_state = 1;
    param_1->state_flag145 = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x148] = 0;
    param_1->pos_y_fixed = (sVar10 + iVar7) * 0x10000;
    if (param_1->sub_state != 0) {
      return 2;
    }
    if (g_ActionFlag != '\0') {
      return 2;
    }
    if (-1 < param_1->entity_flags) {
      sVar10 = param_1->bounds_min_y;
      if (param_1->bounds_min_y == 0x8c) {
        return 2;
      }
      sVar6 = *(s16 *)(param_1 + 0x32) + -0x8c;
      goto LAB_8001efc8;
    }
  }
  sVar10 = param_1->bounds_min_y;
  if (param_1->bounds_min_y == 0x46) {
    return 2;
  }
  sVar6 = *(s16 *)(param_1 + 0x32) + -0x46;
LAB_8001efc8:
  *(s16 *)(param_1 + 0x32) = sVar10 + sVar6;
  return 2;
}
