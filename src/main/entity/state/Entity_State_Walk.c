/**
 * @brief Entity walk state: entity->action_state state 0->1->2, moves entity
 * @note Original: func_8006670C at 0x8006670C
 */
// Entity_State_Walk



#include "tomba.h"
void FUN_8006670c(int param_1)

{
  u8 bVar1;
  s16 uVar2;
  int iVar3;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      FUN_80066538(param_1);
      iVar3 = FUN_800665f4(param_1);
      if (iVar3 != 0) {
        return;
      }
      if (param_1->collision_state == '\0') {
        if ((0x27ff < param_1->velocity_y) || (0xc < param_1->timer1)) {
          param_1->angle_offset = param_1->velocity_y;
          param_1->state = 1;
          FUN_80056d44(param_1,0);
          uVar2 = param_1->angle_offset;
          param_1->angle_offset = 0;
          param_1->velocity_y = uVar2;
        }
      }
      else {
        FUN_8005314c(param_1);
        param_1->state_flag144 = 0;
        param_1->rot_z = 0;
        param_1->angle_offset = 0;
        param_1->state_flag145 = 0;
        *(u8 *)(param_1 + 0x148) = 0;
        param_1->state = 1;
        param_1->action_state = 0;
        param_1->sub_action = 0;
        iVar3 = FUN_8005344c(param_1);
        if (iVar3 == 0) {
          param_1->anim_counter = 0;
          FUN_80054d14(param_1,2,0);
          param_1->behavior_state = 0;
        }
      }
      FUN_800551c4(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    FUN_80074590(0x23,0,0);
    FUN_800312d4(6,param_1 + 0x2c,0xffffffb0);
    *(u8 *)(param_1 + 0x61) = 0;
    param_1->state_flag146 = 0;
    *(u8 *)(param_1 + 0x181) = 0;
    FUN_800663a8(param_1,0);
  }
  FUN_80066478(param_1);
  return;
}
