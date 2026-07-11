/**
 * @brief Entity action state variant 2: entity->action_state dispatch
 * @note Original: func_8005A970 at 0x8005A970
 */
// Entity_State_Action2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005a970(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1->action_state == 0) {
    param_1->anim_counter = 0;
    if (param_1->state_165 == '\0') {
      uVar2 = 2;
    }
    else {
      uVar2 = 0x11;
    }
    FUN_80054d14(param_1,uVar2,4);
    param_1->draw_pos_y = 0;
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (3 < param_1->action_state) goto LAB_8005ac70;
  FUN_80055e28(param_1,1);
  FUN_80055fbc(param_1,param_1->behavior_flags);
  FUN_80056b48(param_1,0);
  FUN_80055d5c(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  FUN_8005444c(param_1);
  iVar1 = FUN_800532a0(param_1);
  if (((iVar1 == 0) && (iVar3 = FUN_80055390(param_1), iVar3 == 0)) &&
     (iVar1 = FUN_800558b4(param_1), iVar1 == 0)) {
    if ((param_1->behavior_flags & 2) == 0) {
      param_1->behavior_state = 1;
      param_1->action_state = 0;
      if (param_1->anim_id == '\x02') {
        uVar2 = 4;
      }
      else {
        uVar2 = 1;
      }
      FUN_80054e80(param_1,uVar2);
      FUN_800538e0(param_1,param_1 + 0x2c,0);
    }
    else if (DAT_1f800137 == '\0') {
      uVar2 = FUN_80076d68(param_1);
      if (param_1->state_165 == '\0') {
        if (param_1->anim_id == '\x11') {
          FUN_80054d14(param_1,2,2);
        }
        FUN_8005a39c(param_1,uVar2);
      }
      else {
        FUN_80054d14(param_1,0x11,2);
      }
    }
    else {
      FUN_80054d14(param_1,2,4);
      FUN_80076d68(param_1);
    }
  }
  if ((param_1->collision_state & 0x80) != 0) {
    if (((param_1->physics_flag == '\0') && (DAT_1f800137 == '\0')) &&
       (param_1->action_state == '\x01')) {
      iVar1 = FUN_80049280(param_1,0x39,
                           (int)(((param_1->velocity_y * 0x39 >> 8) +
                                 (uint)param_1->angle_delta) * 0x10000) >> 0x10);
      if (((iVar1 == 0) && ((int)*(short *)(param_1 + 0x32) - (int)_DAT_1f8001a4 < -500)) &&
         ((_DAT_1f80008c != _DAT_1f800212 && (param_1->behavior_state == '\0')))) {
        param_1->timer1 = 0;
        FUN_80074590(0x25,0,0);
        FUN_80054d14(param_1,0x70,0);
        param_1->action_state = 2;
        param_1->sub_action = 7;
      }
      _DAT_1f800212 = _DAT_1f80008c;
    }
    iVar1 = FUN_80055c30(param_1);
    if ((iVar1 == 0) && (iVar3 == 0)) {
      FUN_800559f4(param_1);
    }
  }
LAB_8005ac70:
  FUN_800551c4(param_1);
  FUN_80056c00(param_1,0);
  if ((param_1->behavior_state < 2) && (param_1->collision_state != '\0')) {
    DAT_800bf81e = 1;
  }
  return;
}
