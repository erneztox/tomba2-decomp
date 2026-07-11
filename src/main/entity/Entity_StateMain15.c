/**
 * @brief Entity state main variant 15: mega state machine (458L)
 * @note Original: func_80060C60 at 0x80060C60
 */
// Entity_StateMain15



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80060c60(undefined1 *param_1)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  DAT_1f80027b = '\0';
  switchparam_1->action_state {
  case 0:
    DAT_1f80027b = '\x01';
    param_1->state_flag146 = 4;
    param_1->sub_action = 0;
    param_1[0x166] = 0;
    param_1->input_state = 5;
    param_1->action_state = param_1->action_state + '\x01';
    _DAT_1f800238 = 0;
    if (DAT_1f80027c == 1) {
      param_1[0x168] = 0xf;
      param_1->sprite_x = 0x240;
      param_1->anim_counter = 0xe;
    }
    else if ((DAT_1f80027c < 2) && (DAT_1f80027c == 0)) {
      param_1[0x168] = 0xf;
      param_1->sprite_x = 0x400;
      param_1->anim_counter = 0x18;
    }
    else {
      param_1[0x168] = 0;
      param_1->sprite_x = 0;
      param_1->anim_counter = 0;
    }
    cVar1 = param_1->action_flag;
    if (((cVar1 == '\x01') || (cVar1 == '\t')) || (cVar1 == '\v')) {
      param_1->direction = '\x01' - param_1->direction;
      FUN_80055284(param_1);
      FUN_80053d0c(param_1);
      param_1->rot_z = param_1->sprite_x;
      FUN_80063b94(param_1,2);
    }
    FUN_80053d90(param_1);
    if (param_1->state_flag145 != '\0') {
      param_1->rot_z = param_1->sprite_x;
      FUN_80063b94(param_1,2);
    }
    _DAT_1f800178 = param_1->rot_y;
    DAT_1f800237 = param_1->direction;
    FUN_800597ac(param_1);
    iVar11 = param_1->data_ptr;
    iVar10 = (int)(((uint)_DAT_1f800200 - (uint)iVar11->pos_x) * 0x10000) >> 0x10;
    iVar12 = (int)(((uint)_DAT_1f800204 - (uint)*(ushort *)(iVar11 + 0x34)) * 0x10000) >> 0x10;
    iVar8 = (int)(((uint)_DAT_1f800202 - (uint)*(ushort *)(iVar11 + 0x30)) * 0x10000) >> 0x10;
    param_1->draw_pos_x = iVar11->pos_x;
    param_1->draw_pos_y = *(undefined2 *)(iVar11 + 0x30);
    param_1->draw_pos_z = *(undefined2 *)(iVar11 + 0x34);
    uVar5 = FUN_80077fb0(iVar10 * iVar10 + iVar12 * iVar12 + iVar8 * iVar8);
    _DAT_1f80020c = (uint)uVar5;
    if (_DAT_1f80020c < 0x80) {
      if (_DAT_1f80020c < 0x30) {
        _DAT_1f80020c = 0x30;
      }
      param_1->action_state = 2;
    }
    else {
      if (param_1->state_flag145 == '\0') {
        sVar7 = uVar5 - 0xc0;
      }
      else {
        sVar7 = uVar5 - 0x60;
      }
      param_1->timer2 = sVar7;
      if (param_1->timer2 < 0x80) {
        param_1->timer2 = 0x80;
      }
      if (param_1->sprite_cmd == '\x02') {
        if (700 < param_1->timer2) {
          uVar6 = 700;
LAB_80060f34:
          param_1->timer2 = uVar6;
        }
      }
      else if (0x280 < param_1->timer2) {
        uVar6 = 0x280;
        goto LAB_80060f34;
      }
    }
    param_1[0x169] = 0;
    FUN_80060a80(param_1,1);
    param_1->action_flag = 0xc;
    if (param_1->state_flag145 != '\0') {
      param_1->rot_z = param_1->sprite_x;
    }
    param_1->state_flag145 = 0;
    if (DAT_1f80027c == 1) {
      if (param_1->input_flags != 0) {
        if (1 < DAT_1f800253) goto LAB_80061004;
        if (DAT_1f800237 == (param_1->input_flags & 1)) {
          param_1->action_state = 2;
        }
      }
    }
    else if ((DAT_1f80027c < 2) && (DAT_1f80027c == 0)) {
      if ((param_1->input_flags != 0) && (DAT_1f800237 == (param_1->input_flags & 1))) {
        param_1->action_state = 2;
      }
    }
    else if (1 < DAT_1f800253) {
LAB_80061004:
      param_1->action_state = 2;
    }
    break;
  case 1:
    DAT_1f80027b = '\x01';
    _DAT_1f80020c = _DAT_1f80020c - 0x20;
    if ((int)_DAT_1f80020c <= (int)param_1->timer2) {
      _DAT_1f80020c = (int)param_1->timer2;
    }
    FUN_800597ac(param_1);
    param_1->pos_y =
         param_1->pos_y -
         (*(short *)(param_1->data_ptr + 0x2c) - param_1->draw_pos_x);
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) -
         (*(short *)(param_1->data_ptr + 0x30) - param_1->draw_pos_y);
    param_1->pos_z =
         param_1->pos_z -
         (*(short *)(param_1->data_ptr + 0x34) - param_1->draw_pos_z);
    FUN_80060a80(param_1,1);
    if (DAT_1f80027c == 1) {
      if ((param_1->input_flags != 0) && ((1 < DAT_1f800253 || (DAT_1f800237 == (param_1->input_flags & 1))))) {
        param_1->timer2 = _DAT_1f80020c;
      }
    }
    else if ((DAT_1f80027c < 2) && (DAT_1f80027c == 0)) {
      if ((param_1->input_flags != 0) && (DAT_1f800237 == (param_1->input_flags & 1))) {
        param_1->timer2 = _DAT_1f80020c;
      }
    }
    else if (1 < DAT_1f800253) {
      param_1->timer2 = _DAT_1f80020c;
    }
    if (_DAT_1f80020c != (int)param_1->timer2) break;
    if (param_1->collision_state == '\0') {
      param_1->sub_action = 0;
      param_1->state_flag145 = 0;
      param_1->action_state = param_1->action_state + '\x01';
      param_1->rot_z = param_1->sprite_x;
      FUN_80063b94(param_1,2);
      break;
    }
    goto LAB_800613dc;
  case 2:
    uVar6 = 0x700;
    if (param_1->direction == '\0') {
      uVar6 = 0x100;
    }
    param_1->draw_pos_x = uVar6;
    param_1->draw_pos_y = 0;
    param_1->action_state = param_1->action_state + '\x01';
  case 3:
    param_1->flag_177 = param_1->flag_177 | 1;
    FUN_80076d68(param_1);
    FUN_80055e28(param_1,0);
    iVar10 = 0x700;
    if ((param_1->behavior_flags & 1) == 0) {
      iVar10 = 0x100;
    }
    sVar7 = FUN_800776f8(iVar10,(int)param_1->draw_pos_x,0x100);
    param_1->draw_pos_x = sVar7;
    if (sVar7 == iVar10) {
      param_1->direction = param_1->behavior_flags & 1;
      FUN_80055284(param_1);
      param_1->draw_pos_y = 0;
    }
    else if (param_1->direction == '\0') {
      param_1->draw_pos_y = sVar7;
    }
    else {
      param_1->draw_pos_y = sVar7 + -0x800;
    }
    if (param_1->collision_state == '\0') {
      if ((param_1->behavior_flags & 4) == 0) {
        if ((param_1->behavior_flags & 8) != 0) {
          _DAT_1f80020c = _DAT_1f80020c + 0xc;
          if (param_1->sprite_cmd == '\x02') {
            if (700 < (int)_DAT_1f80020c) {
              _DAT_1f80020c = 700;
            }
          }
          else if (0x280 < (int)_DAT_1f80020c) {
            _DAT_1f80020c = 0x280;
          }
        }
      }
      else if (DAT_1f800253 < 2) {
        uVar9 = _DAT_1f80020c - 4;
        if (0x2f < (int)_DAT_1f80020c) {
          uVar9 = _DAT_1f80020c - 0xc;
        }
        _DAT_1f80020c = uVar9;
        if ((int)uVar9 < 0) {
          _DAT_1f80020c = 0;
        }
      }
    }
    bVar2 = (int)_DAT_1f80020c < 0x30;
    if (bVar2) {
      param_1[0x168] = 0;
      param_1[0x169] = 0;
    }
    FUN_80060544(param_1,bVar2);
    FUN_80060a80(param_1,0);
    if ((((param_1->state_flag146 == '\0') || (DAT_1f80023a == '\0')) || (_DAT_1f80020c != 0)) ||
       (param_1->input_state != '\x04')) {
      if (param_1->collision_state != '\0') {
LAB_800613dc:
        FUN_8005314c(param_1);
        param_1->state_flag146 = 0;
        param_1->state_flag145 = 0;
      }
    }
    else {
      param_1[0x169] = 0;
      *param_1 = 2;
      param_1->action_state = param_1->action_state + '\x01';
      DAT_1f80027b = '\x02';
    }
    break;
  case 4:
    DAT_1f80027b = '\x02';
    _DAT_1f80020c = _DAT_1f80020c + 0x20;
    if (400 < (int)_DAT_1f80020c) {
      _DAT_1f80020c = 400;
    }
    FUN_80076d68(param_1);
    uVar9 = param_1->draw_angle + 0x400 & 0xfff;
    sVar7 = FUN_800776f8(uVar9,(int)param_1->rot_y,0x100);
    param_1->rot_y = sVar7;
    if ((int)sVar7 == uVar9) {
      if (DAT_1f800237 == 0) {
        _DAT_1f800178 = _DAT_1f800178 + 0x400;
      }
      else {
        _DAT_1f800178 = _DAT_1f800178 - 0x400;
      }
      _DAT_1f800178 = _DAT_1f800178 & 0xfff;
      DAT_1f800237 = param_1->direction;
      param_1->action_state = param_1->action_state + '\x01';
    }
    FUN_80060544(param_1,1);
    FUN_80060a80(param_1,2);
    break;
  case 5:
    DAT_1f80027b = '\x02';
    _DAT_1f80020c = _DAT_1f80020c + 0x20;
    if (400 < (int)_DAT_1f80020c) {
      _DAT_1f80020c = 400;
    }
    FUN_80076d68(param_1);
    FUN_80060544(param_1,2);
    FUN_80060a80(param_1,2);
    if (param_1[0x169] != '\0') {
      param_1->action_flag = 0;
      param_1->state_flag146 = 0;
      param_1->action_state = param_1->action_state + '\x01';
      uVar3 = _DAT_1f800204;
      uVar5 = _DAT_1f800200;
      iVar12 = (int)(short)_DAT_1f800200;
      iVar10 = (int)(short)_DAT_1f800204;
      param_1->sub_action = 0;
      *(ushort *)(param_1 + 0x7a) = uVar5;
      param_1->velocity_y = 0xd800;
      param_1->timer1 = 0xc;
      *(ushort *)(param_1 + 0x7e) = uVar3;
      param_1->sprite_x = (short)((iVar12 - param_1->pos_y) / 0xc);
      param_1->sprite_y = (short)((iVar10 - param_1->pos_z) / 0xc);
      FUN_80054d14(param_1,0xe9,0);
      param_1->rot_z = 0;
    }
    break;
  case 6:
    DAT_1f80027b = '\x02';
    FUN_80076d68(param_1);
    FUN_800574e0(param_1,0x11);
    if (param_1->collision_state == '\0') {
LAB_8006160c:
      if (param_1->timer1 != 0) {
        param_1->timer1 = param_1->timer1 + -1;
        param_1->pos_y = param_1->pos_y + param_1->sprite_x;
        param_1->pos_z = param_1->pos_z + param_1->sprite_y;
        if (param_1->timer1 != 0) break;
        *param_1 = 3;
        param_1->timer_172 = 4;
        param_1->pos_y = *(undefined2 *)(param_1 + 0x7a);
        param_1->pos_z = *(undefined2 *)(param_1 + 0x7e);
        bVar4 = FUN_80055e28(param_1,0);
        param_1->direction = bVar4 & 1;
        FUN_80054198(param_1);
        FUN_80055d5c(param_1);
      }
    }
    else if (param_1->timer1 != 0) {
      param_1->timer1 = 1;
      goto LAB_8006160c;
    }
    if (param_1->direction == '\0') {
      uVar9 = (uint)param_1->draw_angle;
    }
    else {
      uVar9 = param_1->draw_angle + 0x800;
    }
    sVar7 = FUN_800776f8(uVar9 & 0xfff,(int)param_1->rot_y,0xe0);
    param_1->rot_y = sVar7;
    if (((int)sVar7 == (uVar9 & 0xfff)) || (param_1->collision_state != '\0')) {
      if (param_1->collision_state == '\0') {
        param_1->timer1 = 8;
        param_1->action_state = param_1->action_state + '\x01';
      }
      else {
LAB_800617bc:
        FUN_8005314c(param_1);
        param_1->behavior_state = 0;
        param_1->action_state = 0;
        param_1->sub_action = 0;
      }
    }
    break;
  case 7:
    DAT_1f80027b = '\x02';
    FUN_80076d68(param_1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,0x11);
    FUN_80057c08(param_1,1);
    if (param_1->action_flag == '\0') {
      if (param_1->timer1 != 0) {
        param_1->timer1 = param_1->timer1 + -1;
      }
      if ((param_1->collision_state != '\0') || (param_1->timer1 == 0)) {
        if (param_1->behavior_state != '\x19') {
          return;
        }
        if (param_1->collision_state == '\0') {
          param_1->angle_offset = param_1->velocity_y;
          FUN_80056d44(param_1,0);
          param_1->velocity_y = param_1->angle_offset;
          break;
        }
        goto LAB_800617bc;
      }
    }
  }
  if (param_1->behavior_state != '\x19') {
    return;
  }
  if ((DAT_1f80027b != '\x02') && (param_1->state_flag146 == '\0')) {
    param_1->action_flag = 0;
    param_1->velocity_y = 0;
    FUN_80054198(param_1);
    if (param_1->collision_state == '\0') {
LAB_800618dc:
      FUN_80056d44(param_1,0);
      return;
    }
    param_1->behavior_state = 0;
LAB_8006196c:
    param_1->action_state = 0;
    param_1->sub_action = 0;
    return;
  }
  if (DAT_1f80027b != '\0') {
    return;
  }
  iVar10 = FUN_80055864();
  if (iVar10 == 0) {
    return;
  }
  FUN_80055e28(param_1,0);
  param_1->action_flag = 0;
  param_1->state_flag146 = 0;
  if (DAT_1f800237 == param_1->direction) {
    bVar4 = param_1->input_state & 1;
  }
  else {
    bVar4 = param_1->input_state & 1 ^ 1;
  }
  if (3 < (byte)param_1->input_state) {
    param_1->anim_counter = 0;
    param_1->state_flag146 = 0;
    param_1->action_flag = 0;
    param_1->velocity_y = 0;
    FUN_80054198(param_1);
    if (param_1->collision_state != '\0') {
      param_1->behavior_state = 0;
      goto LAB_8006196c;
    }
    if ((int)_DAT_1f80020c < 0x41) goto LAB_800618dc;
    if ((int)_DAT_1f80020c < 200) {
      FUN_80055f48(param_1,0);
      param_1->velocity_y = param_1->velocity_y >> 1;
    }
    else {
      FUN_80055f48(param_1,0);
    }
    FUN_80074590(0x1d,0,0);
    param_1->behavior_state = 2;
    param_1[0x181] = 0;
    param_1->rot_z = 0;
    param_1->action_state = 1;
    param_1->sub_action = 0;
    param_1->state_flag145 = 1;
    goto LAB_80061a60;
  }
  if (bVar4 == 0) {
LAB_800619b8:
    uVar6 = 0xe000;
    if (param_1->direction == '\0') {
      uVar6 = 0x2000;
    }
  }
  else {
    iVar10 = (int)param_1->rot_z;
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    if (0xdf < iVar10) goto LAB_800619b8;
    uVar6 = 0xf000;
    if (param_1->direction == '\0') {
      uVar6 = 0x1000;
    }
  }
  param_1->anim_counter = uVar6;
  if ((DAT_1f800253 < 2) && (0x40 < (int)_DAT_1f80020c)) {
    if ((int)_DAT_1f80020c < 200) {
      FUN_80055f48(param_1,0);
      param_1->velocity_y = param_1->velocity_y >> 1;
    }
    else {
      FUN_80055f48(param_1,0);
    }
  }
  else {
    param_1->velocity_y = 0;
  }
  param_1->state_flag145 = 1;
  param_1->behavior_state = 8;
  param_1->action_state = 2;
  param_1->sub_action = 0;
LAB_80061a60:
  FUN_80054d14(param_1,0x14,4);
  return;
}
