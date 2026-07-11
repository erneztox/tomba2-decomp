/**
 * @brief Entity rotate + move: entity[0x88] += entity[0x90], updates position
 * @note Original: func_80075F0C at 0x80075F0C
 */
// Entity_RotateMove



#include "tomba.h"
void FUN_80075f0c(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  param_1->gte_input = param_1->gte_input + param_1->move_speed;
  *(short *)(param_1 + 0x8a) = *(short *)(param_1 + 0x8a) + param_1->gte_offset_y;
  *(short *)(param_1 + 0x8c) = *(short *)(param_1 + 0x8c) + param_1->gte_offset_z;
  iVar2 = param_1;
  if (param_1->counter2 != '\0') {
    do {
      if ((int)(uint)param_1->counter1 <= iVar3) break;
      iVar1 = iVar2->sprite_ptr1;
      *(short *)(iVar1 + 8) = *(short *)(iVar1 + 8) + *(short *)(iVar1 + 0x10);
      iVar1 = iVar2->sprite_ptr1;
      *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + *(short *)(iVar1 + 0x12);
      iVar1 = iVar2->sprite_ptr1;
      iVar3 = iVar3 + 1;
      *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + *(short *)(iVar1 + 0x14);
      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(uint)param_1->counter2);
  }
  if (param_2 == 1) {
    param_1->anim_data = param_1->anim_data | 0x80000000;
  }
  return;
}
