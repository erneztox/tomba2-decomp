/**
 * @brief Entity angle calc variant 14: different entity offset format
 * @note Original: func_80023870 at 0x80023870
 */
// Entity_CalcAngle14



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_CalcAngle14(int param_1,int param_2,int param_3)

{
  s16 sVar1;
  s16 sVar2;
  s16 sVar3;
  s8 cVar4;
  uint uVar5;
  s32 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)(((uint)param_1->pos_y - (uint)param_3->pos_x) * 0x10000)
          >> 0x10;
  iVar7 = (int)(((uint)param_1->pos_z - (uint)*(u16 *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar5 = Math_SqrtGTE(iVar8 * iVar8 + iVar7 * iVar7);
  uVar6 = 0;
  if (((int)(uVar5 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x)
     && (uVar6 = 0,
        (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_3 + 0x30)) +
              (uint)param_2->bounds_min_y +
              ((uint)param_1->bounds_max_y - (uint)param_1->bounds_min_y) & 0xffff) <=
        (int)(s16)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _g_AngleTarget = Math_Atan2(-iVar7,iVar8);
    if (*(s8*)(param_1 + 0xc) == '\x02') {
      cVar4 = Math_CompareAngle((int)_g_AngleTarget,(int)param_1->draw_x,1);
      param_1->input_flags = cVar4 + '\x02';
    }
    iVar7 = Math_CosGTE(_g_AngleTarget);
    sVar1 = param_1->bounds_min_x;
    sVar2 = param_2->bounds_min_x;
    iVar8 = Math_Cos(_g_AngleTarget);
    sVar3 = param_2->bounds_min_x;
    uVar6 = 1;
    param_1->pos_y =
         param_3->pos_x + (s16)(iVar7 * ((int)sVar1 + (int)sVar2) >> 0xc);
    param_1->pos_z =
         *(s16 *)(param_3 + 0x34) -
         (s16)(iVar8 * ((int)param_1->bounds_min_x + (int)sVar3) >> 0xc);
  }
  return uVar6;
}
