/**
 * @brief Entity follow state: entity[0x62] target, follows
 * @note Original: func_800702C0 at 0x800702C0
 */
// Entity_State_Follow



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Follow(int param_1)

{
  s16 sVar1;
  int iVar2;
  s16 sVar3;
  int iVar4;
  s16 sVar5;
  s16 sVar6;
  
  sVar6 = param_1->angle_delta;
  iVar4 = param_1->parent;
  sVar5 = iVar4->rot_y;
  switch(param_1->flag_5E) {
  case 0:
    param_1->pos_y =
         (s16)((*(int *)(_DAT_800e7f50 + 0x2c) + *(int *)(_DAT_800e7f5c + 0x2c)) / 2);
    *(s16 *)(param_1 + 0x32) =
         (s16)((_DAT_800e7f50->pos_y_fixed + _DAT_800e7f5c->pos_y_fixed) / 2);
    iVar4 = _DAT_800e7f50->scale_y;
    iVar2 = _DAT_800e7f5c->scale_y;
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + param_1->draw_x;
    param_1->pos_z = (s16)((iVar4 + iVar2) / 2);
    sVar6 = 0x20;
    sVar5 = _g_EntityAngle;
    goto switchD_8007030c_default;
  case 1:
    param_1->pos_y = *(s16 *)(iVar4->data_ptr + 0x2c);
    sVar1 = *(s16 *)(iVar4->data_ptr + 0x30);
    *(s16 *)(param_1 + 0x32) = sVar1;
    iVar4 = iVar4->data_ptr;
    break;
  case 2:
    param_1->pos_y =
         (s16)((*(int *)(iVar4->target_ptr + 0x2c) + *(int *)(iVar4->data_ptr + 0x2c))
                / 2);
    *(s16 *)(param_1 + 0x32) =
         (s16)((*(int *)(iVar4->target_ptr + 0x30) + *(int *)(iVar4->data_ptr + 0x30))
                / 2);
    iVar2 = *(int *)(iVar4->target_ptr + 0x34);
    iVar4 = *(int *)(iVar4->data_ptr + 0x34);
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + param_1->draw_x;
    param_1->pos_z = (s16)((iVar2 + iVar4) / 2);
    goto switchD_8007030c_default;
  case 3:
    iVar2 = Math_CosGTE((int)iVar4->rot_y);
    iVar2 = iVar2 * iVar4->bounds_min_x;
    param_1->pos_y =
         *(s16 *)(iVar4->sprite_ptr1 + 0x2c) - (s16)(iVar2 - (iVar2 >> 0x1f) >> 0xd);
    *(s16 *)(param_1 + 0x32) = *(s16 *)(iVar4->sprite_ptr1 + 0x30);
    iVar2 = Math_Cos((int)iVar4->rot_y);
    iVar2 = iVar2 * iVar4->bounds_min_x;
    sVar3 = *(s16 *)(iVar4->sprite_ptr1 + 0x34);
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + param_1->draw_x;
    sVar3 = sVar3 + (s16)(iVar2 - (iVar2 >> 0x1f) >> 0xd);
    goto LAB_800705dc;
  case 4:
    param_1->pos_y = *(s16 *)(iVar4->target_ptr + 0x2c);
    sVar1 = *(s16 *)(iVar4->target_ptr + 0x30);
    *(s16 *)(param_1 + 0x32) = sVar1;
    iVar4 = iVar4->target_ptr;
    break;
  case 5:
    param_1->pos_y = _DAT_800e7f5c->pos_x;
    sVar1 = *(s16 *)(_DAT_800e7f5c + 0x30);
    *(s16 *)(param_1 + 0x32) = sVar1;
    iVar4 = _DAT_800e7f5c;
    break;
  case 6:
    param_1->pos_y = _DAT_800e7f50->pos_x;
    sVar1 = *(s16 *)(_DAT_800e7f50 + 0x30);
    *(s16 *)(param_1 + 0x32) = sVar1;
    iVar4 = _DAT_800e7f50;
    break;
  case 7:
    param_1->pos_y = *(s16 *)(*(int *)(iVar4 + 0xe4) + 0x2c);
    sVar1 = *(s16 *)(*(int *)(iVar4 + 0xe4) + 0x30);
    *(s16 *)(param_1 + 0x32) = sVar1;
    iVar4 = *(int *)(iVar4 + 0xe4);
    break;
  default:
    goto switchD_8007030c_default;
  }
  sVar3 = *(s16 *)(iVar4 + 0x34);
  *(s16 *)(param_1 + 0x32) = sVar1 + param_1->draw_x;
LAB_800705dc:
  param_1->pos_z = sVar3;
switchD_8007030c_default:
  iVar4 = Math_CosGTE((int)sVar5);
  param_1->pos_y = param_1->pos_y + (s16)(iVar4 * sVar6 >> 0xc);
  iVar4 = Math_Cos((int)sVar5);
  param_1->pos_z = param_1->pos_z + (s16)(-iVar4 * (int)sVar6 >> 0xc);
  return;
}
