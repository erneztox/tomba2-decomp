/**
 * @brief Entity spawn state: reads script, spawns entities
 * @note Original: func_80043108 at 0x80043108
 */
// Entity_State_Spawn



/* WARNING: Removing unreachable block (ram,0x80043264) */

#include "tomba.h"
s32 FUN_80043108(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  s16 sVar3;
  u16 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = *(int *)(param_1 + 0x6c);
  bVar1 = param_1->sub_state;
  sVar2 = *(s16 *)(iVar8 + 10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return 0;
      }
      goto LAB_80043310;
    }
    if (bVar1 != 0) {
      return 0;
    }
    iVar5 = (int)((uint)*(u16 *)(param_1 + 100) << 0x10) >> 0x18;
    if (iVar5 == 0) {
      iVar5 = 10;
    }
    iVar7 = (uint)*(u16 *)(param_1 + 0x76) - (uint)param_1->pos_z;
    iVar6 = iVar7 * 0x10000 >> 0x10;
    param_1->normal_x = param_1->event_id - param_1->pos_y;
    param_1->normal_z = (s16)iVar7;
    param_1->velocity_y = param_1->event_param - *(s16 *)(param_1 + 0x32);
    sVar3 = FUN_80084080(iVar6 * iVar6 +
                         (int)param_1->normal_x * (int)param_1->normal_x);
    iVar5 = (int)(s16)iVar5;
    uVar9 = (int)sVar3 / iVar5;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (sVar3 == -0x80000000)) {
      trap(0x1800);
    }
    *(s16 *)(param_1 + 100) = (s16)uVar9;
    if ((uVar9 & 0xffff) == 0) {
      *(s16 *)(param_1 + 100) = 1;
    }
    if (*(s16 *)(param_1 + 100) == 0) {
      trap(0x1c00);
    }
    param_1->anim_counter = 0x1000;
    *(s16 *)(param_1 + 100) = (s16)(0x1000 / (int)*(s16 *)(param_1 + 100));
    if (sVar2 == -1) {
      uVar4 = FUN_80085690(-(int)param_1->normal_z,(int)param_1->normal_x);
      param_1->rot_y = uVar4 & 0xfff;
    }
    else if (sVar2 == 0) {
      param_1->sub_state = 2;
      return 0;
    }
    uVar4 = FUN_80085690(-(int)param_1->normal_z,(int)param_1->normal_x);
    *(u16 *)(param_1 + 0x66) = uVar4 & 0xfff;
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  iVar5 = FUN_80041438(param_1,(int)*(s16 *)(param_1 + 0x66),0x100);
  if (iVar5 != 0) {
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  if (sVar2 == 1) {
    return 0;
  }
LAB_80043310:
  iVar5 = (uint)param_1->anim_counter - (uint)*(u16 *)(param_1 + 100);
  param_1->anim_counter = (s16)iVar5;
  if (iVar5 * 0x10000 < 1) {
    param_1->anim_counter = 0;
  }
  iVar5 = (int)param_1->anim_counter * (int)param_1->normal_x;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xfff;
  }
  iVar6 = (int)param_1->anim_counter * (int)param_1->velocity_y;
  param_1->pos_y = *(s16 *)(iVar8 + 2) - (s16)(iVar5 >> 0xc);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xfff;
  }
  iVar5 = (int)param_1->anim_counter * (int)param_1->normal_z;
  *(s16 *)(param_1 + 0x32) = *(s16 *)(iVar8 + 4) - (s16)(iVar6 >> 0xc);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xfff;
  }
  param_1->pos_z = *(s16 *)(iVar8 + 6) - (s16)(iVar5 >> 0xc);
  if (param_1->anim_counter != 0) {
    FUN_80042ea4(param_1,param_1 + 0x68,(int)param_1->type_flags);
    return 0;
  }
  return 1;
}
