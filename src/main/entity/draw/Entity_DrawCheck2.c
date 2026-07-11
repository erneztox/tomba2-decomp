/**
 * @brief Entity draw check variant 2: similar iteration, different flag
 * @note Original: func_80051464 at 0x80051464
 */
// Entity_DrawCheck2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80051464(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1->counter2 != '\0') {
    do {
      if ((int)(uint)param_1->counter1 <= iVar4) {
        return;
      }
      iVar3 = *(int *)(param_1 + iVar4 * 4 + 0xc0);
      _DAT_1f800000 = 0x1000;
      _DAT_1f800004 = 0;
      _DAT_1f800008 = 0x1000;
      _DAT_1f80000c = 0;
      _DAT_1f800010 = 0x1000;
      _DAT_1f800014 = 0;
      _DAT_1f800018 = 0;
      _DAT_1f80001c = 0;
      sVar1 = *(short *)(iVar3 + 6);
      FUN_80084d10((int)*(short *)(iVar3 + 8),0x1f800000);
      FUN_80084eb0((int)*(short *)(iVar3 + 10),0x1f800000);
      FUN_80085050((int)*(short *)(iVar3 + 0xc),0x1f800000);
      if (sVar1 == -1) {
        FUN_80084110(param_1 + 0x98,0x1f800000,iVar3 + 0x18);
        FUN_80084220(iVar3,iVar3 + 0x2c);
        *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + param_1->projected_x;
        iVar3->pos_y_fixed = iVar3->pos_y_fixed + param_1->projected_y;
        iVar2 = iVar3->scale_y + param_1->projected_z;
      }
      else {
        iVar2 = param_1 + sVar1 * 4;
        FUN_80084110(iVar2->sprite_ptr1 + 0x18,0x1f800000,iVar3 + 0x18);
        FUN_80084220(iVar3,iVar3 + 0x2c);
        *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + *(int *)(iVar2->sprite_ptr1 + 0x2c);
        iVar3->pos_y_fixed = iVar3->pos_y_fixed + *(int *)(iVar2->sprite_ptr1 + 0x30);
        iVar2 = iVar3->scale_y + *(int *)(iVar2->sprite_ptr1 + 0x34);
      }
      iVar3->scale_y = iVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)param_1->counter2);
  }
  return;
}
