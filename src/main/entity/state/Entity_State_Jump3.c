/**
 * @brief Entity jump state variant 3: checks entity[0x17E] flags
 * @note Original: func_80057DC0 at 0x80057DC0
 */
// Entity_State_Jump3



/* WARNING: Removing unreachable block (ram,0x80057f60) */
/* WARNING: Removing unreachable block (ram,0x80057ef8) */
/* WARNING: Removing unreachable block (ram,0x80057e90) */
/* WARNING: Removing unreachable block (ram,0x80057e5c) */
/* WARNING: Removing unreachable block (ram,0x80057ec4) */
/* WARNING: Removing unreachable block (ram,0x80057f2c) */
/* WARNING: Removing unreachable block (ram,0x80057f94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Jump3(int param_1,int param_2)

{
  u16 uVar1;
  s16 uVar2;
  s16 uVar3;
  
  if (param_2 == 0) {
    if (((int)param_1->entity_flags & 0x8000U) != 0) {
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + -0x46;
    }
    uVar1 = param_1->entity_flags & 0x7fff;
  }
  else {
    if (((int)param_1->entity_flags & 0x8000U) == 0) {
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 0x46;
    }
    uVar1 = param_1->entity_flags | 0x8000;
  }
  param_1->entity_flags = uVar1;
  param_2 = param_2 + 1;
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if (param_2 == 0) {
    trap(0x1c00);
  }
  uVar2 = (s16)(0x1000 / param_2);
  param_1->scale_x = uVar2;
  param_1->scale_y = uVar2;
  param_1->scale_z = uVar2;
  param_1->bounds_min_x = (s16)(0x32 / param_2);
  uVar3 = (s16)(100 / param_2);
  param_1->bounds_size = uVar3;
  uVar2 = (s16)(0x8c / param_2);
  param_1->bounds_min_y = uVar2;
  param_1->bounds_max_y = (s16)(0x10e / param_2);
  param_1->angle_delta = uVar2;
  *(s16 *)(param_1 + 100) = uVar2;
  *(s16 *)(param_1 + 0x66) = uVar3;
  param_1->target_angle = (s16)(0x1e / param_2);
  _DAT_800e802a = (s16)(0xf0 / param_2);
  return;
}
