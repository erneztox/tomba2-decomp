/**
 * @brief Rotates entity toward target angle: entity->action_state state, uses Math_ApproachAngle_2 approach, sets flag
 * @note Original: func_800654D4 at 0x800654D4
 */
// Entity_RotateToTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_RotateToTarget(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  uint uVar3;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if ((1 < bVar1) || (bVar1 != 0)) goto LAB_80065574;
    param_1->rot_z = 0;
    g_ActionTrigger = 0;
    param_1->action_state = param_1->action_state + '\x01';
    Entity_LoadAnimIfChanged(param_1,2,0);
  }
  uVar3 = (uint)_g_AngleInput;
  sVar2 = Math_ApproachAngle_2(uVar3 & 0xfff,(int)param_1->rot_y,0x100);
  param_1->rot_y = sVar2;
  if ((int)sVar2 == (uVar3 & 0xfff)) {
    param_1->action_state = param_1->action_state + '\x01';
    g_ActionTrigger = 1;
  }
LAB_80065574:
  Entity_AnimFrame(param_1);
  Entity_SetActionFlag(param_1,1);
  return;
}
