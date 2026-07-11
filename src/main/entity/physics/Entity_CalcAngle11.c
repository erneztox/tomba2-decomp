/**
 * @brief Entity angle calc variant 11: different entity offset computation
 * @note Original: func_80022AC8 at 0x80022AC8
 */
// Entity_CalcAngle11



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_CalcAngle11(int param_1,int param_2,int param_3,s32 param_4)

{
  s32 bVar1;
  uint uVar2;
  s32 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(((uint)param_1->pos_y - (uint)param_3->pos_x) * 0x10000)
          >> 0x10;
  iVar4 = (int)(((uint)param_1->pos_z - (uint)*(u16 *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar2 = Math_SqrtGTE(iVar5 * iVar5 + iVar4 * iVar4);
  bVar1 = false;
  if (((int)(uVar2 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x)
     && (bVar1 = false,
        (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_3 + 0x30)) +
              (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
        (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _g_AngleTarget = Math_Atan2(-iVar4,iVar5);
    bVar1 = true;
  }
  if (bVar1) {
    uVar2 = Entity_InitFull(param_1,param_2,param_3,param_4);
    param_2->move_mode = 1;
    if ((uVar2 & 0x80) == 0) {
      g_State182 = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
