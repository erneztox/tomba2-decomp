/**
 * @brief Entity parent update: copies pos/angle from parent entity[0x10]
 * @note Original: func_8005B20C at 0x8005B20C
 */
// Entity_ParentUpdate



#include "tomba.h"
void FUN_8005b20c(int param_1,int param_2)

{
  s16 sVar1;
  int iVar2;
  
  iVar2 = param_1->parent;
  if (param_2 != 0) {
    iVar2->collision_dir = param_1->collision_dir;
    iVar2->pos_y =
         (s16)((*(int *)(param_1->data_ptr + 0x2c) +
                 *(int *)(param_1->target_ptr + 0x2c)) / 2);
    *(s16 *)(iVar2 + 0x32) =
         (s16)((*(int *)(param_1->data_ptr + 0x30) +
                 *(int *)(param_1->target_ptr + 0x30)) / 2);
    iVar2->pos_z =
         (s16)((*(int *)(param_1->data_ptr + 0x34) +
                 *(int *)(param_1->target_ptr + 0x34)) / 2);
    iVar2->rot_y = param_1->rot_y;
    iVar2->rot_z = *(s16 *)(&DAT_800a46ac + param_1->timer1 * 2);
    return;
  }
  iVar2->collision_dir = param_1->collision_dir;
  *(s32 *)(iVar2 + 0x2c) = *(s32 *)(param_1 + 0x2c);
  iVar2->scale_y = param_1->scale_y;
  if (param_1->entity_flags < 0) {
    sVar1 = *(s16 *)(param_1 + 0x32) + iVar2->bounds_min_y + 0x28;
  }
  else {
    sVar1 = *(s16 *)(param_1 + 0x32) + iVar2->bounds_min_y + 0x50;
  }
  *(s16 *)(iVar2 + 0x32) = sVar1;
  if (param_1->sub_state < 6) {
    iVar2->rot_y = param_1->rot_y;
  }
  if (param_1->sub_state == '\x06') {
    param_1->rot_z = 0xff00;
    iVar2->rot_z = 0xff00;
    return;
  }
  iVar2->rot_z = param_1->rot_z;
  return;
}
