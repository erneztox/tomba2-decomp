/**
 * @brief Entity physics applier: calls Entity_PhysicsStep2, updates velocity
 * @note Original: func_8005B370 at 0x8005B370
 */
// Entity_PhysicsApply



#include "tomba.h"
void Entity_PhysicsApply(int param_1,int param_2)

{
  u16 uVar1;
  s16 uVar2;
  s16 sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  Entity_PhysicsStep2();
  iVar7 = param_1->parent;
  if (param_2 == 1) {
    *(s32 *)(param_1 + 0x2c) = *(s32 *)(iVar7 + 0x2c);
    param_1->scale_y = iVar7->scale_y;
    if (param_1->entity_flags < 0) {
      sVar3 = *(s16 *)(param_1 + 0x32) + iVar7->bounds_min_y + 0x28;
    }
    else {
      sVar3 = *(s16 *)(param_1 + 0x32) + iVar7->bounds_min_y + 0x50;
    }
    *(s16 *)(iVar7 + 0x32) = sVar3;
    iVar7->rot_z = param_1->rot_z;
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      uVar1 = iVar7->bounds_min_y;
      iVar4 = (uint)param_1->angle_delta << 0x10;
      iVar5 = Math_Cos(iVar7->rot_z + 0x400);
      iVar6 = (int)(((uint)uVar1 + ((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1)) * 0x10000) >> 0x10;
      iVar4 = Math_CosGTE(iVar7->rot_z + 0x400);
      *(s16 *)(param_1 + 0x32) = *(s16 *)(iVar7 + 0x32) - (s16)(iVar5 * iVar6 >> 0xc);
      iVar5 = Math_CosGTE((int)iVar7->rot_y);
      iVar6 = (int)(s16)(-(iVar4 * iVar6) >> 0xc);
      iVar4 = Math_Cos((int)iVar7->rot_y);
      param_1->pos_y = iVar7->pos_y + (s16)(iVar5 * iVar6 >> 0xc);
      param_1->pos_z = iVar7->pos_z - (s16)(iVar4 * iVar6 >> 0xc);
      uVar2 = iVar7->rot_z;
      param_1->collision_state = 1;
      param_1->draw_scale = uVar2;
    }
  }
  else if (param_2 == 2) {
    uVar1 = iVar7->bounds_min_y;
    iVar4 = (uint)param_1->angle_delta << 0x10;
    iVar5 = Math_Cos(iVar7->rot_z + 0x400);
    iVar6 = (int)(((uint)uVar1 + ((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1)) * 0x10000) >> 0x10;
    iVar4 = Math_CosGTE(iVar7->rot_z + 0x400);
    *(s16 *)(param_1 + 0x32) = *(s16 *)(iVar7 + 0x32) - (s16)(iVar5 * iVar6 >> 0xc);
    iVar5 = Math_CosGTE((int)iVar7->rot_y);
    iVar6 = (int)(s16)(-(iVar4 * iVar6) >> 0xc);
    iVar4 = Math_Cos((int)iVar7->rot_y);
    param_1->pos_y = iVar7->pos_y + (s16)(iVar5 * iVar6 >> 0xc);
    param_1->pos_z = iVar7->pos_z - (s16)(iVar4 * iVar6 >> 0xc);
    uVar2 = iVar7->rot_z;
    iVar7->rot_y = param_1->rot_y;
    param_1->collision_state = 1;
    param_1->draw_scale = uVar2;
  }
  return;
}
