/**
 * @brief Entity fly state: entity->action_state state machine, aerial movement
 * @note Original: func_8006228C at 0x8006228C
 */
// Entity_State_Fly



void FUN_8006228c(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        DAT_800bf80e = 0;
        param_1->state_flag146 = 0;
        FUN_80053d90(param_1);
        FUN_80054198(param_1);
        FUN_80054d14(param_1,0xdf,4);
        FUN_80074590(0x3a,0,0);
        param_1->timer1 = 0x1e;
        param_1->action_state = param_1->action_state + '\x01';
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_80076d68(param_1);
      FUN_800551c4(param_1);
      sVar2 = param_1->timer1;
      param_1->timer1 = sVar2 + -1;
      if (sVar2 != 1) {
        return;
      }
      DAT_800bf80e = 1;
      param_1->state = 4;
      param_1->behavior_state = 0x20;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->state_flag146 = 0;
    FUN_80053d90(param_1);
    FUN_80054198(param_1);
    FUN_80054d14(param_1,0xe0,4);
    FUN_80074590(0x3a,0,0);
    param_1->input_state = 0x1e;
    param_1->sub_action = 0;
    param_1->timer1 = 7;
    param_1->timer2 = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  FUN_80055fbc(param_1,param_1->direction);
  FUN_80076d68(param_1);
  FUN_80056b48(param_1,0);
  FUN_80055d5c(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  FUN_8005444c(param_1);
  if ((param_1->collision_state != '\0') &&
     (sVar2 = param_1->timer1, param_1->timer1 = sVar2 + -1, sVar2 == 1)) {
    FUN_8005a714(param_1);
  }
  FUN_80056c00(param_1,1);
  FUN_800551c4(param_1);
  if (param_1->input_state == '\0') {
    if (param_1->collision_state == '\0') {
      FUN_80056d44(param_1,0);
    }
    else {
      param_1->behavior_state = 0;
      param_1->action_state = 0;
    }
  }
  else {
    param_1->input_state = param_1->input_state + -1;
  }
  return;
}
