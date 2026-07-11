/**
 * @brief Entity draw main variant 7: rendering pipeline (254L)
 * @note Original: func_800527C8 at 0x800527C8
 */
// Entity_DrawMain7



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800527c8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined1 auStack_38->kind;
  undefined2 local_36;
  undefined2 local_32;
  undefined2 local_2e;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    iVar5 = FUN_800519e0(param_1,0x12,_DAT_800ecf6c,&DAT_800a43e8);
    uVar2 = _DAT_800ecf70;
    if (iVar5 != 0) {
      return;
    }
    *(undefined ***)(param_1 + 0x7c) = &PTR_DAT_8001b354;
    param_1->sprite_data = uVar2;
    FUN_80041718(param_1,0,0);
    param_1->state = param_1->state + '\x01';
    if (param_1->sub_type == '\0') {
      param_1->pos_y = _DAT_800e7eae;
      *(short *)(param_1 + 0x32) = _DAT_800e7eb2 + _DAT_800e7ee2 + -0xa0;
      param_1->pos_z = _DAT_800e7eb6;
      if (DAT_800e7e82 == '\0') {
        uVar3 = _DAT_800e7fc0 + 0x400U & 0xfff;
      }
      else {
        uVar3 = FUN_800782b0(param_1 + 0x2c,(int)_DAT_1f8000d2,(int)_DAT_1f8000da);
      }
      param_1->rot_y = uVar3;
      _DAT_800e7eb2 = *(short *)(param_1 + 0x32) + -0x3c;
      _DAT_800e7ed6 = param_1->rot_y;
      param_1->timer1 = 0x1e;
      FUN_80054d14(&DAT_800e7e80,0xe4,0);
      DAT_800e7ffa = 1;
      return;
    }
    param_1->angle_delta = _DAT_800e7eb2 + 1000;
    *(undefined2 *)(param_1 + 100) = _DAT_800e7eae;
    *(short *)(param_1 + 0x66) = _DAT_800e7ee2 + _DAT_800e7eb2 + 0x348;
    param_1->target_angle = _DAT_800e7eb6;
    uVar3 = _DAT_800e7ed6;
    param_1->timer1 = 0x14;
    param_1->draw_x = uVar3 & 0xfff;
    FUN_80041718(param_1,3,0);
    DAT_800e7e81 = 0;
    FUN_80054d14(&DAT_800e7e80,0xe4,0);
    param_1->flags = 0;
    return;
  }
  if (param_1->sub_type != '\0') {
    switch(param_1->behavior_state) {
    case 0:
      sVar4 = param_1->timer1;
      param_1->timer1 = sVar4 + -1;
      if (sVar4 == 1) {
        _DAT_1f8000c0 = 0xfc18;
        _DAT_1f8000c2 = 0;
        _DAT_1f8000c4 = 600;
        FUN_80084470(0x1f800118,&DAT_1f8000c0,&DAT_1f800014);
        param_1->pos_y = _DAT_1f8000d2 + _DAT_1f800014;
        param_1->pos_z = _DAT_1f8000da + _DAT_1f80001c;
        sVar4 = _DAT_800e7eb2;
        param_1->flags = 1;
        *(short *)(param_1 + 0x32) = sVar4;
        DAT_800e7e81 = 1;
        param_1->velocity_y = 0;
        param_1->anim_counter = 0x1800;
        sVar4 = FUN_800782b0(param_1 + 0x2c,(int)*(short *)(param_1 + 100),
                             (int)param_1->target_angle);
        param_1->rot_y = sVar4 - 0x200U & 0xfff;
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
      break;
    case 1:
      FUN_80052720(param_1);
      FUN_80052694(param_1);
      param_1->flags = 1;
      if (*(short *)(param_1 + 0x32) == *(short *)(param_1 + 0x66)) {
        param_1->behavior_state = param_1->behavior_state + '\x01';
        FUN_80041768(param_1,1,4);
      }
      break;
    case 2:
      local_36 = *(undefined2 *)(param_1 + 100);
      local_32 = *(undefined2 *)(param_1 + 0x66);
      local_2e = param_1->target_angle;
      iVar5 = FUN_8006cec4(param_1 + 0x2c,auStack_38,0xe0);
      if (iVar5 != 0) {
        param_1->behavior_state = param_1->behavior_state + '\x01';
        FUN_80041768(param_1,0,4);
      }
      goto LAB_80052f48;
    case 3:
      sVar4 = FUN_800776f8((int)param_1->draw_x,(int)param_1->rot_y,0x80);
      param_1->rot_y = sVar4;
      if (sVar4 == param_1->draw_x) {
        param_1->behavior_state = param_1->behavior_state + '\x01';
        FUN_80054d14(&DAT_800e7e80,2,0x10);
      }
LAB_80052f48:
      param_1->flags = 1;
      break;
    case 4:
      uVar3 = param_1->scale_x - 0x100;
      param_1->scale_x = uVar3;
      if (uVar3 < 0x101) {
        param_1->scale_x = 0x100;
        DAT_1f800137 = 0;
        DAT_1f800236 = 0;
        DAT_800e806c = 0;
        param_1->state = 3;
      }
      _DAT_800e7eb2 = _DAT_800e7eb2 + 10;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
      if (param_1->angle_delta < _DAT_800e7eb2) {
        _DAT_800e7eb2 = param_1->angle_delta;
      }
      param_1->flags = 1;
      param_1->scale_z = param_1->scale_x;
      param_1->scale_y = param_1->scale_x;
    }
    if (param_1->flags != '\0') {
      _DAT_800e7eae = param_1->pos_y;
      if (param_1->behavior_state < 4) {
        _DAT_800e7eb2 = *(short *)(param_1 + 0x32) + -100;
      }
      _DAT_800e7eb6 = param_1->pos_z;
      _DAT_800e7ed6 = param_1->rot_y;
    }
    goto LAB_80053040;
  }
  switch(param_1->behavior_state) {
  case 0:
    _DAT_800e7eb2 = *(short *)(param_1 + 0x32) + -0x3c;
    if (param_1->timer1 == 0) {
      iVar5 = FUN_80042728();
      if (iVar5 != 0) {
        param_1->anim_counter = 0x100;
        param_1->velocity_y = 0;
        FUN_80041768(param_1,2,4);
        param_1->timer1 = 0x14;
        param_1->timer2 = 0xc;
        param_1->behavior_state = param_1->behavior_state + '\x01';
        _DAT_1f8000c0 = 400;
        _DAT_1f8000c2 = 0;
        _DAT_1f8000c4 = 0;
        FUN_80084470(0x1f800118,&DAT_1f8000c0,&DAT_1f800014);
        *(short *)(param_1 + 100) = _DAT_1f8000d2 + _DAT_1f800014;
        *(short *)(param_1 + 0x66) = _DAT_1f8000d6 + _DAT_1f800018;
        param_1->target_angle = _DAT_1f8000da + _DAT_1f80001c;
        _DAT_1f8000c0 = 0xfc18;
        _DAT_1f8000c2 = 0;
        _DAT_1f8000c4 = 600;
        FUN_80084470(0x1f800118,&DAT_1f8000c0,&DAT_1f800014);
        param_1->draw_x = _DAT_1f8000d2 + _DAT_1f800014;
        param_1->angle_delta = _DAT_1f8000da + _DAT_1f80001c;
      }
    }
    else {
      param_1->timer1 = param_1->timer1 + -1;
    }
    goto switchD_800529e4_default;
  case 1:
    sVar4 = param_1->timer1;
    param_1->timer1 = sVar4 + -1;
    if (sVar4 == 1) {
      DAT_800bf80f = 4;
      DAT_800bf839 = 1;
      param_1->timer1 = 0x14;
      param_1->behavior_state = param_1->behavior_state + '\x01';
      *(undefined2 *)(param_1 + 100) = param_1->draw_x;
      param_1->target_angle = param_1->angle_delta;
    }
    break;
  case 2:
    if ((_DAT_1f80017c & 7) == 0) {
      FUN_80074590(0x38,(int)*(char *)(param_1 + 0x42),0);
      sVar4 = param_1->timer2 + 2;
      param_1->timer2 = sVar4;
      if (0x1a < sVar4) {
        param_1->timer2 = 0x1a;
      }
    }
    sVar4 = param_1->timer1;
    param_1->timer1 = sVar4 + -1;
    if (sVar4 == 1) {
      DAT_800bf80f = DAT_800bf80f | 0x80;
      param_1->timer1 = 0x14;
      param_1->behavior_state = param_1->behavior_state + '\x01';
      DAT_800e806c = 0xf;
    }
    break;
  case 3:
    if ((_DAT_1f80017c & 7) == 0) {
      FUN_80074590(0x38,(int)*(char *)(param_1 + 0x42),0);
      sVar4 = param_1->timer2 + 2;
      param_1->timer2 = sVar4;
      if (0x1a < sVar4) {
        param_1->timer2 = 0x1a;
      }
    }
    if (param_1->timer1 == 0) {
      if (DAT_1f80027a == '\x02') goto switchD_800529e4_default;
      DAT_1f800236 = 6;
      DAT_800bf80f = DAT_800bf80f & 0x7f;
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
    else {
      param_1->timer1 = param_1->timer1 + -1;
    }
    break;
  case 4:
    if ((_DAT_1f80017c & 7) == 0) {
      FUN_80074590(0x38,(int)*(char *)(param_1 + 0x42),0);
      sVar4 = param_1->timer2 + 2;
      param_1->timer2 = sVar4;
      if (0x1a < sVar4) {
        param_1->timer2 = 0x1a;
      }
    }
    break;
  default:
    goto switchD_800529e4_default;
  }
  FUN_80052720(param_1);
  FUN_8005262c(param_1);
switchD_800529e4_default:
  DAT_800e7ffa = 1;
  _DAT_800e7eae = param_1->pos_y;
  if (param_1->behavior_state != '\0') {
    _DAT_800e7eb2 = *(short *)(param_1 + 0x32) + -100;
  }
  _DAT_800e7eb6 = param_1->pos_z;
  _DAT_800e7ed6 = param_1->rot_y;
  param_1->flags = 1;
LAB_80053040:
  FUN_8004190c(param_1);
  FUN_800518fc(param_1);
  return;
}
