/**
 * @brief Entity parent behavior: entity->state=1, reads parent[0x10]
 * @note Original: func_8002B7B0 at 0x8002B7B0
 */
// Entity_Behavior_Parent



#include "tomba.h"
void FUN_8002b7b0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  
  bVar1 = param_1->state;
  iVar5 = param_1->parent;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    uVar4 = DAT_8009ddba;
    uVar3 = DAT_8009ddb8;
    *(undefined2 *)(param_1 + 0x32) = 0xffd8;
    param_1->anim_data = 0;
    *(undefined4 *)(param_1 + 4) = 1;
    param_1->anim_counter = uVar3;
    *(undefined2 *)(param_1 + 0x46) = uVar4;
  }
  if ((*(byte *)(param_1->script_ptr + 0x1b) & 0x40) == 0) {
    param_1->state = 2;
  }
  else {
    param_1->scale_y = param_1->anim_data;
    if (param_1->anim_data == 0) {
      *(undefined **)(param_1 + 0x38) = &DAT_8009ddbc;
      *(undefined **)(param_1 + 0x34) = &DAT_8009ddbc;
    }
    cVar2 = *(char *)(param_1->script_ptr + 1);
    param_1->flags = cVar2;
    if (cVar2 != '\0') {
      param_1->pos_x = iVar5->pos_x;
      param_1->pos_y = *(undefined2 *)(iVar5 + 0x30);
      uVar3 = *(undefined2 *)(iVar5 + 0x34);
      param_1->velocity_y = param_1->velocity_y + 0x88U & 0xfff;
      *(undefined2 *)(param_1 + 0x30) = uVar3;
      iVar5 = FUN_80083e80((uint)param_1->sub_action << 4);
      param_1->normal_x = (short)(iVar5 >> 4);
      param_1->sub_action = param_1->sub_action + '\x02';
    }
  }
  return;
}
