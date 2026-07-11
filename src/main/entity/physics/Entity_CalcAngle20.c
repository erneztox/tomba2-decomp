/**
 * @brief Entity angle calc variant 20: atan2 with complex offset
 * @note Original: func_8001F650 at 0x8001F650
 */
// Entity_CalcAngle20



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_8001f650(byte *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)(((uint)param_1->pos_y - (uint)param_3->pos_x) * 0x10000)
          >> 0x10;
  iVar8 = (int)(((uint)param_1->pos_z - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar6 = FUN_80084080(iVar9 * iVar9 + iVar8 * iVar8);
  bVar4 = false;
  if (((int)(uVar6 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x)
     && (bVar4 = false,
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
              (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
        (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _DAT_1f80009c = FUN_80085690(-iVar8,iVar9);
    bVar4 = true;
  }
  uVar7 = 0;
  if (bVar4) {
    if ((*param_1 & 4) == 0) {
      iVar8 = FUN_80083f50(_DAT_1f80009c);
      sVar1 = param_1->bounds_min_x;
      sVar2 = param_2->bounds_min_x;
      iVar9 = FUN_80083e80(_DAT_1f80009c);
      sVar3 = param_2->bounds_min_x;
      param_1->pos_y =
           param_3->pos_x + (short)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
      param_1->pos_z =
           *(short *)(param_3 + 0x34) -
           (short)(iVar9 * ((int)param_1->bounds_min_x + (int)sVar3) >> 0xc);
    }
    param_1[0x60] = 1;
    cVar5 = FUN_80077768((int)_DAT_1f80009c,(int)param_1->draw_angle,1);
    param_1->input_flags = cVar5 + 2U;
    if (param_1->action_flag == 0) {
      uVar7 = 1;
      if (((param_1[0x149] & 4) == 0) && (uVar7 = 1, param_1->direction == (cVar5 + 2U & 1))) {
        param_1[0x44] = 0;
        param_1[0x45] = 0;
      }
    }
    else {
      uVar7 = 2;
    }
  }
  return uVar7;
}
