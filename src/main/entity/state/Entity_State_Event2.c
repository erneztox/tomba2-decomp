/**
 * @brief Entity event state variant 2: entity->sub_state dispatch
 * @note Original: func_800433FC at 0x800433FC
 */
// Entity_State_Event2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800433fc(int param_1)

{
  s16 sVar1;
  s16 uVar2;
  s16 sVar3;
  int iVar4;
  s16 sVar5;
  int iVar6;
  
  uVar2 = _g_PlayerPosZ;
  if (param_1->sub_state == '\0') {
    if (param_1->event_id == 1) {
      uVar2 = *(s16 *)(param_1 + 0x66);
      param_1->normal_x = *(s16 *)(param_1 + 100);
    }
    else {
      param_1->normal_x = _g_PlayerPosX;
    }
    param_1->normal_z = uVar2;
    sVar1 = FUN_80085690((int)param_1->normal_z - (int)param_1->pos_z,
                         (int)param_1->pos_y - (int)param_1->normal_x);
    iVar4 = (int)(((uint)param_1->normal_x - (uint)param_1->pos_y) * 0x10000)
            >> 0x10;
    iVar6 = (int)(((uint)param_1->normal_z - (uint)param_1->pos_z) * 0x10000)
            >> 0x10;
    *(u16 *)(param_1 + 100) = -sVar1 & 0xfff;
    uVar2 = FUN_80084080(iVar4 * iVar4 + iVar6 * iVar6);
    *(s16 *)(param_1 + 0x66) = uVar2;
    if (*(s16 *)(param_1 + 0x76) < 0) {
      sVar1 = *(s16 *)(param_1 + 100) - param_1->event_param;
    }
    else {
      sVar1 = *(s16 *)(param_1 + 100) + param_1->event_param;
    }
    param_1->event_id = sVar1;
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  else {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    sVar1 = *(s16 *)(param_1 + 100) + *(s16 *)(param_1 + 0x76);
    *(s16 *)(param_1 + 100) = sVar1;
    iVar4 = FUN_80083f50((int)sVar1);
    iVar4 = iVar4 * *(s16 *)(param_1 + 0x66);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    param_1->pos_y = param_1->normal_x + (s16)(iVar4 >> 0xc);
    iVar4 = FUN_80083e80((int)*(s16 *)(param_1 + 100));
    iVar4 = iVar4 * *(s16 *)(param_1 + 0x66);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    iVar4 = (uint)param_1->normal_z + (iVar4 >> 0xc);
    param_1->pos_z = (s16)iVar4;
    if (*(s16 *)(param_1 + 0x76) < 0) {
      sVar3 = FUN_80085690((iVar4 * 0x10000 >> 0x10) - (int)param_1->normal_z,
                           (int)param_1->normal_x - (int)param_1->pos_y);
      sVar1 = *(s16 *)(param_1 + 100);
      sVar5 = param_1->event_id;
      sVar3 = sVar3 + -0x400;
    }
    else {
      sVar3 = FUN_80085690((iVar4 * 0x10000 >> 0x10) - (int)param_1->normal_z,
                           (int)param_1->normal_x - (int)param_1->pos_y);
      sVar1 = param_1->event_id;
      sVar5 = *(s16 *)(param_1 + 100);
      sVar3 = sVar3 + 0x400;
    }
    param_1->rot_y = sVar3;
    if (sVar1 <= sVar5) {
      return 1;
    }
    FUN_80042ea4(param_1,param_1 + 0x68,(int)param_1->type_flags);
  }
  return 0;
}
