/**
 * @brief Entity idle state: entity->action_state=0, checks ground, transitions
 * @note Original: func_80060064 at 0x80060064
 */
// Entity_State_Idle



void FUN_80060064(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1->action_state == '\0') {
    if (param_1->sub_action == '\0') {
      param_1->state_flag145 = 0;
      param_1->state_flag146 = 0;
      FUN_80053d90(param_1);
      param_1->rot_z = 0;
      FUN_80055e28(param_1,1);
      FUN_80055d5c(param_1);
      param_1->sub_action = param_1->sub_action + '\x01';
      FUN_80054d14(param_1,0x16,3);
    }
    else if (param_1->sub_action == '\x01') {
      FUN_80055e28(param_1,1);
      FUN_80055d5c(param_1);
      iVar2 = FUN_80076d68(param_1);
      if (iVar2 == 1) {
        param_1->sub_action = 0;
        param_1->state_flag145 = 1;
        param_1->angle_offset = 0;
        param_1->action_state = param_1->action_state + '\x01';
        FUN_80074590(0xf,0,0);
        FUN_80074590(0x25,0,0);
        FUN_80054d14(param_1,0x12,4);
        FUN_800538e0(param_1,param_1 + 0x2c,0);
        FUN_80055f48(param_1,0);
        iVar2 = FUN_80055844();
        if (iVar2 == 0) {
          param_1->velocity_y = 0xd800;
        }
        else {
          if (param_1->state_165 != '\0') {
            param_1->velocity_y = param_1->velocity_y + -0x580;
          }
          param_1->velocity_y =
               param_1->velocity_y + (param_1->velocity_y >> 2);
        }
      }
    }
  }
  else if (param_1->action_state == '\x01') {
    FUN_80055e28(param_1,1);
    FUN_80055fbc(param_1,param_1->behavior_flags);
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_80076d68(param_1);
    bVar1 = param_1->state_flag145 != '\x02';
    if (bVar1) {
      FUN_800574e0(param_1,0x11);
    }
    else {
      FUN_800574e0(param_1,0);
    }
    FUN_80057c08(param_1,bVar1);
  }
  FUN_800551c4(param_1);
  return;
}
