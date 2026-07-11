/**
 * @brief Animation script step: state machine processing entity->sub_state animation events
 * @note Original: func_80041468 at 0x80041468
 */
// Entity_AnimScriptStep



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80041468(int param_1)

{
  s16 sVar1;
  s16 sVar2;
  u16 uVar3;
  s32 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = _g_PlayerEntity;
  if (((int)param_1->event_id & 0x8000U) == 0) {
    iVar6 = param_1;
  }
  if (param_1->sub_state != '\0') {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    uVar4 = FUN_80041438(iVar6,(int)*(s16 *)(param_1 + 0x76),(int)param_1->event_param);
    return uVar4;
  }
  uVar3 = param_1->event_id & 0x7fff;
  if (uVar3 == 2) {
    sVar2 = FUN_80085690((int)iVar6->pos_z - (int)_g_PlayerPosZ,
                         (int)_g_PlayerPosX - (int)iVar6->pos_y);
    uVar3 = sVar2 - 0x800;
  }
  else {
    if (uVar3 < 3) {
      if (uVar3 != 1) goto LAB_800415ac;
      sVar2 = iVar6->pos_y;
      iVar5 = (int)iVar6->pos_z - (int)_g_PlayerPosZ;
      sVar1 = _g_PlayerPosX;
    }
    else {
      if (uVar3 != 3) {
        if (uVar3 == 10) {
          uVar3 = FUN_80085690((int)iVar6->pos_z - (int)*(s16 *)(param_1 + 0x76),
                               (int)param_1->event_param - (int)iVar6->pos_y);
          *(u16 *)(param_1 + 0x76) = uVar3 & 0xfff;
          param_1->event_param = 0x100;
        }
        goto LAB_800415ac;
      }
      sVar1 = param_1->pos_y;
      sVar2 = iVar6->pos_y;
      iVar5 = (int)iVar6->pos_z - (int)param_1->pos_z;
    }
    uVar3 = FUN_80085690(iVar5,(int)sVar1 - (int)sVar2);
  }
  *(u16 *)(param_1 + 0x76) = *(s16 *)(param_1 + 0x76) + (uVar3 & 0xfff);
LAB_800415ac:
  if (((int)((int)*(s16 *)(param_1 + 0x76) - (int)iVar6->rot_y & 0xfffU) <
       (int)param_1->event_param) || (param_1->event_param < 1)) {
    iVar6->rot_y = *(s16 *)(param_1 + 0x76);
    uVar4 = 1;
  }
  else {
    iVar6->rot_z = 0;
    param_1->sub_state = param_1->sub_state + '\x01';
    uVar4 = 0;
  }
  return uVar4;
}
