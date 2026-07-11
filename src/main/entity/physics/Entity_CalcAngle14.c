/**
 * @brief Entity angle calc variant 14: different entity offset format
 * @note Original: func_80023870 at 0x80023870
 */
// Entity_CalcAngle14



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80023870(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)(((uint)param_1->pos_y - (uint)param_3->pos_x) * 0x10000)
          >> 0x10;
  iVar7 = (int)(((uint)param_1->pos_z - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar5 = FUN_80084080(iVar8 * iVar8 + iVar7 * iVar7);
  uVar6 = 0;
  if (((int)(uVar5 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x)
     && (uVar6 = 0,
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
              (uint)param_2->bounds_min_y +
              ((uint)param_1->bounds_max_y - (uint)param_1->bounds_min_y) & 0xffff) <=
        (int)(short)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _DAT_1f80009c = FUN_80085690(-iVar7,iVar8);
    if (*(char *)(param_1 + 0xc) == '\x02') {
      cVar4 = FUN_80077768((int)_DAT_1f80009c,(int)param_1->draw_x,1);
      param_1->input_flags = cVar4 + '\x02';
    }
    iVar7 = FUN_80083f50(_DAT_1f80009c);
    sVar1 = param_1->bounds_min_x;
    sVar2 = param_2->bounds_min_x;
    iVar8 = FUN_80083e80(_DAT_1f80009c);
    sVar3 = param_2->bounds_min_x;
    uVar6 = 1;
    param_1->pos_y =
         param_3->pos_x + (short)(iVar7 * ((int)sVar1 + (int)sVar2) >> 0xc);
    param_1->pos_z =
         *(short *)(param_3 + 0x34) -
         (short)(iVar8 * ((int)param_1->bounds_min_x + (int)sVar3) >> 0xc);
  }
  return uVar6;
}
