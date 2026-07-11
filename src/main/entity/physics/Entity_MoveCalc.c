/**
 * @brief Entity move calculator: computes velocity from entity[0x4A], updates pos
 * @note Original: func_8002423C at 0x8002423C
 */
// Entity_MoveCalc



#include "tomba.h"
s32 FUN_8002423c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  s32 uVar4;
  s16 sVar5;
  
  if (param_1->velocity_y < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar1 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
            >> 0x10;
    iVar2 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
            >> 0x10;
    uVar3 = FUN_80084080(iVar1 * iVar1 + iVar2 * iVar2);
    uVar4 = 0xffffffff;
    if ((int)(uVar3 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x)
    {
      sVar5 = (param_2->bounds_min_y + param_1->bounds_max_y) - param_1->bounds_min_y
      ;
      uVar4 = 0xffffffff;
      if ((int)(uint)(u16)((*(s16 *)(param_1 + 0x32) - *(s16 *)(param_2 + 0x32)) + sVar5) <=
          (int)param_1->bounds_max_y + (int)param_2->bounds_max_y) {
        uVar4 = 2;
        *(s16 *)(param_1 + 0x32) = *(s16 *)(param_2 + 0x32) - sVar5;
        param_1->collision_state = 1;
      }
    }
  }
  return uVar4;
}
