/**
 * @brief Entity dash state variant 3: entity->action_state state machine
 * @note Original: func_8005EF48 at 0x8005EF48
 */
// Entity_State_Dash3



void FUN_8005ef48(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        param_1->flag_16A = 0;
        return;
      }
      FUN_80053d90(param_1);
      param_1->state_flag145 = 0;
      param_1->state_flag146 = 0;
      FUN_80054e24(param_1,0,0);
      param_1->velocity_y = 0;
      param_1->action_state = param_1->action_state + '\x01';
      if ((param_1->flag_16A & 1) == 0) {
        param_1->anim_counter = 0x800;
      }
      else {
        param_1->anim_counter = 0xf800;
      }
    }
    else {
      if (bVar1 != 2) {
        param_1->flag_16A = 0;
        return;
      }
      FUN_80076d68(param_1);
      if ((param_1->flag_16A & 2) != 0) {
        uVar3 = 0xf800;
        if ((param_1->flag_16A & 1) == 0) {
          uVar3 = 0x800;
        }
        param_1->anim_counter = uVar3;
      }
      FUN_80055e28(param_1,1);
      FUN_80056b48(param_1,1);
      FUN_800574e0(param_1,0);
      FUN_80055d5c(param_1);
      FUN_80057c08(param_1,2);
      if ((param_1->state_ptr == 0) &&
         (sVar2 = param_1->timer1, param_1->timer1 = sVar2 + -1, sVar2 == 1))
      {
        FUN_80054d14(param_1,0x14,0);
        param_1->behavior_state = 2;
        param_1->action_state = 1;
      }
    }
    goto LAB_8005f19c;
  }
  iVar4 = (int)param_1->anim_counter;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar4 < 0x800) {
    uVar3 = 0xf800;
    if ((param_1->flag_16A & 1) == 0) {
      uVar3 = 0x800;
    }
    param_1->anim_counter = uVar3;
  }
  FUN_80056b48(param_1,1);
  FUN_80055d5c(param_1);
  FUN_80076d68(param_1);
  if (((param_1->collision_state & 0x80) == 0) || (iVar4 = FUN_80055824(), iVar4 == 0)) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    FUN_8005444c(param_1);
    if (param_1->collision_state == '\0') {
      param_1->anim_counter = 0;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x40;
      FUN_80056d44(param_1,0);
      if (param_1->behavior_state == '\x02') {
        param_1->timer1 = 10;
        param_1->behavior_state = 0xf;
        param_1->action_state = 2;
      }
      goto LAB_8005f19c;
    }
    if (param_1->flag_16A != '\0') goto LAB_8005f19c;
    param_1->anim_counter = 0;
    param_1->behavior_state = 0;
  }
  else {
    param_1->behavior_state = 2;
  }
  param_1->action_state = 0;
  param_1->sub_action = 0;
LAB_8005f19c:
  param_1->flag_16A = 0;
  return;
}
