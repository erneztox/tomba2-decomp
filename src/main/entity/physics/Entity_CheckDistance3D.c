/**
 * @brief 3D distance check: sqrt(X^2+Z^2) vs entity[0x80] radius, Y bounds vs entity[0x86]
 * @note Original: func_80023794 at 0x80023794
 */
// Entity_CheckDistance3D



#include "tomba.h"
s32 Entity_CheckDistance3D(int param_1,int param_2,int param_3)

{
  s32 bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = (int)(((uint)param_1->pos_y - (uint)*(u16 *)(param_2 + 4)) * 0x10000) >>
          0x10;
  iVar3 = (int)(((uint)param_1->pos_z - (uint)*(u16 *)(param_2 + 8)) * 0x10000) >>
          0x10;
  uVar4 = Math_SqrtGTE(iVar2 * iVar2 + iVar3 * iVar3);
  if ((int)((int)param_1->bounds_min_x + (uint)param_3->state) < (int)(uVar4 & 0xffff))
  {
    bVar1 = false;
  }
  else {
    bVar1 = (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(param_2 + 6)) +
                  (uint)param_1->bounds_min_y + (uint)param_3->behavior_state & 0xffff) <=
            (int)((int)param_1->bounds_max_y + (uint)param_3->behavior_state * 2);
  }
  return bVar1;
}
