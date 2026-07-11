/**
 * @brief Initializes entity GTE matrix to identity (0x1000 scale) at entity[0x98]
 * @note Original: func_80051C8C at 0x80051C8C
 */
// Entity_InitMatrix



#include "tomba.h"
void FUN_80051c8c(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x98;
  param_1->gte_result = 0x1000;
  *(s32 *)(param_1 + 0x9c) = 0;
  *(s32 *)(param_1 + 0xa0) = 0x1000;
  *(s32 *)(param_1 + 0xa4) = 0;
  *(s32 *)(param_1 + 0xa8) = 0x1000;
  param_1->projected_x = 0;
  param_1->projected_y = 0;
  param_1->projected_z = 0;
  FUN_80084d10((int)param_1->rot_x,iVar1);
  FUN_80084eb0((int)param_1->rot_y,iVar1);
  FUN_80085050((int)param_1->rot_z,iVar1);
  param_1->projected_x = (int)param_1->pos_y;
  param_1->projected_y = (int)*(s16 *)(param_1 + 0x32);
  param_1->projected_z = (int)param_1->pos_z;
  FUN_80051464();
  return;
}
