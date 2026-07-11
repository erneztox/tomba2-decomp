/**
 * @brief Entity ground state: calls FUN_80057a68, checks collision
 * @note Original: func_80057C08 at 0x80057C08
 */
// Entity_State_Ground



#include "tomba.h"
void FUN_80057c08(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_80057a68();
  if (iVar2 != 0) {
    return;
  }
  if (param_2 == 2) {
    return;
  }
  if ((param_1->collision_state == '\0') && ((param_1->entity_flags & 0x180) != 0)) {
    if (param_2 != 0) goto LAB_80057d24;
    if (param_1->flag_16A != '\0') goto LAB_80057cbc;
    iVar2 = FUN_80055824();
    if (iVar2 != 0) {
      param_1->rot_z = 0;
      param_1->behavior_state = 0x1c;
      if (param_1->state_flag145 == '\x02') {
        param_1->action_state = 1;
        FUN_80054d14(param_1,0xe5,4);
        return;
      }
      param_1->action_state = 0;
      return;
    }
  }
  else {
LAB_80057cbc:
    if (param_2 != 0) goto LAB_80057d24;
  }
  if ((param_1->flag_16A == '\0') && (iVar2 = FUN_80055634(param_1,0), iVar2 != 0)) {
    param_1->action_state = 0;
    bVar1 = param_1->behavior_flags & 0xe;
    param_1->behavior_flags = bVar1;
    param_1->behavior_flags = bVar1 | param_1->direction;
    if (param_1->collision_state != '\0') {
      param_1->behavior_state = 5;
      param_1->sub_action = 0;
      return;
    }
    param_1->behavior_state = 6;
    return;
  }
LAB_80057d24:
  if ((param_1->collision_state != '\0') && (iVar2 = FUN_800532a0(param_1), iVar2 == 0)) {
    param_1->sub_action = 0;
    bVar1 = param_1->behavior_flags & 0xe;
    param_1->behavior_flags = bVar1;
    param_1->behavior_flags = bVar1 | param_1->direction;
    if ((*(byte *)(param_1 + 0x149) & 2) == 0) {
      param_1->behavior_state = 1;
      param_1->action_state = 0;
      FUN_80054e80();
    }
    else {
      param_1->behavior_state = 2;
      param_1->action_state = 2;
      FUN_80054d14(param_1,0x17,1);
    }
  }
  return;
}
