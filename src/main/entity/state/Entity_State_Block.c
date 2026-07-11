/**
 * @brief Entity block state: entity->action_state state, blocking/defense
 * @note Original: func_8006A900 at 0x8006A900
 */
// Entity_State_Block



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006a900(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  
  if (param_1->action_state == '\0') {
    param_1->action_state = 1;
    param_1->timer1 = 1;
    param_1->rot_y = 0;
    param_1->rot_x = 0;
    param_1->rot_z = 0;
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  sVar7 = param_1->timer1;
  param_1->timer1 = sVar7 + -1;
  if (sVar7 == 1) {
    if (DAT_800e7f3e == '\0') {
      FUN_80074590(9,0,0);
      uVar3 = 0x12;
    }
    else {
      FUN_80074590(10,0,0);
      uVar3 = 10;
    }
    param_1->timer1 = uVar3;
  }
  iVar6 = 0x37;
  if (DAT_800e7f3e == '\0') {
    param_1->type_flags = param_1->type_flags + 0x100;
    iVar8 = 0x41;
    sVar7 = _DAT_800e7ed6 + 0x200;
  }
  else {
    iVar6 = 0x6e;
    iVar8 = 0x78;
    if (param_1->flag_5E == '\0') {
      param_1->flag_5E = 1;
      FUN_8006a8c8(param_1);
    }
    param_1->type_flags = param_1->type_flags + 0x1c0;
    sVar7 = _DAT_800e7ed6 + 0x180;
  }
  param_1->type_flags = param_1->type_flags & 0xfff;
  iVar4 = FUN_80083f50();
  iVar5 = FUN_80083f50((int)sVar7);
  iVar4 = (int)(short)(iVar6 * iVar4 >> 0xc);
  param_1->pos_y = _DAT_800e7f5c->pos_x + (short)(iVar5 * iVar4 >> 0xc);
  iVar6 = FUN_80083e80((int)param_1->type_flags);
  *(short *)(param_1 + 0x32) = *(short *)(_DAT_800e7f5c + 0x30) + (short)(iVar8 * iVar6 >> 0xc);
  iVar6 = FUN_80083e80((int)sVar7);
  sVar1 = *(short *)(_DAT_800e7f5c + 0x34);
  param_1->rot_y = sVar7;
  param_1->pos_z = sVar1 - (short)(iVar6 * iVar4 >> 0xc);
  if (param_1->kind != '\x01') {
    *(undefined2 *)(param_1->sprite_ptr1 + 0xc) = param_1->type_flags;
  }
  if ((DAT_800e7fc4 == '\x02') || (DAT_800e7fc6 == '\0')) {
    param_1->behavior_state = 0;
    param_1->state = param_1->state + '\x01';
  }
  else if (DAT_800e7fc6 == '\x03') {
    param_1->pos_y = _DAT_800e7eae;
    *(undefined2 *)(param_1 + 0x32) = _DAT_800e7eb2;
    param_1->pos_z = _DAT_800e7eb6;
    uVar2 = DAT_800e7fca;
    param_1->rot_x = 0;
    param_1->rot_z = 0;
    param_1->anim_id = uVar2;
    sVar7 = _DAT_800e7ed6;
    if (DAT_800e7e85 == '\t') {
      sVar7 = _DAT_800e7ed6 + -0x800;
    }
    param_1->rot_y = sVar7;
    param_1->target_angle = param_1->rot_y;
    uVar2 = DAT_800e7eaa;
    param_1->behavior_state = 1;
    param_1->collision_dir = uVar2;
    FUN_80069bec(param_1);
    *(undefined2 *)(param_1->sprite_ptr1 + 0xc) = 0;
    param_1->action_state = 1;
    FUN_80069688();
  }
  return;
}
