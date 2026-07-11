/**
 * @brief Entity boss behavior: complex multi-state AI
 * @note Original: func_8001F054 at 0x8001F054
 */
// Entity_Behavior_Boss



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_8001f054(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  
  iVar11 = (uint)param_1->pos_y - (uint)param_2->pos_y;
  iVar7 = iVar11 * 0x10000 >> 0x10;
  iVar9 = (uint)param_1->pos_z - (uint)param_2->pos_z;
  iVar8 = iVar9 * 0x10000 >> 0x10;
  uVar4 = FUN_80084080(iVar7 * iVar7 + iVar8 * iVar8);
  if ((int)param_1->bounds_min_x + (int)param_2->bounds_min_x < (int)(uint)uVar4) {
    return 0xffffffff;
  }
  iVar7 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
  sVar10 = (short)iVar7;
  iVar8 = (uint)param_2->bounds_min_y + (uint)param_1->bounds_min_y;
  sVar6 = (short)iVar8;
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
  _DAT_1f80009c = FUN_80085690(-(int)(short)iVar9,(int)(short)iVar11);
  if ((sVar5 < 0) && ((int)sVar6 - (int)sVar10 < 0x1a)) {
    if ((param_1->state_flag145 & 1) != 0) {
      return 0xffffffff;
    }
    sVar10 = *(short *)(param_2 + 0x32);
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
    if (DAT_800bf816 != '\0') {
      return 2;
    }
    if (-1 < param_1->entity_flags) {
      sVar10 = param_1->bounds_min_y;
      if (param_1->bounds_min_y == 0x8c) {
        return 2;
      }
      sVar6 = *(short *)(param_1 + 0x32) + -0x8c;
      goto LAB_8001f3d4;
    }
  }
  else {
    if (((int)param_1->bounds_min_x + (int)param_2->bounds_min_x) - (int)(short)uVar4 <
        (int)sVar6 - (int)sVar10) {
      if ((*param_1 & 4) == 0) {
        iVar7 = FUN_80083f50(_DAT_1f80009c);
        sVar5 = param_1->bounds_min_x;
        sVar1 = param_2->bounds_min_x;
        iVar8 = FUN_80083e80(_DAT_1f80009c);
        sVar2 = param_2->bounds_min_x;
        param_1->pos_y =
             param_2->pos_y + (short)(iVar7 * ((int)sVar5 + (int)sVar1) >> 0xc);
        param_1->pos_z =
             param_2->pos_z -
             (short)(iVar8 * ((int)param_1->bounds_min_x + (int)sVar2) >> 0xc);
      }
      if (0x91 < (int)sVar6 - (int)sVar10) {
        param_1[0x60] = 1;
      }
      cVar3 = FUN_80077768((int)_DAT_1f80009c,(int)param_1->draw_angle,1);
      param_1->input_flags = cVar3 + 2;
      return 1;
    }
    if ((param_1->state_flag145 & 1) != 0) {
      return 0xffffffff;
    }
    sVar10 = *(short *)(param_2 + 0x32);
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
    if (DAT_800bf816 != '\0') {
      return 2;
    }
    if (-1 < param_1->entity_flags) {
      sVar10 = param_1->bounds_min_y;
      if (param_1->bounds_min_y == 0x8c) {
        return 2;
      }
      sVar6 = *(short *)(param_1 + 0x32) + -0x8c;
      goto LAB_8001f3d4;
    }
  }
  sVar10 = param_1->bounds_min_y;
  if (param_1->bounds_min_y == 0x46) {
    return 2;
  }
  sVar6 = *(short *)(param_1 + 0x32) + -0x46;
LAB_8001f3d4:
  *(short *)(param_1 + 0x32) = sVar10 + sVar6;
  return 2;
}
