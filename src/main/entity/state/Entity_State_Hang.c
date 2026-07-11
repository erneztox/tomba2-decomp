/**
 * @brief Entity hang state: entity->action_state state, hanging/climbing
 * @note Original: func_80070BD0 at 0x80070BD0
 */
// Entity_State_Hang



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Hang(int param_1,s16 param_2,int param_3,s8 param_4)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  s32 uVar4;
  u16 uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    sVar2 = *(s16 *)(param_1 + 100) + 0x20;
    *(s16 *)(param_1 + 100) = sVar2;
    if (0x3ff < sVar2) {
      *(s16 *)(param_1 + 100) = 0x400;
    }
    sVar2 = Math_Cos((int)*(s16 *)(param_1 + 100));
    iVar6 = (int)sVar2;
    iVar3 = iVar6 * param_1->sprite_x;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xfff;
    }
    iVar7 = iVar6 * param_1->angle_offset;
    param_1->pos_y = _g_PlayerPosX + (s16)(iVar3 >> 0xc);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xfff;
    }
    iVar6 = iVar6 * param_1->sprite_y;
    *(s16 *)(param_1 + 0x32) = _g_PlayerPosY + (s16)(iVar7 >> 0xc);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    param_1->pos_z = _g_PlayerPosZ + (s16)(iVar6 >> 0xc);
    sVar2 = *(s16 *)(param_1 + 100) * 3;
    param_1->scale_z = sVar2;
    param_1->scale_y = sVar2;
    param_1->scale_x = sVar2;
    if (sVar2 != 0xc00) {
      return;
    }
    if (param_4 != '\0') {
      param_1->action_state = param_1->action_state + '\x01';
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->anim_id = 0;
      Entity_LoadAnimData3(param_1,&PTR_DAT_8001b860,0);
      *(s16 *)(param_1 + 100) = 0;
      iVar3 = Math_Cos((int)-param_2);
      uVar4 = Math_CosGTE((int)-param_2);
      sVar2 = Math_Atan2(-iVar3,uVar4);
      uVar5 = *(s16 *)(param_3 + 10) + sVar2 & 0xfff;
      param_1->rot_y = uVar5 - 0x800 & 0xfff;
      iVar3 = Math_CosGTE(uVar5);
      iVar3 = iVar3 * *(s16 *)(param_3 + 2);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xfff;
      }
      param_1->sprite_x = (s16)(iVar3 >> 0xc);
      param_1->angle_offset = -0x46 - *(s16 *)(param_3 + 6);
      iVar3 = Math_Cos(uVar5);
      iVar3 = -iVar3 * (int)*(s16 *)(param_3 + 2);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xfff;
      }
      param_1->sprite_y = (s16)(iVar3 >> 0xc);
      param_1->scale_z = 0;
      param_1->scale_y = 0;
      param_1->scale_x = 0;
      param_1->action_state = param_1->action_state + '\x01';
      return;
    }
    if (bVar1 != 2) {
      return;
    }
    iVar3 = Entity_ApproachAngle(param_1,(int)_g_EntityAngle,0x180);
    if (iVar3 == 0) {
      return;
    }
  }
  Entity_InitCombat(param_1);
  return;
}
