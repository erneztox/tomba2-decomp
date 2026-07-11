/**
 * @brief Entity death state: entity->action_state switch, death animation
 * @note Original: func_80066878 at 0x80066878
 */
// Entity_State_Death



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80066878(int param_1)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  
  switch(param_1->action_state) {
  case 0:
    FUN_80074590(0x24,0,0);
    DAT_800bf80d = 1;
    param_1->state_flag145 = 0;
    param_1->state_flag146 = 0;
    FUN_80053d90(param_1);
    *(undefined1 *)(param_1 + 0x61) = 0;
    FUN_800663a8(param_1,0);
  case 1:
    FUN_80066478(param_1);
    param_1->state_flag144 = 0;
    break;
  case 2:
    FUN_80066538(param_1);
    param_1->state_flag144 = 0;
    if (param_1->collision_state == '\0') {
      uVar2 = param_1->type_flags & 0xf00;
      if (((int)param_1->type_flags & 0x8000U) == 0) {
        if (0x28 < param_1->timer1) {
          param_1->behavior_state = 7;
          param_1->action_state = 0;
          param_1->sub_action = 0;
        }
      }
      else if ((uVar2 == 0x100) || (uVar2 == 0x200)) {
        param_1->behavior_state = 4;
        param_1->action_state = 1;
      }
      else if (uVar2 == 0x700) {
        param_1->timer1 = 3;
        param_1->behavior_state = 5;
        param_1->action_state = 1;
        param_1->sub_action = 0;
      }
    }
    else {
      param_1->state_flag145 = 0;
      uVar4 = FUN_8009a450();
      if ((uVar4 & 3) == 0) {
        param_1->timer1 = 0x14;
        param_1->rot_z = 0;
        param_1->action_state = 7;
        FUN_80054d14(param_1,0xd1,4);
        DAT_800e806c = 8;
        _DAT_800e8042 = _DAT_1f800160;
        _DAT_800e8046 = _DAT_1f800162;
        _DAT_800e804a = _DAT_1f800164;
      }
      else {
        param_1->timer1 = 0x14;
        param_1->timer2 = 0;
        param_1->action_state = param_1->action_state + '\x01';
        FUN_80054d14(param_1,0x5a,0);
        if (param_1->entity_flags < 0) {
          param_1->angle_delta = 0x20;
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x26;
        }
        else {
          param_1->angle_delta = 0x40;
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x4c;
        }
      }
    }
    break;
  case 3:
    if (param_1->timer1 == 0) {
      uVar2 = param_1->rot_z - 0x200;
      param_1->rot_z = uVar2;
      if ((int)((uint)uVar2 << 0x10) < 0) {
        param_1->timer2 = 1;
      }
    }
    else {
      param_1->rot_z = param_1->rot_z - 0x200U & 0xfff;
    }
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    FUN_8005444c(param_1);
    if (param_1->timer1 == 0) {
      if (param_1->timer2 == 1) {
        param_1->rot_z = 0;
        FUN_80054d14(param_1,0x58,4);
        param_1->action_state = param_1->action_state + '\x01';
        FUN_8005245c();
        uVar3 = 0x8c;
        if (param_1->entity_flags < 0) {
          uVar3 = 0x46;
        }
        param_1->angle_delta = uVar3;
        if (param_1->collision_state == '\0') {
          param_1->timer1 = 0x32;
        }
        else {
          param_1->timer1 = 0x78;
          FUN_800331d8(param_1,param_1->sprite_ptr2,0xffffff9c,0);
          *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 0x40;
          FUN_80074590(0x10,0,0);
        }
        DAT_800e806c = 8;
        _DAT_800e8042 = _DAT_1f800160;
        _DAT_800e8046 = _DAT_1f800162;
        _DAT_800e804a = _DAT_1f800164;
      }
    }
    else {
      param_1->timer1 = param_1->timer1 + -1;
      uVar2 = param_1->type_flags & 0xf00;
      if (((int)param_1->type_flags & 0x8000U) != 0) {
        if ((uVar2 == 0x100) || (uVar2 == 0x200)) {
          param_1->behavior_state = 4;
          param_1->action_state = 1;
        }
        else if (uVar2 == 0x700) {
          param_1->timer1 = 3;
          param_1->behavior_state = 5;
          param_1->action_state = 1;
          param_1->sub_action = 0;
        }
      }
    }
    goto LAB_80066cd8;
  case 4:
    sVar1 = param_1->timer1;
    param_1->timer1 = sVar1 + -1;
    if (sVar1 == 1) {
      FUN_800662d8(param_1,0);
      DAT_800bf80d = 2;
      DAT_800bf80f = '\x02';
      param_1->action_state = param_1->action_state + '\x01';
      FUN_8005245c();
    }
    FUN_80076d68(param_1);
    FUN_8005444c(param_1);
    if (((DAT_800bf816 == '\0') && (param_1->collision_state != '\0')) && (DAT_800bf870 != '\x04'))
    {
      _DAT_1f8000d6 = _DAT_1f8000d6 + -8;
    }
LAB_80066cd8:
    FUN_80056c00(param_1,1);
    break;
  case 5:
    if (DAT_800bf80f == '\0') {
      DAT_800bf80d = 3;
      param_1->action_state = param_1->action_state + '\x01';
    }
  case 6:
    FUN_80076d68(param_1);
    break;
  case 7:
    FUN_80076d68(param_1);
    sVar1 = param_1->timer1;
    param_1->timer1 = sVar1 + -1;
    param_1->rot_y = param_1->rot_y + 0x80;
    if (sVar1 == 1) {
      FUN_80054d14(param_1,0xd2,6);
      param_1->timer1 = 0x14;
      param_1->action_state = param_1->action_state + '\x01';
    }
    break;
  case 8:
    FUN_80076d68(param_1);
    sVar1 = param_1->timer1;
    param_1->timer1 = sVar1 + -1;
    if (sVar1 == 1) {
      param_1->action_state = 4;
      param_1->timer1 = 0x5a;
      FUN_800331d8(param_1,param_1->sprite_ptr2,0xffffff9c,0);
      *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 0x40;
      FUN_80074590(0x10,0,0);
    }
  }
  return;
}
