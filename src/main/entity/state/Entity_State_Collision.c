/**
 * @brief Entity collision state: entity->sub_state=1, checks collision
 * @note Original: func_80044144 at 0x80044144
 */
// Entity_State_Collision



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80044144(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  u16 uVar3;
  uint uVar4;
  
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    uVar3 = *(u16 *)(param_1 + 0x66);
    if (((int)*(s16 *)(param_1 + 0x66) & 0x8000U) == 0) {
      if ((uVar3 & 0xff) != (u16)_DAT_800e7eb8->state) goto LAB_8004427c;
      FUN_80074810(*(u8 *)(param_1 + 0x68),0);
      uVar3 = *(u16 *)(param_1 + 0x66) | 0x8000;
    }
    else {
      if ((uVar3 & 0xff) == (u16)_DAT_800e7eb8->state) goto LAB_8004427c;
      uVar3 = uVar3 & 0x7fff;
    }
    *(u16 *)(param_1 + 0x66) = uVar3;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return 0;
      }
      if (g_CameraMode2 == '\0') {
        if (param_1->event_id == 2) {
          sVar2 = *(s16 *)(param_1 + 0x76);
          uVar4 = (int)param_1->event_param | 0x8000;
        }
        else {
          uVar4 = (uint)param_1->event_param;
          sVar2 = *(s16 *)(param_1 + 0x76);
        }
        FUN_800440e4(&g_CollisionEntity,uVar4,(int)sVar2);
        if (param_1->event_id == 0) {
          if ((**(u16 **)(param_1 + 0x6c) & 0x2000) == 0) {
            param_1->sub_state = 2;
            return 0;
          }
          param_1->sub_state = 1;
          return 0;
        }
        return 1;
      }
      return 1;
    }
    if (bVar1 != 2) {
      return 0;
    }
  }
LAB_8004427c:
  if (g_ActionTrigger == '\0') {
    return 0;
  }
  return 1;
}
