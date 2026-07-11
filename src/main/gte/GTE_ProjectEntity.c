/**
 * @brief GTE entity projector: loads rotation, applies transform, stores result
 * @note Original: func_8006F138 at 0x8006F138
 */
// GTE_ProjectEntity



#include "tomba.h"
void FUN_8006f138(int param_1)

{
  s16 sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_80085480(param_1 + 0x54,param_1 + 0x98);
  iVar4 = 0;
  param_1->projected_x = (int)param_1->pos_y;
  param_1->projected_y = (int)*(s16 *)(param_1 + 0x32);
  param_1->projected_z = (int)param_1->pos_z;
  if (param_1->counter1 != '\0') {
    iVar2 = 0;
    do {
      iVar2 = *(int *)(param_1 + iVar2 + 0xc0);
      sVar1 = *(s16 *)(iVar2 + 6);
      FUN_80051794(0x1f800000);
      FUN_80084d10((int)*(s16 *)(iVar2 + 8),0x1f800000);
      FUN_80085050((int)*(s16 *)(iVar2 + 0xc),0x1f800000);
      FUN_80084eb0((int)*(s16 *)(iVar2 + 10),0x1f800000);
      if (sVar1 == -1) {
        FUN_80084110(param_1 + 0x98,0x1f800000,iVar2 + 0x18);
        FUN_80084220(iVar2,iVar2 + 0x2c);
        *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + param_1->projected_x;
        iVar2->pos_y_fixed = iVar2->pos_y_fixed + param_1->projected_y;
        iVar3 = iVar2->scale_y + param_1->projected_z;
      }
      else {
        iVar3 = param_1 + sVar1 * 4;
        FUN_80084110(iVar3->sprite_ptr1 + 0x18,0x1f800000,iVar2 + 0x18);
        FUN_80084220(iVar2,iVar2 + 0x2c);
        *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + *(int *)(iVar3->sprite_ptr1 + 0x2c);
        iVar2->pos_y_fixed = iVar2->pos_y_fixed + *(int *)(iVar3->sprite_ptr1 + 0x30);
        iVar3 = iVar2->scale_y + *(int *)(iVar3->sprite_ptr1 + 0x34);
      }
      iVar2->scale_y = iVar3;
      iVar4 = iVar4 + 1;
      iVar2 = iVar4 * 4;
    } while (iVar4 < (int)(uint)param_1->counter1);
  }
  return;
}
