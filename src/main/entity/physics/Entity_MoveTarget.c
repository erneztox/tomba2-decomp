/**
 * @brief Entity move to target: computes trajectory toward point
 * @note Original: func_80023A04 at 0x80023A04
 */
// Entity_MoveTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80023a04(int param_1,int param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar12 = (uint)param_1->pos_y - (uint)param_2->pos_y;
  iVar6 = iVar12 * 0x10000 >> 0x10;
  iVar11 = (uint)param_1->pos_z - (uint)param_2->pos_z;
  iVar7 = iVar11 * 0x10000 >> 0x10;
  uVar8 = FUN_80084080(iVar6 * iVar6 + iVar7 * iVar7);
  uVar3 = param_1->bounds_min_x;
  uVar4 = param_2->bounds_min_x;
  if ((int)param_1->bounds_min_x + (int)param_2->bounds_min_x < (int)(uVar8 & 0xffff)) {
    return 0xffffffff;
  }
  iVar6 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
  iVar7 = ((uint)param_2->bounds_min_y + (uint)param_1->bounds_max_y) -
          (uint)param_1->bounds_min_y;
  if ((int)(short)param_1->bounds_max_y + (int)param_2->bounds_max_y <
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
  _DAT_1f80009c = FUN_80085690(-(int)(short)iVar11,(int)(short)iVar12);
  _DAT_1f80008c = (int)(short)uVar8;
  if ((int)((((uint)uVar3 + (uint)uVar4) - uVar8) * 0x10000) < (iVar7 - iVar6) * 0x10000) {
    iVar6 = FUN_80083f50();
    sVar10 = param_1->bounds_min_x;
    sVar1 = param_2->bounds_min_x;
    iVar7 = FUN_80083e80(_DAT_1f80009c);
    sVar2 = param_2->bounds_min_x;
    param_1->pos_y =
         param_2->pos_y + (short)(iVar6 * ((int)sVar10 + (int)sVar1) >> 0xc);
    param_1->pos_z =
         param_2->pos_z -
         (short)(iVar7 * ((int)param_1->bounds_min_x + (int)sVar2) >> 0xc);
    if (*(char *)(param_1 + 0xc) == '\x02') {
      cVar5 = FUN_80077768((int)_DAT_1f80009c,(int)param_1->draw_x,1);
      param_1->input_flags = cVar5 + '\x02';
    }
    return 0;
  }
  uVar9 = 0;
  sVar10 = (short)iVar13;
  switch(param_3 & 0xf) {
  case 0:
    uVar9 = 2;
    if (iVar13 << 0x10 < 1) {
      sVar10 = *(short *)(param_2 + 0x32) + sVar10;
    }
    else {
LAB_80023ccc:
      uVar9 = 3;
      sVar10 = *(short *)(param_2 + 0x32) + sVar10;
    }
    break;
  case 1:
    if (param_1->velocity_y < 0) {
      return 0xffffffff;
    }
  case 3:
    *(short *)(param_1 + 0x32) =
         *(short *)(param_2 + 0x32) -
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
    sVar10 = *(short *)(param_2 + 0x32) + sVar10;
    break;
  case 4:
    uVar9 = 0xffffffff;
    if ((param_1->combat_flag & 1) == 0) {
      uVar9 = 2;
      *(short *)(param_1 + 0x32) =
           *(short *)(param_2 + 0x32) -
           ((param_2->bounds_min_y + param_1->bounds_max_y) - param_1->bounds_min_y);
    }
  default:
    goto switchD_80023c3c_default;
  }
  *(short *)(param_1 + 0x32) = sVar10;
switchD_80023c3c_default:
  return uVar9;
}
