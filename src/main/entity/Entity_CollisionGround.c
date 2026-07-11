/**
 * @brief Entity collision ground: checks ground contact, sets flag
 * @note Original: func_8005444C at 0x8005444C
 */
// Entity_CollisionGround



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s8 Entity_CollisionGround(int param_1)

{
  u8 bVar1;
  s32 bVar2;
  u16 uVar3;
  s8 cVar4;
  u8 bVar5;
  int iVar6;
  u16 uVar7;
  s16 sVar8;
  s16 sVar9;
  
  bVar2 = false;
  *(s16 *)(param_1 + 0x16c) = 0;
  param_1->type_flags = 0;
  if (param_1->physics_flag != '\0') goto LAB_80054630;
  if (param_1->collision_state != '\0') {
    return param_1->collision_state;
  }
  if (param_1->entity_flags < 0) {
    iVar6 = (uint)param_1->bounds_min_x << 0x10;
    sVar9 = (s16)((uint)((iVar6 >> 0x10) - (iVar6 >> 0x1f)) >> 1);
  }
  else {
    sVar9 = param_1->bounds_min_x;
  }
  if (param_1->sub_state == '\0') {
    sVar8 = param_1->angle_delta;
  }
  else {
    iVar6 = param_1->parent;
    sVar8 = (iVar6->bounds_max_y - iVar6->bounds_min_y) -
            (*(s16 *)(param_1 + 0x32) - *(s16 *)(iVar6 + 0x32));
  }
  if (*(s8*)(param_1 + 0x61) == '\0') {
    cVar4 = Collision_Check1(param_1,0,(int)sVar8);
    param_1->collision_state = cVar4;
    if (cVar4 == '\0') {
      bVar2 = true;
      cVar4 = Collision_Check1(param_1,(int)sVar9,(int)sVar8);
      param_1->collision_state = cVar4;
      if (cVar4 == '\0') {
        iVar6 = (int)-sVar9;
        goto LAB_80054518;
      }
    }
  }
  else {
    iVar6 = 0;
LAB_80054518:
    cVar4 = Collision_Check1(param_1,iVar6,(int)sVar8);
    param_1->collision_state = cVar4;
    if (cVar4 == '\0') goto LAB_80054630;
  }
  uVar3 = _DAT_1f8001a6;
  _DAT_1f80019e = _DAT_1f8001a4;
  param_1->type_flags = _DAT_1f8001a6;
  if (((bVar2) && (uVar7 = uVar3 & 0xf00, (uVar3 & 0x8000) != 0)) &&
     ((uVar7 == 0x100 || (uVar7 == 0x200)))) {
    param_1->type_flags = 0;
  }
  bVar1 = param_1->collision_state;
  bVar5 = bVar1 & 1;
  param_1->collision_state = bVar5;
  if ((bVar1 & 1) != 0) {
    param_1->angle_offset = 0;
    param_1->collision_state = bVar5 | 0x80;
    if (bVar2) {
      *(s16 *)(param_1 + 0x16c) = 0;
    }
    else {
      *(s16 *)(param_1 + 0x16c) = _DAT_1f8001a8;
    }
    Collision_CalcSlope(param_1);
    param_1->draw_scale = _g_CollisionNormalY;
  }
LAB_80054630:
  return param_1->collision_state;
}
