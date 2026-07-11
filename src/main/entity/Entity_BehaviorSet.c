/**
 * @brief Entity behavior setter: sets entity->behavior_flags/[0x14B]/[0x14C] from config
 * @note Original: func_80024448 at 0x80024448
 */
// Entity_BehaviorSet



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_BehaviorSet(int param_1)

{
  s16 sVar1;
  int iVar2;
  s32 uVar3;
  
  uVar3 = 0x25;
  if (-1 < param_1->entity_flags) {
    uVar3 = 0x4a;
  }
  *(u8 *)(param_1 + 0x17d) = 0;
  iVar2 = Collision_CheckFull2(param_1,(int)*(s16 *)(param_1 + 0x66),(int)-param_1->target_angle,
                       uVar3);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    *(u8 *)(param_1 + 0x17d) = (u8)((u16)_DAT_1f8001a6 >> 0xb) & 3;
    Entity_CalcCollisionAngle(param_1);
    sVar1 = _g_CollisionNormalX;
    param_1->draw_angle = _g_CollisionNormalX;
    if (param_1->direction == '\0') {
      param_1->rot_y = sVar1;
    }
    else {
      param_1->rot_y = sVar1 - 0x800U & 0xfff;
    }
    if ((iVar2 == 2) && ((*(u8 *)(param_1 + 0x17d) & 1) != 0)) {
      param_1->action_flag = 7;
      Entity_CalcAimPos(param_1);
    }
    else {
      param_1->action_flag = 4;
    }
    uVar3 = 1;
    param_1->anim_param = (char)iVar2;
    _g_GTE_Work84 = 0;
  }
  return uVar3;
}
