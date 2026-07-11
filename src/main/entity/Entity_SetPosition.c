/**
 * @brief Entity position setter: copies pos from param3/4/5 to entity[0x2E/32/36]
 * @note Original: func_8004BD64 at 0x8004BD64
 */
// Entity_SetPosition



#include "tomba.h"
void FUN_8004bd64(int param_1,u8 param_2,int param_3,int param_4,s16 *param_5)

{
  s16 sVar1;
  
  if (param_2 == 1) {
    param_1->pos_y = param_3->pos_x + *param_5;
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_3 + 0x30) + param_5->flags;
    sVar1 = *(s16 *)(param_3 + 0x34);
LAB_8004be6c:
    sVar1 = sVar1 + param_5->kind;
  }
  else {
    if (1 < param_2) {
      if (param_2 != 2) goto LAB_8004be7c;
      param_1->pos_y = param_4->pos_x + *param_5;
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_4 + 0x30) + param_5->flags;
      sVar1 = *(s16 *)(param_4 + 0x34);
      goto LAB_8004be6c;
    }
    if (param_2 != 0) goto LAB_8004be7c;
    param_1->pos_y = (s16)((*(int *)(param_3 + 0x2c) + *(int *)(param_4 + 0x2c)) / 2);
    *(s16 *)(param_1 + 0x32) = (s16)((param_3->pos_y_fixed + param_4->pos_y_fixed) / 2);
    sVar1 = (s16)((param_3->scale_y + param_4->scale_y) / 2);
  }
  param_1->pos_z = sVar1;
LAB_8004be7c:
  if ((param_1->alloc_flags & 0x7f) != 0) {
    FUN_800517f8();
  }
  return;
}
