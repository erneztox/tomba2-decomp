/**
 * @brief Entity sprite dispatch variant 2: entity[0x72] bits
 * @note Original: func_800444EC at 0x800444EC
 */
// Entity_SpriteDispatch2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_SpriteDispatch2(int param_1)

{
  s16 sVar1;
  s16 sVar2;
  s16 sVar3;
  u16 uVar4;
  int iVar5;
  u16 uVar6;
  
  uVar4 = param_1->event_id;
  uVar6 = uVar4 & 0x7fff;
  iVar5 = _g_PlayerEntity;
  if ((uVar4 & 0x8000) == 0) {
    iVar5 = param_1;
  }
  if (param_1->sub_state == '\0') {
    if (g_CameraMode2 == '\0') {
      if ((uVar4 & 0x7fff) == 0) {
        sVar1 = param_1->pos_z;
        sVar2 = param_1->pos_y;
      }
      else {
        sVar1 = *(s16 *)(param_1 + 0x76);
        sVar2 = param_1->event_param;
      }
      _g_AngleInput = Math_Atan2((int)_g_PlayerPosZ - (int)sVar1,(int)sVar2 - (int)_g_PlayerPosX);
      _g_AngleInput = _g_AngleInput & 0xfff;
      g_CollisionType = 0x1e;
      DAT_800e7e86 = 0;
    }
    if ((uVar4 & 0x7fff) == 0) {
      sVar2 = param_1->pos_z;
      param_1->event_id = param_1->event_id | 0x100;
      sVar1 = iVar5->pos_z;
      sVar3 = param_1->pos_y;
    }
    else {
      sVar1 = iVar5->pos_z;
      sVar2 = *(s16 *)(param_1 + 0x76);
      sVar3 = param_1->event_param;
    }
    uVar4 = Math_Atan2((int)sVar1 - (int)sVar2,(int)sVar3 - (int)iVar5->pos_y);
    *(u16 *)(param_1 + 100) = uVar4 & 0xfff;
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  else {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    if ((*(s16 *)(param_1 + 100) - iVar5->rot_y & 0xfffU) < uVar6) {
      iVar5->rot_y = *(s16 *)(param_1 + 100);
      if (g_CameraMode2 != '\0') {
        return 1;
      }
      if (g_ActionTrigger != '\0') {
        return 1;
      }
    }
    else {
      if (0x7ff < (*(s16 *)(param_1 + 100) - iVar5->rot_y & 0xfffU)) {
        uVar6 = -uVar6;
      }
      iVar5->rot_y = iVar5->rot_y + uVar6;
    }
  }
  return 0;
}
