/**
 * @brief Entity angle calc variant 19: longer computation path
 * @note Original: func_80020F7C at 0x80020F7C
 */
// Entity_CalcAngle19



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80020f7c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)(((uint)param_1->pos_y - (uint)param_3->pos_x) * 0x10000)
          >> 0x10;
  iVar7 = (int)(((uint)param_1->pos_z - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar5 = FUN_80084080(iVar8 * iVar8 + iVar7 * iVar7);
  bVar4 = false;
  if (((int)(uVar5 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x)
     && (bVar4 = false,
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
              (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
        (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _DAT_1f80009c = FUN_80085690(-iVar7,iVar8);
    bVar4 = true;
  }
  if (bVar4) {
    if (param_1->input_flags == '\x10') {
      iVar7 = FUN_80083f50(param_1->target_angle + 0x800);
      sVar1 = param_1->bounds_min_x;
      sVar2 = param_2->bounds_min_x;
      iVar8 = FUN_80083e80(param_1->target_angle + 0x800);
      sVar3 = param_2->bounds_min_x;
      param_1->pos_y =
           *(short *)(param_2 + 0xac) + (short)(iVar7 * ((int)sVar1 + (int)sVar2) >> 0xc);
      param_1->pos_z =
           *(short *)(param_2 + 0xb4) -
           (short)(iVar8 * ((int)param_1->bounds_min_x + (int)sVar3) >> 0xc);
    }
    uVar5 = FUN_8001e860(param_1,param_2,param_3,param_4);
    param_2->move_mode = 1;
    if ((uVar5 & 0x80) == 0) {
      DAT_1f800182 = 0;
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
