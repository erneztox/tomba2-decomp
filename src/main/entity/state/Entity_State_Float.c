/**
 * @brief Entity float state: entity->action_state state machine, buoyancy
 * @note Original: func_800645E0 at 0x800645E0
 */
// Entity_State_Float



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800645e0(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_80076d68(param_1);
        FUN_80055e28(param_1,1);
        FUN_80055fbc(param_1,param_1->behavior_flags);
        FUN_80056b48(param_1,1);
        FUN_80055d5c(param_1);
        FUN_800574e0(param_1,0);
        sVar2 = param_1->timer1;
        param_1->timer1 = sVar2 + -1;
        if (sVar2 == 1) {
          param_1->behavior_state = 2;
          param_1->action_state = 1;
        }
        else {
          iVar3 = FUN_80055634(param_1,0);
          if (iVar3 == 0) {
            if (param_1->collision_state != '\0') {
              param_1->sub_action = 0;
              if ((*(u8 *)(param_1 + 0x149) & 2) == 0) {
                param_1->behavior_state = 1;
                param_1->action_state = 0;
                FUN_80054e80(param_1,1);
              }
              else {
                param_1->behavior_state = 2;
                param_1->action_state = 2;
                FUN_80054d14(param_1,0x17,1);
              }
            }
          }
          else {
            param_1->state_flag144 = 0;
            param_1->action_state = 0;
            if (param_1->collision_state == '\0') {
              param_1->behavior_state = 6;
            }
            else {
              param_1->behavior_state = 5;
              param_1->sub_action = 0;
            }
          }
        }
        FUN_800551c4(param_1);
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      func_0x8010aa20(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->sub_action = 2;
    param_1->speed = 0;
    param_1->flag_5E = 0;
    param_1->rot_z = 0;
    param_1->velocity_y = 0;
    param_1->action_state = param_1->action_state + '\x01';
    param_1->behavior_flags = param_1->direction + '\x02';
    *(s8*)(param_1 + 0x149) = param_1->direction + '\x02';
  }
  iVar3 = FUN_800633b0(param_1,0);
  if ((iVar3 == 0) && (1 < param_1->sub_action)) {
    if ((_g_PadState & _g_InputMask) == 0) {
      if (((*(s8*)(param_1->state_ptr + 0xc) != '\x05') &&
          (iVar3 = FUN_80055634(param_1,0), iVar3 != 0)) && (param_1->behavior_state == '\x04')) {
        FUN_800645cc(param_1);
      }
    }
    else {
      FUN_80064524(param_1);
    }
  }
  return;
}
