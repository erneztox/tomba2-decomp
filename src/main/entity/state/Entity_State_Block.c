/**
 * @brief Entity block state: entity->action_state state, blocking/defense
 * @note Original: func_8006A900 at 0x8006A900
 */
// Entity_State_Block



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Block(int param_1)

{
  s16 sVar1;
  u8 uVar2;
  s16 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  s16 sVar7;
  int iVar8;
  
  if (param_1->action_state == '\0') {
    param_1->action_state = 1;
    param_1->timer1 = 1;
    param_1->rot_y = 0;
    param_1->rot_x = 0;
    param_1->rot_z = 0;
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  sVar7 = param_1->timer1;
  param_1->timer1 = sVar7 + -1;
  if (sVar7 == 1) {
    if (DAT_800e7f3e == '\0') {
      Audio_PlaySoundEffect(9,0,0);
      uVar3 = 0x12;
    }
    else {
      Audio_PlaySoundEffect(10,0,0);
      uVar3 = 10;
    }
    param_1->timer1 = uVar3;
  }
  iVar6 = 0x37;
  if (DAT_800e7f3e == '\0') {
    param_1->type_flags = param_1->type_flags + 0x100;
    iVar8 = 0x41;
    sVar7 = _g_EntityAngle + 0x200;
  }
  else {
    iVar6 = 0x6e;
    iVar8 = 0x78;
    if (param_1->flag_5E == '\0') {
      param_1->flag_5E = 1;
      Entity_SpawnChild27(param_1);
    }
    param_1->type_flags = param_1->type_flags + 0x1c0;
    sVar7 = _g_EntityAngle + 0x180;
  }
  param_1->type_flags = param_1->type_flags & 0xfff;
  iVar4 = Math_CosGTE();
  iVar5 = Math_CosGTE((int)sVar7);
  iVar4 = (int)(s16)(iVar6 * iVar4 >> 0xc);
  param_1->pos_y = _DAT_800e7f5c->pos_x + (s16)(iVar5 * iVar4 >> 0xc);
  iVar6 = Math_Cos((int)param_1->type_flags);
  *(s16 *)(param_1 + 0x32) = *(s16 *)(_DAT_800e7f5c + 0x30) + (s16)(iVar8 * iVar6 >> 0xc);
  iVar6 = Math_Cos((int)sVar7);
  sVar1 = *(s16 *)(_DAT_800e7f5c + 0x34);
  param_1->rot_y = sVar7;
  param_1->pos_z = sVar1 - (s16)(iVar6 * iVar4 >> 0xc);
  if (param_1->kind != '\x01') {
    *(s16 *)(param_1->sprite_ptr1 + 0xc) = param_1->type_flags;
  }
  if ((DAT_800e7fc4 == '\x02') || (DAT_800e7fc6 == '\0')) {
    param_1->behavior_state = 0;
    param_1->state = param_1->state + '\x01';
  }
  else if (DAT_800e7fc6 == '\x03') {
    param_1->pos_y = _g_CameraTargetX;
    *(s16 *)(param_1 + 0x32) = _g_CameraTargetY;
    param_1->pos_z = _g_CameraTargetZ;
    uVar2 = DAT_800e7fca;
    param_1->rot_x = 0;
    param_1->rot_z = 0;
    param_1->anim_id = uVar2;
    sVar7 = _g_EntityAngle;
    if (g_CollisionType == '\t') {
      sVar7 = _g_EntityAngle + -0x800;
    }
    param_1->rot_y = sVar7;
    param_1->target_angle = param_1->rot_y;
    uVar2 = DAT_800e7eaa;
    param_1->behavior_state = 1;
    param_1->collision_dir = uVar2;
    Entity_Behavior_Enemy2(param_1);
    *(s16 *)(param_1->sprite_ptr1 + 0xc) = 0;
    param_1->action_state = 1;
    Entity_DispatchBehavior();
  }
  return;
}
