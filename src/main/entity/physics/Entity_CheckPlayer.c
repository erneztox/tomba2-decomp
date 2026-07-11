/**
 * @brief Entity player checker: tests entity[0x72] bit 0x8000
 * @note Original: func_80044308 at 0x80044308
 */
// Entity_CheckPlayer



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_CheckPlayer(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  u16 uVar3;
  int iVar4;
  
  iVar4 = _g_PlayerEntity;
  if (((int)param_1->event_id & 0x8000U) == 0) {
    iVar4 = param_1;
  }
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    sVar2 = iVar4->rot_y;
    if (0xff < ((int)*(s16 *)(param_1 + 100) - (int)iVar4->rot_y & 0xfffU)) {
      if ((*(s16 *)(param_1 + 100) - sVar2 & 0xfffU) < 0x800) {
        iVar4->rot_y = sVar2 + 0x100;
        return 0;
      }
      iVar4->rot_y = sVar2 + -0x100;
      return 0;
    }
    iVar4->rot_y = *(s16 *)(param_1 + 100);
    if ((g_CameraMode2 == '\0') && (g_ActionTrigger == '\0')) {
      return 0;
    }
    uVar3 = param_1->event_id;
    if ((uVar3 & 0x7fff) == 2) {
      return 1;
    }
    Entity_ResetAnimAndState(param_1);
    if ((uVar3 & 0x7fff) != 0) {
      return 1;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return 0;
      }
      if (iVar4->sub_state2 != '\x01') {
        return 0;
      }
      return 1;
    }
    if (bVar1 != 0) {
      return 0;
    }
    if (g_CameraMode2 == '\0') {
      _g_AngleInput =
           Math_Atan2((int)_g_PlayerPosZ - (int)iVar4->pos_z,
                        (int)iVar4->pos_y - (int)_g_PlayerPosX);
      _g_AngleInput = _g_AngleInput & 0xfff;
      g_CollisionType = 0x1e;
      DAT_800e7e86 = 0;
    }
    uVar3 = Math_Atan2((int)iVar4->pos_z - (int)_g_PlayerPosZ,
                         (int)_g_PlayerPosX - (int)iVar4->pos_y);
    uVar3 = uVar3 & 0xfff;
    *(u16 *)(param_1 + 100) = uVar3;
    if ((uVar3 - iVar4->rot_y & 0xfff) < 0x100) {
      iVar4->rot_y = uVar3;
    }
  }
  param_1->sub_state = param_1->sub_state + '\x01';
  return 0;
}
